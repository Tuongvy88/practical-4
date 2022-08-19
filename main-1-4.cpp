#include<iostream>

using namespace std;

void copy_doubles(double *old_array,double *new_array,int length);

int main(){
    double a[5] ={1,3,5,7,9}; 
    double b[5];
    int n =5;
    copy_doubles(a, b, n);
    for ( int i =0; i < n; i++){
        cout<< b[i] <<" ";
    }


    return 0;
}