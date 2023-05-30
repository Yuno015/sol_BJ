#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while (1)
	{
		int A, B, C;
		cin >> A >> B >> C;

		if (A == 0 && B == 0 && C == 0)
			break;
		bool isR = true;

		vector<int> arr = { A, B, C };
		sort(arr.begin(), arr.end());
		if (arr[2] * arr[2] != (arr[0] * arr[0] + arr[1] * arr[1]))
			isR = false;

		if (isR)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
	return 0; 
}
