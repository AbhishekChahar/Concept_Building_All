// //print distinctPaths in a Grid using recursion
// // you can only move in the  Down or right direction
// //One very good way is to take and consider the number of steps like 
// // 3 X 2 grid --> SSS they can be filled by both by down and right
// // Possibilities  --> DDR , DRD, RDD. 3c2(2 d from three) * 1c1 (1 right from 3)

// //Using recursion 
// //move one step right and a step down 
// //till the limits i.e size-1
// //As you reach the target count++


// #include<bits/stdc++.h>
// using namespace std;

// int cnt = 0;
// int distinctPaths (int i1, int j1,int m, int n){
  
//   if(i1 == m-1 || j1 ==n-1){
//     return 1;
//   }
//   return distinctPaths(i1+1,j1,m,n) + distinctPaths(i1, j1+1,m,n);
// }

// int main(){
//   int m,n;
//   cin>>m>>n;
//   //starting from 0 0 ;
  
//   cout<<"Number of distinct paths from top left to right bottom of the i and js given are: "<<distinctPaths(0, 0,m,n);

//   return 0;
  
// }