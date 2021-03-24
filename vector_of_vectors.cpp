#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,queries,choice,data;
    cin>>size;
    vector<vector<int>>v1(size);
    cin>>queries;
    while(queries--){
        cin>>choice;
        cin>>data;
        v1[choice].push_back(data);
    }
   for(int i=0;i<3;i++)
{
    for (auto it = v1[i].begin();
         it != v1[i].end(); it++) 
   {
        // Operations to be done
        // For example to print
        cout<< *it <<" ";
        
    }
    cout<<endl;
}



    return 0;
}