#pragma once

#include <string>
#include "Token.hpp"

class lexer {
public:
Lexer(std::string source);
char current();



private: 
std::strint source;
int position;


};

