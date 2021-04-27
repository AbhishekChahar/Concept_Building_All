// // Largest area rectangle


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int arr[] = {5,3,8,6,9};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   for(auto x: arr){
//     cout<<x<<" ";
//   }
//   cout<<endl;
  
//   int nsi[n];
//   int psi[n];

//   stack<int>s;
//   stack<int>s1;
//   for(int i=0; i< n; i++){
//     while(!s.empty() && arr[i]<arr[s.top()]){
//       nsi[i-1] = i;
//       s.pop();
//     }
//     s.push(i);
//   }
//   while(!s.empty()){
//     nsi[s.top()]=n;
//     s.pop();
//   }

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

//     for(auto x: nsi){
//     cout<<x<<" ";
//   }
//   cout<<endl;
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