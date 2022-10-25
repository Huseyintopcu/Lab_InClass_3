#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

using namespace std;

int main()
{
	srand(time(NULL));
	vector<int> v;
	int range, element;
	cout << "Size of vector is: ";
	cin >> range;

	cout << "Vector element are given below: " << endl;
	for (int i = 0; i < range; i++)
	{
		v.push_back(rand() % 100 + 1);
	}

	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl << endl << "Enter the value for insertion: ";
	cin >> element;
	v.insert(v.begin(), element);
	cout << "Added to begin of the array" << endl;
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl << endl << "Enter the value for insertion: ";
	cin >> element;
	v.insert(v.end(), element);
	cout << "Added to end of the array" << endl;
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}




	vector<int>::iterator it2;
	cout << endl << endl << "Bubble Sort ..." << endl;
	cout << "Sorted Element List ..." << endl;
	for (it = v.begin(); it < v.end(); it++)
	{
		for (it2 = v.begin(); it2 < v.end(); it2++)
		{
			if (*it < *it2)
			{
				iter_swap(it, it2);
			}
		}
	}
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}


	cout << endl << endl << "Insertion Sort ..." << endl;
	cout << "Sorted Element List ..." << endl;
	/*iter_swap(v.begin(), max_element(v.begin(), v.end()));
	for ( it = v.begin(); ++it > v.end(); v.begin()=it)
	{
		for  (it2 = it; *it2>*v.begin() ; --it2,--v.begin())
		{
			iter_swap(v.begin(), it2);
		}
	}*/

	it = v.end() - 2;
	do
	{
		it2 = it + 1;
		while (it2 != v.end() && *it < *it2) ++it2;
		if (*(it2 - 1) > *it && (it2 - 1) != it) {
			v.insert(it2, *it);
			it = v.erase(it);
		}

		if (it == v.begin())
			break;
		--it;
	} while (true);

	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

	getchar();
	getchar();
}