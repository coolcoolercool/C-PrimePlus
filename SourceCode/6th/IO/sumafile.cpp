/** 
 * author: zzw5005
 * date: 2019/11/9 21:41
*/

#include <iostream>
#include <fstream>  //- ֧��file IO
#include <cstdlib>  //- ֧��exit()
#include <cstring>


int main6gh8(){
    using namespace std;
    string filename;

    ifstream inFile; //- �����ļ�����Ķ���
    cout << "Enter name of data file:";
    cin >> filename;

    inFile.open("F:\\C++Code\\CPrimeplus\\6th\\IO\\" + filename);  //- ���ļ��Ͷ�������ϵ
    if(!inFile.is_open()){ //- ������ļ�ʧ��
        cout << "Cannot open the file " << filename << endl;
        cout << "Program terminating." << endl;
        exit(EXIT_FAILURE);
    }

    double value;
    double sum = 0.0;
    int count = 0; //- ��ȡ�ļ�����Ŀ�ĸ���

    inFile >> value;
    while(inFile.good()){
        ++count;
        sum += value;
        inFile >> value;
    }

    if(inFile.eof()){
        cout << "End of file reached." << endl;
    }else if(inFile.fail()){
        cout << "Input terminated by data mismatch." << endl;
    }else{
        cout << "Input terminated for unknown reason." << endl;
    }

    if(count == 0){
        cout << "No data processed." << endl;
    }else{
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }

    inFile.close();

    return 0;
}














