// //Palindrome Partitioning


// #include<bits/stdc++.h>
// using namespace std;

// //Function to check whether a portion of string is Palindrome
// bool isPalindrome(string &str , int low, int high){
//   while(low<high){
//     if(str[low++]!=str[high--]){
//       return false;
//     }
//   }
//   return true;
// }

// void dfs(vector<vector<string>>&res, string &str, int idx , vector<string>&currentlist){
//   if(idx >= str.size()) res.push_back(currentlist);
//   for(int i=idx; i<str.size();i++){
//     if(isPalindrome(str,idx,i)){
//       currentlist.push_back(str.substr(idx,i-idx+1));
//       dfs(res,str,i+1,currentlist);
//       currentlist.pop_back();
//     }
//   }
// }

// vector<vector<string>>palindromePartition(string str){
//   vector<vector<string>>res;
//   vector<string>currentlist;
//   dfs(res, str, 0, currentlist);
//   return res;
// }




// int main(){

//   string s;
//   cin>>s;
//   vector<vector<string>>ans;
//   ans = palindromePartition(s);
  
//   //Printing Logic
//   for(int i=0; i<ans.size();i++){
//     for(int j=0; j<ans[i].size();j++){
//       cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
//   }



//   return 0;
// }