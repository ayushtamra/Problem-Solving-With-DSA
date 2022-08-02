// Wrong solution

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> v;
// vector<vector<int>> ans;
// int i = 0;
// int search(int k)
// {
//     int n = v.size();
//     if(k == n)
//     {
//         i++;
//         if(ans[i].empty())
//         {
//             ans[i] = ans[i-1];
//         }
//     }
//     else{
//         ans[i].push_back(v[k]);
//         search(k+1);

//         ans[i].pop_back();
//         search(k+1);
//     }

//     return 0;
// }
// int main()
// {
//     int n=0, x=0;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>x;
//         v.push_back(x);
//     }
//     int k = 0;

//     search(k);

//     for(int i=0;i<ans.size();i++)
//     {
//         for(int j=0;j<ans[i].size();j++)
//         {
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// }





// Using recursion

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> v;
// vector<vector<int>> ans;
// int i=0;
// int generate(vector<int> subset, int n, int k)
// {
//     if(k == n)
//     {
//         ans.push_back({});
//         for(int j=0;j<subset.size();j++)
//         {
//             ans[i].push_back(subset[j]);
//         }
//         // for(int t = 0;t<subset.size();t++)
//         // {
//         //     cout<<subset[t]<<" ";
//         // }
//         // cout<<"\n";
//         i++;
//         return 0;
//     }
//     else{
//         subset.push_back(v[k]);
//         generate(subset, n, k+1);

//         subset.pop_back();
//         generate(subset, n, k+1);
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int temp;
//         cin>>temp;
//         v.push_back(temp);
//     }

//     int k= 0;
//     vector<int> subset;
//     generate(subset, n, k);

//     for(int i=0;i<ans.size();i++)
//     {
//         for(int j=0;j<ans[i].size();j++)
//         {
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// }






// Using bitmasks

#include<bits/stdc++.h>
using namespace std;

int generate(vector<int> v, int n)
{
    // vector<int> bits;
    // for(int i=0;i<pow(2,n);i++)
    // {
    //     string binary = bitset<3>(i).to_string();

    //     for(int j = 0;j<3;j++)
    //     {
    //         if()
    //     }
    // }

    for(int i=0;i<pow(2,n);i++)
    {
        vector<int> ans;
        for(int k=0;k<n;k++)
        {
            int sp = i&(1<<k);
            if(sp)
            {
                ans.push_back(v[n-1-log2(sp)]);
            }
        }
        for(int j=ans.size()-1;j>=0;j--)
        {
            cout<<ans[j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    generate(v, n);
}
