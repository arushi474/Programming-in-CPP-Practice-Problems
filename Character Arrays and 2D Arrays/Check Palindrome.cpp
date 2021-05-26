/*
Check Palindrome
Given a string, determine if it is a palindrome, considering only alphanumeric characters.
Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.
*/
#include<iostream>
#include <cstring>
using namespace std;
bool checkPalindrome(char str[]) {
    
        int count=0;
        for(int i=0;str[i]!='\0';i++){
            count++;
        }
    for(int i=0;i<count;i++){
        if(str[i]!=str[count-1-i])
            return false;
    }
    return true;
}
    /* ALTERNATE APPROACH
    bool checkPalindrome(char str[]) {
    
        int count=0;
        for(int i=0;str[i]!='\0';i++){
            count++;
        }
    char rev[count];
        int a=(count-1);
        for(int i=0;i<count;i++){
            rev[i]=str[a];
            a--;
        }
        for(int i=0;i<count;i++){
            if(str[i]!=rev[i]){
                return false;
            }
        }
        return true;
    }
*/
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
