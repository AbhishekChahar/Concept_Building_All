// //Learnt about rotate function of STL

// //rotate(v.begin() , v.begin()+NoOfRotations, v.end() );
// //
// //fill_n(arr, 8, val);
// //Permutations
// //step1-> Take an input array for Permutations
// //step-2-> call Permute Function
// //Step 3-> Use backtracking swap call unswap 

// #include<bits/stdc++.h>
// using namespace std;

// void permute(int index, vector<int>&nums , vector<vector<int>>&ans){
//   if(index == nums.size()-1){
//     ans.push_back(nums);
//     return;
//   }
//   for(int i =index ; i <nums.size(); i++){
//     swap(nums[i], nums[index]);
//     permute(index+1,  nums, ans);
//     swap(nums[i], nums[index]);
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