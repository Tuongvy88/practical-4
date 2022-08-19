#include<iostream>
int max_sub_sum(int *nums,int length){
    if(length < 1) {
        return 0;
    }                                     //{1, -1, 2, 6}
    int final_sum =0;
    int max_for_now = 0;
    int negative_nums = 0;
    for ( int i = 0; i < length; i++) {         
        if(nums[i]<0){
            negative_nums++;
        }
        max_for_now +=nums[i];
        if(max_for_now > final_sum){
            final_sum = max_for_now;
        }
        if(max_for_now < 0){
            max_for_now =0;
        }
    }
    if(negative_nums == length){
        return 0;
    }
    else{
        return final_sum;           
    }


    
}