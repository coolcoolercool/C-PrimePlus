/** 
 * author: zzw5005
 * date: 2020/5/23 21:35
*/

#ifndef CPRIMEPLUS_TV_H
#define CPRIMEPLUS_TV_H

class Tv{
public:
    friend class Remote;  //- ��Ԫ��
    enum{Off, On};
    enum{MinVal, MaxVal = 20};
    enum{Antenna, Cable};
    enum{TV, DVD};

    Tv(int s = Off, int mc = 125) :
        state(s), volume(5), maxChannel(mc), channel(2), mode(Cable), input(TV){};

    void onoff(){
        state == (state == On) ? Off : On;
    }
    bool ison() const{
        return state == On;
    }
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode(){
        mode = (mode == Antenna) ? Cable : Antenna;
    }
    void set_input(){
        input = (input == TV) ? DVD : TV;
    }
    void settings() const;

private:
    int state;       //- ���ӻ��Ŀ���״̬
    int volume;      //- ��������
    int maxChannel;  //- ����Ƶ����
    int channel;     //- Ƶ������
    int mode;        //- ���ߵ��ӻ����ߵ���ģʽ
    int input;       //- TV��г��A/V����

};

class Remote{
private:
    int mode;

public:
    Remote(int m = Tv::TV) : mode(m){};
    bool volup(Tv& t){
        return t.volup();
    }
    bool voldown(Tv& t){
        return t.voldown();
    }
    void onoff(Tv& t){
        return t.onoff();
    }
    void chanup(Tv& t){
        return t.chanup();
    }
    void chandown(Tv& t){
        return t.chandown();
    }
    void set_chan(Tv& t, int c){
        t.channel = c;
    }
    void set_mode(Tv& t){
        t.set_mode();
    }
    void set_input(Tv& t){
        t.set_input();
    }
};

#endif //CPRIMEPLUS_TV_H
