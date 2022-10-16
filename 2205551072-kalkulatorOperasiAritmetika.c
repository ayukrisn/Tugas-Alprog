//Nama   : I Gusti Ayu Krisna Kusuma Dewi
//NIM    : 2205551072
//Matkul : Algoritma dan Pemrograman C


#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <memory.h>

bool getInt(int*target);
bool getFloat(float*target);
bool getChar(char*target);
void flushIn();
float luasPersegi(float s);
float kllPersegi(float s);
float luasPersegiPanjang(float p, float l);
float kllPersegiPanjang(float p, float l);
float luasTrapesium(float a, float b, float t);
float kllTrapesium(float a, float b, float t, float m);
float kllSegitiga(float a, float b, float c);
float luasSegitiga(float a, float b, float c, float m);
float luasLingkaran(float r);
float kllLingkaran(float r);
float lpBalok(float p, float l, float t);
float volBalok(float p, float l, float t);
float volLimas(float a, float t, float s);
float lpLimas(float a, float s);
float volBola(float r);
float lpBola(float r);
float volKerucut(float r, float t);
float lpKerucut(float r, float s);
float volTabung(float r, float t);
float lpTabung(float r, float t);
float beda(float x, float y);
float Un(float a, float b, int n);
float Sn(float a, float b, int n);
float rasio (float x, float y);
float sukuN(float r, float a, int n);
float jmlsukuN(float a, float r, int n);
float debit (float v, float w);
float volume(float d, float w);
float waktu(float d, float v);

int main()
{
    menu();
    return 0;
}

void menu()
 {
    int pilihanMenu = 0;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                         P R O G R A M  K A M U S                     ||\n");
    printf("\t\t||                   O P E R A S I  A R I T M A T I K A                 ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t||                     Daftar Rumus Operasi Aritmatika                  ||\n");
    printf("\t\t|| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  ||\n");
    printf("\t\t|| [1] Keliling dan Luas Bangun Datar                                   ||\n");
    printf("\t\t|| [2] Luas Permukaan dan Volume Bangun Ruang                           ||\n");
    printf("\t\t|| [3] Barisan dan Deret Aritmetika                                     ||\n");
    printf("\t\t|| [4] Barisan dan Deret Geometri                                       ||\n");
    printf("\t\t|| [5] Debit, Waktu, dan Volume Air                                     ||\n");
    printf("\t\t|| [0] Keluar                                                           ||\n");
    printf("\t\t||______________________________________________________________________||\n");

    printf("\n\t\tPilih rumus operasi aritmatika yang diinginkan: ");
    if (getInt(&pilihanMenu)){
         switch (pilihanMenu)
         {
            case 1:
                system("cls");
                menuBangunDatar();
                break;
            case 2:
                system("cls");
                menuBangunRuang();
                break;
            case 3:
                system("cls");
                menuBarisArit();
                break;
            case 4:
                system("cls");
                menuBarisGeo();
                break;
            case 5:
                system("cls");
                menuDebit();
                break;
            case 0:
                keluar();
                break;
            default:
                printf("\n\t\tPilihan Anda salah. Silahkan coba lagi (dimulai dalam 2 detik).");
                inputSalah();
                menu();
         }
    } else {
        inputSalah();
        menu();}
 }


void menuBangunDatar()
 {
    int pilBangunDatar = 0;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                       R U M U S  O P E R A S I                       ||\n");
    printf("\t\t||                        B A N G U N  D A T A R                        ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| [1] Keliling dan Luas Persegi                                        ||\n");
    printf("\t\t|| [2] Keliling dan Luas Persegi Panjang                                ||\n");
    printf("\t\t|| [3] Keliling dan Luas Trapesium                                      ||\n");
    printf("\t\t|| [4] Keliling dan Luas Segitiga                                       ||\n");
    printf("\t\t|| [5] Keliling dan Luas Lingkaran                                      ||\n");
    printf("\t\t|| [0] Kembali ke menu                                                  ||\n");
    printf("\t\t||______________________________________________________________________||\n");

    printf("\n\t\tPilih rumus operasi aritmatika yang diinginkan: ");
    if (getInt(&pilBangunDatar)){
         switch (pilBangunDatar)
         {
            case 1:
                system("cls");
                persegi();
                break;
            case 2:
                system("cls");
                persegiPanjang();
                break;
            case 3:
                system("cls");
                trapesium();
                break;
            case 4:
                system("cls");
                segitiga();
                break;
            case 5:
                system("cls");
                lingkaran();
                break;
            case 0:
                system("cls");
                menu();
                break;
            default:
                printf("\n\t\tPilihan Anda salah. Silahkan coba lagi (dimulai dalam 2 detik).");
                inputSalah();
                menuBangunDatar();
         }
    } else {
        inputSalah();
        menuBangunDatar();}
 }


