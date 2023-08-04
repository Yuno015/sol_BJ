#include <bits/stdc++.h>

using namespace std;

const int n = 105;
int arr[n][n];
int visited[n][n];
int N, M;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	cin.ignore();

	for (int i = 0; i < N; i++)
	{
		string temp;
		getline(cin, temp);

		for (int j = 0; j < temp.size(); j++)
		{
			arr[i][j] = temp[j] - '0';
		}
	}

	queue<pair<int, int>> q;
	q.push(make_pair(0, 0));
	visited[0][0] = 1;
	while (q.size())
	{
		int hereY = q.front().first;
		int hereX = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = hereY + dy[i];
			int nx = hereX + dx[i];

			if (ny < 0 || ny >= N || nx < 0 || nx >= M || arr[ny][nx] == 0) continue;
			if (visited[ny][nx]) continue;

			visited[ny][nx] = visited[hereY][hereX] + 1;
			q.push(make_pair(ny, nx));
		}
	}

	cout << visited[N-1][M-1] << "\n";

	return 0;
}