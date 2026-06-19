#pragma once 

#include <string>

enum class TokenType {

RIVEN,
MAIN,

LEFT_PAREN,
RIGHT_PAREN,

LEFT_BRACE,
RIGHT_BRACE,

IMPR,
OUTPUT,

STRING,
SEMICOLON,

EOF,
UNKNOWN,

};

struct Token {

TokenType type;
std::string text;

};