void menuBangunRuang()
 {
    int pilBangunRuang = 0;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                       R U M U S  O P E R A S I                       ||\n");
    printf("\t\t||                        B A N G U N  R U A N G                        ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| [1] Volume dan Luas Permukaan Balok                                  ||\n");
    printf("\t\t|| [2] Volume dan Luas Permukaan Limas Persegi                          ||\n");
    printf("\t\t|| [3] Volume dan Luas Permukaan Bola                                   ||\n");
    printf("\t\t|| [4] Volume dan Luas Permukaan Kerucut                                ||\n");
    printf("\t\t|| [5] Volume dan Luas Permukaan Tabung                                 ||\n");
    printf("\t\t|| [0] Kembali ke menu                                                  ||\n");
    printf("\t\t||______________________________________________________________________||\n");

    printf("\n\t\tPilih rumus operasi aritmatika yang diinginkan: ");
    if (getInt(&pilBangunRuang)){
         switch (pilBangunRuang)
         {
            case 1:
                system("cls");
                balok();
                break;
            case 2:
                system("cls");
                limasPersegi();
                break;
            case 3:
                system("cls");
                bola();
                break;
            case 4:
                system("cls");
                kerucut();
                break;
            case 5:
                system("cls");
                tabung();
                break;
            case 0:
                system("cls");
                menu();
                break;
            default:
                printf("\n\t\tPilihan Anda salah. Silahkan coba lagi (dimulai dalam 2 detik).");
                inputSalah();
                menuBangunRuang();
         }
    } else {
        inputSalah();
        menuBangunRuang();}
 }


 void menuBarisArit()
 {
    int pilBarisArit = 0;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                       R U M U S  O P E R A S I                       ||\n");
    printf("\t\t||            B A R I S  D A N  D E R E T  A R I T M E T I K A          ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| [1] Beda Barisan Aritmetika (b)                                      ||\n");
    printf("\t\t|| [2] Suku ke-n dan Jumlah n suku pertama                              ||\n");
    printf("\t\t|| [0] Kembali ke menu                                                  ||\n");
    printf("\t\t||______________________________________________________________________||\n");

    printf("\n\t\tPilih rumus operasi baris dan deret aritmatika yang diinginkan: ");
    if (getInt(&pilBarisArit)){
         switch (pilBarisArit)
         {
            case 1:
                system("cls");
                bedaBA();
                break;
            case 2:
                system("cls");
                sukuDanJumlahNBA();
                break;
            case 0:
                system("cls");
                menu();
                break;
            default:
                printf("\n\t\tPilihan Anda salah. Silahkan coba lagi (dimulai dalam 2 detik).");
                inputSalah();
                menuBarisArit();
         }
    } else {
        inputSalah();
        menuBarisArit();}
 }


 void menuBarisGeo()
 {
    int pilBarisGeo = 0;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                       R U M U S  O P E R A S I                       ||\n");
    printf("\t\t||             B A R I S  D A N  D E R E T  G E O M E T R I             ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| [1] Rasio Barisan Geometri (r)                                       ||\n");
    printf("\t\t|| [2] Nilai Suku ke-n Barisan Geometri                                 ||\n");
    printf("\t\t|| [3] Jumlah Suku ke-n Barisan Geometri                                ||\n");
    printf("\t\t|| [0] Kembali ke menu                                                  ||\n");
    printf("\t\t||______________________________________________________________________||\n");

    printf("\n\t\tPilih rumus operasi baris dan deret geometri yang diinginkan: ");
    if (getInt(&pilBarisGeo)){
         switch (pilBarisGeo)
         {
            case 1:
                system("cls");
                rasioBG();
                break;
            case 2:
                system("cls");
                sukuNBG();
                break;
            case 3:
                system("cls");
                jumlahSukuNBG();
                break;
            case 0:
                system("cls");
                menu();
                break;
            default:
                printf("\n\t\tPilihan Anda salah. Silahkan coba lagi (dimulai dalam 2 detik).");
                inputSalah();
                menuBarisGeo();
         }
    } else {
        inputSalah();
        menuBarisGeo();}
 }


