#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> num(n);

    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }

    unordered_map<int, int> countMap;

    for(int i=0;i<n;i++)
    {
        countMap[num[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<countMap[num[i]]<<" ";
    }
    cout<<"\n";
    return 0;
}