// #include <bits/stdc++.h>
// using namespace std;

// //Finding the only repeating element
// // Input :  arr[] = { 1, 2 , 3 , 4 , 4}
// //                    0  1   2   3   4 
// // Output :  4

// int binarySearch(int arr[], int n){
//   int high = n-1;
//   int low=0;
//   int mid;
//   if(n == 1){
//     return -1;
//   }
//   while(low<=high){
//     mid  = low+ (high-low)/2;
//     if(arr[mid]==arr[mid+1]){
//       break;
//     }
//     else if(arr[mid]>mid){
//       low =mid+1;
//     }
//     else if(arr[mid]== mid){
//       high = mid-1;
//     }
//   }

//   return arr[mid];
  
// }

// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i =0 ;i<n ; i++){
//     cin>>arr[i];
//   }


//   for(auto x: arr){
//     cout<<x;
//   }
//   cout<<binarySearch(arr, n);
//   return 0;
// }