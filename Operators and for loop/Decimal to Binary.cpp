/* Decimal to Binary
Send Feedback
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.


Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.


Input format :
Integer N
Output format :
Corresponding Binary number (long)
Constraints :
0 <= N <= 10^5
Sample Input 1 :
12
Sample Output 1 :
1100
Sample Input 2 :
7
Sample Output 2 :
111
*/
#include<bits/stdc++.h>
using namespace std;
long long power(int n, long long x){
    long long res=1;
    for(int i=1;i<=x;i++){
        res*=n;
    }
    return res;
}
int main() {
   long long n;
    cin>>n;
    long long res=0;
    long long place=0;
    while(n!=0){
        int digit=n%2;
        res=res+(power(10,place)*digit);
        place++;
        n=n/2;
    }
    cout<<res;
}
