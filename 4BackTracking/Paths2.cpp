// //Paths2
// //can move in all the direction 
// //relatively complex because can take infinite steps hence have to keep track of the cells already visited 

// #include<bits/stdc++.h>
// using namespace std;

// void paths(vector<vector<int>>&mat , int m , int n,int destx,int desty, vector<pair<int, int>>&ans, int i , int j ,vector<vector<int>>&visited ){
//   if(i==destx && j==desty){

//     for(int k=0; k<ans.size();k++){
//       cout<<" "<<ans[k].first<<ans[k].second<<" ";
//     }
//     cout<<" "<<destx<<desty<<" ";
//     return;
//   }

//   ans.push_back(make_pair(i,j));
//   visited[i][j]=0;
//   if(visited[i+1][j] && i+1>=0 && i+1<m && mat[i+1][j]==0){
//     paths(mat,m,n, destx, desty, ans,i+1,j, visited);
//   }
//   if(visited[i-1][j] && i-1>=0 && i-1<m && mat[i-1][j]==0){
//     paths(mat,m,n, destx, desty, ans,i-1,j, visited);
//   }
//   if(visited[i][j+1] && j+1>=0 && j+1<n && mat[i][j+1]==0){
//     paths(mat,m,n, destx, desty, ans,i,j+1, visited);

//   }
//   if(visited[i][j-1] && j-1>=0 && j-1<m && mat[i][j-1]==0){
//     paths(mat,m,n, destx, desty, ans,i,j-1, visited);

//   }
//   visited[i][j]=1;
//   ans.pop_back();
//   return;

// }

// void ratAllDirection(vector<vector<int>>&mat, int m , int n){
  
//   vector<int>rows(n,1);
//   vector<vector<int>>visited(m,rows);

//   cout<<endl;
//   for(int i=0; i<m;i++){
//     for(int j=0; j<n; j++){
//         visited[i][j]=1;
//     }
//   }
//   for(int i=0; i<m;i++){
//     for(int j=0; j<n; j++){
//         cout<<visited[i][j];
//     }
//   }

//   vector<pair<int, int>>ans;
//   int destx,desty, sourcex, sourcey;

//   //finding destination cell
//   for(int i=0; i<mat.size();i++){
//     for(int j=0; j<mat[i].size(); j++){
//       if(mat[i][j]==2){
//         destx=i;
//         desty=j;
//         break;
//       }
//     }
//   }

//   //finding source
//   for(int i=0; i<mat.size();i++){
//     for(int j=0; j<mat[i].size(); j++){
//       if(mat[i][j]==1){
//         sourcex=i;
//         sourcey=j;
//         break;
//       }
//     }
//   }  
  
//   paths(mat,m,n, destx, desty, ans,sourcex,sourcey, visited);
//   return;
// }

// int main(){
//   int m,n;
//   cin>>m>>n;
//   vector<vector<int>>mat(m,vector<int>(n));

//   //taking matrix
//   for(int i=0; i<m;i++){
//     for(int j=0; j<n; j++){
//       cin>>mat[i][j];
//     }
//   }  

//   //Checking the matrix
//    for(int i=0; i<mat.size();i++){
//     for(int j=0; j<mat[i].size(); j++){
//       cout<<mat[i][j];
//     }
//     cout<<endl;
//   }  

//   ratAllDirection(mat m,n);

//   return 0;
// }