void menuDebit()
 {
    int pilDebit = 0;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                       R U M U S  O P E R A S I                       ||\n");
    printf("\t\t||           D E B I T , W A K T U , D A N  V O L U M E   A I R         ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| [1] Menghitung Debit Air                                             ||\n");
    printf("\t\t|| [2] Menghitung Waktu Air                                             ||\n");
    printf("\t\t|| [3] Menghitung Volume Air                                            ||\n");
    printf("\t\t|| [0] Kembali ke menu                                                  ||\n");
    printf("\t\t||______________________________________________________________________||\n");

    printf("\n\t\tDalam program ini, satuan yang digunakan adalah liter dan detik. ");
    printf("\n\t\tPilih rumus operasi aritmatika yang diinginkan: ");
    if (getInt(&pilDebit)){
         switch (pilDebit)
         {
            case 1:
                system("cls");
                debitAir();
                break;
            case 2:
                system("cls");
                waktuAir();
                break;
            case 3:
                system("cls");
                volumeAir();
                break;
            case 0:
                menu();
                break;
            default:
                printf("\n\t\tPilihan Anda salah. Silahkan coba lagi (dimulai dalam 2 detik).");
                inputSalah();
                menuDebit();
         }
    } else {
        inputSalah();
        menuDebit();}
 }



void persegi()
{
    float sisiPersegi;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||           K E L I L I N G  D A N  L U A S  P E R S E G I             ||\n");
    printf("\t\t||                   Masukkan Nilai yang Dibutuhkan                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan nilai sisi persegi: ");
    if(getFloat(&sisiPersegi)){

        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai luas persegi       : %.2f                                    \n", luasPersegi(sisiPersegi));
        printf("\t\t   Nilai keliling persegi   : %.2f                                    \n", kllPersegi(sisiPersegi));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();

    } else {
            inputSalah();
            persegi();
        }
}

float luasPersegi(float s)
{
    return pow(s, 2);
}
float kllPersegi(float s)
{
    return 4*s;
}




void persegiPanjang()
{
    float panjangPersegi;
    float lebarPersegi;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||    K E L I L I N G  D A N  L U A S  P E R S E G I  P A N J A N G     ||\n");
    printf("\t\t||                   Masukkan Nilai yang Dibutuhkan                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan nilai panjang persegi : ");
    if(getFloat(&panjangPersegi)){
        printf("\t\t Masukkan nilai lebar persegi  : ");
        if(getFloat(&lebarPersegi)){
        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai luas persegi panjang       : %.2f \n", luasPersegiPanjang(panjangPersegi, lebarPersegi));
        printf("\t\t   Nilai keliling persegi panjang   : %.2f \n", kllPersegiPanjang(panjangPersegi, lebarPersegi));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();
            } else {
                ppSalah(); }
    } else {
            ppSalah();
        }
}

float luasPersegiPanjang(float p, float l)
{
    return p*l;
}
float kllPersegiPanjang(float p, float l)
{
    return 2*(p+l);
}

void ppSalah()
{
    inputSalah();
    persegiPanjang();
}


void trapesium()
{
    float alasAtas;
    float alasBawah;
    float tinggi;
    float sisiMiring;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||            K E L I L I N G  D A N  L U A S  T R A P E S I U M        ||\n");
    printf("\t\t||                   Masukkan Nilai yang Dibutuhkan                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan nilai sisi atas trapesium : ");
    if(getFloat(&alasAtas)){
        printf("\t\t Masukkan sisi bawah trapesium  : ");
        if(getFloat(&alasBawah)){
            printf("\t\t Masukkan tinggi trapesium  : ");
            if(getFloat(&tinggi)){
                printf("\t\t Masukkan sisi miring trapesium  : ");
                if(getFloat(&sisiMiring)){

        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai luas trapesium       : %.2f \n", luasTrapesium(alasAtas, alasBawah, tinggi));
        printf("\t\t   Nilai keliling trapesium   : %.2f \n", kllTrapesium(alasAtas, alasBawah, tinggi, sisiMiring));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();

                } else {
                    tSalah(); }
            } else {
                tSalah(); }
        } else {
            tSalah(); }
    } else {
            tSalah();
        }
}
float luasTrapesium(float a, float b, float t)
{
    return ((a+b)*t*0.5);
}
float kllTrapesium(float a, float b, float t, float m)
{
    return (a+b+2*m);
}

