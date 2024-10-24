//Infix2Postfix
//C++ Program to convert the infix expression to a postfix expression
#include<iostream>
using namespace std;
class stack
{
public:
	char stack_array[50];
	int top;
	stack();
	void push(char symbol);
	char pop();
	int empty();
	int full();
};
stack::stack()
{
	top=-1;
}
void stack::push(char symbol)
{
	if(full())
	{
		cout<<"\n Stack overflow: \n";
	}
	else
	{
		top=top+1;
		stack_array[top]=symbol;
	}
}
char stack::pop()
{
	if(empty())
		return ('#'); // indicates stack is empty
	else
		return(stack_array[top--]);
}
int stack::empty()
{
	if(top==-1)
		return (1);
	else
		return (0);
}
int stack::full()
{
	if(top==49)
		return 1;
	else
		return 0;
}
class Expression
{
	char infix[50];
	char postfix[50];
public:
	void read();
	int white_space(char symbol);
	void convertToPostfix();
	int findPrecedence(char symbol);
};
void Expression::read()
{
	cout<<" \n Enter an infix expression:";
	cin>>infix;
}
int Expression::white_space(char symbol)
{
	if (symbol==' ' || symbol=='\t' || symbol=='\0')
		return 1;
	else
		return 0;
}
void Expression::convertToPostfix()
{
	stack s;
	int precedence, p;
	char entry1, entry2;
	p=0;
	for(int i=0; infix[i]!='\0'; i++)
	{
		entry1=infix[i];
		if(!white_space(entry1))
		{
			switch(entry1)
			{
			case '(':
				s.push(entry1);
				break;
			case ')':
				while( (entry2=s.pop()) != '(')
					postfix[p++]=entry2;
				break;
			case '+':
			case '-':
			case '*':
			case '/':
				if(!s.empty())
				{
					precedence=findPrecedence(entry1);
					entry2=s.pop();
					while(precedence<=findPrecedence(entry2))
					{
						postfix[p++]=entry2;
						if(!s.empty())
							entry2=s.pop();
						else
							break;
					}
					if(precedence>findPrecedence(entry2))
						s.push(entry2);
				}
				s.push(entry1);
				break;
			default:
				postfix[p++]=entry1; // other than symbols
				break;
			}
		}
	}
	while(!s.empty())
		postfix[p++]=s.pop();
	postfix[p]='\0';
	cout<<"The Postfix Expression is: "<<postfix;
}
int Expression::findPrecedence(char symbol)
{
	switch(symbol)
	{
	case '/':
		return (4);
	case '*':
		return (3);
	case '+':
		return (2);
	case '-':
		return (1);
	case '(':
		return (0);
	default:
		return (-1);
	}
}
int main()
{
	Expression exp;
	exp.read();
	exp.convertToPostfix();
	return 0;
}