/** 
 * author: zzw5005
 * date: 2019/11/12 14:43
*/

/*
 * ���麯����const�ؼ���
 */

#include <iostream>
const int Max = 5;

int fill_array(double arr[], int limit);
void show_array(const double arr[], int n);
void revalue(double r, double arr[], int n);

int main9mn4(){
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);

    if(size > 0){
        cout << "Enter revaluation factor: ";
        double factor;
        while(!(cin >> factor)){
            cin.clear();
            while(cin.get() != '\n'){
                continue;
            }

            cout << "Bad input; please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get(); //- Ϊ��ȡ�µ�һ����׼���������ȡ���з�
    cin.get();

    return 0;
}

int fill_array(double arr[], int limit){
    using namespace std;
    double temp;

    int i;
    for(i = 0; i< limit; i++){
        cout << "Enter value #" << (i + 1) << ":";
        cin >> temp;
        if(!cin){  //- ������ܵ�����ʧ�ܣ����粻������
            cin.clear();
            while(cin.get() != '\n'){
                continue;
            }

            cout << "Bad input; input process terminated.\n";
            break;
        }else if(temp < 0){
            break;
        }

        arr[i] = temp;
    }

    return i;
}

/**
 * ��ӡ���������ָ����Ŀ��Ԫ��
 * @param arr
 * @param n
 */
void show_array(const double arr[], int n){
    using namespace std;
    for(int i = 0; i < n; i++){
        cout << "Property #" << (i + 1) << ": $";
        cout << arr[i] << endl;
    }
}

void revalue(double r, double arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] *= r;
    }
}























