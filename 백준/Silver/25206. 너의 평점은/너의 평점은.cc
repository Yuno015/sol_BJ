#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

const int N = 20;

vector<string> split(string str, char delimiter);
double getGrade(string str);

int main(void)
{
	double sum = 0;
	double hakjum = 0;
	string temp;

	vector<vector<string>> vec;

	for (int i = 0; i < N; i++)
	{
		getline(cin, temp);
		vec.push_back(split(temp, ' '));
		if (vec[i][2] == "P")
			continue;
		hakjum += stod(vec[i][1]);
		sum += stod(vec[i][1]) * getGrade(vec[i][2]);
	}
	cout << sum / hakjum << endl;
	return 0;
}

vector<string> split(string str, char delimiter)
{
	vector<string> answer;
	stringstream ss(str);
	string temp;

	while (getline(ss, temp, delimiter))
	{
		answer.push_back(temp);
	}

	return answer;
}

double getGrade(string str)
{
	double result;
	if (str == "A+")
		result = 4.5;
	else if (str == "A0")
		result = 4.0;
	else if (str == "B+")
		result = 3.5;
	else if (str == "B0")
		result = 3.0;
	else if (str == "C+")
		result = 2.5;
	else if (str == "C0")
		result = 2.0;
	else if (str == "D+")
		result = 1.5;
	else if (str == "D0")
		result = 1.0;
	else
		result = 0;

	return result;
}