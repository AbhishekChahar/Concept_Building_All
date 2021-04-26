// #include<bits/stdc++.h>
// using namespace std;

// void recurse(int k,int m, int n, vector<vector<int>>&v){
//   if(k == m-1){
//      for(int i=0; i<v.size();i++){
//       for(int j=0; j<v[i].size(); j++){
//         cout<<v[i][j];
//       }
//       cout<<endl;
//     }  
//     return;
//   }

//   for(int i=0; i<=v.size(); i++){
//     v[i][i]=v.size();
//     recurse(i+1,m,n,v);
//     v[i][i]=0;
//   }
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

//   recurse(0,m,n,mat);

//   return 0;
// }