#include "card.h"

Card::Card(std::string name)
    : m_name(name)
{

}

const std::string& Card::GetName()
{
    return m_name;
}