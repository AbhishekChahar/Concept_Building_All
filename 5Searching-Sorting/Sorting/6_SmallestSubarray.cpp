
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int arr[] = {10,20,31,2,3,1,61,2 };
//   int n=8;
//   int k=70;
//   // sort(arr,arr+n,greater<int>());
//   int len=0;
//   for(int i=0; i< n ; i++){
//     if(k<=arr[i]){
//       cout<<1;
//       return 0;
//     }    
//   }

//   // int sum=0;
//   // int minlen = 1000;
//   // for(int i=0; i< n ; i++){
//   //   int sum =0;
//   //   for(int j=i+1; j< n ; j++){
//   //     sum = sum+arr[j];
//   //     if(k<=sum){
//   //       len=j-i;
//   //       cout<<len<<endl;
//   //       if(len<minlen){
//   //         minlen = len;
//   //         cout<<len<<endl;

//   //       }
//   //     }
//   //   }    
//   // }
  
//   // cout<<endl<<minlen<<endl;

//   int prefixSum[n];
//   prefixSum[0]=arr[0];
//   for(int i=1; i<n;i++){
//     prefixSum[i]=prefixSum[i]+ prefixSum[i-1];
//   }

//   for(int i =0; i<n; i++){
//     int sum=0;
//     int l=i+1,h=n-1;
//     int m;
//     while(l<=h){
//       m = (l+h)/2;
//       if(k> prefixSum[m]){
//         l = m+1;
//       }
//       else if(k>=prefixSum[m]){
//         if(k>=prefixSum[m-1]){
//           h=m-1;
//         }
//         else{
//           cout<<endl<<m-i+1<<endl;
//         }
//       }
//     }

//   }
  
//   return 0;
// }