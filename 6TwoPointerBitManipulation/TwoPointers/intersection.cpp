// //Intersection of two sorted arrays
// #include<bits/stdc++.h>
// using namespace std;

// vector<int>findIntersection(int arr1[], int arr2[],int n, int m){
//   vector<int>res;
//   sort(arr1,arr1+n);
//   sort(arr2,arr2+m);
//   int i=0,j=0;
//   while(i<n && j<m){
// //     n = 5, arr1[] = {1, 2, 3, 4, 5}  
// //     m = 3, arr2 [] = {1, 2, 3}
//     if(arr1[i]<arr2[j]){
//       int a = arr1[i];
//       while(arr1[i]==a){
//         i++;
//       }
//     }

//     else if(arr1[i]>arr2[j]){
//       int a = arr2[j];
//       while(arr2[j]==a){
//         j++;
//       }
//     }
//     else if(arr1[i]==arr2[j]) {
//       int a=arr1[i];
//       while(arr1[i]==a){
//         i++;
//       }
//       while(arr2[j]==a){
//         j++;
//       }
//       res.push_back(a);

//     }
//   }

//   // if(i==n){
//   //   while(j<m){
//   //     int a = arr2[j];
//   //     while(a == arr2[j]){
//   //       j++;
//   //     }
//   //     res.push_back(a);
//   //   }
//   // }
//   //   if(j==m){
//   //   while(i<n){
//   //     int a = arr1[i];
//   //     while(a == arr1[i]){
//   //       i++;
//   //     }
//   //     res.push_back(a);
//   //   }
//   // }
//   return res;
// }

// int main() {
//   int n,m;
//   cin>>n>>m;
//   int arr1[n], arr2[m];
//   for(int i=0; i<n ;i++){
//     cin>>arr1[i];
//   }
//   for(int i=0; i<m ;i++){
//     cin>>arr2[i];
//   }

//   vector<int>v;
//   v = findIntersection(arr1,arr2,n,m);
//   for(auto x: v){
//     cout<<x<<" ";
//   }

//   return 0;  
// }