#include<bits/stdc++.h>
using namespace std;

int main(){
    int pos;
    int n=0,lastAnswer=0,y=0,q,q_type,x;
    cin>>n>>q;
    vector<vector<int>>seq(n);
    vector<int>res;
    vector<vector<int>>::iterator i1;

    while(q--){
        cin>>q_type>>x>>y;
        if(q_type==1){
            pos = ((x^lastAnswer)%n);
            seq[pos].push_back(y); 
        }
        else
        {
             pos = ((x^lastAnswer)%n);
             lastAnswer = seq[pos][y%seq[pos].size()];
             cout<<lastAnswer<<endl;   
        }
        
    }


    return 0;
}