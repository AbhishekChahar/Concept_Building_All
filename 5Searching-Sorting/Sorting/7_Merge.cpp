// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//   int n,m;
//   cin>>n>>m;
//   int arr1[n];
//   int arr2[m];
//   for(int i =0 ; i< n ; i++){
//     cin>>arr1[i];
//   }
//   for(int i =0 ; i< m ; i++){
//     cin>>arr2[i];
//   }
//   int merge[n+m];
//   int first=0, second=0;

//   for(int i=0; i< n+m; i++){
//     if(first == n){
//       merge[i] = arr2[second++];
//     }
//     else if(second==m){
//       merge[i] = arr1[first++];
//     }
//     else if(arr1[first]<=arr2[second] && first<n){
//       merge[i] = arr1[first++];
//     }
//     else if(arr1[first]>arr2[second] && second<m){
//       merge[i] = arr2[second++];
//     }
//   }

//   cout<<endl;
//   for(auto x: merge){
//     cout<<x<<" ";
//   }

//    return 0;
//  }