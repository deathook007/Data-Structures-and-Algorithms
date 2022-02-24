/*
- Defense of a Kingdom: https://www.spoj.com/problems/DEFKIN/
* On each level a player defends the Kingdom that is represented by a rectangular grid of cells. 
* The player builds crossbow towers in some cells of the grid. 
* The tower defends all the cells in the same row and the same column. 
* No two towers share a row or a column. 
* The penalty of the position is the number of cells in the largest undefended rectangle.
* Calculates the penalty of the given position.

- Input:
* The first line of the input file contains the number of test cases.
* Each test case consists of a line with three integer numbers: w — width of the grid, h — height of the grid and n — number of crossbow towers (1 ≤ w, h ≤ 40 000; 0 ≤ n ≤ min(w, h)).
* Each of the following n lines contains two integer numbers xi and yi — the coordinates of the cell occupied by a tower (1 ≤ xi ≤ w; 1 ≤ yi ≤ h).

- Output:
* For each test case, output a single integer number — the number of cells in the largest rectangle that is not defended by the towers.

- Input:
1
15 8 3
3 8
11 2
8 6

- Output:
12 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int w, h, n;
        cin>>w>>h>>n;
        vector<int> xCord, yCord;
        // 1 Extra tower in origin.
        xCord.push_back(0); // xCord = [0] 
        yCord.push_back(0); // yCord = [0]
        while(n--){
            int x, y;
            cin>>x>>y;
            xCord.push_back(x); // xCord = [0, 3, 11, 8]
            yCord.push_back(y); // yCord = [0, 8, 2, 6]
        }
        // 1 Extra tower at end.
        xCord.push_back(w + 1); // xCord = [0, 3, 11, 8, 16]
        yCord.push_back(h + 1); // yCord = [0, 8, 2, 6, 9]

        sort(xCord.begin(), xCord.end()); // xCord = [0, 3, 8, 11, 16]
        sort(yCord.begin(), yCord.end()); // yCord = [0, 2, 6, 8, 9]

        int maxXCord = 0, maxYCord = 0;

        for(int i=0; i<xCord.size() - 1; i++){
            // Subtract 1 fro the tower occupied cord.
            maxXCord = max(maxXCord, xCord[i + 1] - xCord[i] - 1);
            maxYCord = max(maxYCord, yCord[i + 1] - yCord[i] - 1);
        }
        cout<<maxXCord * maxYCord;
    }
    return 0;
}