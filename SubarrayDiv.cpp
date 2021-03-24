#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0; i<n; i++)
        cin>>v[i];
        
    int d,m;
    cin>>d>>m;
    
    int cnt = 0;

    vector<int>::iterator it;
    
    for(it = v.begin(); it!=v.end(); it++){
        
        if(d == accumulate(it,it+m,0))
            cnt++;
        
    }

    cout<<cnt<<endl;
    
    return 0;
}
