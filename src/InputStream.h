//
// Created by Spencer Tuft on 9/17/18.
//

#ifndef LEX_ANA_CS236_BYU_INPUTSTREAM_H
#define LEX_ANA_CS236_BYU_INPUTSTREAM_H

#include <fstream>
#include <iostream>
#include <string>


class InputStream {
 private:
  std::string str = "";
  int currentLineNum = 1;
  int charLoc = 0;
 public:
  InputStream() = default;
  ~InputStream() = default;
  explicit InputStream(std::string& fileName);
  char currentChar() const;
  char nextChar() const;
  void forward();
  void forward(int num);
  int currentLine() const;
  std::string toString() const;
};

#endif //LEX_ANA_CS236_BYU_INPUTSTREAM_H
