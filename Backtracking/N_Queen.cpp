/*
N-Queen Problem
You are given N, and for a given N x N chessboard, find a way to place N queens such that no queen can attack any other queen on the chess board. 
A queen can be killed when it lies in the same row, or same column, or the same diagonal of any of the other queens. You have to print all such configurations.
Note: Don't print anything if there isn't any valid configuration.
Input Format:
The first line of input contains an integer, that denotes the value of N.     
Output Format :
In the output, you have to print every board configuration in a new line. 
Every configuration will have N*N board elements printed row wise and are separated by space. 
The cells where queens are safe and placed, are denoted by value 1 and remaining all cells are denoted by value 0. 
Please refer to sample test cases for more clarity.
Constraints :
1 <= N <= 10
Time Limit: 1 second
Sample Input 1:
4
Sample Output 1 :
0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0 
0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0 
*/
#include<bits/stdc++.h>
using namespace std;
int ar[10][10];
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ar[i][j]!=1)
                cout<<"0"<<" ";
                else
                    cout<<ar[i][j]<<" ";
            
        }
        
    }cout<<"\n";
}
bool check(int n,int i,int j){
     for(int k=0;k<n;k++){
         if(ar[k][j]==1){
             return false;
         }
     }
   
    for(int k=i-1,l=j-1;k>=0,l>=0;k--,l--){
         if(ar[k][l]==1){
             return false;
         }
     }
    for(int k=i,l=j;k>=0,l<n;k--,l++){
         if(ar[k][l]==1){
             return false;
         }
     }
    return true;
}
void nQueen(int n, int row){
    if(row==n){
         print(n);
        return;
    }
    for(int j=0;j<n;j++)
    if(check(n,row,j)){
        ar[row][j]=1;
        nQueen(n,row+1);
        ar[row][j]=0;
        
    }
    return;
    
    
}
int main(){
  int n;
    cin>>n;
    nQueen(n,0);
    return 0;
}
