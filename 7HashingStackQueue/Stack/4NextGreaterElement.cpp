// //next greater element

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int arr[8] = {5,3,8,6,9,3,2,7};
//   int size = 8;
//   for(auto x: arr){
//     cout<<x<<" ";
//   }
//   cout<<endl;

//   stack<int>s;
//   int nge[size];
//   for(int i=0; i<size ; i++){
        
//     while(!s.empty()&& arr[i]>arr[s.top()]){
//       nge[s.top()] = arr[i];
//       s.pop();
//     }
//     s.push(i);

//   }
//   while(!s.empty()){
//     nge[s.top()] = 0;
//     s.pop();
//   }

//   for(auto x:nge){
//     cout<<x<<" ";
//   }


//   return 0;
// }