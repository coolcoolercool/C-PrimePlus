/** 
 * author: zzw5005
 * date: 2019/11/12 10:17
*/

/*
 * 使用带有数组作为形参的函数
 */
#include <iostream>
const int ArSize = 8;

int sum_arr_1(int arr[], int n);

int main0jk2(){
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};

    int sum = sum_arr_1(cookies, ArSize);
    cout << "Total cookies eaten: " << sum << "\n";

    return 0;
}

int sum_arr_1(int arr[], int n){
    int total = 0;

    for(int i = 0; i < n; i++){
        total = total + arr[i];
    }

    return total;
}





















