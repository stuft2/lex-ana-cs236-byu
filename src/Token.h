#include <utility>

//
// Created by Spencer Tuft on 9/13/18.
//

#ifndef LEX_ANA_CS236_BYU_TOKEN_H
#define LEX_ANA_CS236_BYU_TOKEN_H

#include <string>

class Token {
 private:
  std::string t = ""; // the token type
  std::string v = ""; // the value of the token
  int l = 0; // the token starting line number
 public:
  Token() = default;
  Token(int lineNumber)
      : l(lineNumber) {}
  Token(std::string &type, char &input)
      : t(type) {
    this->addValue(input);
  };
  Token(std::string &type, std::string &input)
      : t(type) {
    v = input;
  };
  Token(std::string &type, char &input, int line)
      : t(type), l(line) {
    this->addValue(input);
  };
  Token(std::string &type, std::string &input, int line)
      : t(type), l(line) {
    v = input;
  };

  // ************ SETTERS ************
  void setLine(int lineNumber) {
    l = lineNumber;
  }
  void setType(std::string type) {
    t = type;
  }
  void addValue(char value) {
    v.push_back(value);
  }
  void addValue(std::string values) {
    for (char value : values) {
      v.push_back(value);
    }
  }
  void setValue(char value) {
    v = value;
  }
  void setValue(std::string value) {
    v = value;
  }

  void set(std::string type, std::string value) {
    setType(type);
    setValue(value);
  }
  void set(std::string type, char value) {
    setType(type);
    setValue(value);
  }
  void set(std::string type, std::string value, int lineNumber) {
    setType(type);
    setValue(value);
    setLine(lineNumber);
  }
  void set(std::string type, char value, int lineNumber) {
    setType(type);
    setValue(value);
    setLine(lineNumber);
  }

  // ************ GETTERS ************
  std::string getValue() const {
    return v;
  }
  std::string toString() const {
    return "(" + t + ",\"" + v + "\"," + std::to_string(l) + ")";
  }
};

#endif //LEX_ANA_CS236_BYU_TOKEN_H
