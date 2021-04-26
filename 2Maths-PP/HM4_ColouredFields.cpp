// //Coloured Fields.
// //Step 1 --> Create an boolean grid to check whether the ij cell is waste or not.
// //Step 2 --> 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//   int n,m,k,t;
//   cin>>n>>m>>k>>t;
//   vector<string>res;
//   vector<int>column(m,1);
//   vector<vector<int>>gridWasteOrNot(n,column);
//   for(int i=0;i<n; i++){
//     for(int j =0 ; j <m ; j++){
//       gridWasteOrNot[i][j]=true ;
//     }
//   }

// // //print
// //   cout<<endl;
// //   for(int i=0;i<n; i++){
// //     for(int j =0 ; j <m ; j++){
// //       cout<<gridWasteOrNot[i][j] <<" " ;
// //     }
// //     cout<<endl;
// //   }
// //   cout<<endl;

 
//   for(int idx=0;idx<k;idx++){
//     int i, j;
//     cin>>i>>j;
//     gridWasteOrNot[i-1][j-1]= -1;
//   }

// //print
//   // cout<<endl;
//   // for(int i=0;i<n; i++){
//   //   for(int j =0 ; j <m ; j++){
//   //     cout<<gridWasteOrNot[i][j] <<" " ;
//   //   }
//   //   cout<<endl;
//   // }
//   // cout<<endl;

//   int count=0;
//   for(int i=0 ; i<n;i++){
//     for(int j=0; j<m;j++){
//       if(gridWasteOrNot[i][j]>=0){
//         gridWasteOrNot[i][j]=count;
//         count++;
//       }
//     }
//   }




//   //   cout<<endl;
//   // for(int i=0;i<n; i++){
//   //   for(int j =0 ; j <m ; j++){
//   //     cout<<gridWasteOrNot[i][j] <<" " ;
//   //   }
//   //   cout<<endl;
//   // }
//   // cout<<endl;
//   // 0--> Carrot 
//   // 1-->Kiwis
//   // 2--> Grapes

//   for(int idx=0;idx<t;idx++){
//     int i, j;
//     cin>>i>>j;
//     if(gridWasteOrNot[i-1][j-1]<0){
//       res.push_back("Waste");
//     }
//     else{
//       int num = gridWasteOrNot[i-1][j-1]%3;
//       switch(num){
//         case (0): res.push_back("Carrot");
//                 break;
//         case (1): res.push_back("Kiwis");
//                 break;
//         case (2): res.push_back("Grapes");
//       }
//     }
//   }

//   for(auto x: res){
//       cout<<x<<endl;
//   } 
//   return 0;
// }