void tSalah()
{
    inputSalah();
    trapesium();
}


void segitiga()
{
    float sisiA;
    float sisiB;
    float sisiC;
    float semiParameter;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||            K E L I L I N G  D A N  L U A S  S E G I T I G A          ||\n");
    printf("\t\t||                   Masukkan Nilai yang Dibutuhkan                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan nilai sisi a segitiga : ");
    if(getFloat(&sisiA)){
        printf("\t\t Masukkan nilai sisi b segitiga  : ");
        if(getFloat(&sisiB)){
            printf("\t\t Masukkan nilai sisi c segitiga  : ");
            if(getFloat(&sisiC)){
                if(sisiA+sisiB>sisiC && sisiA+sisiC>sisiB && sisiB+sisiC>sisiA){
        semiParameter = (kllSegitiga(sisiA,sisiB,sisiC))/2;

        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai luas segitiga       : %.2f \n", luasSegitiga(sisiA,sisiB,sisiC,semiParameter));
        printf("\t\t   Nilai keliling segitiga   : %.2f \n", kllSegitiga(sisiA,sisiB,sisiC));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();

                } else {
                    printf("\t\tNilai sisi tidak sesuai dengan aturan segitiga. Coba lagi.");
                    sSalah(); }
            } else {
                sSalah(); }
        } else {
            sSalah(); }
    } else {
            sSalah();
        }
}

float kllSegitiga(float a, float b, float c)
{
    return (a+b+c);
}
float luasSegitiga(float a, float b, float c, float m)
{
    return (sqrt(m*(m-a)*(m-b)*(m-c)));
}

void sSalah()
{
    inputSalah();
    segitiga();
}



void lingkaran()
{
    float jariJari;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||            K E L I L I N G  D A N  L U A S  L I N G K A R A N        ||\n");
    printf("\t\t||                   Masukkan Nilai yang Dibutuhkan                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan nilai jari-jari lingkaran : ");
    if(getFloat(&jariJari)){

        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai luas lingkaran       : %.2f \n", luasLingkaran(jariJari));
        printf("\t\t   Nilai keliling lingkaran   : %.2f \n", kllLingkaran(jariJari));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();

    } else {
            lSalah();
        }
}
float luasLingkaran(float r)
{
    return(3.14*pow(r,2));
}
float kllLingkaran(float r)
{
    return(3.14*2*r);
}

void lSalah()
{
    inputSalah();
    lingkaran();
}


void balok()
{
    float panjang;
    float lebar;
    float tinggi;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                   V O L U M E  D A N  L P  B A L O K                 ||\n");
    printf("\t\t||                     Masukkan Nilai yang Dibutuhkan                   ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan nilai panjang balok : ");
    if(getFloat(&panjang)){
        printf("\t\t Masukkan nilai lebar balok  : ");
        if(getFloat(&lebar)){
            printf("\t\t Masukkan nilai tinggi balok  : ");
            if(getFloat(&tinggi)){

        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai volume balok           : %.2f \n", volBalok(panjang, lebar, tinggi));
        printf("\t\t   Nilai luas permukaan balok   : %.2f \n", lpBalok(panjang, lebar, tinggi));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();
            } else {
                bSalah(); }
        } else {
            bSalah(); }
    } else {
        bSalah();
        }
}
float volBalok(float p, float l, float t)
{
    return(p*l*t);
}
float lpBalok(float p, float l, float t)
{
    return(2*(p*l+p*t+l*t));
}

void bSalah()
{
    inputSalah();
    balok();
}


