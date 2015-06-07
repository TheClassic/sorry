#pragma once

#include "export.h"
#include "card.h"
#include <memory>
#include <list>

class SORRY_API CardDeck
{
public:
    /// Takes ownership of the cards
    CardDeck(std::list<Card*>);
    const Card& DrawCard();

private:
    void Shuffle();


};