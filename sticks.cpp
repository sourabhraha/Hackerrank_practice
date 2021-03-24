#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n,j=0,count = 0,min = 0 ;
        cin>>n;
        vector<int>v(n,0);

        vector<int>::iterator it;

        for(int i=0; i<n; i++)
                cin>>v[i];

       for(int i=0; i<n; i++){

               min = *min_element(v.begin(),v.end());          // Finding min value of stick to cut
              if(!v.empty())
                   cout<<v.size()<<endl;                        // printing size of vector

               for(int j=0; j<v.size(); j++)
                       v[j] = v[j] - min;                       // decresing min stick length from all sticks
                
             for(int k=0; k<v.size(); k++){
                        if(v[k] <=0){
                               it = find(v.begin(), v.end(),v[k]);              
                                v.erase(it);                                    // deleting sticks and reducing vector size
                                k--;
                        }                
                }
       }

        return 0;     
}
        