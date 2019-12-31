/** 
 * author: zzw5005
 * date: 2019/11/9 21:23
*/

/*
 * 向文件中写入
 */

#include <iostream>
#include <fstream>

int main3kj9(){
    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;  //- 创建一个输出对象
    outFile.open("carinfo.txt"); //- 将输出对象与一个文建立连接

    cout << "Enter the make and model of automobile:";
    cin.getline(automobile, 50);

    cout << "Enter the model year:";
    cin >> year;
    cout << "Enter the original asking price:";
    cin >> a_price;

    d_price = 0.913 * a_price;


    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    outFile.close();
    return 0;

}












