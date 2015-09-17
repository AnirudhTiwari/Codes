#include<stdio.h>
#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;
void swap(vector<int> &vec, int a, int b){

    int temp;

    cout << "swap elements at position " << a << " with position " << b;

    temp = vec[a];
    vec[a] = vec[b];
    vec[b] = temp;

    for(int i=0; i < vec.size(); i++)
        cout << vec[i] << ", ";

    cout << endl;
}

void nextPermutation(vector<int> &num) {

    int i, flag = 0,size=num.size(),j,low,high;

    for(i=size-1;i>0;i--){

        if(num[i] > num[i-1]){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        for(j=size-1;j>=i;j--){

            if(num[j] > num[i-1]){
                break;
            }
        }

        swap(num, i-1, j);

        low = i, high = size-1;
    }


    else{

        low = 0; high = size-1;
    }

    cout << low << " " << high;
    while(low < high){

        swap(num, low, high);
        low+=1;
        high-=1;

    }

}

int main(){

    vector<int> x;

    x.push_back(8);
    x.push_back(5);
    x.push_back(2);
    x.push_back(1);
    x.push_back(9);
    x.push_back(9);
    x.push_back(6);
    x.push_back(0);
    x.push_back(6);
    x.push_back(4);
    x.push_back(9);
    x.push_back(9);
    x.push_back(0);
    x.push_back(8);
    x.push_back(9);
    x.push_back(3);

    nextPermutation(x);

    int i;

    for(i=0;i<x.size();i++)
       cout << x[i] << endl;
}