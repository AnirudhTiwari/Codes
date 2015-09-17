#include<stdio.h>
#include<iostream>
#include<vector>
#include<stdlib.h>


using namespace std;

int removeElement(vector<int>& nums, int val) {
    int size = nums.size();
    int counter = 0;
    vector<int> temp;
    for(int i=0;i<size;i++){
        if(nums[i]!=val){
            temp.push_back(nums[i]);
            
        }
        else
            counter+=1;
    }
    nums=temp;
    return size-counter;
}

int main(){
    vector<int> v;
    v.push_back(8);
    // v.push_back(9);
    // v.push_back(9);
    // v.push_back(9);
    int x = removeElement(v,8);
    cout<<v.size()<<endl; 
    cout<<x<<endl;

    for(int i=0;i<v.size();i++)
       cout << v[i] << endl;
}