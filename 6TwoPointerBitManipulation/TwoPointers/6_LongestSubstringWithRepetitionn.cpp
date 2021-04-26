// // Intersection of two sorted arrays
// #include<bits/stdc++.h>
// using namespace std;

// int maxSubstring(string s){
//   int res=0;
//   int tempmax=0;
//   int first=0,sec=0;
//   int freq[256]={0};
//   while(first<s.size()-1 && sec<s.size()-1){
//     if(freq[s[sec]] > 0){
//       freq[s[first]]--;
//       first++;
//     } 
//     else{
//       freq[s[sec]]++;
//       tempmax=sec-first+1;
//       res= max(res,tempmax);
//       sec++;
//     }
//   }
//   return res;
// }

// int main() {
//   string s;
//   cin>>s;

//   cout<<endl<<s;
//   cout<<maxSubstring(s);  

//   return 0;  
// }