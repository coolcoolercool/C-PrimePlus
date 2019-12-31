/** 
 * author: zzw5005
 * date: 2019/11/9 16:54
*/

/*
 * switch π”√
 */

#include <iostream>
using namespace std;

void showmenu();
void report();
void comfort();

int main8khb5(){
    showmenu();
    int choice;
    cin >> choice;

    while(choice != 5){
        switch(choice){
            case 1 :
                cout << "\a\n";
                break;

            case 2 :
                report();
                break;

            case 3 :
                cout << "The boss was in all day.\n";
                break;

            case 4 :
                comfort();
                break;

            default :
                cout << "That's not a choice.\n";
        }

        showmenu();
        cin >> choice;
    }

    cout << "Bye!\n";

    return 0;
}

void showmenu(){
    cout << "Please enter 1,2,3,4 or 5:\n"
            "1) alarm\n"
            "2) report\n"
            "3) alibi\n"
            "4) comfort\n"
            "5) quit\n";
}

void report(){
    cout << "It's been an excellent week for business.\n"
            "Sales are up 120%. Expense are down 35%.\n";
}

void comfort(){
    cout << "Your employees think you are the finest CEO\n"
            "int the industry. The board of directors think\n"
            "you are the finest CEO in the industry.\n";
}

