#include <bits/stdc++.h> 
#include <unordered_map>
using namespace std; 
  
int popper(stack <int> s, int a)
{
    if(s.size() == 1)
    {
        cout<<s.top()<<" "<<a;
    }
    s.pop();
    popper(s, a);
  }  

/* prints element and NGE pair for all 
elements of arr[] of size n */
void printNGE(int arr[], int n) { 
  stack < int > s; 
  
  /* push the first element to stack */
  s.push(arr[0]); 
  
  // iterate for rest of the elements 
  for (int i = 1; i < n; i++) { 
  
    if (s.empty()) { 
      s.push(arr[i]); 
      continue; 
    } 
  
    /* if stack is not empty, then 
       pop an element from stack. 
       If the popped element is smaller 
       than next, then 
    a) print the pair 
    b) keep popping while elements are 
    smaller and stack is not empty */
    
    while(s.empty() && s.top()<arr[i])
    {
        popper(s, arr[i]);
    }


  } 
  
  /* After iterating over the loop, the remaining 
  elements in stack do not have the next greater 
  element, so print -1 for them */
  while (s.empty() == false) { 
    cout << s.top() << " " << -1 << endl; 
    s.pop(); 
  } 
} 
  
/* Driver program to test above functions */
int main() { 
      int n; 
      cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  printNGE(arr, n); 
  return 0; 
}