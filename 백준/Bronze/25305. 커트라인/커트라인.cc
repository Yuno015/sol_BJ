#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, k;
	vector<int> vec;

	cin >> N >> k;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	sort(vec.rbegin(), vec.rend());

	cout << vec[k-1] << "\n";
	
	return 0;
}