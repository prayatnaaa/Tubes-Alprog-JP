#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct pelanggan {

char nama[100];
char alamat[100];
char nama2[100];
char alamat2[100];
};

struct barang{

int berat;
int harga;
int jarak;
}brg;

struct aman{

int harga1;
int harga2;
} amn;

struct pilih{

char barang;
char perlindungan;
char metyar; //metode bayar
char bank; // pilihan bank untuk opsi atm atau debit
};

main();

void resi(char nama[100], char alamat[100], char nama2[100], char alamat2[100], char *detail, char *perlindungan, int berat, int jarak, int harga){

struct pelanggan pel;

fflush(stdin);
    printf("====================================================\n");
    printf("||------------------- PENGIRIM -------------------||\n");
    printf("====================================================\n");
    printf("Nama  : %s                                \n", pel.nama);
    printf("Alamat: %s                                \n", pel.alamat);
    printf("====================================================\n");
    printf("||------------------- PENERIMA -------------------||\n");
    printf("====================================================\n");
    printf("Nama  : %s                                \n", pel.nama2);
    printf("Alamat: %s                                \n", pel.alamat2);
    printf("====================================================\n");
    printf("====================================================\n");
    printf("DETAIL BARANG: %s                         \n", detail);
    printf("PERLINDUNGAN EKSTRA: %s                   \n", perlindungan);
    printf("====================================================\n");
    printf("====================================================\n");
    printf("BERAT TOTAL BARANG: %d                    \n", brg.berat);
    printf("JARAK TOTAL BARANG: %d                    \n", brg.jarak);
    printf("====================================================\n");
    printf("====================================================\n");
    printf("TOTAL: Rp%d                               \n", amn.harga2);
    printf("====================================================\n");
    printf("PRESS ANY KEY TO CONTINUE.....\n");
    getchar();
}

void cobaLagi(){

int pilih;

    printf("\t\t======== APAKAH INGIN MEMBUAT PESANAN LAGI? ========\n");
    printf("\t\t|                                                  |\n");
    printf("\t\t| 1. YA                                            |\n");
    printf("\t\t| 2. TIDAK                                         |\n");
    printf("\t\t|                                                  |\n");
    printf("\t\t====================================================\n");
    printf("\t\tMASUKAN PILIHAN ANDA: ");
    scanf("%d", &pilih);
    switch(pilih){

        case 1:
        main();
        break;

        case 2:
        printf("\t\t====================================================\n");
        printf("\t\t|-------------------TERIMAKASIH--------------------|\n");
        printf("\t\t|                                                  |\n");
        printf("\t\t|                  BY:  PRAYATNA                   |\n");
        printf("\t\t|                       DANU                       |\n");
        printf("\t\t====================================================\n");
    }

}

void infoBarang(){

    int pilih;
    char *detail;

    printf("====================================================\n");
    printf("||               I N F O   B A R A N G            ||\n");
    printf("====================================================\n");
    printf("|| 1. PAKAIAN                                     ||\n");
    printf("|| 2. MAKANAN                                     ||\n");
    printf("|| 3. BUKU                                        ||\n");
    printf("|| 4. DOKUMEN                                     ||\n");
    printf("|| 5. OBAT                                        ||\n");
    printf("|| 5. LAINNYA                                     ||\n");
    printf("====================================================\n");
    printf("MASUKAN PILIHAN ANDA: ");
    scanf("%d", &pilih);
    fflush(stdin);

    if(pilih==1){
        detail="PAKAIAN";
    }else if(pilih==2){
        detail="MAKANAN";
    }else if(pilih==3){
       detail="BUKU";
    }else if(pilih==4){
        detail="DOKUMEN";
    }else if(pilih==5){
        printf("Paketnya berupa apa?\n");
        scanf(" %[ \n]", &detail);
        fflush(stdin);
    }
}

void kirimReguler(){


if(brg.berat <= 5){
    brg.harga= ((brg.berat*5)/ brg.berat * 2000);

}else if(brg.berat>5){
    int temp= (brg.berat % 5);
    if(temp==0){
        brg.harga= (brg.berat/5) * ((brg.berat*5)/brg.berat) * 5000;
    }else{
        brg.harga= ((brg.berat/5)+1) * ((brg.berat*5)/brg.berat) * 5000;
    }
}
}

