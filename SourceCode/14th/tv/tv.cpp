/** 
 * author: zzw5005
 * date: 2020/5/24 11:06
*/

#include <iostream>
#include "tv.h"

/**
 * �Ӵ�����
 * @return
 */
bool Tv::volup(){
    if(volume < MaxVal){
        volume++;
        return true;
    }else{
        return false;
    }
}

/**
 * ��С����
 * @return
 */
bool Tv::voldown(){
    if(volume > MinVal){
        volume--;
        return true;
    }else{
        return false;
    }
}

void Tv::chanup(){
    if(channel < maxChannel){
        channel++;
    }else{
        channel = 1;
    }
}

void Tv::chandown(){
    if(channel > 1){
        channel--;
    }else{ //- Ƶ����ѭ����
        channel = maxChannel;
    }
}

void Tv::settings() const{
    using std::cout;
    using std::endl;

    cout << "Tv is " << (state == Off ? "Off" : "On") << endl;
    if(state == On){
        cout << "Volume setting = " << volume << endl;
        cout << "Channel setting = " << channel << endl;
        cout << "Mode = " << (mode == Antenna ? "antenna" : "cable") << endl;
        cout << "Input = " << (input == TV ? "TV" : "DVD") << endl;
    }
}



