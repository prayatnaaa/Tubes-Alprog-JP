#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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

void cobaLagi(){

char pilih;

printf("=============================== \n");
printf("Apakah ingin mencoba lagi?");
scanf("%s", &pilih);

if(pilih=='y'){
main();
}else if(pilih!='y'){
printf("oke \n");
}else{
printf("salah \n");
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
    printf(" MASUKAN PILIHAN ANDA: ");
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
        scanf("%[ \n]", &detail);
    }
}

void kirimReguler(){


if(brg.berat <= 5){
    brg.harga= (brg.berat * 1000);

}else if(brg.berat>5){
    int temp= (brg.berat % 5);
    if(temp==0){
        brg.harga= (brg.berat/5) * ((brg.berat*5)/brg.berat) * 5000;
    }else{
        brg.harga= ((brg.berat/5)+1) * ((brg.berat*5)/brg.berat) * 5000;
    }
}
}
void kirimCepat(){

if(brg.berat <= 5){
    brg.harga= ((brg.berat*5)/ brg.berat * 8000);

}else if(brg.berat>5){
    int temp= (brg.berat % 5);
    if(temp==0){
        brg.harga= (brg.berat/5) * ((brg.berat*5)/brg.berat) * 8000;
    }else{
        brg.harga= ((brg.berat/5)+1) * ((brg.berat*5)/brg.berat) * 8000;
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
}

void pengaman(){

int pilih;
int hasil;

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
fflush(stdin);
    
switch(pilih){

    case 1:
        amn.harga1=brg.harga + 1000;
        fflush(stdin);

    case 2:
        amn.harga1= brg.harga + 2000;
        fflush(stdin);
        
    case 3:
        amn.harga1=brg.harga + 4000;
        
    default:
        printf("SALAH \n");


}

}

void berat(){
    
printf("====================================================\n");
printf("Berat total barang (kg): ");
scanf("%d", &brg.berat);
system("clear || cls");

kirimReguler();
kirimCepat();
}

void jarak(){

printf("====================================================\n");
printf("Masukan Jarak Pengiriman (km): ");
scanf("%d", &brg.jarak);
system("clear || cls");

if(brg.jarak<=5){

amn.harga2= amn.harga1 + 3000;
fflush(stdin);

}else if(brg.jarak>5){
    int temp= (brg.jarak % 5);
    if(temp==0){
        amn.harga2= amn.harga1 + 15000;
        fflush(stdin);
    }else{
        amn.harga2= amn.harga1+ 15000;
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
timer();
fflush(stdin);
printf("----------------------------------------------------\n");
printf("TEKAN KEYWORD MANAPUN JIKA TELAH MELAKUKAN PEMBAYARAN\n");
getchar();

}

void menuBNI(){

printf("====================================================\n");
printf("| BANK BNI                                         |\n");
printf("====================================================\n");
printf("| NO REKENING:                                     |\n");
printf("| 0778193597                                       |\n");
printf("----------------------------------------------------\n");
printf("Silahkan melakukan pembayaran sebesar Rp %d ke No. rekening 0403288664 \n", amn.harga2);
timer();
fflush(stdin);
printf("----------------------------------------------------\n");
printf("TEKAN KEYWORD MANAPUN JIKA TELAH MELAKUKAN PEMBAYARAN\n");
getchar();
}

void menuMandiri(){

printf("====================================================\n");
printf("| BANK MANDIRI                                     |\n");
printf("====================================================\n");
printf("| NO REKENING:                                     |\n");
printf("| 0403288664                                       |\n");
printf("----------------------------------------------------\n");
printf("Silahkan melakukan pembayaran sebesar Rp %d ke No. rekening 0403288664 \n", amn.harga2);
timer();
fflush(stdin);
printf("----------------------------------------------------\n");
printf("TEKAN KEYWORD MANAPUN JIKA TELAH MELAKUKAN PEMBAYARAN\n");
getchar();
}

void menuBRI(){

printf("====================================================\n");
printf("| BANK BRI                                         |\n");
printf("====================================================\n");
printf("| NO REKENING:                                     |\n");
printf("| 0403288664                                       |\n");
printf("----------------------------------------------------\n");
printf("Silahkan melakukan pembayaran sebesar Rp %d ke No. rekening 0403288664 \n", amn.harga2);
timer();
fflush(stdin);
printf("----------------------------------------------------\n");
printf("TEKAN KEYWORD MANAPUN JIKA TELAH MELAKUKAN PEMBAYARAN\n");
getchar();
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
    timer();
    printf("====================================================\n");
    printf("TEKAN KEYWORD APA SAJA UNTUK MELANJUTKAN...\n");
    getchar();
    break;

    case 2:
    menuBNI();
    timer();
    printf("====================================================\n");
    printf("TEKAN KEYWORD APA SAJA UNTUK MELANJUTKAN...\n");
    getchar();
    break;

    case 3:
    menuMandiri();
    timer();
    printf("====================================================\n");
    printf("TEKAN KEYWORD APA SAJA UNTUK MELANJUTKAN...\n");
    getchar();
    break;

    case 4:
    //menuBRI();
    timer();
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

infoBarang();
dataPengirim();
dataPenerima();
berat();
jarak();
kirimReguler();
pengaman();
metodeBayar();
cobaLagi();

}

int main(){
    
    menu();
}
