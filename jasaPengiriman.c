#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct pelanggan {

char nama[100];
char alamat[100];
int telp[13];
char nama2[100];
char alamat2[100];
int telp2[13];
};

struct barang{

int berat;
int harga;
int jarak;
};

struct aman{

int harga1;
int harga2;
};

struct pelanggan pel;
struct barang brg;
struct aman amn;
char detail[100];
char perlindungan[100];

int main();

void waktu(){
    time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  printf("TANGGAL: %02d-%02d-%d\n",  tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
  printf("JAM    : %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
}

void resi(){

    system("clear || cls");
    printf("====================================================\n");
    printf("          J A S A   P E N G I R I M AN              \n");
    printf("             P R A Y A T N A-D A N U                \n");
    printf("====================================================\n");
    waktu();
    printf("====================================================\n");
    printf("NAMA  PENGIRIM : %s                                          \n", pel.nama);
    printf("ALAMAT PENGIRIM: %s                                          \n", pel.alamat);
    printf("----------------------------------------------------\n");
    printf("NAMA  PENERIMA : %s                                          \n", pel.nama2);
    printf("ALAMAT PENERIMA: %s                                          \n", pel.alamat2);
    printf("----------------------------------------------------\n");
    printf("DETAIL BARANG      : %s                                   \n", detail);
    printf("PERLINDUNGAN EKSTRA: %s                             \n", perlindungan);
    printf("----------------------------------------------------\n");
    printf("BERAT TOTAL BARANG: %d KG                           \n", brg.berat);
    printf("JARAK TOTAL BARANG: %d KM                           \n", brg.jarak);
    printf("----------------------------------------------------\n");
}


void cobaLagi(){

int pilih;

    system("clear || cls");
    printf("======== APAKAH INGIN MEMBUAT PESANAN LAGI? ========\n");
    printf("|                                                  |\n");
    printf("| 1. YA                                            |\n");
    printf("| 2. TIDAK                                         |\n");
    printf("|                                                  |\n");
    printf("====================================================\n");
    printf("MASUKAN PILIHAN ANDA: ");
    scanf("%d", &pilih);
    system("clear || cls");
    switch(pilih){

        case 1:
        main();
        break;

        case 2:
        printf("====================================================\n");
        printf("| TERIMAKASIH TELAH MELAKUKAN PESANAN.             |\n");
        printf("|                                                  |\n");
        printf("====================================================\n");
        break;

        default:

        printf("MOHON MASUKAN INPUT DENGAN BENAR!");
        getchar();
        cobaLagi();
        break;
    }

}

void infoBarang(){

    int pilih;
    char barang[100];

    system("clear || cls");
    printf("====================================================\n");
    printf("||               I N F O   B A R A N G            ||\n");
    printf("====================================================\n");
    printf("|| 1. PAKAIAN                                     ||\n");
    printf("|| 2. MAKANAN                                     ||\n");
    printf("|| 3. BUKU                                        ||\n");
    printf("|| 4. DOKUMEN                                     ||\n");
    printf("|| 5. OBAT                                        ||\n");
    printf("|| 6. LAINNYA                                     ||\n");
    printf("====================================================\n");
    printf("MASUKAN PILIHAN ANDA: ");
    scanf("%d", &pilih);
    fflush(stdin);

    if(pilih==1){
        strcpy(detail, "PAKAIAN");
    }else if(pilih==2){
        strcpy(detail, "MAKANAN");
    }else if(pilih==3){
       strcpy(detail, "BUKU");
    }else if(pilih==4){
        strcpy(detail, "DOKUMEN");
    }else if(pilih==5){
        strcpy(detail, "OBAT");
    }else if(pilih==6){
        printf("Paketnya berupa apa?\n");
        fgets(barang, 100, stdin);
        barang[strlen(barang)-1]='\0'; //karena fgets membuat line baru sendiri, maka command ini akan mencegahnya
        fflush(stdin);
        strcpy(detail, barang);
    }else{
        printf("MOHON MASUKAN INPUT DENGAN BENAR \n");
        getchar();
        infoBarang();
    }
}

void prosesBerat(){


if(brg.berat <= 5){
    brg.harga= ((brg.berat*5)/ brg.berat * 1000);

}else if(brg.berat>5){
    int temp= (brg.berat % 5);
    if(temp==0){
        brg.harga= (brg.berat/5) * ((brg.berat*5)/brg.berat) * 1000;
    }else{
        brg.harga= ((brg.berat/5)+1) * ((brg.berat*5)/brg.berat) * 1000;
    }
}else if(brg.berat<1 || brg.berat==0){
    printf("MOHON MASUKAN BERAT DENGAN NILAI YANG BULAT \n");
    prosesBerat();
}
}

void dataPengirim(){

system("clear || cls");
printf("====================================================\n");
printf("                     DATA  PENGIRIM                 \n");
printf("====================================================\n");
printf("NAMA: ");
fgets(pel.nama, 100, stdin);
pel.nama[strlen(pel.nama)-1]='\0';
printf("ALAMAT: ");
fgets(pel.alamat, 100, stdin);
pel.alamat[strlen(pel.alamat)-1]='\0';
printf("NOMOR HP: ");
scanf("%d", pel.telp);
fflush(stdin);

}

void dataPenerima(){

system("clear || cls");
printf("====================================================\n");
printf("                     DATA  PENERIMA                 \n");
printf("====================================================\n");
printf("NAMA: ");
fgets(pel.nama2, 100, stdin);
fflush(stdin);
pel.nama2[strlen(pel.nama2)-1]='\0';
printf("ALAMAT: ");
fgets(pel.alamat2, 100, stdin);
fflush(stdin);
pel.alamat2[strlen(pel.alamat2)-1]='\0';
printf("NOMOR HP: ");
scanf("%d", pel.telp2);
fflush(stdin);

if(strcmp(pel.alamat, pel.alamat2)==0){
    printf("ALAMAT YANG ANDA MASUKAN SAMA! \n");
    printf("MOHON PASTIKAN DATA BENAR \n");
    getchar();
    dataPenerima();
}
}

void pengaman(){

int pilih;

system("clear || cls");
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
        strcpy(perlindungan, "SILVER");
        amn.harga2=amn.harga1 + 1000;
        fflush(stdin);
        break;

    case 2:
        strcpy(perlindungan, "GOLD");
        amn.harga2= amn.harga1 + 2000;
        fflush(stdin);
        break;
        
    case 3:
        strcpy(perlindungan, "PLATINUM");
        amn.harga2=amn.harga1 + 4000;
        fflush(stdin);
        break;

    case 4:
        strcpy(perlindungan, "---");
        amn.harga2=amn.harga1;
        break;
        
    default:
        printf("MOHON MASUKAN INPUT DENGAN BENAR <3 \n");
        getchar();
        pengaman();


}

}

void berat(){

int ulang;

system("clear || cls");
printf("BERAT TOTAL BARANG (KG): ");
scanf("%d", &brg.berat);

if(brg.berat<1){
    printf("MASUKAN BERAT DENGAN BENAR! \n");
    getchar();
    berat();
        }

prosesBerat();

}

void jarak(){

system("clear || cls");
printf("MASUKAN JARAK PENGIRIMAN (KM): ");
scanf("%d", &brg.jarak);

if(brg.jarak<1 || brg.jarak==0){
    printf("MASUKAN JARAK DENGAN BENAR! \n");
    getchar();
    jarak();
}

if(brg.jarak<=5){
    amn.harga1= brg.harga + 2000;
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

void menuBCA(){

resi();
printf("| BANK BCA                                         |\n");
printf("----------------------------------------------------\n");
printf("NO REKENING:                                     \n");
printf("0403288664                                       \n");
printf("----------------------------------------------------\n");
printf("TOTAL Rp %d \n", amn.harga2);
}

void menuBNI(){

resi();
printf("| BANK BNI                                         |\n");
printf("----------------------------------------------------\n");
printf("NO REKENING:                                     \n");
printf("0778193597                                       \n");
printf("----------------------------------------------------\n");
printf("TOTAL Rp %d \n", amn.harga2);
}

void menuMandiri(){

resi();
printf("| BANK MANDIRI                                     |\n");
printf("====================================================\n");
printf("NO REKENING:                                     \n");
printf("0403288664                                       \n");
printf("----------------------------------------------------\n");
printf("TOTAL Rp %d \n", amn.harga2);
}

void menuBRI(){

resi();
printf("| BANK BRI                                         |\n");
printf("====================================================\n");
printf("NO REKENING:                                     \n");
printf("0403288664                                       \n");
printf("TOTAL Rp %d \n", amn.harga2);
}


void atm(){

int pilih;

printf("=================== METODE BAYAR ===================\n");
printf("|| 1. BCA                                         ||\n");
printf("|| 2. BNI                                         ||\n");
printf("|| 3. MANDIRI                                     ||\n");
printf("|| 4. BRI                                         ||\n");
printf("====================================================\n");
printf("MASUKAN PILIHAN: ");
scanf("%d", &pilih);
fflush(stdin);
system("clear || cls");
switch(pilih){

    case 1:
    menuBCA();
    fflush(stdin);
    printf("====================================================\n");
    printf("TEKAN ENTER UNTUK MELANJUTKAN...\n");
    getchar();
    system("clear || cls");
    break;

    case 2:
    menuBNI();
    fflush(stdin);
    printf("====================================================\n");
    printf("TEKAN ENTER UNTUK MELANJUTKAN...\n");
    getchar();
    system("clear || cls");
    break;

    case 3:
    menuMandiri();
    fflush(stdin);
    printf("====================================================\n");
    printf("TEKAN ENTER UNTUK MELANJUTKAN...\n");
    getchar();
    system("clear || cls");
    break;

    case 4:
    menuBRI();
    fflush(stdin);
    printf("====================================================\n");
    printf("TEKAN ENTER UNTUK MELANJUTKAN...\n");
    getchar();
    system("clear || cls");
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
fflush(stdin);
system("clear || cls");

switch(pilih){

    case 1:
    resi();
    printf("TOTAL: Rp%d                                         \n", amn.harga2);
    printf("----------------------------------------------------\n");
    printf("PRESS ENTER TO CONTINUE.....\n");
    getchar();
    break;

    case 2:
    atm();
    break;

    case 3:
    hasil= amn.harga2 / 4;
    resi();
    printf("TOTAL: Rp%d                                         \n", amn.harga2);
    printf("LUNASKAN DALAM 4 BULAN >> Rp%d / BULAN              \n", hasil);
    printf("----------------------------------------------------\n");
    printf("PRESS ENTER TO CONTINUE.....\n");
    getchar();
    break;

    default:
    printf("MASUKAN INPUT DENGAN BENAR! \n");
    metodeBayar();
    
}


}

void menu(){

infoBarang();
dataPengirim();
dataPenerima();
berat();
jarak();
pengaman();
metodeBayar();
cobaLagi();
}

int main(){
    
    menu();

    return 0;
}
