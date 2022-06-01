// Sprintf string formatting

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char name[100];
    scanf("%s", name);
    
    cout<<name<<"\n";
    char buffer[100];
    sprintf(buffer, "Hello %s! Welcome to Examly Event Management System", name);
    
    cout<<buffer;
}

/*
Notes:

1. Look how formatting is done.
2. Look at how string I/O works in c++ and c

*/