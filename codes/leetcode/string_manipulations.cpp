#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<stack>

using namespace std;

void prnt_stack(stack<char> st){

	while(st.size()!=0){
		printf("%c\n", st.top());
		st.pop();
	}
}

bool isValid(string s) {

	stack<char> st;
    int len = s.size();
    int i;

    for(i=0;i<len;i++){


        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]);

   	    else if((s[i]== ')' || s[i]==']' || s[i]=='}') && st.size()==0){

			return false;
			break;

        }


        else if(s[i]==')' && st.top()=='('){
            st.pop();

        }

        else if(s[i]=='}' && st.top()=='{'){
            st.pop();
        }

        else if(s[i]==']' && st.top()=='['){

            st.pop();

        }

        else if(s[i]==')' && st.top()!='('){
            return false;
        }



        else if(s[i]=='}' && st.top()!='{'){
            return false;
        }

        else if(s[i]==']' && st.top()!='['){

            return false;

        }

    }
    if(st.size()==0)
        return true;
    else
        return false;
}

int main(){
	string s = "}]}()){{)[{[(]";

	bool b = isValid(s);

	printf("%d\n", b);

}
