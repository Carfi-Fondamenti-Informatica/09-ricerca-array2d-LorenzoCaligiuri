#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char d1[20];
    char d2[10][20];
    int i=0;
    for(int j=0; j<10; j++){
        cin>>d2[j];
    }
    cin>>d1;
    if(f(d2, d1, i)==true){
        cout<<i;
    }else{
        cout<<"non presente"<<endl;
    }
    return 0;
}

