// // Input:v = [1,2,3]
// // Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

// //Permutations
// //step 1 -> backtracking

// #include <iostream>
// #include<vector>
// #include<set>
// using namespace std;

// void permute(int index, vector<int>&v, vector<vector<int>>& ansSet)
// {  
//   if (index ==v.size() - 1) // reached the last number in vector have only 1 permutation
//   {
//     ansSet.push_back(v);
//     return;
//   }

//   // Swap the number at index 'index' with every other number in array and pass it reccussion.
//   for (int i = index; i <v.size(); ++i)
//   {
//      swap(v[i],v[index]);
//      permute(index + 1,v, ansSet);
//      swap(v[i],v[index]);
//   }
// }    
// vector<vector<int>> permute(vector<int>&v) 
//   {
//     vector<vector<int>> ansSet; // To avoid duplications
//     permute(0,v, ansSet);
    
//     vector<vector<int>> ans;
//     for (auto& it : ansSet)
//     {
//         ans.emplace_back(it);
//     }
//     return ans;
//   }

// int main() {
//   vector<int>v;
//   int n,data;
//   cin>>n;
//   data=0;
//   for(int i=0; i<n;i++){
//     cin>>data;
//     v.push_back(data);
//   }

//   for(auto x: v){
//     cout<<x<<" ";
//   }

//   vector<vector<int>>res;
//   res = permute(v);
//   for(int i=0;i<res.size();i++){
//     for(int j=0; j<res[i].size();j++){
//       cout<<res[i][j];
//     }
//     cout<<endl;
//   }

//   return 0;
// }