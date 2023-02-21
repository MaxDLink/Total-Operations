#include <iostream>
#include <cmath> 
#include <cstdlib> //for random number gen srand here in sorttest 
#include <ctime> //for random number gen srand here in sorttest 
#include <chrono> //measure time of shellsort function 
using namespace std::chrono; //measure time of shellsort function 
using namespace std; 


int main()
{   
  //know log base 2 of N gives tree height but want to exclude level that hits base case so subtract 1: S = log base 2 of N - 1 
  //know a(2N/b^t) works calculates the total operations per level but should replace t with log base 2 of N (height of tree)
  //know N+N = 2N is level - 0 so include in formula to get level 0 operations 

  int N = 16; //value of N for recursive function 
  int A = 4; //value of A is number of times recursion happens 
  int B = 2; //value of B is number of times the array is divided 
  int S = log2(N) - 1; //value of S is log2(N) - 1 

  //int totalOperations = S*((2*N)+A*((2*N)/pow(B,S))); 
  //Time complexity: O(S*((2*N)+A*((2*N)/pow(B,S))))
  //Real Time Complexity: Time Complexity: O(N(Logn))
  int totalOperations = N*(log2(N)); 
  cout << "The total number of Operations for N of " << N << " is: " << totalOperations << endl; 
  

  
  return 0;
}


