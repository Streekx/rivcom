#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>

enum class TokenType {

   RIVEN,
   MAIN,

   LEFT_PAREN,
  RIGHT_PAREN,

  LEFT_BRACE,
RIGHT_BRACE,

IMPR,
OUTPUT_OP,
STRING,
SEMICOLON,
EOF,


};


struct TokenType {
TokenType Token;

std::string Text;



};

#endif
