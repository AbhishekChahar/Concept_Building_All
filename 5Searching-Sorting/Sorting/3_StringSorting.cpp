// #include<bits/stdc++.h>
// using namespace std;

// bool comp(pair<int,int>p1,pair<int,int>p2){
//   return (p1.second<p2.second);
// }

// int main(){
//   string s, t;
//   cin>>s>>t;
//   cout<<endl<<s<<endl<<t<<endl;

//   int rank[27];

//   for(int i=0; i<27 ;i++){
//     rank[i] = INT_MAX;
//   }
//   for(int i=0;i<s.length();i++){
//     rank[s[i]-'a']=i;
//   }
//   vector<pair<char , int>>v;
//   for(int i=0; i<t.length();i++){
//      pair<char,int>p;  
//      p.first = t[i];
//      p.second = rank[t[i]-'a'];
//      v.push_back(p); 
//   }

//   for(int i=0;i<v.size();i++){
//     cout<<v[i].first<<" "<<v[i].second<<endl;
//   }

//   sort(v.begin(), v.end(), comp);

//   string ans;
//   for(int i=0; i<v.size()-1;i++){
//     ans+=v[i].first;
//   }
//   cout<<endl<<ans<<endl;
//   cout<<endl;
//   for(int i=0;i<v.size();i++){
//     cout<<v[i].first<<" "<<v[i].second<<endl;
//   }

//   return 0;
// }