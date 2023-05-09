#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N;
	vector<int> vN;
	while (N--)
	{
		int temp;
		cin >> temp;
		vN.push_back(temp);
	}
	sort(vN.begin(), vN.end());
	cin >> M;
	vector<int> vM;
	while (M--)
	{
		int temp;
		cin >> temp;
		vM.push_back(temp);
	}

	for (int i = 0; i < vM.size(); i++)
	{
		cout << upper_bound(vN.begin(), vN.end(), vM[i]) - lower_bound(vN.begin(), vN.end(), vM[i]) << " ";
	}
	return 0;
}