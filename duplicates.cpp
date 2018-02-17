#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{

	int n;
	cout << "Enter the Number of strings" << " ";
	cin >> n;
	map<string,int>m;
	int repeat = 0;
	
	cout << "Enter the strings" << "  ";
	for(int i=0; i<n; i++)
	{
		string str;
		cin >> str;

		if(m[str] == 0)
		{
			m[str]++;
		}
		else if(m[str] >= 1)
		{
			repeat++;
		}
	}


	cout << "Total repeats: " << repeat << endl;
	return 0;
}
