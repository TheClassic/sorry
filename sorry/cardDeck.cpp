#include "cardDeck.h"

CardDeck::CardDeck(std::list<Card*> cards)
{

}

const Card& CardDeck::DrawCard()
{
    return *(new Card(""));
}



void CardDeck::Shuffle()
{

}