#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int range;
	cout << "Size of vector is: ";
	cin >> range;

	cout << "Vector element are given below: " << endl;
	for (int i = 0; i < range; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it;
	for ( it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}


	v.insert(v.begin(), 20);
	cout << endl << endl << "Size of vector is: " << v.size();
	cout << endl << "Updated Vector Elements Are Given Below:" << endl;
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl << endl << "Output Of Reverse Array: ";
	vector<int>::reverse_iterator rit;
	for (rit = v.rbegin(); rit != v.rend(); rit++)
	{
		cout << *rit << " ";
	}

	v.pop_back();
	cout << endl << "Output Of After Remove Last Element: ";
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

	getchar();
	getchar();
}