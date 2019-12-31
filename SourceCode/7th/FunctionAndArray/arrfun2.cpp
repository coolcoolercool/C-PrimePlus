/** 
 * author: zzw5005
 * date: 2019/11/12 11:02
*/

/*
 * 带有数组形参的函数
 */
#include <iostream>
const int ArSize = 8;

int sum_arr(int arr[], int n);

int main6kj9(){
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};

    std::cout << cookies << " = array address, ";
    std::cout << sizeof(cookies) << " = sizeof cookies\n";
    int sum = sum_arr(cookies, ArSize);
    std::cout << "Total cookies eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, 4);
    std::cout << "Last four eaters ate " << sum << " cookies.\n";

    return 0;
}

int sum_arr(int arr[], int n){
    int total = 0;
    std::cout << arr << " = arr, ";
    std::cout << sizeof(arr) << " = sizeof arr\n";

    for(int i = 0; i< n; i++){
        total = total + arr[i];
    }

    return total;
}












