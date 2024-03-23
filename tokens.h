#ifndef __TOKENS_H__
#define __TOKENS_H__

#define MAX_TOKEN_LEN 64
#include <stdbool.h>
enum token_type {
  TK_SPACE,  // Space
  TK_IDN,    // Identifier
  TK_OCT,    // Octal
  TK_DEC,    // Decimal
  TK_HEX,    // Hexadecimal
  TK_ADD,    // Addition
  TK_SUB,    // Subtraction
  TK_MUL,    // Multiplication
  TK_DIV,    // Division
  TK_GT,     // Greater than
  TK_LT,     // Less than
  TK_GE,     // Greater than or equal to
  TK_LE,     // Less than or equal to
  TK_EQ,     // Equal to
  TK_NEQ,    // Not equal to
  TK_SLP,    // Left parenthesis
  TK_SRP,    // Right parenthesis
  TK_SEM,    // Semicolon
  TK_KEY,    // Keyword
  TK_ILOCT,  // Invalid octal
  TK_ILHEX,  // Invalid hexadecimals
};

enum keyword_type {
  KW_IF,    // If
  KW_THEN,  // Then
  KW_ELSE,  // Else
  KW_WHILE, // While
  KW_DO,    // Do
  KW_BEGIN, // Begin
  KW_END,   // End
};

struct token_t {
  enum token_type type;
  char value[MAX_TOKEN_LEN];
};

void print_token(int token_type, char *value);
void print_tokens(struct token_t *tokens, int nr_tokens);
bool NUMBER(char c);
bool OCTNUM(char c);
bool HEXNUM(char c);
bool ILHEX(char c);
bool LETTER(char c);
int RESERVEDWORD(char *c);
int PUNCTUATION(char c);
int OPERATOR(char *c);
bool SPACE(char c);
#endif // __TOKENS_H__