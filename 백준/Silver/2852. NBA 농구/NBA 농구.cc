#include<bits/stdc++.h>

using namespace std;

int N;
int cs, cm, ps = 0, pm = 48;
int m1, m2, s1, s2;
int score1, score2;

stack<pair<int, string>> s;

int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int t;
		string tmp;
		cin >> t >> tmp;
		s.push({ t, tmp });
		if (t == 1) score1++;
		else score2++;
	}

	while (!s.empty())
	{
		cm = stoi(s.top().second.substr(0, 2));
		cs = stoi(s.top().second.substr(3));

		int mm, ss;
		if (ps < cs)
		{
			ps += 60;
			pm -= 1;
		}
		mm = pm - cm;
		ss = ps - cs;

		if (score1 != score2)
		{
			if (score1 > score2)
			{
				m1 += mm;
				s1 += ss;

				if (s1 > 60)
				{
					m1 += (s1 / 60);
					s1 %= 60;
				}
			}
			else
			{
				m2 += mm;
				s2 += ss;

				if (s2 > 60)
				{
					m2 += (s2 / 60);
					s2 %= 60;
				}
			}
		}
		
		if (s.top().first == 1) score1--;
		else score2--;
		s.pop();

		pm = cm;
		ps = cs;
	}

	printf("%02d:%02d\n", m1, s1);
	printf("%02d:%02d\n", m2, s2);
	return 0;
}