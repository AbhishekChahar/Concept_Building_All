// // Input: tiles = "AAB"
// // Output: 8
// // Explanation: The possible sequences are "A", "B", "AA", "AB", "BA", "AAB", "ABA", "BAA".



// // Step 1: Input string 
// // Step 2: -->Create a boolean array of size to store whether visited or not
// // --> Sort the string 
// // --> Call the function you have to recurse by passing (sorted string, boolean array of string size)

// // Step 3: --> loop from 0 to size -1
// //         -->(visited[i]==0 && (i==0 || (str[i]!=str[i-1] || visited[i-1]==1))
// //         --> change visited[i]=1
// //         --> increment answer and call the function again
// //         --> change the visited[i]=0

// #include<bits/stdc++.h>
// using namespace std;

// int helper(string str, vector<int>&visited){
//   int ans=0;
//   for(int i=0;i<str.size();i++){
//       if(visited[i]==0 && (i==0 || (str[i]!=str[i-1] || visited[i-1]==1))){
//           visited[i]=1;
//           ans++;
//           ans += helper(str, visited);
//           visited[i]=0;
//       }
//   }
//   return ans;
// }

// int countNumberOfUniqueTiles(string str){
//   vector<int> visited(str.size(),0);
//   sort(str.begin(), str.end());
//   return helper(str, visited);
// }



// int main(){

//   string s;
//   cin>>s;

//   cout<<countNumberOfUniqueTiles(s);



//   return 0;
// }