#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

long long GCD(long long a, long long b);
long long LCM(long long a, long long b);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> arr;
	while (N--)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	vector<int> diff;
	for (int i = 0; i < arr.size() - 1; i++)
	{
		diff.push_back(arr[i + 1] - arr[i]);
	}

	int gcd = GCD(diff[0], diff[1]);
	for (int i = 0; i < diff.size() - 1; i++)
	{
		int temp = GCD(diff[i], diff[i + 1]);
		if (gcd > temp)
		{
			gcd = GCD(gcd, temp);
		}
	}

	int cnt = 0;
	for (int i = 0; i < arr.size() - 1; i++)
	{
		cnt += ((arr[i + 1] - arr[i]) / gcd - 1);
	}

	cout << cnt << "\n";

	return 0;
}

long long GCD(long long a, long long b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

long long LCM(long long a, long long b)
{
	return a * b / GCD(a, b);
}
