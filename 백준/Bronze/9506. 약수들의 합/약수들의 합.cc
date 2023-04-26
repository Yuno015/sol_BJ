#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	vector<int> vec;

	while (1)
	{
		cin >> n;
		
		if (n == -1)
			break;

		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
				vec.push_back(i);
		}
		int sum = 0;
		for (int i = 0; i < vec.size(); i++)
		{
			sum += vec[i];
		}
		if (sum != n)
			cout << n << " is NOT perfect." << endl;
		else
		{
			cout << n << " = ";
			for (int i = 0; i < vec.size() - 1; i++)
			{
				cout << vec[i] << " + ";
			}
			cout << vec.back() << endl;
		}
		vec.clear();
	}
	return 0;
}