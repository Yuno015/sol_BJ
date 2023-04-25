#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	long N, B;
	vector<long> vec;
	char arr[26];

	for (int i = 0; i < 26; i++)
	{
		arr[i] = i + 'A';
	}

	cin >> N >> B;
	
	long tmp = N;

	while (1)
	{
		if (tmp == 0)
		{
			break;
		}
		vec.push_back(tmp % B);
		tmp /= B;
	}

	for (int i = vec.size() - 1; i >= 0; i--)
	{
		if (vec[i] >= 10)
		{
			cout << arr[vec[i] - 10];
		}
		else
		{
			cout << vec[i];
		}
	}
	cout << endl;
	
	return 0;
}
