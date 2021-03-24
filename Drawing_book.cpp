#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n,p;
        cin>>n>>p;

        int beg=1,end=n-1,beg_cnt=0,end_cnt=0;

    while(beg<p && n%2!=0){
            beg = beg+2;
            beg_cnt++;
        }
        while (end>=p && n%2==0)
        {
            end = end-2;
            end_cnt++;
        }

        cout<<min(beg_cnt,end_cnt)<<endl;
        
        return 0;     
}
        