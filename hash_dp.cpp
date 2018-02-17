#include <iostream>
#include <string>
#include <map>
using namespace std;


int listOfIntegersInAscOrder[100];
int n;

bool SubsetSum (int index, int sumToBeAchieved, map<string,bool>&visited, map<string,bool>&value)
{
	if (sumToBeAchieved == 0)
		return true;
	if (sumToBeAchieved < 0 || index >= n)
		return false;

	string index_sum = to_string(index) + "#" + to_string(sumToBeAchieved);

	if(visited[index_sum])
	{
		return value[index_sum];
	}
	
	bool result;

	result = (SubsetSum (index + 1, sumToBeAchieved-listOfIntegersInAscOrder[index],visited,value) || SubsetSum (index + 1, sumToBeAchieved,visited,value)) ;

	visited[index_sum] = true;
	value[index_sum] = result;

	return value[index_sum];
}

int main()
{
	int sum;
	cout << "Enter the number of elements:";
	cin >> n;
	cout << "Enter the elements:";
	for (int i = 0; i < n; ++i)
	{
		cin >> listOfIntegersInAscOrder[i];
	}
	cout << "Enter the Sum to be achieved:";
	cin >> sum;
	map<string,bool>visited;
	map<string,bool>value;
	if (SubsetSum(0,sum,visited,value))
	{
		cout << "There is a subset that produces the given sum." << endl;
	}
	else
	{
		cout << "There is no subset that produces the given sum." << endl;
	}
	return 0;
}

