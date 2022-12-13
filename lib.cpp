#include "lib.h"

bool f(char d2[10][20], char d1[10],int &i){
    for(int k=0; k<20; k++){
        if(d1==d2[k]){
            return true;
        }else{
            for(int j=0; j<10; j++){
                if(d1[k]==d2[j][k]){
                    return i;
                }else{
                    i++;
                }
            }
            return false;
        }
    }
}

