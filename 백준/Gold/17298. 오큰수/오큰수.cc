#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	stack<int> st;
	stack<int> g;
	vector<int> v(N);

	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		st.push(tmp);
	}

	while (!st.empty())
	{
		if (g.empty())
		{
			v[st.size() - 1] = -1;
			g.push(st.top());
			st.pop();
		}
		else
		{
			while (g.empty() || st.top() >= g.top())
			{
				if (g.empty()) 
				{
					v[st.size() - 1] = -1;
					break;
				}
				g.pop();
			}
			if (!g.empty())
			{
				v[st.size() - 1] = g.top();
			}
			g.push(st.top());
			st.pop();
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << v[i] << " ";
	}

	return 0;
}