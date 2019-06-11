/** 
 * author: zzw5005
 * date: 2019/6/11 20:46
*/

#include <iostream>
#include "studentc.h"

using namespace std;

void set(Student & sa, int n);
const int pupils = 3;
const int quizzes = 5;

int main(){
    Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};

    int i;
    for(i = 0; i < pupils; ++i){
        set(ada[i], quizzes);
    }

    cout << "\nStudent List:\n";
    for(i = 0; i < pupils; ++i){
        cout << endl << ada[i];
        cout << "average: " << ada[i].Average() << endl;
    }
    cout << "Done.\n";

    return 0;
}

void set(Student & sa, int n){
    cout << "Please enter the student's name:";
    getline(cin, sa);
    cout << "Please enter " << n << " quiz scores:\n";
    for(int i = 0; i < n; i++){
        cin >> sa[i];
    }

    while(cin.get() != '\n'){
        continue;
    }
}

















