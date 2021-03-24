#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,val,size;
    vector<int>data;
    cin>>n;
    size = n;
    while(n--){
        cin>>val;
        data.push_back(val);
    }
    for(int i = 0; i<size ; i++){
        if(data[i] < 38)
            cout<<data[i]<<endl;
        else{
            int next;
            next = data[i];
            while(next%5 != 0)
                next++;
            (next - data[i]) < 3?cout<<next<<endl:cout<<data[i]<<endl;
        }
    }

}
