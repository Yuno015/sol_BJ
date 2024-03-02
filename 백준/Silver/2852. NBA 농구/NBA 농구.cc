#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int N;
	int team, mm, ss;
	int pT, pM, pS, pF;

	int t1 = 0, t2 = 0;
	int m1 = 0, m2 = 0;
	int s1 = 0, s2 = 0;

	cin >> N;

	scanf("%d %d:%d", &pT, &pM, &pS);
	if (pT == 1)
	{
		t1++;
		pF = 1;
	}
	else
	{
		t2++;
		pF = 2;
	}

	for (int i = 0; i < N; i++)
	{
		if (i == N - 1)
		{
			int t = 48 * 60;
			int pt = pM * 60 + pS;
			if (pF == 1)
			{
				s1 += t - pt;
			}
			else if (pF ==2)
			{
				s2 += t - pt;
			}
		}
		else
		{
			scanf("%d %d:%d", &team, &mm, &ss);
			if (team == 1) t1++;
			else t2++;

			int t = mm * 60 + ss;
			int pt = pM * 60 + pS;

			if (t1 == t2)
			{
				if (pF == 1)
				{
					s1 += t - pt;
				}
				else if (pF == 2)
				{
					s2 += t - pt;
				}
				pF = 0;
			}
			else
			{
				if (pF == 1)
				{
					s1 += t - pt;
				}
				else if (pF == 2)
				{
					s2 += t - pt;
				}
				else if (pF == 0)
				{
					if (team == 1) pF = 1;
					else pF = 2;
				}
			}
		}
		pM = mm;
		pS = ss;
	}

	printf("%02d:%02d\n", s1 / 60, s1 % 60);
	printf("%02d:%02d\n", s2 / 60, s2 % 60);
	return 0;
}