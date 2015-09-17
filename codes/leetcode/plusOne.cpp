#include<stdio.h>
#include<iostream>
#include<vector>
#include<stdlib.h>


using namespace std;

bool checkAllNines(vector<int> &digits){
    for(int i=0;i<digits.size();i++){
        if(digits[i]!=9){
            return false;
        }
    }
    return true;
}

int allNines(vector<int> &digits){
    int length = digits.size();
    int index = 0;
    for(int i=length-1; i>-1; i--){
        if(digits[i]!=9){
            break;
        }
        else{
            index+=1;
        }
    }
    return index;
}

vector<int> plusOne(vector<int>& digits) {
    bool ans = checkAllNines(digits);
    int i;    
    if (ans==true){
        digits.insert(digits.begin(), 1);
        for(i=1;i<digits.size();i++)
            digits[i]=0;
        return digits;
    }    
    int index = allNines(digits);
    int length = digits.size();
    for(i=0; i<index; i++){
        digits[length-1-i]=0;
    }
    digits[length-1-index]+=1;
    return digits;
    
}

int main(){
    vector<int> v;
    v.push_back(8);
    v.push_back(9);
    v.push_back(9);
    v.push_back(9);
    
    plusOne(v);
    for(int i=0;i<v.size();i++)
       cout << v[i] << endl;
}