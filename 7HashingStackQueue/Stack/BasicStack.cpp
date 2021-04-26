// #include <iostream>
// using namespace std;
// const int n = 1000;

// struct stack{
//   int arr[n];
//   int top=-1;

//   bool isfull(){
//     if(top == n-1){
//       cout<<"stack is full";
//       return true;
//     }
//     return false;
//   }

//   bool isempty(){
//     if(top == -1){
//       cout<<"stack is empty";
//       return true;
//     }
//     return false;
//   }

//   void push(int x){
//     if(isfull()){
//       cout<<"overflow";
//     }
//     else{
//       if(isempty()){
//         arr[0]=x;
//         top =0;
//         cout<<"element pushed ";
//       }
//       else{
//         arr[top++]=x;
//         cout<<"element pushed ";
//       }
//     }
//   }
//   // void isempty(stack s){
//   //   if(s.top == -1){
//   //     cout<<"stack is empty";
//   //   }
//   // }
// };
// int main() {
//   stack s;
//   s.isempty();
//   s.isfull();
//   s.push(8);
//   cout<<s.arr[0];
// }