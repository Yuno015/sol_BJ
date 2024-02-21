#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	int pos = s.find('*');
	string front = s.substr(0, pos);
	string back = s.substr(pos + 1);
	reverse(back.begin(), back.end());

	for (int i = 0; i < n; i++)
	{
		string tmp;
		cin >> tmp;

		if (front.size() + back.size() > tmp.size()) cout << "NE\n";
		else
		{
			int len_f = front.length();
			int len_b = back.length();

			string tmp_f = tmp.substr(0, len_f);
			reverse(tmp.begin(), tmp.end());
			string tmp_b = tmp.substr(0, len_b);


			if (tmp_f == front && tmp_b == back) cout << "DA\n";

			else cout << "NE\n";
		}
	}
	return 0;
}