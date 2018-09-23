//
// Created by Spencer Tuft on 9/13/18.
//

#ifndef LEX_ANA_CS236_BYU_Lexer_H
#define LEX_ANA_CS236_BYU_Lexer_H

#include <functional>
#include <vector>
#include <iostream>

#include "Token.h"
#include "State.h"
#include "InputStream.h"

class Lexer {
 private:
  std::string currentState = "START";
  InputStream inputStream;
  Token tcurrent;
  std::vector<Token> tokens;

 public:
  explicit Lexer(std::string& fileName, std::vector<State> states);
  std::string toString();
};

#endif //LEX_ANA_CS236_BYU_Lexer_H
