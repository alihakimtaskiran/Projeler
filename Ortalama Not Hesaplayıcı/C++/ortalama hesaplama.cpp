#include <iostream>
using namespace std;
float notlar[]={};
int main()
{
    cout<<" BEDEN EĞİTİMİ VE SPOR "<<endl;
    cin>>notlar[0];
    cout<<" BİLGİSAYAR BİLİMİ "<<endl;
    cin>>notlar[1];
    cout<<" COĞRAFYA "<<endl;
    cin>>notlar[2];
    cout<<" DİN KÜLTÜRÜ VE AHLÂK BİLGİSİ "<<endl;
    cin>>notlar[3];
    cout<<" FELSEFE "<<endl;
    cin>>notlar[4];
    cout<<" BİYOLOJİ "<<endl;
    cin>>notlar[5];
    cout<<" FİZİK "<<endl;
    cin>>notlar[6];
    cout<<" KİMYA "<<endl;
    cin>>notlar[7];
    cout<<" MATEMATİK "<<endl;
    cin>>notlar[8];
    cout<<" GÖRSEL SANATLAR/MÜZİK "<<endl;
    cin>>notlar[9];
    cout<<" İKİNCİ YABANCI DİL "<<endl;
    cin>>notlar[10];
    cout<<" SEÇMELİ FEN BİLİMLERİ TARİHİ VE UYGULAMALARI "<<endl;
    cin>>notlar[11];
    cout<<" TARİH "<<endl;
    cin>>notlar[12];
    cout<<" TÜRK DİLİ VE EDEBİYATI "<<endl;
    cin>>notlar[13];
    cout<<" YABANCI DİL "<<endl;
    cin>>notlar[14];
    float ort(0);
    for(int i=0;i<15;i++)
    {
        ort+=notlar[i];
    }
    ort/=15;
    cout<<"Ortalama="<<ort<<endl;
    int temp;
    cin>>temp;
    return 0;                                                                                                             
}

