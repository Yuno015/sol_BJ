#include <bits/stdc++.h>

using namespace std;

vector<string> split(string s, string delimiter)
{
	vector<string> ret;
	long long pos = 0;
	string token = "";
	while ((pos = s.find(delimiter)) != string::npos)
	{
		token = s.substr(0, pos);
		ret.push_back(token);
		s.erase(0, pos + delimiter.length());
	}
	ret.push_back(s);

	return ret;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin >> N;
	cin.ignore();

	vector<string> arr;
	for (int i = 0; i < N; i++)
	{
		string temp;
		getline(cin, temp);
		arr.push_back(temp);
	}

	for (int i = 0; i < N; i++)
	{
		vector<string> temp = split(arr[i], " ");
		reverse(temp.begin(), temp.end());

		cout << "Case #" << i + 1 << ": ";
		for (int j = 0; j < temp.size(); j++)
		{
			cout << temp[j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
