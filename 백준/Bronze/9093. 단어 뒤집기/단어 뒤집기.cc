#include <bits/stdc++.h>

using namespace std;

vector<string> split(string input, string delimeter)
{
	vector<string> ret;
	long long pos = 0;
	string token = "";

	while ((pos = input.find(delimeter)) != string::npos)
	{
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimeter.length());
	}
	ret.push_back(input);
	return ret;
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	cin.get();
	while (N--)
	{
		string s;
		getline(cin, s);

		vector<string> arr = split(s, " ");
		int size = arr.size();
		for (int i = 0; i < size; i++)
		{
			reverse(arr[i].begin(), arr[i].end());
		}

		string ans = "";
		for (int i = 0; i < size - 1; i++)
		{
			ans += arr[i];
			ans += " ";
		}
		ans += arr[size - 1];
		cout << ans << "\n";
	}
	return 0;
}