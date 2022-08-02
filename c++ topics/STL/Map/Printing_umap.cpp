// when passing map to a print function - create a template for umap
#include<bits/stdc++.h>
using namespace std;

template<typename K, typename V>
int print_umap(unordered_map<K, V> const &m)
{
    for(auto i : m)
    {
        cout<<"{"<<i.first<<" "<<i.second<<"}\n";
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    unordered_map<int, char> umap;

    for(int i=0;i<n;i++)
    {
        cin>>umap[i];
    }

    print_umap(umap);
}


// when printing in the same function

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 1, 1, 2, 1, 1, 3, 4, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	unordered_map<int, int> m;
	for (int i = 0; i < n; i++)
		m[arr[i]]++;

	cout << "Element Frequency" << endl;
	for (auto i : m)
		cout << i.first << " " << i.second
			<< endl;

	return 0;
}



// Traversing using begin() and end()

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[] = { 1, 1, 2, 1, 1, 3, 4, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
 
    cout << " Element Frequency" << endl;
    for (auto i = m.begin(); i != m.end(); i++)
        cout << i->first << "       " << i->second
             << endl;
 
    return 0;
}