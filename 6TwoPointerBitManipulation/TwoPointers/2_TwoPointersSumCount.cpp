// //Two Pointer SUM Count

// //c1*(c1-1))/2 use this to compute N C 2;
// //Order N Approach
// #include <iostream>
 
// using namespace std;

// int main() {
  
//   int arr[] = {1,4,4,5,5,5,6,6,11};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   int sum = 10;

//   int i, j,count;
//   i=0;
//   j=n-1;
//   while(i<j){
//     cout<<endl<<i<<" "<<j;
    
//     if(arr[i]+arr[j]==sum){
//       int a=arr[i];
//       int b=arr[j];
//       int c1=0,c2=0;
//       while(arr[i]==a){c1++;i++;};
//       while(arr[j]==b){c2++;j--;};
//       cout<<endl<<" :"<<c1<<" "<<c2;
//       if(a==b){count += (c1*(c1-1))/2;}
//       else{
//         count += c1*c2; 
//       }
//     }
//     else if(arr[i]+arr[j]>sum){
//       j--;
//     }
//     else if(arr[i]+arr[j]<sum){
//       i++;
//     }
//   }

//   cout<<endl<<" "<<count;
//   return 0;
// }