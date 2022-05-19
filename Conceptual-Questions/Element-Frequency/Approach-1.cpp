#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> num(n);

    vector<int> freq(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num[i] == num[j])
            {
                freq[i]++;
            }
        }
    }

    for (auto it : freq)
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}