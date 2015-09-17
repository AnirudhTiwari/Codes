#include<stdio.h>
#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;

vector< vector<int> > generate(int numRows) {
    vector< vector<int> > pascal_triangle;
    int i,j;
    for(i=0;i<numRows;i++){
        vector<int> row(i+1);
        row[0]=1;
        row[i]=1;
        for(j=1;j<i;j++){
            row[j]=pascal_triangle[i-1][j-1]+pascal_triangle[i-1][j];
        }
        for(int x=0;x<row.size();x++)
            cout << row[x];
        cout<<endl;

        pascal_triangle.push_back(row);
    }
    return pascal_triangle;
}

int main(){
    vector< vector<int> > x = generate(3);
}