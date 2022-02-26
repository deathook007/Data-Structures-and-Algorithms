/* 
Spiral Matrix
Time Complexity : O(NM)
Space Complexity : O(1)
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> spirallyTraverse(vector<vector<int>> matrix){
    vector<int> v;
    int n = matrix.size();
    int m = matrix[0].size();
    int startRow = 0;
    int endRow = n - 1;
    int startColumn = 0;
    int endColumn = m - 1;
        
    while(startRow <= endRow && startColumn <= endColumn){
        for(int column = startColumn; column <= endColumn; column++){
             v.push_back(matrix[startRow][column]);
        }
            
        for(int row = startRow + 1; row <= endRow; row++){
             v.push_back(matrix[row][endColumn]);
        }
            
        for(int column = endColumn - 1; column >= startColumn; column--){
            if(startRow == endRow){
                break;
            } 
            v.push_back(matrix[endRow][column]);
        }
            
        for(int row = endRow - 1; row >= startRow + 1; row--){
            if(startColumn == endColumn){
                break;
            }  
            v.push_back(matrix[row][startColumn]);
        }

        startRow++;
        endColumn--;
        endRow--;
        startColumn++;   
    }
    return v;
}

int main(){
    vector<vector<int>> matrix = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15,16}
    };
    vector<int> v = spirallyTraverse(matrix);
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}