/*
Reverse Word Wise
Reverse the given string word wise. 
That is, the last word in given string should come at 1st place, 
last second word at 2nd place and so on.
Individual words should remain as it is.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/
#include <iostream>
using namespace std;

void reverseStringWordWise(char input[]) {
    int n=0;
    for(int i=0;input[i]!='\0';i++){
       n++;
    }
    int i=0, j=(n-1);
 while(i<j){
        char temp=input[i];
     input[i]=input[j];
     input[j]=temp;
     j--;
     i++;
    }
    int notspace=1;

   for(int k=(n-2);k>=0;k--){
        if( input[k]!=' ' ){
            notspace++;
        }
        else if (input[k]==' ' ){
            int m=k;
            while(m<(k+notspace)){
                char temp=input[m+1];
                input[m+1]=input[k+notspace];
                input[k+notspace]=temp;
                m++;
                notspace--;
            }notspace=0;
        }
    }
    notspace=0;
   for(int i=0;i<n;i++){
        if(input[i]!=' '){
            notspace++;
        }
        else
        {int m=0;
         notspace--;
            while(m<notspace){
                char temp=input[m];
                input[m]=input[notspace];
                input[notspace]=temp;
                m++;
                notspace--;
            }
         break;
        }
    }
    }    
int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
