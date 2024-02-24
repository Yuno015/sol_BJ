#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	long long A, B, C;
	cin >> A >> B >> C;

	vector<int> v;
	while (B > 0)
	{
		v.push_back(B);
		B /= 2;
	}

	sort(v.begin(), v.end());
	
	//for (int i : v) cout << i << " ";
	//cout << "\n";

	long long ret = A % C;
	long long f = A % C;
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] == v[i - 1] * 2)
		{
			ret = (ret * ret) % C;
			//cout << "Same " << ret << "\n";
		}
		else
		{
			ret = (ret * ((ret * f) % C)) % C;
			//cout << "Diff " << ret << "\n";
		}
	}

	cout << ret << "\n";
	return 0;
}