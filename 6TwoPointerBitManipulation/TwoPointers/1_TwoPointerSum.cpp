// //Two Pointer SUM
// #include <iostream>

// using namespace std;

// int main() {
  
//   int arr[] = {1,2,4,5,6,6,7,8};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   int sum = 6;

//   int i, j;
//   for(i=0,j= n-1 ; i < n && j>=0; ){
//     cout<<endl<<i<<" "<<j;
//     if(arr[i]+arr[j]==sum){
//       cout<<endl<<true;
//       cout<<endl<<arr[i]<<"+"<<arr[j];
//       break;
//     }
//     if(arr[i]+arr[j]>sum){
//       j--;
//     }
//     if(arr[i]+arr[j]<sum){
//       i++;
//     }
//   }

//   return 0;
// }