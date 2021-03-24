#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l,r;
    cin>>l>>r;

    vector<int>v;

    for(int i=l; i<=r; i++){
        for(int j=i; j<=r; j++)
            {
                v.push_back(i^j);
            }
    }
    cout<<*max_element(v.begin(),v.end())<<endl;
    
    return 0;
}
