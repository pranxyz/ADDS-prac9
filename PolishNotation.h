#ifndef POLISHNOTATION_H
#define POLISHNOTATION_H
#include <string>

class PolishNotation
{
public:
// constructors
PolishNotation();
PolishNotation(std::string expression);

// functions
void setPrefixExpression(std::string expression);
std::string convertPrefixToInfix();
int computePrefixExpression();

private:
// data fields
std::string prefix;

};

#endif