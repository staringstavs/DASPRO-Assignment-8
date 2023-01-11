// JUDUL
// Gejala dan Penyakit
// Oleh Masayoshi Suryavanditya
// A11.2022.14005
// 7-10-2022
// Bismillah Jalan

#include <iostream>
using namespace std;
// KAMUS
char p1;
char p2;
char p3;
char p4;
char p5;
char ulang;

// DESKRIPSI
int main()
{
    cout << "Pasien mohon menjawab sesuai keluhan yang dirasakan" << endl;
    cout << endl;
    cout << "+--------------------------| G E J A L A |----------------------------+" << endl;
    cout << "|                                                                     |" << endl;
    cout << "|   +Pusing      +Panas     +Sesak Nafas     +Mules      +Flu&Batuk   |" << endl;
    cout << "|                                                                     |" << endl;
    cout << "+---------------------------------------------------------------------+" << endl;
    cout << endl;

    cout << "Kepala terasa pusing ? (y/n) = ";
    cin >> p1;
    toupper(p1);
    cout << "Badan terasa panas ? (y/n) = ";
    cin >> p2;
    toupper(p2);
    cout << "Sesak saat bernafas ? (y/n) = ";
    cin >> p3;
    toupper(p3);
    cout << "Terasa mules ? (y/n) = ";
    cin >> p4;
    toupper(p4);
    cout << "Mendapati flu dan batuk ? (y/n) = ";
    cin >> p5;
    toupper(p5);
    cout << endl;

    if (p1 == 'y' && p2 == 'y' && p3 == 'y' && p4 == 'y' && p5 == 'n')
    {
        cout << "INI MERUPAKAN GEJALA RADANG PARU-PARU, SEGERA HUBUNGI DOKTER!";
    }
    else

        if (p1 == 'y' && p2 == 'y' && p3 == 'y' && p4 == 'n' && p5 == 'y')
    {
        cout << "INI MERUPAKAN GEJALA COVID-19, SEGERA LAKUKAN PCR!";
    }
    else

        if (p1 == 'y' && p2 == 'y' && p3 == 'n' && p4 == 'y' && p5 == 'y')
    {
        cout << "INI MERUPAKAN GEJALA MAAGH & INFLUENZA, SEGERA BELI OBATNYA!";
    }
    else

        if (p1 == 'y' && p2 == 'n' && p3 == 'y' && p4 == 'y' && p5 == 'y')
    {
        cout << "INI MERUPAKAN GEJALA BRONKITIS, SEGERA HUBUNGI DOKTER!";
    }
    else

        if (p1 == 'n' && p2 == 'y' && p3 == 'y' && p4 == 'y' && p5 == 'y')
    {
        cout << "INI MERUPAKAN GEJALA ASTHMA, SEGERA HUBUNGI DOKTER!";
    }
    else

        if (p1 == 'n' && p2 == 'n' && p3 == 'n' && p4 == 'n' && p5 == 'y')
    {
        cout << "INI MERUPAKAN GEJALA INFLUENZA, SEGERA BELI OBATNYA!";
    }
    else

        if (p1 == 'n' && p2 == 'n' && p3 == 'n' && p4 == 'y' && p5 == 'n')
    {
        cout << "INI MERUPAKAN GEJALA MAAGH, SEGERA BELI OBATNYA!";
    }
    else

        if (p1 == 'n' && p2 == 'n' && p3 == 'y' && p4 == 'n' && p5 == 'n')
    {
        cout << "ANDA TERKENA ASTHMA";
    }
    else

        if (p1 == 'n' && p2 == 'y' && p3 == 'n' && p4 == 'n' && p5 == 'n')
    {
        cout << "ANDA TERKENA PENYAKIT DEMAM";
    }
    else

        if (p1 == 'y' && p2 == 'n' && p3 == 'n' && p4 == 'n' && p5 == 'n')
    {
        cout << "ANDA TERLALU BANYAK PIKIRAN";
    }
    else

        if (p1 == 'y' && p2 == 'y' && p3 == 'n' && p4 == 'n' && p5 == 'n')
    {
        cout << "ANDA MASUK ANGIN, BIKIN KOPI SAJA";
    }
    else

        if (p1 == 'y' && p2 == 'y' && p3 == 'y' && p4 == 'n' && p5 == 'n')
    {
        cout << "UANG ANDA HABIS, MAKANYA ANDA SAKIT HAHAHA";
    }
    else

        if (p1 == 'y' && p2 == 'y' && p3 == 'n' && p4 == 'y' && p5 == 'y')
    {
        cout << "INI MERUPAKAN GEJALA DEMAM BERDARAH, SEGERA HUBUNGI DOKTER!";
    }
    else

        if (p1 == 'n' && p2 == 'n' && p3 == 'y' && p4 == 'y' && p5 == 'y')
    {
        cout << "ANDA TERKENA ASTHMA & INFLUENZA";
    }
    else

        if (p1 == 'n' && p2 == 'n' && p3 == 'n' && p4 == 'n' && p5 == 'n')
    {
        cout << "ANDA SEHAT, SILAHKAN JAJAN SEPUASNYA!" << endl;
    }
    else

        if (p1 == 'y' && p2 == 'y' && p3 == 'y' && p4 == 'y' && p5 == 'y')
    {
        cout << "WADUH SEMANGAT YA, MUNGKIN SISA 2 HARI HEHE" << endl;
    }

    else
    {
        cout << "Gejala Tidak Terdeteksi!";
    }

    return 0;
}
