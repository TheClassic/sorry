#pragma once

#include "export.h"
#include <string>

class SORRY_API Card
{
public:
    Card(std::string name);
    const std::string& GetName();

private:
    std::string m_name;
};