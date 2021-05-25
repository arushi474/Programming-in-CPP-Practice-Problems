/*Number Pattern 1
Send Feedback
Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input 1 :
3
Sample Output 1 :
1
23
345*/
#include<iostream>
using namespace std;


int main(){
int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=i;
        for(int j=1;j<=i;j++)
        {
        cout<<a;
            a++;
        }
        cout<<endl;
    }

}


