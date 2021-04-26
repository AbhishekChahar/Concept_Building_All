// //Permutations In lexicographic order

// //step1-> Take an input array for Permutations
// //step-2-> call Permute Function
// //Step 3-> Use backtracking swap(using right Rotation) call unswap(Using left rotation) 

// #include<bits/stdc++.h>
// using namespace std;

// void rightRotation(vector<int>&nums, int f , int l){
//   // 1 2 3 4 5
//   // 1 4 2 3 5
//   int temp =nums[l];
//   for(int i=l; i>f; i-- ){
//     nums[i] = nums[i-1];
//   }
//   nums[f] = temp;

// }

// void leftRotation(vector<int>&nums, int f , int l){

//   int temp =nums[f];
//   for(int i=f; i<l; i++ ){
//     nums[i] = nums[i+1];
//   }
//   nums[l] = temp;

// }

// void permute(int index, vector<int>&nums , vector<vector<int>>&ans){
//   if(index == nums.size()-1){
//     ans.push_back(nums);
//     return;
//   }
//   for(int i =index ; i <nums.size(); i++){

//     rightRotation(nums,index,i);                                            
//     permute(index+1,  nums, ans);
//     leftRotation(nums, index, i);
//   }

// }

// vector<vector<int>>permute(vector<int> &nums){
//   vector<vector<int>>ans;
//   permute(0,nums,ans);
//   // vector<vector<int>>anss;
//   // for(auto &x: ans){
//   //   anss.push_back(x);
//   // }

//   return ans;
// }

// int main(){

//   vector<int>nums;
//   int n;
//   cin>>n;
//   for(int i =0; i<n ;i++){
//     int data;
//     cin>>data;
//     nums.push_back(data);
//   }

//   for(auto x: nums){
//     cout<<x<<" ";
//   }
//   cout<<endl;

//   vector<vector<int>>res;
//   res=permute(nums);

//     for(int i=0;i<res.size();i++){
//     for(int j=0; j<res[i].size();j++){
//       cout<<res[i][j];
//     }
//     cout<<endl;
//   }


//   return 0;
// }