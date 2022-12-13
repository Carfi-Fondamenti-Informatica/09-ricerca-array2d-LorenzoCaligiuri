#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char d1[20];
    char d2[10][20];
    int i=0;
    cout<<"inserisci d2"<<endl;
    for(int j=0; j<10; j++){
        cin>>d2[j];
    }
    cout<<"inserisci d1"<<endl;
    cin>>d1;
    if(f(d2, d1, i)==true){
        cout<<i+1;
    }else{
        cout<<"non presente"<<endl;
    }
    return 0;
}

