
#include<iostream>

using namespace std;

int max_sub_sum(int *nums,int length) ;

int main() {
    int num[10]={ 11, -23, 54, 16, -23, 48, 77, -3, -63, 84 };
    std::cout<<max_sub_sum(num,10)<<std::endl;

    return 0;
}