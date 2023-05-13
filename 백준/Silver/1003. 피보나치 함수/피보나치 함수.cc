#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> arr;

int main(void)
{
    int T;
    cin >> T;
    
    arr.push_back(make_pair(1, 0));
    arr.push_back(make_pair(0, 1));

    for (int i = 2; i < 41; i++)
    {
        arr.push_back(make_pair(arr[i - 1].first + arr[i - 2].first, arr[i - 1].second + arr[i - 2].second));
    }

    while (T--)
    {
        int n;
        cin >> n;
        printf("%d %d\n", arr[n].first, arr[n].second);
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
