/** 
 * author: zzw5005
 * date: 2019/11/12 10:03
*/

/*
 * 计算排列的概率
 */

#include <iostream>
long double probability(unsigned numbers, unsigned picks);

int main8jh0(){
    using namespace std;
    double total, choices;

    cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed:\n";

    while((cin >> total >> choices) && choices <= total){
        cout << "You have one change in ";
        cout << probability(total, choices);
        cout << " of winner.\n";
        cout << "Next two numbers (q to quit):";
    }

    cout << "bye\n";

    return 0;
}

/**
 * 计算排列的概率
 * @param numbers
 * @param picks
 * @return
 */

long double probability(unsigned numbers, unsigned picks){
    long double result = 1.0;
    long double n;
    unsigned p;

    for(n = numbers, p = picks; p > 0; n--, p--){
        result = result * n / p;
    }

    return result;
}























