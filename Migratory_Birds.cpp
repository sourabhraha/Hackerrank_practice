#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>v(n);
    vector<pair<int,int>>cnt;

    for(int i=0; i<n; i++)
        cin>>v[i];

    int cnt1 = 0;

    for(int i=1; i<=5;i++){

        cnt1 = count(v.begin(),v.end(),i);
        cnt.push_back(make_pair(i,cnt1));
    }

    int res = 0, max = INT_MIN;

    for(int i=0; i<=cnt.size(); i++){

        if(cnt[i].second > max){
            max = cnt[i].second;
            res = i+1;
        }
    }
    cout<<res<<endl;
    return 0;
}