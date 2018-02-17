#include <iostream>
#include <stack>
#include <vector>

using namespace std;

bool ANY(char c)
{
	if(c == '{' || c == '[' || c == '(' || c == '<') 
	{
		return true;
	}	
	else 
	{
		return false;
	}
}

bool check(char o, char c)
{

	if((o == '<' && c == '>') || (o == '[' && c == ']') || (o == '{' && c == '}') || (o == '(' && c == ')'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{

	string str;
	cout << "Enter the string: ";
	cin >> str;
	stack<char>s;
	bool valid = true;

	int n = str.size();

	for(int i=0; i<n; i++)
	{

		if (ANY(str[i]))
		{
			s.push(str[i]);
		}
		else if(!s.empty() && check(s.top(),str[i]))
		{
			s.pop();
		}
		else
		{
			valid = false;
			break;
		}
			
	}

	if(!valid || !s.empty())
	{
		cout << "Invalid configuration" << endl;
	}
	else
	{
		cout << "Valid Configuration" << endl;
	}

	return 0;
}
