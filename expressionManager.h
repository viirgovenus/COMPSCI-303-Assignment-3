#ifndef expressionManager_h
#define expressionManager_h

#include <string>
#include <stack>

bool isOperand(char ch);
bool isOperator(char ch);
int precedence(char op);
std::string infixToPostfix(std::string exp);
bool isBalanced(std::string exp);

#endif // expressionManager_h