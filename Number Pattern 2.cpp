/*Number Pattern 2
Send Feedback
Print the following pattern
Pattern for N = 4


The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :
*/
#include<iostream>
using namespace std;


int main(){
int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=i;
        int temp=a;
    for(int j=1;j<=n;j++)
     {
      if((i+j)>n){
          cout<<temp;
         temp++;

      }
      else{
      cout<<" ";
      }

     }
        cout<<endl;
        a++;
    }

}

