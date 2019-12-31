/** 
 * author: zzw5005
 * date: 2019/11/9 16:28
*/

#include <iostream>
#include <cctype>  //- 包含了字符数组的原型

int main27h(){
    using namespace std;

    cout << "Enter text for analysis, and type @ to terminate input";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0; //- 标点符号
    int others = 0;

    cin.get(ch);

    while(ch != '@'){
        if(isalpha(ch)){
            chars++;
        }else if(isspace(ch)){
            whitespace++;
        }else if(isdigit(ch)){
            digits++;
        }else if(ispunct(ch)){
            punct++;;
        }else{
            others++;
        }

        cin.get(ch);
    }

    cout << chars << " letters, " << whitespace << " whitespace, "
         << digits << " digits, "
         << punct << " punctuations, "
         << others << " others.\n";

    return 0;
}
















