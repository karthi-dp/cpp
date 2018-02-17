#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	priority_queue<int>max_heap;
	vector<int>result;

	cout << "Enter " << n << " elements: ";
	for(int i=0; i<n; i++)
	{
		int num;
		cin >> num;
		max_heap.push(num);
	}

	cout << "Enter " << n << " elements: ";
	for(int i=0; i<n; i++)
	{
		int num;
		cin >> num;
		max_heap.push(num);
		result.push_back(max_heap.top());
		max_heap.pop();
		
	}

	cout << n << " Max elements are: " ;
	for(int i=0; i<n; i++)
	{
		cout << result[i] << " ";
	}

	cout << endl;

	return 0;
}