void limasPersegi()
{
    float sisiAlasL;
    float tinggiL;
    float sisiSegitigaL;

    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||            V O L U M E  D A N  L P  L I M A S  P E R S E G I         ||\n");
    printf("\t\t||                   Masukkan Nilai yang Dibutuhkan                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan sisi alas limas persegi: ");
    if(getFloat(&sisiAlasL)){
        printf("\t\t Masukkan tinggi limas persegi: ");
        if(getFloat(&tinggiL)){
            printf("\t\t Masukkan tinggi sisi segitiga limas persegi: ");
            if(getFloat(&sisiSegitigaL)){

        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai volume limas persegi           : %.2f \n", volLimas(sisiAlasL,tinggiL,sisiSegitigaL));
        printf("\t\t   Nilai luas permukaan limas persegi   : %.2f \n", lpLimas(sisiAlasL,sisiSegitigaL));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();
            } else {
                lPSalah(); }
        } else {
            lPSalah(); }
    } else {
            lPSalah();
        }
}
float volLimas(float a, float t, float s)
{
    return(a*a*t*(1.0/3.0));
}
float lpLimas(float a, float s)
{
    return((a*a)+(2*a*s));
}
void lPSalah()
{
    inputSalah();
    limasPersegi();
}


void bola()
{
    float jariJari;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                    V O L U M E  D A N  L P  B O L A                  ||\n");
    printf("\t\t||                     Masukkan Nilai yang Dibutuhkan                   ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan nilai jari-jari bola : ");
    if(getFloat(&jariJari)){
        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai volume bola           : %.2f \n", volBola(jariJari));
        printf("\t\t   Nilai luas permukaan bola   : %.2f \n", lpBola(jariJari));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();

    } else {
            bolaSalah();
        }
}

float volBola(float r)
{
    return((4.0/3.0)*3.14*pow(r,3));
}
float lpBola(float r)
{
    return(3.14*4*pow(r,2));
}

void bolaSalah()
{
    inputSalah();
    bola();
}


void kerucut()
{
    float jariJari;
    float tinggiK;
    float s; //garis pelukis

    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                V O L U M E  D A N  L P  K E R U C U T                ||\n");
    printf("\t\t||                   Masukkan Nilai yang Dibutuhkan                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan nilai jari-jari alas kerucut : ");
    if(getFloat(&jariJari)){
        printf("\t\t Masukkan nilai tinggi kerucut: ");
        if(getFloat(&tinggiK)){
            printf("\t\t Masukkan nilai garis pelukis kerucut: ");
            if(getFloat(&s)){

        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai volume kerucut            : %.2f \n", volKerucut(jariJari, tinggiK));
        printf("\t\t   Nilai luas permukaan kerucut    : %.2f \n", lpKerucut(jariJari,s));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();
            } else {
                kSalah(); }
        } else {
            kSalah(); }
    } else {
        kSalah();
        }
}
float volKerucut(float r, float t)
{
    return(3.14*pow(r,2)*t*(1.0/3.0));
}
float lpKerucut(float r, float s)
{
    return(3.14*r*(r+s));
}
void kSalah()
{
    inputSalah();
    kerucut();
}


void tabung()
{
    float jariJari;
    float tinggiT;

    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                 V O L U M E  D A N  L P  T A B U N G                 ||\n");
    printf("\t\t||                   Masukkan Nilai yang Dibutuhkan                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan nilai jari-jari alas tabung : ");
    if(getFloat(&jariJari)){
        printf("\t\t Masukkan nilai tinggi tabung: ");
        if(getFloat(&tinggiT)){

        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai volume tabung            : %.2f \n", volTabung(jariJari,tinggiT));
        printf("\t\t   Nilai luas permukaan tabung    : %.2f \n", lpTabung(jariJari,tinggiT));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();

        } else {
            TSalah(); }
    } else {
        TSalah();
        }
}
float volTabung(float r, float t)
{
    return(3.14*pow(r,2)*t);
}
float lpTabung(float r, float t)
{
    return(2*3.14*r*(r+t));
}

void TSalah()
{
    inputSalah();
    tabung();
}


void bedaBA()
{
    float sukuKeN, sukuSblmN;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                B E D A  B A R I S  A R I T M E T I K A               ||\n");
    printf("\t\t||                    Masukkan Nilai yang Dibutuhkan                    ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Panduan: Dalam rumus ini dibutuhkan 2 nilai, yaitu suku ke n dan suku sebelum n (n-1)");
    printf("\n\t\t          Misalkan: suku ke-3 dan suku ke-2");
    printf("\n\n\t\t Masukkan nilai suku ke n: ");
    if(getFloat(&sukuKeN)){
        printf("\t\t Masukkan nilai suku ke n-1: ");
        if(getFloat(&sukuSblmN)) {
        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai beda baris aritmetika : %.2f\n", beda(sukuKeN,sukuSblmN));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();
        } else
            {
                bBASalah();
            }
    } else {
            bBASalah();
        }
}
float beda(float x, float y)
{
    return(x-y);
}

