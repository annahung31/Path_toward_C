#include <vector>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n, m, i, j;
    cin >> n >> m;          //n == num of row, m == num of column

    vector<int> a_row;
    a_row.assign(m, 0);       //  just like a_row = [0]*m  in python.

    vector< vector<int> > dp;
    dp.assign(n, a_row);  

    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            dp[i][j] = i*10+j;
            cout << dp[i][j] << endl;
        }
    }
    return 0;
}