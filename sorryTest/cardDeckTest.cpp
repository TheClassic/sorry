#include <gtest/gtest.h>
#include <string>
#include <sorry/carddeck.h>
#include <sorry/card.h>

namespace {

    TEST(CardDeck, DrawAndReshuffle)
    {
        std::list<Card*> cards { &Card("Ace"), &Card("Tail"), &Card("Spidey") };
        auto size = cards.size();

        CardDeck deck(cards);

        std::string firstPass;
        for (int i = 0; i < size; ++i)
        {
            auto card = deck.DrawCard();
            firstPass += card.GetName();
        }

        // test that first pass has each of the cards in the deck
        for (auto card : cards)
        {
            ASSERT_NE(std::string::npos, firstPass.find(card->GetName()));
        }

        int numChances = 7; // allow up to 7 identical shuffles
        std::string secondPass;
        for (int attempt = 0; attempt < numChances; ++attempt)
        {
            std::string secondPass;
            for (int i = 0; i < size; ++i)
            {
                auto card = deck.DrawCard();
                secondPass += card.GetName();
            }
            if (secondPass == firstPass)
                secondPass = "";
            else
                break;
        }
        ASSERT_NE(firstPass, secondPass); // ensure shuffling results in new cards

    }
}