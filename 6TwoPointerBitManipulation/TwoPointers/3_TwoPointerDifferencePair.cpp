// //Two Pointer 
// // Two positive direction moving pointers

// //Difference
// //Check case when both becomes same.

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
  
//   vector<int>nums = {11, 6 ,10, 5 ,11, 16};
//   int n = sizeof(nums)/sizeof(nums[0]);
//   int k = 5;
//   sort(nums.begin(),nums.end());
//   for(auto x: nums){
//     cout<<x<<" ";
//   }
//   int i, j,count;
//   i=0;
//   j=1;
//   count=0;
//   bool found= false;
//   while(i<j && i!=n &&j!=n){
//     cout<<endl<<i<<" "<<j;
    
//     if(nums[j]-nums[i]==k){
//       if(k==0){
//         int c1 = 0;
//         int a=nums[i],b=nums[j];
//         while(nums[i]==a){
//           i++;
//           c1++;
//         }
//         count += 1;
//         cout<<count<<"increased by "<<(c1*(c1-1))/2 <<endl;
//       }
//       else{
//         int c1 = 0,c2=0;
//         int a=nums[i],b=nums[j];
//         while(nums[i]==a){
//           i++;
//           c1++;
//         }
//         while(nums[j]==b){
//           j++;
//           c2++;
//         }
//         count += 1;
//         cout<<count<<"increased by "<<(c1*c2)<<endl;
//       }
//     }
//     else if(nums[j]-nums[i]>k){
//       i++;
//       if(i==j) j++;
//     }
//     else if(nums[j]-nums[i]<k){
//       j++;
//     }
//   }

//   cout<<endl<<"Number of such pairs are: "<<count;
//   return 0;
// }