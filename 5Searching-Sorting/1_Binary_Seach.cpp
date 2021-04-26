// #include <bits/stdc++.h>
// using namespace std;

// vector<int> binarySearch(int arr[], int n, int key){
  
//   cout<<"binary search called";
//   vector<int>res;
//   int low = 0;
//   int high = n-1;
//   int first = -1;
//   while(low<=high){
//     int mid = (low+high)/2;
//     if(arr[mid] == key){
//       first =mid;  //store the value
//       high = mid-1; // check for lessar index if true it gets stored subsequently otherwise while termination terminates
//     }
//     else if(arr[mid]>key){
//       high = mid-1;
//     }
//     else{
//       low = mid +1;
//     }
//   }
//   res.push_back(first);
  

//   low = 0;
//   high = n-1;

//   while(low<=high){
//     int mid = (low+high)/2;
//     if(arr[mid] == key){
//       first =mid;
//       low  = mid+1;
//     }
//     else if(arr[mid]>key){
//       high = mid-1;
//     }
//     else{
//       low = mid +1;
//     }
//   }
//   res.push_back(first);
//   return res;
// }

// int main(){
  
//   int n, key;
//   cin>>n>>key;
//   int arr[n];
//   for(int i =0; i<n; i++){
//     cin>>arr[i];
//   }
//   // cout<<"array input";
//   // for(int i =0; i<n; i++){
//   //   cout<<arr[i];
//   // }

//   vector<int>v=binarySearch(arr,n,key);
//   for(auto x:v){
//     cout<<x;
//   }

//   return 0;
// }