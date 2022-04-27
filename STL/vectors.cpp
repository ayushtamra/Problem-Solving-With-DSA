
//Basic input output
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin>>N;
    vector<int> v(N);
    
    for(int i = 0;i<N;i++)
    {
        cin>>v[i];
    }
    
    sort(v.begin(), v.end());
    
    // Always use this for output whether in an array or vector
    for(int x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}
