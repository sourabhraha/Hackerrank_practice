#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

         vector<int>v(25,0);
         for(int i=0; i<26; i++)
            cin>>v[i];
        
        string s;
        cin>>s;
        int max = 0,tall=0,index = 0;

        for(int i=0; s[i]!='\0'; i++){
             index = s[i] - 97;
            if(tall >=  max){
                max = index;
                tall = v[index];
            }
        }
        cout<<tall*s.length();
}
        