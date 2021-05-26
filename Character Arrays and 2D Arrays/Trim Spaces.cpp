/*
Trim Spaces
Given an input string S that contains multiple words, 
you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
*/
#include <iostream>
#include <cstring>
using namespace std;
void trimSpaces(char input[]) {
    int count=0;
    for(int i=0;input[i]!='\0';i++){
       count++;
    }
    int space=0;
    for(int i=0;i<count;i++){
        if(input[i]!=' '){
            input[space++]=input[i];
          
        }
        
    } input[space]='\0';
}
int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

