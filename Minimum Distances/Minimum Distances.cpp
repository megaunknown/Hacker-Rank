#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Complete the minimumDistances function below.
int minimumDistances(vector<int> a) {
	vector<int> distances;
	int mini = 0;

	for (int i = 0, j = i+1; i < a.size(); i++, j++)
	{
		std::vector<int>::iterator it;
		it = std::find(a.begin() + j, a.end(), a[i]);
		if (it != a.end())
		{
			distances.push_back(abs((a.begin() + i - it)));
		}
	}

	if (distances.size() == 0)
		return -1;

	auto result = std::min_element(distances.begin(), distances.end());
	mini = (int) *result;
	
	return mini;
}

int main()
{
	vector<int> v{ 7, 1, 3, 4, 1, 7 };
	cout << minimumDistances(v) << endl;
	system("pause");
	return 0;
}
