#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int main(void)
{
    arr.push_back(0);
    arr.push_back(1);

    for (int i = 2; i < 41; i++)
    {
        arr.push_back(arr[i - 1] + arr[i - 2]);
    }

    
    int n;
    cin >> n;
    printf("%d\n", arr[n]);
   
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
