/*
Code : Polynomial Class
Implement a polynomial class, with the following properties and functions.
Properties :
1. An integer array (lets say A) which holds the coefficient and degrees. Use array indices as degree and A[i] as coefficient of ith degree.
2. An integer holding total size of array A.
Functions :
1. Default constructor
2. Copy constructor
3. setCoefficient -
This function sets coefficient for a particular degree value. If the given degree is greater than the current capacity of polynomial, increase the capacity accordingly and add then set the required coefficient. If the degree is within limits, then previous coefficient value is replaced by given coefficient value
4. Overload "+" operator (P3 = P1 + P2) :
Adds two polynomials and returns a new polynomial which has result.
5. Overload "-" operator (P3 = p1 - p2) :
Subtracts two polynomials and returns a new polynomial which has result
6. Overload * operator (P3 = P1 * P2) :
Multiplies two polynomials and returns a new polynomial which has result
7. Overload "=" operator (Copy assignment operator) -
Assigns all values of one polynomial to other.
8. print() -
Prints all the terms (only terms with non zero coefficients are to be printed) in increasing order of degree.
Print pattern for a single term : <coefficient>"x"<degree>
And multiple terms should be printed separated by space. And after printing one polynomial, print new line. For more clarity, refer sample test cases
Input Format :
Line 1 : N, total number of terms in polynomial P1
Line 2 : N integers representing degree of P1 (separated by space)
Line 3 : N integers representing coefficients of P1 (separated by space)
Line 4 : M, total number of terms in polynomial P2
Line 5 : M integers representing degree of P2 (separated by space)
Line 6 : M integers representing coefficients of P2 (separated by space)
Line 7 : Integer C, choice representing the function to be called (See main for more details)
Sample Input 1 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
1
Sample Output 1 :
4x0 3x1 -3x2 3x3 -4x5
Sample Input 2 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
2
Sample Output 2 :
-4x0 -1x1 3x2 1x3 -4x5
Sample Input 3 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
3
Sample Output 3 :
4x1 2x2 5x3 5x4 -22x5 -6x6 12x7 -4x8
*/
#include<bits/stdc++.h>
class Polynomial {
       public:
    int *degCoeff;      // Name of your array (Don't change this)
    int capacity;
 
    Polynomial(){
        degCoeff=new int[5];
        capacity=5;
        for(int i=0;i<5;i++){
            degCoeff[i]=0;
        }
    }
    Polynomial(Polynomial const & P){
        this->capacity=P.capacity;
        degCoeff=new int[capacity];
        for(int i=0;i<capacity;i++){
            degCoeff[i]=P.degCoeff[i];
        }
    }
    void operator=(Polynomial const & P){
        this->capacity=P.capacity;
        degCoeff=new int[capacity];
        for(int i=0;i<capacity;i++){
            degCoeff[i]=P.degCoeff[i];
        }
    }
    void print(){
        for(int i=0;i<capacity;i++){
            if(degCoeff[i]!=0){
                cout<<degCoeff[i]<<"x"<<i<<" ";
            }
        }cout<<endl;
    }
        
     void setCoefficient(int degree, int coeff){
         if(degree>=this->capacity){
             int *newdegree=new int[degree+1];
             for(int i=0;i<(degree+1);i++){
                 if(i<capacity)
                 newdegree[i]=degCoeff[i];
                 else
                     newdegree[i]=0;
             }
             delete [] degCoeff;
             degCoeff=newdegree;
             capacity=degree+1;
         }
         degCoeff[degree]+=coeff;
     }   
    Polynomial operator+(Polynomial const & P){
         Polynomial Pnew;
        /* if(this->capacity>=Pnew.capacity)
        Pnew.capacity=this->capacity+1;
            else
             Pnew.capacity=Pnew.capacity +1;
        Pnew.degCoeff=new int[Pnew.capacity];*/
        int c;
        for(int i=0;i<=Pnew.capacity;i++){
           if(i<this->capacity && i< P.capacity){
           c = degCoeff[i]+P.degCoeff[i];
               Pnew.setCoefficient(i,c);
                
        }
        else if(i<this->capacity && i>=P.capacity){
            c= degCoeff[i];
            Pnew.setCoefficient(i,c);
        }
         else if(i>=this->capacity && i<P.capacity){
            c= P.degCoeff[i];
             Pnew.setCoefficient(i,c);
        }
    }
        
        return Pnew;
    }
        Polynomial operator-(Polynomial const & P){
         Polynomial Pnew;
            int c;
           /* if(this->capacity>=Pnew.capacity)
        Pnew.capacity=this->capacity+1;
            else
             Pnew.capacity=Pnew.capacity+1;
        Pnew.degCoeff=new int[Pnew.capacity];*/
        for(int i=0;i<=Pnew.capacity;i++){
           if(i<this->capacity && i< P.capacity){
            c= degCoeff[i]-P.degCoeff[i];
               Pnew.setCoefficient(i,c);
        }
        else if(i<this->capacity && i>=P.capacity){
            c= degCoeff[i];
            Pnew.setCoefficient(i,c);
        }
         else if(i>=this->capacity && i<P.capacity){
            c=((-1)*P.degCoeff[i]);
             Pnew.setCoefficient(i,c);
        }
    }
        
        return Pnew;
    }
        Polynomial operator*(Polynomial const & P){
         Polynomial Pnew;
        Pnew.capacity=(this->capacity+P.capacity+2);
        Pnew.degCoeff=new int[Pnew.capacity];
        for(int i=0;i<=Pnew.capacity;i++){
       Pnew.degCoeff[i]=0;
        }  
           for(int i=0;i<capacity;i++){
       for(int j=0;j<P.capacity;j++){
           Pnew.degCoeff[i+j]+=(degCoeff[i]*P.degCoeff[j]);
       }
        }  
        return Pnew;
    }
};
