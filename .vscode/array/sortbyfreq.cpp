#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> p1, pair<int, int> p2 ){
    if(p1.second == p2.second)
    return p1.first < p2.first;
    return p1.second > p2.second;
    

}

void Sortelementsbyfreq(int arr[], int n){
    unordered_map<int,int> mp;
    vector<pair<int, int>>pr;
     for(int i=0; i<n; i++){
        mp[arr[i]]++;
     }
     for(auto i = mp.begin(); i != mp.end(); i++ ){
        pr.push_back({i->first, i->second});
     }
     sort(pr.begin(), pr.end(), comp);
     for (int i = 0; i < pr.size(); i++)
     {
       while (pr[i].second > 0)
       {
         cout << pr[i].first << " ";
         pr[i].second--;
       }
     }

}

int main(){
    int arr[] = {3, 3, 5, 2, 1, 1, 2};
  int n = 7;
  Sortelementsbyfreq(arr, n);
  return 0;
}