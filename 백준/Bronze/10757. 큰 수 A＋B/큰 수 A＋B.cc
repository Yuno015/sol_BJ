#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
	string A, B;
	int temp;
	stack<int> s;
	bool before = false;

	cin >> A >> B;

	int lenA = A.length();
	int lenB = B.length();

	if (lenA >= lenB)
	{
		for (int i = 0; i < lenA; i++)
		{
			if (i >= lenB)
			{
				temp = A[lenA - 1 - i] - '0';
			}
			else
			{
				temp = A[lenA - 1 - i] - '0' + B[lenB - 1 - i] - '0';
			}
			if (before == true)
			{
				temp++;
				before = false;
			}
			if (temp >= 10)
			{
				temp -= 10;
				before = true;
			}
			s.push(temp);
		}
	}
	else
	{
		for (int i = 0; i < lenB; i++)
		{
			if (i >= lenA)
			{
				temp = B[lenB - 1 - i] - '0';
			}
			else
			{
				temp = B[lenB - 1 - i] - '0' + A[lenA - 1 - i] - '0';
			}
			if (before == true)
			{
				temp++;
				before = false;
			}
			if (temp >= 10)
			{
				temp -= 10;
				before = true;
			}
			s.push(temp);
		}
	}
	if (before == true)
	{
		s.push(1);
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	return 0;
}
