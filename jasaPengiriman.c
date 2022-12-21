#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct pelanggan {

char nama[100];
char alamat[100];
int telp[13];
} pel;

struct barang{

int harga;
int jarak;
}brg;

struct aman{

int harga1;
int harga2;
} amn;

struct penerima{

char nama[50];
char alamat[50];
int telp[13];
} penerima;

void dps();
void badung();
void singaraja();
void bangli();

void Domisili(){

    int pilih;

    printf("====================================================\n");
    printf("||                 D O M I S I L I                ||\n");
    printf("====================================================\n");
    printf("|| 1. DENPASAR                                    ||\n");
    printf("|| 2. BADUNG                                      ||\n");
    printf("|| 3. SINGARAJA                                   ||\n");
    printf("|| 4. BANGLI                                      ||\n");
    printf("====================================================\n");
    scanf("%d", &pilih);
    system("clear || cls");

    if(pilih==1){
        dps();
        printf("Bayar Rp %d \n", brg.harga);
    }else if(pilih==2){
        badung();
        printf("%d \n", brg.harga);
    }else if(pilih==3){
        singaraja();
        printf("%d \n", brg.harga);
    }else if(pilih==4){
        bangli();
        printf("%d\n", brg.harga);
    }
}


void dps(){

     int pilih;
     char domisili[]="DENPASAR";

    printf("====================================================\n");
    printf("|| DOMISILI YANG DITUJU?                          ||\n");
    printf("||                                                ||\n");
    printf("|| 1. BADUNG                                      ||\n");
    printf("|| 2. SINGARAJA                                   ||\n");
    printf("|| 3. BANGLI                                      ||\n");
    printf("||                                                ||\n");
    printf("====================================================\n");
    scanf("%d", &pilih);
    system("clear || cls");

    if(pilih==1){

        char tujuan[]="BADUNG";
        brg.jarak=12;
        brg.harga= brg.jarak * 2000;

    }else if(pilih==2){

        char tujuan[]="SINGARAJA";
        brg.jarak=50;
        brg.harga=brg.jarak * 2000;

    }else if(pilih==3){

        char tujuan[]="BANGLI";
        brg.jarak= 25;
        brg.harga=brg.jarak * 2000;

    }else{

        printf(" DATA YANG ANDA MASUKAN TIDAK ADA \n");
        dps();
    }
}

void badung(){

     int pilih;
     char domisili[]="BADUNG";

    printf("====================================================\n");
    printf("|| DOMISILI YANG DITUJU?                          ||\n");
    printf("||                                                ||\n");
    printf("|| 1. DENPASAR                                    ||\n");
    printf("|| 2. SINGARAJA                                   ||\n");
    printf("|| 3. BANGLI                                      ||\n");
    printf("||                                                ||\n");
    printf("====================================================\n");
    scanf("%d", &pilih);
    system("clear || cls");

    if(pilih==1){

        char tujuan[]="DENPASAR";
        brg.jarak=12;
        brg.harga= brg.jarak * 2000;

    }else if(pilih==2){

        char tujuan[]="SINGARAJA";
        brg.jarak=69;
        brg.harga=brg.jarak * 2000;

    }else if(pilih==3){

        char tujuan[]="BANGLI";
        brg.jarak= 36;
        brg.harga=brg.jarak * 2000;

    }else{

        printf(" DATA YANG ANDA MASUKAN TIDAK ADA \n");
        badung();
    }
}

void singaraja(){

     int pilih;
     char domisili[]="SINGARAJA";

    printf("====================================================\n");
    printf("|| DOMISILI YANG DITUJU?                          ||\n");
    printf("||                                                ||\n");
    printf("|| 1. DENPASAR                                    ||\n");
    printf("|| 2. BADUNG                                      ||\n");
    printf("|| 3. BANGLI                                      ||\n");
    printf("||                                                ||\n");
    printf("====================================================\n");
    scanf("%d", &pilih);
    system("clear || cls");

    if(pilih==1){

        char tujuan[]="DENPASAR";
        brg.jarak=50;
        brg.harga= brg.jarak * 2000;

    }else if(pilih==2){

        char tujuan[]="BADUNG";
        brg.jarak=69;
        brg.harga=brg.jarak * 2000;

    }else if(pilih==3){

        char tujuan[]="BANGLI";
        brg.jarak= 73;
        brg.harga=brg.jarak * 2000;

    }else{

        printf(" DATA YANG ANDA MASUKAN TIDAK ADA \n");
        singaraja();
    }
}

void bangli(){

     int pilih;
     char domisili[]="BANGLI";

    printf("====================================================\n");
    printf("|| DOMISILI YANG DITUJU?                          ||\n");
    printf("||                                                ||\n");
    printf("|| 1. DENPASAR                                    ||\n");
    printf("|| 2. BADUNG                                      ||\n");
    printf("|| 3. SINGARAJA                                   ||\n");
    printf("||                                                ||\n");
    printf("====================================================\n");
    scanf("%d", &pilih);
    system("clear || cls");

    if(pilih==1){

        char tujuan[]="DENPASAR";
        brg.jarak=40;
        brg.harga= brg.jarak * 2000;

    }else if(pilih==2){

        char tujuan[]="BADUNG";
        brg.jarak=34;
        brg.harga=brg.jarak * 2000;

    }else if(pilih==3){

        char tujuan[]="SINGARAJA";
        brg.jarak= 73;
        brg.harga=brg.jarak * 2000;

    }else{

        printf(" DATA YANG ANDA MASUKAN TIDAK ADA \n");
        bangli();
    }
}



void dataPenerima(){

    printf("====================================================\n");
    printf("||            D A T A   P E N E R I M A           ||\n");
    printf("====================================================\n");
    printf(" Nama Penerima: ");
    scanf("%[ \n]", &penerima.nama);
    fflush(stdin);
    printf("\n");
    printf(" Nomor Telepon: ");
    scanf("%d", penerima.telp);
    fflush(stdin);
    system("clear || cls");

}


void dataPelanggan(){


    printf("====================================================\n");
    printf("||              S E N D E R    D A T A            ||\n");
    printf("====================================================\n");
    printf(" Order Atas Nama: ");
    scanf("%[^ \n]", pel.nama);
    fflush(stdin);
    printf("\n");
    printf("Nomor Telpon: ");
    scanf("%d", pel.telp);
    fflush(stdin);
    system("clear || cls");
}

int main(){
    
    Domisili();
}
