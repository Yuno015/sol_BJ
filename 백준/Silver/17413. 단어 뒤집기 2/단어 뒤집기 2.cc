#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	getline(cin, str);

	int len = str.length();

	string result = "";
	bool isTag = false;
	queue<char> q;
	string temp = "";
	for (int i = 0; i < len; i++)
	{
		if (str[i] == '<')
		{
			if (temp != "")
			{
				reverse(temp.begin(), temp.end());
				result += temp;
				temp = "";
			}
			isTag = true;
		}
		if (isTag == true)
		{
			q.push(str[i]);
			if (str[i] == '>')
			{
				isTag = false;
				int qSize = q.size();
				for (int j = 0; j < qSize; j++)
				{
					temp += q.front();
					q.pop();
				}
				result += temp;
				temp = "";
			}
		}
		else
		{
			if (str[i] == ' ')
			{
				reverse(temp.begin(), temp.end());
				result += temp;
				result += ' ';
				temp = "";
			}
			else
			{
				temp += str[i];
			}
		}
	}
	reverse(temp.begin(), temp.end());
	result += temp;
	cout << result << "\n";
	return 0; 
}