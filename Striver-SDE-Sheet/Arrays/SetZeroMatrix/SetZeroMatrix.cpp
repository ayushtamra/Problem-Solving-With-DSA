// Sheet problem link: https://takeuforward.org/data-structure/set-matrix-zero/

// Leetcode link: https://leetcode.com/problems/set-matrix-zeroes/


#include<bits/stdc++.h>
using namespace std;
    void makeZ(int i, int j, int m, int n, vector<vector<int>>& matrix)
    {
        
            for(int k=0;k<m && i != -1;k++)
            {
                if(matrix[k][j] != 0)
                {
                    matrix[k][j] = 0;
                }
            else
                if(matrix[k][j] == 0)
                {
                    k = -1;
                    makeZ(k, j, m, n, matrix);
                }
            }
        
            for(int k=0;k<n && j!=-1;k++)
            {
                if(matrix[i][k] != 0)
                {
                    matrix[i][k] = 0;
                }
            else
                if(matrix[i][k] == 0)
                {
                    k = -1;
                    makeZ(i, k, m, n, matrix);
                }
            }

    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size(), n = matrix[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j] == 0)
                {
                    makeZ(i, j, m, n, matrix);
                }
            }
        }
    }

int main() {
  vector < vector < int >> arr;
  arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  setZeroes(arr);
  cout<<"The Final Matrix is "<<endl;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}
