// //N - Queens
// //Create a matrix of NxN
// // Do - Place queen
// //recurse call
// //Undo - remove queen from that position

// #include<bits/stdc++.h>
// using namespace std;


// //function to check whether the queen can be placed in the given cell
// bool issafe(int i, int j, vector<vector<int>>&chess){
//   //checking for same column 0 0
//   int x = i-1;
//   while(x>=0){
//     if(chess[x][j]){
//       return false;
//     }
//     x=x-1;
//   }

//   //checking diagonal
//   x = i-1;
//   int y = j-1;
//   while( x>=0 && y>=0 ){
//     if(chess[x][y]){
//       return false;
//     }
//     x--;
//     y--;
//   }

//   //checking diagonal right side
//   x = i-1;
//   y = j+1;
//   while(x>=0 && y<chess.size()){
//     if(chess[x][y]){
//       return false;
//     }
//     x--;
//     y++;
//   }  

//   return true;
// }

// void Nqueens( int i, vector<vector<int>>&chess){
//   if(i==chess.size()){
//     //printing matrix
//     for(int k=0; k<chess.size(); k++){
//       for(int l=0; l<chess[k].size();l++){
//         cout<<chess[k][l]<<" ";
//       }
//       cout<<endl;
//     }
//     return ;
//   }

//   for(int c=0;c<chess.size();c++){
//     if(issafe(i,c,chess)){
//       chess[i][c]=1;
//       Nqueens(i+1,chess);
//       chess[i][c]=0;
//       cout<<"Alahabib";
      
//     }
//   }
//   return;
// }


// int main(){
//   int n;
//   cin>>n;
//   vector<int>row(n);
//   vector<vector<int>>chess(n,row);
//   for(int i=0; i<chess.size(); i++){
//     for(int j=0 ;j<chess[i].size();j++){
//       cout<<chess[i][j];
//     }
//     cout<<endl;
//   }
  
//   Nqueens(n,chess);


//   return 0;
// }