#include<iostream>
#include<stack>

using namespace std;

bool isOperator(string x) {
if(x=="+" || x=="-" || x=="*" || x=="/")
return true;
return false;
}
string prefix_to_infix(string pre_exp)
{
stack<string> s;
int length = pre_exp.size();
for (int i = length - 1; i >= 0; i--)
{
string str="";
while( i>=0 && pre_exp[i]!=' ')
{
str=pre_exp[i]+str;
i--;
}

if(str!="")
{
if (isOperator(str))
{
if(s.size()<2)
return "Error";
string op1 = s.top();
if(isOperator(op1))
return "Error";
s.pop();
string op2 = s.top();
if(isOperator(op2))
return "Error";
s.pop();

string temp = "(" + op1 + str + op2 + ")";

s.push(temp);
}

else
{

s.push(str);
}

}
}
if(s.size()>1)
return "Error";
string final_res=s.top();
final_res=final_res.substr(1,final_res.size()-2);
return final_res;
}