#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> b;
	vector<int> w;

	for (int i = 0; i < 3; i++)
	{
		int temp;
		cin >> temp;
		b.push_back(temp);
	}
	for (int i = 0; i < 2; i++)
	{
		int temp;
		cin >> temp;
		w.push_back(temp);
	}
	sort(b.begin(), b.end());
	sort(w.begin(), w.end());

	cout << b[0] + w[0] - 50 << "\n";
	return 0; 
}
