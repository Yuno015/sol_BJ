#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	set<int> ns;
	cin >> N;
	while (N--)
	{
		int temp;
		cin >> temp;
		ns.insert(temp);
	}

	int M;
	vector<int> ms;
	cin >> M;
	while (M--)
	{
		int temp;
		cin >> temp;
		ms.push_back(temp);
	}

	for (int i = 0; i < ms.size(); i++)
	{
		ms[i] = ns.count(ms[i]);
	}
	
	for (int i = 0; i < ms.size(); i++)
	{
		cout << ms[i] << " ";
	}
	cout << "\n";
	return 0;
}