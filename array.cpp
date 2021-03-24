#include<iostream>
using namespace std;

int main(){
    int sum[4][5];
    int maxsum = -63;
    int data[6][6];
    int i,j;
    
    for(i = 0; i<6; i++){
        for(j = 0; j<6; j++){
            cin>>data[i][j];
        }
    }

    for(i = 0; i<6; i++){
        for(j = 0; j<6; j++){
            sum[i][j] = data[i][j] + data[i][j+1] + data[i][j+2] + data[i+1][j+1] + data[i+2][j] + data[i+2][j+1] + data[i+2][j+2];
        }
    }
    for(i = 0; i<4; i++){
        for(j = 0; j<4; j++){
            if(sum[i][j] > maxsum){
                maxsum = sum[i][j];
            }
        }
    }
    cout<<maxsum;
    return 0;
}
