#include <bits/stdc++.h>

using namespace std;

int n;
int arr[22][22];
int mx = -1;

void Draw(int mp[][22])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mp[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}

void Move(int cnt, int dir, int mp[][22])
{
	if (cnt == 6)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				mx = max(mx, mp[i][j]);
			}
		}
		return;
	}

	int temp[22][22];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			temp[i][j] = mp[i][j];
		}
	}
	
	if (dir == 0)
	{
		for (int j = 0; j < n; j++)
		{
			vector<int> v;
			for (int i = 0; i < n; i++)
			{
				if(temp[i][j] != 0)
					v.push_back(temp[i][j]);
				temp[i][j] = 0;
			}
			for (int i = 0; i < (int(v.size()) - 1); i++)
			{
				if (v[i] == v[i + 1])
				{
					v[i] *= 2; v[i + 1] = 0;
				}
			}
			for (int i = 0, k = 0; k < v.size(); k++)
			{
				if (v[k] == 0) continue;
				temp[i++][j] = v[k];
			}
		}
	}
	else if (dir == 1)
	{
		for (int i = 0; i < n; i++)
		{
			vector<int> v;
			for (int j = n - 1; j >= 0; j--)
			{
				if (temp[i][j] != 0)
					v.push_back(temp[i][j]);
				temp[i][j] = 0;
			}
			for (int j = 0; j < (int(v.size()) - 1); j++)
			{
				if (v[j] == v[j + 1])
				{
					v[j] *= 2; v[j + 1] = 0;
				}
			}
			for (int j = n - 1, k = 0; k < v.size(); k++)
			{
				if (v[k] == 0) continue;
				temp[i][j--] = v[k];
			}
		}
	}
	else if (dir == 2)
	{
		for (int j = 0; j < n; j++)
		{
			vector<int> v;
			for (int i = n - 1; i >= 0; i--)
			{
				if (temp[i][j] != 0)
					v.push_back(temp[i][j]);
				temp[i][j] = 0;
			}
			for (int i = 0; i < (int(v.size()) - 1); i++)
			{
				if (v[i] == v[i + 1])
				{
					v[i] *= 2; v[i + 1] = 0;
				}
			}
			for (int i = n - 1, k = 0; k < v.size(); k++)
			{
				if (v[k] == 0) continue;
				temp[i--][j] = v[k];
			}
		}
	}
	else if (dir == 3)
	{
		for (int i = 0; i < n; i++)
		{
			vector<int> v;
			for (int j = 0; j < n; j++)
			{
				if (temp[i][j] != 0)
					v.push_back(temp[i][j]);
				temp[i][j] = 0;
			}
			for (int j = 0; j < (int(v.size()) - 1); j++)
			{
				if (v[j] == v[j + 1])
				{
					v[j] *= 2; v[j + 1] = 0;
				}
			}
			for (int j = 0, k = 0; k < v.size(); k++)
			{
				if (v[k] == 0) continue;
				temp[i][j++] = v[k];
			}
		}
	}
	//cout << "-------- cnt: " << cnt << " dir: " << dir << " ---------\n";
	//Draw(temp);

	Move(cnt + 1, 0, temp);
	Move(cnt + 1, 1, temp);
	Move(cnt + 1, 2, temp);
	Move(cnt + 1, 3, temp);
}

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	Move(0, -1, arr);

	cout << mx << "\n";
	
	return 0;
}
