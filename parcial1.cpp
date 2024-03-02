#include <iostream>
using namespace std;
int main(){
    /*
    double a=0,b=0;
    for (size_t i = 0; i <= 50; i++){
        if (i%2==0){
            b=b+i; 
        }else{
            a=a+i;
        }
    }*/

    int i=0;
    while (i%2 != 1 || i <= 30){
        i=i+3;
    }
    return 0;
}