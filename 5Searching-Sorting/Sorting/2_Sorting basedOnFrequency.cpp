// #include<bits/stdc++.h>
// using namespace std;


// struct triplet{
//   int ele;
//   int freq;
//   int idx; 
// };

// bool comp(triplet t1, triplet t2){
//   if(t1.freq != t2.freq){
//     return t1.freq < t2.freq;
//   }
//   else if(t1.ele != t2.ele){
//     return t1.ele< t2.ele;
//   }
//   return t1.idx<t2.idx;
// }

// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0; i<n;i++){
//     cin>>arr[i];
//   }
  
//   cout<<endl;
//   for(auto x: arr){
//     cout<<x<<" ";
//   }

//   vector<int>freq(101,0);
//   for(int i=0; i<n;i++){
//     freq[arr[i]]++;
//   }
  
//   vector<triplet>v;
//   for(int i=0; i<n;i++){
//     triplet t;
//     t.ele = arr[i];
//     t.freq = freq[arr[i]];
//     t.idx = i;
//     cout<<t.ele<<t.freq<<t.idx;
//     v.push_back(t);
//   }

//   sort(v.begin(), v.end(),comp);
//   cout<<endl;
//   for(auto x: v){
//     cout<<x.ele<<" ";
//   }

//   return 0;
// }