#include <bits/stdc++.h>

using namespace std;

int N;
string s;
int arr_i[20];
char arr_g[20];
long long mx = LONG_MIN;

vector<vector<int>> v;
vector<int> tmp;

void func(int idx, vector<int> t, bool flag)
{
	if (idx == N / 2)
	{
		v.push_back(t);
		return;
	}

	if (flag == true)
	{
		func(idx + 1, t, 0);
	}
	else
	{
		func(idx + 1, t, 0);

		t.push_back(idx * 2 + 1);
		func(idx + 1, t, 1);
	}

	return;
}

int main(void)
{
	cin >> N;
	cin >> s;

	if (N == 1)
	{
		cout << s << "\n";
	}
	else
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (i % 2 != 0) arr_g[i] = s[i];
			else arr_i[i] = s[i] - '0';
		}

		func(1, tmp, 0);

		for (int i = 0; i < v.size(); i++)
		{
			long long tmp = arr_i[0];
			int carri[20];
			char carrg[20];
			memcpy(carri, arr_i, sizeof(int) * 20);
			memcpy(carrg, arr_g, sizeof(char) * 20);

			for (int j = 0; j < v[i].size(); j++)
			{
				int t = 0;
				if (arr_g[v[i][j]] == '+')
				{
					t = arr_i[v[i][j] - 1] + arr_i[v[i][j] + 1];
				}
				else if (arr_g[v[i][j]] == '-')
				{
					t = arr_i[v[i][j] - 1] - arr_i[v[i][j] + 1];
				}
				else if (arr_g[v[i][j]] == '*')
				{
					t = arr_i[v[i][j] - 1] * arr_i[v[i][j] + 1];
				}
				else continue;

				carri[v[i][j] - 1] = t;
				carri[v[i][j] + 1] = 0;
				carrg[v[i][j]] = '0';
			}
			for (int j = 0; j < N; j++)
			{
				if (carrg[j] == '+')
				{
					tmp += carri[j + 1];
				}
				else if (carrg[j] == '-')
				{
					tmp -= carri[j + 1];
				}
				else if (carrg[j] == '*')
				{
					tmp *= carri[j + 1];
				}
			}
			mx = max(mx, tmp);
		}

		cout << mx << "\n";
	}
	return 0;
}
