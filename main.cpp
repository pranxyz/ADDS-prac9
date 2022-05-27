#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include "PolishNotation.h"
using namespace std;
// start main function
int main()
{
   string prefix;

   // take the prefix expression in one line
   cout << "Sample input: ";
   getline(cin, prefix);

   // create an instance for PolishNotation class
   PolishNotation polish(prefix);

   // call the convertPrefixToInfix function of PolishNotation class
   // to get the equivalent infix expression
   string infix = polish.convertPrefixToInfix();

   // print the infix expression
   cout << "Sample output: " << infix;

   // verify whether the infix expression is valid
   if (infix.compare("Error") != 0)
   {
       // call the computePrefixExpression function
       int result = polish.computePrefixExpression();

       // print the postfix expression result
       cout << " = " << result;
   }
   cout << endl << endl;

   return 0;
}