void bBASalah()
{
    inputSalah();
    bedaBA();
}


void sukuDanJumlahNBA()
{
    int n;
    float a;
    float beda;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||    S U K U  D A N  J U M L A H  N  B A R I S  A R I T M E T I K A    ||\n");
    printf("\t\t||                    Masukkan Nilai yang Dibutuhkan                    ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan nilai suku pertama: ");
    if(getFloat(&a)){
        printf("\t\t Masukkan nilai beda baris aritmetika: ");
        if(getFloat(&beda)) {
        printf("\t\t Masukkan urutan suku ke-n : ");
        if(getInt(&n)){

        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai suku ke %d baris aritmetika        : %.2f\n", n, Un(a, beda, n));
        printf("\t\t   Nilai jumlah suku ke %d baris aritmetika : %.2f\n", n, Sn(a, beda, n));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();
            } else {
                NSalah(); }
        } else {
            NSalah(); }
    } else {
        NSalah(); }
}

float Un(float a, float b, int n)
{
    return(a+(n-1)*b);
}
float Sn(float a, float b, int n)
{
    return(n/2*(a+Un(a,b,n)));
}

void NSalah()
{
    inputSalah();
    sukuDanJumlahNBA();
}


void rasioBG()
{
    float sukuKeN;
    float sukuSblmN;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                 R A S I O  B A R I S  G E O M E T R I                ||\n");
    printf("\t\t||                    Masukkan Nilai yang Dibutuhkan                    ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Panduan: Dalam rumus ini dibutuhkan 2 nilai, yaitu suku ke n dan suku sebelum n (n-1)");
    printf("\n\t\t          Misalkan: suku ke-3 dan suku ke-2");
    printf("\n\n\t\t Masukkan nilai suku ke n: ");
    if(getFloat(&sukuKeN)){
        printf("\t\t Masukkan nilai suku ke n-1: ");
        if(getFloat(&sukuSblmN)) {
        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai rasio baris geometri : %.2f\n", rasio(sukuKeN,sukuSblmN));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();
        } else
            {
                rBGSalah();
            }
    } else {
            rBGSalah();
        }
}

float rasio (float x, float y)
{
    return(x/y);
}
void rBGSalah()
{
    inputSalah();
    rasioBG();
}


void sukuNBG()
{
    float a;
    float rasio;
    int n;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||          N I L A I  S U K U  K E - N  B A R I S  G E O M E T R I     ||\n");
    printf("\t\t||                   Masukkan Nilai yang Dibutuhkan                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan urutan suku ke n : ");
    if(getInt(&n)){
        printf("\t\t Masukkan nilai suku pertama : ");
        if(getFloat(&a)) {
            printf("\t\t Masukkan nilai rasio baris geometri : ");
            if(getFloat(&rasio)) {
        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai suku ke-%d baris geometri : %.2f\n", n, sukuN(rasio, a, n));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();
           } else {
                sukuBGSalah(); }
        } else {
            sukuBGSalah();
            }
    } else {
        sukuBGSalah(); }
}

float sukuN(float r, float a, int n)
{
    return(a*pow(r,(n-1)));
}

void sukuBGSalah()
{
    inputSalah();
    sukuNBG();
}


void jumlahSukuNBG()
{
    float a;
    float rasio;
    int n;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||        J U M L A H  S U K U  K E - N  B A R I S  G E O M E T R I     ||\n");
    printf("\t\t||                   Masukkan Nilai yang Dibutuhkan                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan urutan suku ke n : ");
    if(getInt(&n)){
        printf("\t\t Masukkan nilai suku pertama : ");
        if(getFloat(&a)) {
            printf("\t\t Masukkan nilai rasio baris geometri : ");
            if(getFloat(&rasio)) {
        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Jumlah suku ke-%d baris geometri : %.2f\n", n, jmlsukuN(a, rasio, n));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();
           } else {
                jmlsukuBGSalah(); }
        } else {
            jmlsukuBGSalah();
            }
    } else {
        jmlsukuBGSalah(); }
}

float jmlsukuN(float a, float r, int n)
{
    float hasil;
     if(r>1)
        {
            hasil = a*(pow(r,n)-1)/(r-1);
        } else {
            hasil = a*(1-pow(r,n))/(1-r);
        }
    return (hasil);
}
void jmlsukuBGSalah()
{
    inputSalah();
    jumlahSukuNBG();
}


