#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    vector<int> arr;
    for(int i=0;i<3;i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}