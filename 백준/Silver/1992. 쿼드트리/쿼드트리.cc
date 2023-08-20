#include<bits/stdc++.h>

using namespace std;

const int n = 66;
int N;
int arr[n][n];

string QDtree(int y, int x, int size)
{
	if (size == 1)
	{
		return to_string(arr[y][x]);
	}
	string s1 = QDtree(y, x, size / 2);
	string s2 = QDtree(y, x + size / 2, size / 2);
	string s3 = QDtree(y + size / 2, x, size / 2);
	string s4 = QDtree(y + size / 2, x + size / 2, size / 2);

	string ret = "";
	if ((s1 == "0" || s1 == "1") && s1 == s2 && s2 == s3 && s3 == s4)
	{
		ret = s1;
	}
	else
	{
		ret = "(" + s1 + s2 + s3 + s4 + ")";
	}

	return ret;
}


int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%1d", &arr[i][j]);
		}
	}

	string ret = QDtree(0, 0, N);
	cout << ret << "\n";
	return 0;
}