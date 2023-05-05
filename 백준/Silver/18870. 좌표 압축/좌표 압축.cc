#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<long long> arrOrigin;
	vector<long long> arrTemp;

	while (N--)
	{
		long long temp;
		cin >> temp;
		arrOrigin.push_back(temp);
	}

	arrTemp = arrOrigin;

	sort(arrTemp.begin(), arrTemp.end());
	arrTemp.erase(unique(arrTemp.begin(), arrTemp.end()), arrTemp.end());

	
	for (int i = 0; i < arrOrigin.size(); i++)
	{
		cout << lower_bound(arrTemp.begin(), arrTemp.end(), arrOrigin[i]) - arrTemp.begin() << " ";
	}

	cout << "\n";

	return 0;
}