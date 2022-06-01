## String IO explained, C and C++


### Input a complete sentence

There are two ways two input complete sentences in c++

1. If you are using char a [80]; ie character typed array

Then use cin.getline(a,80); to enter whole line

The line you enter will not be terminated by blank spaces and the line will only terminate on enter input ie new line

2. If you are using string a ,i.e, string typed variable to enter data then use,

```
getline(cin,a); //from cin to a
```


### Some facts:

1. Assignment after declaration is not allowed in C

Example:

```
char c[100];
c = "C programming";  // Error! array type is not assignable.
```