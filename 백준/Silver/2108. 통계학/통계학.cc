#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, int>& p1, const pair<int, int>& p2)
{
	if (p1.second == p2.second)
		return p1.first < p2.first;
	else
		return p1.second > p2.second;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K;
	cin >> K;
	
	int sum = 0;
	vector<int> arr;
	unordered_map<int, int> mp;
	for (int i = 0; i < K; i++)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
		sum += temp;

		auto iter = mp.find(temp);
		if (iter == mp.end())
			mp.insert(make_pair(temp, 1));
		else
			iter->second += 1;
	}
	sort(arr.begin(), arr.end());
	
	vector<int> answer;
	answer.push_back(round((double)sum / (double)K));
	answer.push_back(arr[K / 2]);

	vector<pair<int, int>> temp(mp.begin(), mp.end());
	sort(temp.begin(), temp.end(), cmp);
	if (temp.size() == 1)
	{
		answer.push_back(temp[0].first);
	}
	else
	{
		if (temp[0].second == temp[1].second)
			answer.push_back(temp[1].first);
		else
			answer.push_back(temp[0].first);
	}
	answer.push_back(arr[K - 1] - arr[0]);

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << "\n";
	}
	return 0;
}