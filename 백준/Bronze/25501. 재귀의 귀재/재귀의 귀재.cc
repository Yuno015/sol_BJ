#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	while (N--)
	{
		string temp;
		cin >> temp;
		int cntR = 0;

		int len = temp.length();
		bool isP = true;
		for (int i = 0; i <= len / 2; i++)
		{
			cntR++;
			if (temp[i] != temp[len - i - 1])
			{
				isP = false;
				break;
			}
		}

		cout << isP << " " << cntR << "\n";
	}
	return 0;
}