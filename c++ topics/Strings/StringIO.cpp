// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char name[100], type[100];
    int number;
    char IsPaid;
    double expense;
    
    cin.getline(name,100);
    scanf("%s", type);
    cin>>number>>IsPaid>>expense;
    
    char buffer[1000];
    sprintf(buffer, "Event name :%s\nEventype :%s\nExpected Count :%d\nPaid Entry : %c\nProjected Expense :%.1fL", name, type, number, IsPaid, expense);
    
    cout<<buffer;
}

// Alternatively we can easily do it using cout and decimal values can be rounded off using setprecision