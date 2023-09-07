#include <bits/stdc++.h>

using namespace std;

const int n = 16;

int N;
int mp, mf, ms, mv;
int ps[n], fs[n], ss[n], vs[n], cs[n];
int min_c = INT_MAX;
vector<int> ret(n, n);

int main(void)
{
	cin >> N;
	cin >> mp >> mf >> ms >> mv;
	for (int i = 0; i < N; i++)
	{
		cin >> ps[i] >> fs[i] >> ss[i] >> vs[i] >> cs[i];
	}

	for (int i = 0; i < (1 << N); i++)
	{
		int p = 0, f = 0, s = 0, v = 0, c = 0;
		vector<int> temp;
		for (int j = 0; j < N; j++)
		{
			if (i & (1 << j))
			{
				p += ps[j];
				f += fs[j];
				s += ss[j];
				v += vs[j];
				c += cs[j];
				temp.push_back(j + 1);
			}
		}
		if (p >= mp && f >= mf && s >= ms && v >= mv)
		{
			if (min_c > c)
			{
				min_c = c;
				swap(ret, temp);
			}
			else if (min_c == c)
			{
				if (ret > temp)
					swap(ret, temp);
			}
		}
	}

	if (min_c != INT_MAX)
	{
		cout << min_c << "\n";
		for (int i = 0; i < ret.size(); i++)
		{
			cout << ret[i] << " ";
		}
	}
	else
		cout << -1 << "\n";
	return 0;
}