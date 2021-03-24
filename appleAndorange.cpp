#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,cnt1=0,cnt2=0;
    cin>>n;
    vector<int>v(n,0);

    for(int i=0; i<n; i++)
        cin>>v[i];

    int max = v[0];
    int min = v[0];
    
    for(int j=0; j<v.size(); j++)
        {
            if(v[j] > max){
                cnt1++;
                max = v[j];
            }
            else if(v[j] < min){
                cnt2++;
                min = v[j];
            }
        }

    cout<<cnt1<<" "<<cnt2<<endl;
    return 0;
}