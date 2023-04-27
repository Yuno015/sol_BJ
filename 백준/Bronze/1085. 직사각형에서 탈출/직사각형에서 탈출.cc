#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int x, y, w, h;
	vector<int> vec;

	cin >> x >> y >> w >> h;

	int x2 = w - x;
	int y2 = h - y;
	vec.push_back(x);
	vec.push_back(x2);
	vec.push_back(y);
	vec.push_back(y2);

	int min = x;
	for (int i = 0; i < vec.size(); i++)
	{
		if (min > vec[i])
			min = vec[i];
	}
	cout << min << endl;
	return 0;
}
