#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, v;
	int cnt = 0;
	int temp;
	vector<int> vec;

	cin >> n;

	while (n--)
	{
		cin >> temp;
		vec.push_back(temp);
	}

	cin >> v;

	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] == v)
			cnt++;
	}

	cout << cnt << endl;

	return 0;
}