void dataPengirim(){

struct pelanggan pel;

printf("====================================================\n");
printf("                     DATA  PENGIRIM                 \n");
printf("====================================================\n");
printf("Nama: ");
scanf("%[^ \n]", pel.nama);
fflush(stdin);
printf("Alamat: ");
scanf("%[^ \n]", pel.alamat);
fflush(stdin);
system("clear || cls");
}

void dataPenerima(){

struct pelanggan pel;

printf("====================================================\n");
printf("                     DATA  PENERIMA                 \n");
printf("====================================================\n");
printf("Nama: ");
scanf("%[^ \n]", pel.nama2);
fflush(stdin);
printf("Alamat: ");
scanf("%[^ \n]", pel.alamat2);
fflush(stdin);
system("clear || cls");

if(strcmp(pel.alamat, pel.alamat2)==0){
    printf("ALAMAT YANG ANDA MASUKAN SAMA! \n");
    printf("MOHON PASTIKAN DATA BENAR \n");
    dataPenerima();
}
}

void pengaman(){

int pilih;
int hasil;
char *perlindungan;

printf("====================================================\n");
printf("|| PILIH PERLINDUNGAN EKSTRA?                     ||\n");
printf("||                                                ||\n");
printf("|| 1. PERLINDUNGAN SILVER             (+ Rp1000)  ||\n");
printf("|| 2. PERLINDUNGAN GOLD               (+ Rp2000)  ||\n");
printf("|| 3. PERLINDUNGAN PLATINUM           (+ Rp4000)  ||\n");
printf("|| 4. NGGA DULU DEH                               ||\n");
printf("====================================================\n");
printf(" MASUKAN PILIHAN: ");
scanf("%d", &pilih);
getchar();
system("clear || cls");
fflush(stdin);
    
switch(pilih){

    case 1:
        perlindungan="SILVER";
        amn.harga2=amn.harga1 + 1000;
        fflush(stdin);
        break;

    case 2:
        perlindungan="GOLD";
        amn.harga2= amn.harga1 + 2000;
        fflush(stdin);
        break;
        
    case 3:
        perlindungan="PLATINUM";
        amn.harga2=amn.harga1 + 4000;
        fflush(stdin);

    case 4:
        perlindungan="---";
        amn.harga2=amn.harga1;
        break;
        
    default:
        printf("SALAH \n");
        pengaman();


}

}

void berat(){
    
printf("====================================================\n");
printf("Berat total barang (kg): ");
scanf("%d", &brg.berat);
system("clear || cls");

kirimReguler();
}

void jarak(){

printf("====================================================\n");
printf("Masukan Jarak Pengiriman (km): ");
scanf("%d", &brg.jarak);
system("clear || cls");

if(brg.jarak<=5){
    amn.harga1= ((brg.harga*5)/ brg.harga * 3000);
    fflush(stdin);

}else if(brg.jarak>5){
    int temp= (brg.jarak % 5);
    if(temp==0){
        amn.harga1= (brg.jarak/5) * ((brg.harga*5)/brg.harga) * 3000;
        fflush(stdin);
    }else{
        amn.harga1= ((brg.jarak/5)+1) * ((brg.harga*5)/brg.harga) * 3000;
        fflush(stdin);
    }
}
}

int timer(){
     
    fflush(stdin);
    unsigned int x_hours=0;
    unsigned int x_minutes=0;
    unsigned int x_seconds=0;
    unsigned int x_milliseconds=0;
    unsigned int count_down_time_in_secs=0,time_left=0;

    clock_t x_startTime,x_countTime;
    count_down_time_in_secs=10;  // 1 minute is 60, 1 hour is 3600

 
    x_startTime=clock();  // start clock
    time_left=count_down_time_in_secs-x_seconds;   // update timer

    while (time_left>0)
    {
        x_countTime=clock(); // update timer difference
        x_milliseconds=x_countTime-x_startTime;
        x_seconds=(x_milliseconds/(CLOCKS_PER_SEC))-(x_minutes*60);
        x_minutes=(x_milliseconds/(CLOCKS_PER_SEC))/60;
        x_hours=x_minutes/60;
        time_left=count_down_time_in_secs-x_seconds; // subtract to get difference

printf( "\nYou have %d seconds left ( %d ) count down timer by TopCoder",time_left,count_down_time_in_secs);
    }


    printf( "\n\n\nTime's out\n\n\n");

return 0;
}

