#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	set<string> people;
	int cnt = 0;
	people.insert("ChongChong");
	while (N--)
	{
		string A, B;
		cin >> A >> B;

		if (people.count(A))
			people.insert(B);
		else if (people.count(B))
			people.insert(A);
	}
	cout << people.size() << "\n";
	return 0;
}