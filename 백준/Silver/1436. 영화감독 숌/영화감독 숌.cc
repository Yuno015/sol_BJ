#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	vector<int> vec;

	cin >> N;

	int num = 666;
	vec.push_back(num);
	
	while (1)
	{
		++num;
		if (vec.size() == N)
			break;

		int temp = num;
		int cnt = 0;
		while (temp > 0)
		{
			int a = temp % 10;
			if (a == 6)
			{
				cnt++;
			}
			else
			{
				cnt = 0;
			}
			temp /= 10;
			if (cnt == 3)
				vec.push_back(num);
		}
	}
	cout << vec.back() << "\n";
	return 0;
}