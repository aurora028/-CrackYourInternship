//Question Link: https://leetcode.com/problems/set-matrix-zeroes/

#include <bits/stdc++.h>

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> visited( m , vector<int> (n, 0)); 
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == 0 && visited[i][j] == 0)
                {
                    visited[i][j] = 1;
                    for(int a = 0; a < m; a++)
                    {
                        if(matrix[a][j] != 0)
                        {
                            matrix[a][j] = 0;
                            visited[a][j] = 1;
                        }
                    }
                    
                    for(int a = 0; a < n; a++)
                    {
                        if(matrix[i][a] != 0)
                        {
                            matrix[i][a] = 0;
                            visited[i][a] = 1;
                        }
                    }
                }
            }
        }
        
    }
};