#include<stdio.h>
#include<iostream>
#include<vector>
#include<stdlib.h>


using namespace std;

void rotate(vector<int>& nums, int k) {
    int length = nums.size(),i,dump;
    k = k%length; 
    vector<int> temp(length);

    for(i=0;i<length;i++){
        temp[(i+k)%length] = (nums[i]);
    }
    nums=temp;
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    
    rotate(v,1);

    for(int i=0;i<v.size();i++)
       cout << v[i] << endl;
}