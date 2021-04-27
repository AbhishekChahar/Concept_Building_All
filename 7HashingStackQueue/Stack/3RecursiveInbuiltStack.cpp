// //Push Bottom
// #include<bits/stdc++.h>
// using namespace std;

// void pushBottom(stack<int>&s, int x){
//   if(s.empty()){
//     s.push(x);
//     return;
//   }
//   int y= s.top();
//   s.pop();
//   pushBottom(s,x);
//   s.push(y);

// }

// int main(){
//   stack<int>s;

//   s.push(1);
//   s.push(2);
//   s.push(3);
//   s.push(4);
//   int x;
//   cin>>x;
//   cout<<endl;

//   pushBottom(s,x);
  
//   while(!s.empty()){
//     cout<<s.top()<<endl;
//     s.pop();
//   }


//   return 0;
// }