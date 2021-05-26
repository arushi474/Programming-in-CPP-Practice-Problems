/*
Print All Substrings
For a given input string(str), write a function to print all the possible substrings.
Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous
*/
#include <iostream>
#include <cstring>
using namespace std;
void printSubstrings(char input[]) {
   
    int n=strlen(input);
    for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=k;j<=i;j++){
            cout<<input[j];
        }cout<<endl;
    }}
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
