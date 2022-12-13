#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pelanggan {

char nama[100];
char alamat[100];
} pel;

struct barang{

int berat;
int harga;
int jarak;
}brg;

struct aman{

int harga1;
int harga2;
} amn;

main();

void cobaLagi(){

char pilih;

printf("========================================== \n");
printf("Apakah ingin membuat pemesanan lagi?(y/t)");
scanf("%s", &pilih);
fflush(stdin);

if(pilih=='y'){
main();
}else if(pilih!='y'){
printf("Order Akan di Proses! \n");
printf("========================================== \n");
}else{
printf("salah \n");
}

}


float kirimReguler(){


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
float kirimCepat(){

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


void dataPelanggan(){

printf("=============================== \n");
printf("              DATA              \n");
printf("=============================== \n");
printf("Nama: ");
scanf("%[^ \n]", pel.nama);
fflush(stdin);
printf("Alamat: ");
scanf("%[^ \n]", pel.alamat);
fflush(stdin);
system("clear || cls");
}

float pengaman(){

int pilih;
int hasil;

printf("=============================== \n");
printf("           PENGAMANAN           \n");
printf("=============================== \n");
printf("1. Biasa \n");
printf("2. Aman \n");
printf("Pilih Pengamanan: ");
scanf("%d", &pilih);
system("clear || cls");
fflush(stdin);

switch(pilih){

    case 1:
    amn.harga1=brg.harga + 2000;
    fflush(stdin);
    break;

    case 2:
    amn.harga1= brg.harga + 5000;
    fflush(stdin);
    break;

    default:
    printf("salah \n");
    pengaman();
    fflush(stdin);
    break;

}

}

float jarak(){

int pilih;
printf("======================================= \n");
printf("Masukan Estimasi Jarak Pengiriman (km): ");
scanf("%d", &brg.jarak);
system("clear || cls");

if(brg.jarak<=5){

amn.harga2= amn.harga1 + 3000;
fflush(stdin);

}else if(brg.jarak>5){
    int temp= (pilih % 5);
    if(temp==0){
        amn.harga2= amn.harga1 + 15000;
        fflush(stdin);
    }else{
        amn.harga2= amn.harga1+ 15000;
        fflush(stdin);
    }
}

}

void metodeBayar(){

int pilih;
int hasil;

printf("=============================== \n");
printf("         METODE BAYAR           \n");
printf("=============================== \n");
printf("1. Tunai \n");
printf("2. Debit \n");
printf("3. Pay Later \n");
printf("Masukan Pilihan: ");
scanf("%d", &pilih);

switch(pilih){

    case 1:
    printf("Silahkan melakukan pembayaran sebesar Rp %d \n", amn.harga2);
    break;

    case 2:
    printf("Silahkan melakukan pembayaran sebesar Rp %d ke No. rekening 0403288664 \n", amn.harga2);
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

void pengiriman(){

int pilih;

printf("=============================== \n");
printf("           PENGIRIMAN           \n");
printf("=============================== \n");
printf("1. Reguler \n");
printf("2. Cepat \n");
printf("Pilih: ");
scanf("%d", &pilih);
fflush(stdin);
system("clear || cls");

switch(pilih){

case 1:
kirimReguler();
pengaman();
jarak();
metodeBayar();
getchar();
cobaLagi();
break;

case 2:
kirimCepat();
pengaman();
jarak();
metodeBayar();
getchar();
cobaLagi();
break;

default:
pengiriman();
break;
}
}

int main(){

dataPelanggan();


printf("=============================== \n");
printf("Berat barang (kg): ");
scanf("%d", &brg.berat);
system("clear || cls");

pengiriman();

return 0;
}