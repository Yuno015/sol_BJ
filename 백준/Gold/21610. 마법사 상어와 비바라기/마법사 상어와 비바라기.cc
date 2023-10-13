#include <bits/stdc++.h>

using namespace std;

int N, M;
int arr[55][55];
int d, s;
int result;

vector<pair<int, int>> clouds;
vector<pair<int, int>> cTemp;

const int dy[] = { 0, -1, -1, -1, 0, 1, 1, 1 };
const int dx[] = { -1, -1, 0, 1, 1, 1, 0, -1 };

void Move(int d, int s)
{
	for (int i = 0; i < clouds.size(); i++)
	{
		int y = clouds[i].first + dy[d - 1] * (s % N);
		int x = clouds[i].second + dx[d - 1] * (s % N);

		if (y > N) y -= N;
		else if (y < 1) y = N + y;

		if (x > N) x -= N;
		else if (x < 1) x = N + x;

		cTemp.push_back({ y, x });
	}

	for (int i = 0; i < cTemp.size(); i++)
	{
		arr[cTemp[i].first][cTemp[i].second]++;
	}
}

void Copy()
{
	int ddy[] = { -1, -1, 1, 1 };
	int ddx[] = { -1, 1, 1, -1 };

	for (int i = 0; i < cTemp.size(); i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int y = cTemp[i].first + ddy[j];
			int x = cTemp[i].second + ddx[j];

			if (y < 1 || y > N || x < 1 || x > N) continue;
			if (arr[y][x] != 0) arr[cTemp[i].first][cTemp[i].second]++;
		}
	}
}

void Make()
{
	set<pair<int, int>> s;
	for (int i = 0; i < cTemp.size(); i++)
	{
		s.insert({ cTemp[i].first, cTemp[i].second });
	}
	vector<pair<int, int>> temp;
	swap(clouds, temp);
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (s.count({ i, j }) == 0)
			{
				if (arr[i][j] >= 2)
				{
					clouds.push_back({ i, j });
					arr[i][j] -= 2;
				}
			}
		}
	}

	vector<pair<int, int>> t;
	swap(t, cTemp);
}

int main(void)
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> arr[i][j];
		}
	}

	clouds.push_back({ N, 1 });
	clouds.push_back({ N, 2 });
	clouds.push_back({ N - 1, 1 });
	clouds.push_back({ N - 1, 2 });


	for (int i = 0; i < M; i++)
	{
		cin >> d >> s;
		Move(d, s);
		Copy();
		Make();
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			result += arr[i][j];
		}
	}

	cout << result << "\n";
	
	return 0;
}