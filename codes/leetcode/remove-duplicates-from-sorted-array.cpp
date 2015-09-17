#include<stdio.h>
#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i=0, duplicates=0, size=nums.size(),j=1,unique;
    if (size!=0)
        unique=nums[0];
    
    
    for(i=1;i<size;i++){
        if(nums[i]!=unique){
            unique = nums[i];
            nums[j]=unique;
            j+=1;
        }
        else
            duplicates+=1;
    }
    return size-duplicates;
}

int main(){
    vector<int> v;
    // v.push_back(9);
    // v.push_back(9);
    // v.push_back(9);
    // v.push_back(2);
    int x = removeDuplicates(v);
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<endl;
    }
}