void debitAir()
{
    float waktu;
    float volume;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                M E N G H I T U N G  D E B I T  A I R                 ||\n");
    printf("\t\t||                   Masukkan Nilai yang Dibutuhkan                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan nilai waktu (dalam satuan detik): ");
    if(getFloat(&waktu)){
        printf("\t\t Masukkan nilai volume (dalam satuan liter): ");
        if(getFloat(&volume)){

        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai debit air       : %.2f liter/detik\n", debit(volume, waktu));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();
            } else {
                deSalah(); }
    } else {
            deSalah();
        }
}

float debit (float v, float w)
{
    return(v/w);
}
void deSalah()
{
    inputSalah();
    debitAir();
}


void volumeAir()
{
    float waktu;
    float debit;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                M E N G H I T U N G  V O L U M E  A I R               ||\n");
    printf("\t\t||                   Masukkan Nilai yang Dibutuhkan                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan nilai waktu (dalam satuan detik): ");
    if(getFloat(&waktu)){
        printf("\t\t Masukkan nilai debit (dalam satuan liter/detik): ");
        if(getFloat(&debit)){

        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai volume air       : %.2f liter\n", volume(debit, waktu));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();
            } else {
                volSalah(); }
    } else {
            volSalah();
        }
}

float volume(float d, float w)
{
    return(d*w);
}
void volSalah()
{
    inputSalah();
    volumeAir();
}

void waktuAir()
{
    float debit;
    float volume;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                 M E N G H I T U N G  W A K T U  A I R                ||\n");
    printf("\t\t||                   Masukkan Nilai yang Dibutuhkan                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n\n");

    printf("\t\t Masukkan nilai volume (dalam satuan liter): ");
    if(getFloat(&volume)){
        printf("\t\t Masukkan nilai debit (dalam satuan liter/detik): ");
        if(getFloat(&debit)){

        printf("\n\t\t  ______________________________________________________________________\n");
        printf("\t\t                                                                      \n");
        printf("\t\t   Nilai waktu air       : %.2f detik\n", waktu(debit, volume));
        printf("\t\t  ______________________________________________________________________\n");
        repeat();
            } else {
                waSalah(); }
    } else {
            waSalah();
        }
}

float waktu(float d, float v)
{
    return(v/d);
}

void waSalah()
{
    inputSalah();
    waktuAir();
}


void repeat()
{
    char pilihanUlang;
    printf("\n\n\t\t Apakah Anda ingin kembali ke menu utama?");
    printf("\n\t\t Ketik [Y] untuk 'Ya' dan [N] untuk 'Tidak'\n");
    printf("\t\t Pilihan: ");
    if (getChar(&pilihanUlang)){
    if(pilihanUlang == 'Y' || pilihanUlang == 'y')
    {
        system("cls");
        menu();
    } else if(pilihanUlang == 'N' || pilihanUlang == 'n')
        {
            keluar();
        } else
            {
                printf("\t\t Masukan Anda salah. Silahkan coba lagi.");
                repeat();
            }
    } else { repeat();}
}


void keluar()
{
    system("cls");
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                       T E R I M A  K A S I H                         ||\n");
    printf("\t\t||                    Sampai jumpa di lain waktu!                       ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n");
    exit(0);
}



void flushIn()
{
    int ch = 0;
    while ((ch = getchar()) != '\n' && ch != -1);
}


bool getInt(int*target)
{
    if(scanf("%i", target) > 0) {
        flushIn();
        return true;
    } else {
            printf("\n\t\t Masukkan Anda tidak valid. Silahkan coba lagi. \n");
            flushIn();
            return false; }

}


bool getFloat(float*target)
{
    if(scanf("%f", target) > 0) {
        flushIn();
        return true;
    } else {
            printf("\n\t\t Masukkan Anda tidak valid. Silahkan coba lagi. \n");
            flushIn();
            return false; }

}


bool getChar(char*target)
{
    if(scanf("%c", target) > 0) {
        flushIn();
        return true;
    } else {
            printf("\n\t\t Masukkan Anda tidak valid. Silahkan coba lagi. \n");
            flushIn();
            return false; }

}


void inputSalah()
{
    sleep(2);
    system("cls");
}
