#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 5, 2, 2, 5};
    unordered_map<int,int>mp;
    set<int> ans;
    for(int i = 0; i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(auto i=mp.begin();i!=mp.end();i++){
        ans.insert(i->second);
      }
      return (ans.size()==mp.size())?true:false;
}
