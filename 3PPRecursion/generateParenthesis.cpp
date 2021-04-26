// #include<bits/stdc++.h>
// using namespace std;

// void pp(int n , int i , int l, int r, char s[],int& count){
//   if(i==2*n){
//     cout<<endl<<s;
//     cout<<"  "<<++count;
//     return;
//   }
// //checking termination condition
// //if l==r condition
// //if l>r condition
// //      l==n 
// //

//   if(l==r){
//     s[i] = '(';
//     pp(n,i+1,l+1,r,s, count);
//   }
//   else if(l>r){
//     if(l==n){
//       s[i]=')';
//       pp(n,i+1,l,r+1,s,count);
//     }
//     else{
//       s[i]='(';
//       pp(n,i+1,l+1,r,s,count);
//       s[i]=')';
//       pp(n,i+1,l,r+1,s,count);
//     }
//   }
// }

// int main(){ 
//   int n;
//   cin>>n;

//   int i=0;
//   int l=0;
//   int r=0;
//   int count =0;
//   char s[2*n];
//   pp(n,0,0,0,s,count);


//   return 0;
// }