void menuBCA(){

printf("====================================================\n");
printf("| BANK BCA                                         |\n");
printf("====================================================\n");
printf("| NO REKENING:                                     |\n");
printf("| 0403288664                                       |\n");
printf("----------------------------------------------------\n");
printf("Silahkan melakukan pembayaran sebesar Rp %d ke No. rekening 0403288664 \n", amn.harga2);
fflush(stdin);

}

void menuBNI(){

printf("====================================================\n");
printf("| BANK BNI                                         |\n");
printf("====================================================\n");
printf("| NO REKENING:                                     |\n");
printf("| 0778193597                                       |\n");
printf("----------------------------------------------------\n");
printf("Silahkan melakukan pembayaran sebesar Rp %d ke No. rekening 0403288664 \n", amn.harga2);
fflush(stdin);
}

void menuMandiri(){

printf("====================================================\n");
printf("| BANK MANDIRI                                     |\n");
printf("====================================================\n");
printf("| NO REKENING:                                     |\n");
printf("| 0403288664                                       |\n");
printf("----------------------------------------------------\n");
printf("Silahkan melakukan pembayaran sebesar Rp %d ke No. rekening 0403288664 \n", amn.harga2);
fflush(stdin);
}

void menuBRI(){

printf("====================================================\n");
printf("| BANK BRI                                         |\n");
printf("====================================================\n");
printf("| NO REKENING:                                     |\n");
printf("| 0403288664                                       |\n");
printf("----------------------------------------------------\n");
printf("Silahkan melakukan pembayaran sebesar Rp %d ke No. rekening 0403288664 \n", amn.harga2);
fflush(stdin);
}


void atm(){

int pilih;

printf("=================== METODE BAYAR ===================\n");
printf("|| 1. BCA                                         ||\n");
printf("|| 2. BNI                                         ||\n");
printf("|| 3. MANDIRI                                     ||\n");
printf("|| 4. BRI                                         ||\n");
printf("====================================================\n");
scanf("%d", &pilih);
switch(pilih){

    case 1:
    menuBCA();
    fflush(stdin);
    printf("====================================================\n");
    printf("TEKAN KEYWORD APA SAJA UNTUK MELANJUTKAN...\n");
    getchar();
    break;

    case 2:
    menuBNI();
    fflush(stdin);
    printf("====================================================\n");
    printf("TEKAN KEYWORD APA SAJA UNTUK MELANJUTKAN...\n");
    getchar();
    break;

    case 3:
    menuMandiri();
    fflush(stdin);
    printf("====================================================\n");
    printf("TEKAN KEYWORD APA SAJA UNTUK MELANJUTKAN...\n");
    getchar();
    break;

    case 4:
    menuBRI();
    fflush(stdin);
    printf("====================================================\n");
    printf("TEKAN KEYWORD APA SAJA UNTUK MELANJUTKAN...\n");
    getchar();
    break;

    default:
    printf("INPUT YANG ANDA MASUKAN TIDAK VALID \n");
    getchar();
    atm();
    break;
}
}

void metodeBayar(){

int pilih;
int hasil;

printf("=================== METODE BAYAR ===================\n");
printf("|| 1. TUNAI                                       ||\n");
printf("|| 2. ATM                                         ||\n");
printf("|| 3. PAY LATER                                   ||\n");
printf("====================================================\n");
printf("MASUKAN PILIHAN: ");
scanf("%d", &pilih);

switch(pilih){

    case 1:
    printf("Silahkan melakukan pembayaran sebesar Rp %d \n", amn.harga2);
    break;

    case 2:
    atm();
    break;

    case 3:
    hasil= amn.harga2 / 4;
    printf("Lunaskan dalam 4 bulan dengan membayar Rp %d /bulan \n", hasil);
    break;

    default:
    printf("salah \n");
    metodeBayar();
    
}


}

void menu(){

struct pelanggan pel;
char *detail;
char *perlindungan;
infoBarang();
dataPengirim();
dataPenerima();
berat();
jarak();
kirimReguler();
pengaman();
metodeBayar();
resi(pel.nama, pel.alamat, pel.nama2, pel.alamat2, detail, perlindungan, brg.berat, brg.jarak, brg.harga);
cobaLagi();
}

int main(){
    
    menu();

    return 0;
}
