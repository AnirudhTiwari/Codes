#include<stdio.h>
#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;

vector<int> getRow(int rowIndex) {
  int i, val,shit;
  float temp;
  vector<int> ans(rowIndex+1);
  ans[0]=1;
  for(i=1;i<(rowIndex+1);i++){
      temp = 1.0*(rowIndex-(i-1))/i;
      val = ans[i-1]*temp;
      ans[i]=val;
  }
  return ans;
}
int main(){

  vector<int> x = getRow(12);
  for(int i=0;i<x.size();i++)
    cout<<x[i]<<" ";
  cout<<endl;

}