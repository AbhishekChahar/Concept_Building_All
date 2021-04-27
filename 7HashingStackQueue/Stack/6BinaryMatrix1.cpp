// // Largest area rectangle in Binary Matrix
// // Created the array from the Matrix and implemented histogram rectangle approeach of stack after finding the Next Smaller Index array and Previous Smaller Index array;

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//   int mat[5][5] = {{0,0,0,0,0},
//                    {0,1,0,0,1},
//                    {1,1,1,1,1},
//                    {1,1,1,1,0},
//                    {1,1,1,1,1}};
//   int arr[5];
//   int n=5;
//   int count=0;
//   for(int i=0; i<n;i++){
//     count=0;
//     for(int j =n-1; j>=0;j--){
//       if(mat[j][i]){
//         count++;
//       }
//       else{
//         break;
//       }
//     }
//     arr[i]=count;
//   }

//   for(auto x: arr){
//     cout<<x<<" ";
//   }
//   cout<<endl;





//   cout<<endl;
  
//   int nsi[n];
//   int psi[n];

//   stack<int>s;
//   stack<int>s1;
//   for(int i=0; i< n; i++){
//     while(!s.empty() && arr[i]<arr[s.top()]){
//       nsi[s.top()] = i;
//       s.pop();
//     }
//     s.push(i);
//   }
//   while(!s.empty()){
//     nsi[s.top()]=n;
//     s.pop();
//   }
//   for(auto x: nsi){
//     cout<<x<<" ";
//   }
//   cout<<endl;

//   for(int i=n-1; i>= 0; i--){
//     while(!s1.empty() && arr[i]<arr[s1.top()]){
//       psi[s1.top()] = i;
//       s1.pop();
//     }
//     s1.push(i);
//   }
//   while(!s1.empty()){
//     psi[s1.top()]=-1;
//     s1.pop();
//   }

//   for(auto x: psi){
//     cout<<x<<" ";
//   }
//   cout<<endl;

//   //find the rectangle

//   int area=0, maxarea=0;
//   for(int i=0; i<n ; i++){
//     area= arr[i] * ( nsi[i]-psi[i]-1 );
//     cout<<area<<endl;
//     maxarea = max(area,maxarea);
//   }

//   cout<<"Answer is: "<<maxarea;
 
//   return 0;
// }