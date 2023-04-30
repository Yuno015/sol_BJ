#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> vec;

	for (int i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	sort(vec.begin(), vec.end());

	int sum = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		sum += vec[i];
	}

	cout << sum / 5 << "\n";
	cout << vec[2] << "\n";
	
	return 0;
}