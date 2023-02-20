#include <iostream>
#include <cmath> 
#include <cstdlib> //for random number gen srand here in sorttest 
#include <ctime> //for random number gen srand here in sorttest 
#include <chrono> //measure time of shellsort function 
using namespace std::chrono; //measure time of shellsort function 
using namespace std; 


int main()
{   
  //know a(2N/b^t) works for every level but replace t with log base 2 of N 
  //know log base 2 of N gives tree height but want to exclude level that hits base case so S = log base 2 of N - 1 
  //know N+N = 2N is level - 0 

  int N = 16; //value of N for recursive function 
  int A = 4; //value of A is number of times recursion happens 
  int B = 2; //value of B is number of times the array is divided 
  int S = log2(N) - 1; //value of S is log2(N) - 1 

  int totalOperations = S*((2*N)+A*((2*N)/pow(B,S))); 
  cout << "The total number of Operations for N of " << N << " is: " << totalOperations << endl; 
  

  
  return 0;
}


