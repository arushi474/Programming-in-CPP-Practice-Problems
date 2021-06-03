/*
Remove Duplicates Recursively
Given a string S, remove consecutive duplicates from it recursively.
Input Format :
First line of input will contain T number of test cases
Next T line will contain the string S
Output Format :
For every test case print the answer in a separate line
Constraints :
1 <= T <= 10
1 <= |S| <= 10^4
where |S| represents the length of string
Sample Input 1 :
1
aabccba
Sample Output 1 :
abcba
Sample Input 2 :
1
xxxyyyzwwzzz
Sample Output 2 :
xyzwz
*/
#include<bits/stdc++.h>
using namespace std;
void remove_duplicates(char s[]){
    if(s[0]=='\0'){
        return;
    }
    else{
        char a=s[0];
        if(s[1]==s[0]){
            int i=1;
            for(;s[i]!='\0';i++){
                s[i-1]=s[i];
            }
            s[i-1]=s[i];
            remove_duplicates(s);
        }
        else{
            remove_duplicates(s+1);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
    char str[1000];
    cin>>str;
    remove_duplicates(str);
    cout<<str<<endl;
}
    return 0;
}
