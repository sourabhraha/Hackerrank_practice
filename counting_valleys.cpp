#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;

    int up = 0,down = 0;
    int cnt=0;
    for(int i=0; i<s.length(); i++){

        if(s[i] == 'U')
            up++;
        else if(s[i] == 'D')
            down++;

        if(up == down)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}