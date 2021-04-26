// // Return the number of permutations of 1 to n so that prime numbers are at prime indices (1-indexed.)

// // Since the answer may be large, return the answer modulo 10^9 + 7.

// // Input: n = 5
// // Output: 12
// // Explanation: For example [1,2,5,4,3] is a valid permutation, but [5,2,3,4,1] is not because the prime number 5 is at index 1.

// //Step 1: Find the number of prime numbers till n;
// //         [1,2,5,4,3] --> number of prime =3; 
// //                     --> Number of non prime =2;
// //Step 2: Find Factorial of Both the numbers 
// //        3! = 6
// //        2! = 2 Add 
// //        multiply both of them 6 x 2 = 12;
// //Step 3: It is impossible to find the factorial of a number of range about 100 even in long long.

// #include<bits/stdc++.h>
// using namespace std;

// long double NumberOfPrimeArrangements(int n){
//   long double res =0;

//   vector<bool>isprime(100+1,true);
//   isprime[0]=isprime[1]=false;
//   for(int i=2; i<=10; i++){
//     for(int j = i*i; j<100 ; j=j+i ){
//       isprime[j]=false;
//     }
//   }

//   cout<<endl;
//   int primeCount=0;
//   for(int i=1; i<=n; i++){
//     if(isprime[i]){
//       cout<<i<<" ";
//       primeCount++;
//     }
//   }
//   cout<<endl<<primeCount;
//   int nonPrimeCount = n-primeCount;

//   long double primeCombinations = 1;
//   long double NonprimeCombinations = 1;

//   for(int i=2;i<=primeCombinations;i++){
//     primeCombinations *=i;
//   }
//   for(int i=2;i<=nonPrimeCount;i++){
//     NonprimeCombinations *=i;
//   }
//   long double m = 10e8+7;
//   primeCombinations = fmod(primeCombinations, m);
//   NonprimeCombinations = fmod(NonprimeCombinations, m);

//   res=fmod(primeCombinations*NonprimeCombinations,m); 

//   return res;
// }

// int main(){

//   int n;
//   cin>>n;

//   cout<<endl<<NumberOfPrimeArrangements(n);
  


//   return 0;
// }



 

