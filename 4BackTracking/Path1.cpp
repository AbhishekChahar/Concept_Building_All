// //Rat in a puzzle/maze
// //Backtracking
// //Paths 01 

// #include<bits/stdc++.h>
// using namespace std;
// void paths(vector<vector<int>>&arr, int m, int n, vector<pair<int,int>>&ans,int i, int j ){
//   if(i==m-1 && j==n-1){
//     for(int k=0; k<ans.size(); k++){
//       cout<<" "<< ans[k].first <<ans[k].second<<" ";
//     }
//     cout<<m-1<<n-1<<endl;
//     return;
//   }
//   ans.push_back(make_pair(i,j));
//   if(i<m-1 && arr[i+1][j]==0){
//     paths(arr,m,n,ans,i+1,j);
//   }
//   if(j<n-1 && arr[i][j+1]==0){
//     paths(arr,m,n,ans,i,j+1);
//   }
//   ans.pop_back();
//   return;
// }

// void pathsInMaze(vector<vector<int>>&arr){
//   vector<pair<int,int>> ans;
//   int m = arr.size();
//   int n = arr[0].size();
//   int i=0,j=0;
//   paths(arr,m,n,ans,i,j);
// }



// int main(){
//   int m,n;
//   cin>>m>>n;
//   vector<int>rows;
//   vector<vector<int>>arr(n, vector<int>(m));
//   for(int i=0; i<m;i++){
//     for(int j=0; j<n;j++){
//       cin>>arr[i][j];
//     }
//   }

//   //Output checking matrix
//   for(int i=0; i<m;i++){
//     for(int j=0; j<n;j++){
//       cout<<arr[i][j];
//     }
//     cout<<endl;
//   }
//   cout<<endl;

  
//   pathsInMaze(arr);

  



//   return 0;
// }