#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std;

int version_number(string version, int level){

    int level_counter=0,i=0, answer;
    string temp_1 = "";

    while(level_counter!=level-1){

        if(version[i]=='.')
            level_counter+=1;
        i+=1;

        if(i==version.size()){
            break;
        }
    }

    for(;i<version.size();i++){

        if(version[i]=='.')
            break;

        else
            temp_1 = temp_1 + version[i];

    }


    if(temp_1=="")
        answer = -5000;
    else
        answer = atoi(temp_1.c_str());

//    cout << answer << endl;
    return answer;

}

int compareVersion(string version1, string version2) {

    int i;

    for(i=1;;i++){

        int num_1 = version_number(version1, i);
        int num_2 = version_number(version2, i);

        cout << num_1 << "///" << num_2 << endl;

        if(num_1 > num_2 && num_1!=0)
            return 1;

        else if( num_1 < num_2 && num_2!=0)

            return -1;

        else if(num_1==-5000 && num_2==-5000)
            break;

    }

    return 0;
}

int main(){

	string version_1 = "1.0";
	string version_2 = "1";

  //  int check = stoul(version_1);
	printf("%d\n",compareVersion(version_1, version_2));
}