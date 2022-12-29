#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

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
char kAsal[100];
char kTujuan[100];
double lama;
char stop1[100];
char stop2[100];

int main();
void cobaLagi();
void waktuSampai();
void lihatPengiriman();

void noId(){

int rand_num;
srand(time(NULL));
rand_num = random();

printf("\t\tID PENGIRIMAN: %d \n", rand_num);
}
void waktu(){
    time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  printf("\t\tTANGGAL: %02d-%02d-%d\n",  tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
  printf("\t\tJAM    : %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
}

void resi(){

    system("clear || cls");
    printf("\t\t====================================================\n");
    printf("\t\t          J A S A   P E N G I R I M AN              \n");
    printf("\t\t             P R A Y A T N A-D A N U                \n");
    printf("\t\t====================================================\n");
    waktu();
    printf("\t\t====================================================\n");
    printf("\t\tNAMA  PENGIRIM : %s                                          \n", pel.nama);
    printf("\t\tALAMAT PENGIRIM: %s                                          \n", pel.alamat);
    printf("\t\t----------------------------------------------------\n");
    printf("\t\tNAMA  PENERIMA : %s                                          \n", pel.nama2);
    printf("\t\tALAMAT PENERIMA: %s                                          \n", pel.alamat2);
    printf("\t\t----------------------------------------------------\n");
    printf("\t\tDETAIL BARANG      : %s                                   \n", detail);
    printf("\t\tPERLINDUNGAN EKSTRA: %s                             \n", perlindungan);
    printf("\t\t----------------------------------------------------\n");
    printf("\t\tBERAT TOTAL BARANG    : %d KG                           \n", brg.berat);
    printf("\t\tJARAK TOTAL PENGIRIMAN: %d KM                           \n", brg.jarak);
    printf("\t\t----------------------------------------------------\n");
    waktuSampai();
    printf("\t\t----------------------------------------------------\n");

    time_t t = time(NULL);
  struct tm tm = *localtime(&t);

    FILE *fptr;
    fptr=fopen("struk.txt", "ab+");

    fprintf(fptr, "\t\t====================================================\n");
    fprintf(fptr, "\t\t          J A S A   P E N G I R I M AN              \n");
    fprintf(fptr, "\t\t             P R A Y A T N A-D A N U                \n");
    fprintf(fptr, "\t\t====================================================\n");
    fprintf(fptr, "\t\tNAMA  PENGIRIM : %s                                          \n", pel.nama);
    pel.nama[strlen(pel.nama)-1]='\0';
    fprintf(fptr, "\t\tALAMAT PENGIRIM: %s                                          \n", pel.alamat);
    pel.alamat[strlen(pel.alamat)-1]='\0';
    fprintf(fptr, "\t\t----------------------------------------------------\n");
    fprintf(fptr, "\t\tNAMA  PENERIMA : %s                                          \n", pel.nama2);
    pel.nama2[strlen(pel.nama2)-1]='\0';
    fprintf(fptr, "\t\tALAMAT PENERIMA: %s                                          \n", pel.alamat2);
    pel.alamat2[strlen(pel.alamat2)-1]='\0';
    fprintf(fptr, "\t\t----------------------------------------------------\n");
    fprintf(fptr, "\t\tDETAIL BARANG      : %s                                   \n", detail);
    fprintf(fptr, "\t\tPERLINDUNGAN EKSTRA: %s                             \n", perlindungan);
    fprintf(fptr, "\t\t----------------------------------------------------\n");
    fprintf(fptr, "\t\tBERAT TOTAL BARANG   : %d KG                           \n", brg.berat);
    fprintf(fptr,"\t\tJARAK TOTAL PENGIRIMAN: %d KM                           \n", brg.jarak);
    fprintf(fptr, "\t\t----------------------------------------------------\n");
    fprintf(fptr, "\t\tTOTAL: RP%d                                        \n", amn.harga2);
    fprintf(fptr, "\t\t----------------------------------------------------\n");
    fprintf(fptr, "\t\tTANGGAL: %02d-%02d-%d\n",  tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    fprintf(fptr, "\t\tJAM    : %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
    fprintf(fptr, "\n\n\n");
    fflush(stdin);
    fclose(fptr);


}

void tampilkanData(){

char data;

FILE *fptr;
    fptr=fopen("struk.txt", "r");
    do {
        data = fgetc(fptr);
        printf("%c", data);
        fflush(stdin);
 
    } while (data != EOF);
    fflush(stdin);
    fclose(fptr);

    printf("\n\n");
    
    cobaLagi();
    }

void cobaLagi(){

int pilih;

    printf("\t\t============== KEMBALI KE MENU UTAMA? ==============\n");
    printf("\t\t|                                                  |\n");
    printf("\t\t| 1. YA                                            |\n");
    printf("\t\t| 2. TIDAK                                         |\n");
    printf("\t\t|                                                  |\n");
    printf("\t\t====================================================\n");
    printf("\t\tMASUKAN PILIHAN ANDA: ");
    scanf("%d", &pilih);
    system("clear || cls");
    switch(pilih){

        case 1:
        main();
        break;

        case 2:
        printf("\t\t====================================================\n");
        printf("\t\t| TERIMAKASIH.                                     |\n");
        printf("\t\t|                                                  |\n");
        printf("\t\t====================================================\n");
        break;

        default:

        printf("\t\tMOHON MASUKAN INPUT DENGAN BENAR! \n");
        getchar();
        cobaLagi();
        break;
    }

}

void infoBarang(){

    int pilih;
    char barang[100];

    printf("\t\t====================================================\n");
    printf("\t\t||               I N F O   B A R A N G            ||\n");
    printf("\t\t====================================================\n");
    printf("\t\t|| 1. PAKAIAN                                     ||\n");
    printf("\t\t|| 2. MAKANAN                                     ||\n");
    printf("\t\t|| 3. BUKU                                        ||\n");
    printf("\t\t|| 4. DOKUMEN                                     ||\n");
    printf("\t\t|| 5. OBAT                                        ||\n");
    printf("\t\t|| 6. LAINNYA                                     ||\n");
    printf("\t\t====================================================\n");
    printf("\t\tMASUKAN PILIHAN ANDA: ");
    scanf("%d", &pilih);
    fflush(stdin);
    system("clear || cls");

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
        printf("\t\tMOHON MASUKAN INPUT DENGAN BENAR \n");
        getchar();
        infoBarang();
    }
}

void kabAsal(){

int pilih;

printf("\t\t====================================================\n");
printf("\t\t                 KABUPATEN PENGIRIM                 \n");
printf("\t\t====================================================\n");
printf("\t\t|| 1. BADUNG                                      ||\n");
printf("\t\t|| 2. BANGLI                                      ||\n");
printf("\t\t|| 3. BULELENG                                    ||\n");
printf("\t\t|| 4. GIANYAR                                     ||\n");
printf("\t\t|| 5. JEMBRANA                                    ||\n");
printf("\t\t|| 6. KARANGASEM                                  ||\n");
printf("\t\t|| 7. KLUNGKUNG                                   ||\n");
printf("\t\t|| 8. TABANAN                                     ||\n");
printf("\t\t|| 9. DENPASAR                                    ||\n");
printf("\t\t====================================================\n");
printf("\t\tMASUKAN PILIHAN ANDA: ");
scanf("%d", &pilih);
system("clear || cls");
fflush(stdin);

switch(pilih){

    case 1:
    strcpy(kAsal, "BADUNG");
    strcpy(stop1, "TUNA EXPRESS BADUNG");
    break;

    case 2:
    strcpy(kAsal, "BANGLI");
    strcpy(stop1, "TUNA EXPRESS BANGLI");
    break;

    case 3:
    strcpy(kAsal, "BULELENG");
    strcpy(stop1, "TUNA EXPRESS BULELENG");
    break;

    case 4:
    strcpy(kAsal, "GIANYAR");
    strcpy(stop1, "TUNA EXPRESS GIANYAR");
    break;

    case 5:
    strcpy(kAsal, "JEMBRANA");
    strcpy(stop1, "TUNA EXPRESS JEMBRANA");
    break;

    case 6:
    strcpy(kAsal, "KARANGASEM");
    strcpy(stop1, "TUNA EXPRESS KARANGASEM");
    break;

    case 7:
    strcpy(kAsal, "KLUNGKUNG");
    strcpy(stop1, "TUNA EXPRESS KLUNGKUNG");
    break;

    case 8:
    strcpy(kAsal, "TABANAN");
    strcpy(stop1, "TUNA EXPRESS TABANAN");
    break;

    case 9:
    strcpy(kAsal, "DENPASAR");
    strcpy(stop1, "TUNA EXPRESS DENPASAR");
    break;

    default:
    printf("\t\tMASUKAN INPUT DENGAN BENAR \n");
    kabAsal();
    break;
}

}

void kabTujuan(){

int pilih;

printf("\t\t====================================================\n");
printf("\t\t                KABUPATEN PENERIMA                  \n");
printf("\t\t====================================================\n");
printf("\t\t|| 1. BADUNG                                      ||\n");
printf("\t\t|| 2. BANGLI                                      ||\n");
printf("\t\t|| 3. BULELENG                                    ||\n");
printf("\t\t|| 4. GIANYAR                                     ||\n");
printf("\t\t|| 5. JEMBRANA                                    ||\n");
printf("\t\t|| 6. KARANGASEM                                  ||\n");
printf("\t\t|| 7. KLUNGKUNG                                   ||\n");
printf("\t\t|| 8. TABANAN                                     ||\n");
printf("\t\t|| 9. DENPASAR                                    ||\n");
printf("\t\t====================================================\n");
printf("\t\tMASUKAN PILIHAN ANDA: ");
scanf("%d", &pilih);
system("clear || cls");
fflush(stdin);

switch(pilih){

    case 1:
    strcpy(kTujuan, "BADUNG");
    strcpy(stop2, "TUNA EXPRESS BADUNG");
    break;

    case 2:
    strcpy(kTujuan, "BANGLI");
    strcpy(stop2, "TUNA EXPRESS BANGLI");
    break;

    case 3:
    strcpy(kTujuan, "BULELENG");
    strcpy(stop2, "TUNA EXPRESS BULELENG");
    break;

    case 4:
    strcpy(kTujuan, "GIANYAR");
    strcpy(stop2, "TUNA EXPRESS GIANYAR");
    break;

    case 5:
    strcpy(kTujuan, "JEMBRANA");
    strcpy(stop2, "TUNA EXPRESS JEMBRANA");
    break;

    case 6:
    strcpy(kTujuan, "KARANGASEM");
    strcpy(stop2, "TUNA EXPRESS KARANGASEM");
    break;

    case 7:
    strcpy(kTujuan, "KLUNGKUNG");
    strcpy(stop2, "TUNA EXPRESS KLUNGKUNG");
    break;

    case 8:
    strcpy(kTujuan, "TABANAN");
    strcpy(stop2, "TUNA EXPRESS TABANAN");
    break;

    case 9:
    strcpy(kTujuan, "DENPASAR");
    strcpy(stop2, "TUNA EXPRESS DENPASAR");
    break;

    default:
    printf("\t\tMASUKAN INPUT DENGAN BENAR \n");
    kabTujuan();
    break;
}

}

void waktuSampai(){
	
    double cepat=40; //rata-rata kecepatan pengemudi adalah 40 km/h
    lama= (brg.jarak*1000) / cepat; //untuk menmperkirakan berapa lama waktu yang diperlukan untuk barang sampai

}

void lihatPengiriman(){ //fungsi untuk melihat dimana barang kita berada ketika ingin melihatnya

    char data;
    double cepat;
waktuSampai();

    FILE *fjalan;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    kabAsal();
    kabTujuan();

    if(strcmp(kAsal, kTujuan)==0){
        fjalan=fopen("jalan.txt", "wb");    //membuat file untuk rute barang

        fprintf(fjalan, "\t\tWAKTU PEMESANAN: \n");
        fprintf(fjalan, "\t\tTANGGAL: %02d-%02d-%d\n",  tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
        fprintf(fjalan, "\t\tJAM    : %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
        fprintf(fjalan, "\t\tRUTE PERJALANAN BARANG ANDA: \n\n");
        fprintf(fjalan, "\t\t%s: %s --->", kAsal, pel.alamat);
        sleep(lama);
        fprintf(fjalan, " %s: %s \n", kTujuan, pel.alamat2);
        fflush(stdin);
        fclose(fjalan);
        fflush(stdin);
    }
    else if(strcmp(kAsal, kTujuan)!=0){

        fjalan=fopen("jalan.txt", "wb");
        fprintf(fjalan, "\t\tWAKTU PEMESANAN: \n");
        fprintf(fjalan, "\t\tTANGGAL: %02d-%02d-%d\n",  tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
        fprintf(fjalan, "\t\tJAM    : %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
        fprintf(fjalan, "\t\tRUTE PERJALANAN BARANG ANDA: \n");
        fprintf(fjalan, "\t\t%s: %s ---> ", kAsal, pel.alamat);
        fprintf(fjalan, "%s ---> ", stop1);
        fprintf(fjalan, "%s ---> ", stop2);
        fprintf(fjalan, "%s: %s \n", kTujuan, pel.alamat2);
        fflush(stdin);
        fclose(fjalan);
        
} 

}

void ruteBarang(){

char data;

FILE *fjalan;
    fjalan=fopen("jalan.txt", "r");
    do {
        data = fgetc(fjalan);
        printf("%c", data);
        fflush(stdin);
 
    } while (data != EOF);
    fflush(stdin);
    fclose(fjalan);

    printf("\n\n");
    
    cobaLagi();
    }

void prosesBerat(){

if(brg.berat <= 5){
    brg.harga= ((brg.berat*5)/ brg.berat * 1000);
    fflush(stdin);

}
else if(brg.berat>5 && brg.berat <30){
    int temp= (brg.berat % 5);
    fflush(stdin);
    if(temp==0){
        brg.harga= (brg.berat/5) * ((brg.berat*5)/brg.berat) * 1000;
        fflush(stdin);
    }else{
        brg.harga= ((brg.berat/5)+1) * ((brg.berat*5)/brg.berat) * 1000;
        fflush(stdin);
    }
}
}

void dataPengirim(){

system("clear || cls");
printf("\t\t====================================================\n");
printf("\t\t                     DATA  PENGIRIM                 \n");
printf("\t\t====================================================\n");
printf("\t\tNAMA    : ");
fgets(pel.nama, 100, stdin);
fflush(stdin);
pel.nama[strlen(pel.nama)-1]='\0';
printf("\t\tNOMOR HP: ");
scanf("%d", pel.telp);
fflush(stdin);
printf("\t\tALAMAT  : ");
fgets(pel.alamat, 100, stdin);
fflush(stdin);
pel.alamat[strlen(pel.alamat)-1]='\0';

}

void dataPenerima(){

system("clear || cls");
printf("\t\t====================================================\n");
printf("\t\t                     DATA  PENERIMA                 \n");
printf("\t\t====================================================\n");
printf("\t\tNAMA    : ");
fgets(pel.nama2, 100, stdin);
fflush(stdin);
pel.nama2[strlen(pel.nama2)-1]='\0';
printf("\t\tNOMOR HP: ");
scanf("%d", pel.telp2);
fflush(stdin);
printf("\t\tALAMAT  : ");
fgets(pel.alamat2, 100, stdin);
fflush(stdin);
pel.alamat2[strlen(pel.alamat2)-1]='\0';

if(strcmp(pel.alamat, pel.alamat2)==0){
    printf("\t\tALAMAT YANG ANDA MASUKAN SAMA! \n");
    printf("\t\tMOHON PASTIKAN DATA BENAR \n");
    getchar();
    dataPenerima();
}
}

void pengaman(){

int pilih;

printf("\t\t====================================================\n");
printf("\t\t|| PILIH PERLINDUNGAN EKSTRA?                     ||\n");
printf("\t\t||                                                ||\n");
printf("\t\t|| 1. PERLINDUNGAN SILVER             (+ Rp1000)  ||\n");
printf("\t\t|| 2. PERLINDUNGAN GOLD               (+ Rp2000)  ||\n");
printf("\t\t|| 3. PERLINDUNGAN PLATINUM           (+ Rp4000)  ||\n");
printf("\t\t|| 4. NGGA DULU DEH                               ||\n");
printf("\t\t====================================================\n");
printf("\t\tMASUKAN PILIHAN: ");
scanf("%d", &pilih);
fflush(stdin);
system("clear || cls");
    
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
        printf("\t\tMOHON MASUKAN INPUT DENGAN BENAR <3 \n");
        getchar();
        pengaman();


}

}

void berat(){

int ulang;

system("clear || cls");
printf("\t\tBERAT TOTAL BARANG (KG): ");
scanf("%d", &brg.berat);
fflush(stdin);

if(brg.berat<1){
    printf("\t\tMASUKAN BERAT DENGAN BENAR! \n");
    getchar();
    berat();
        }

prosesBerat();

}

void jarak(){

system("clear || cls");
printf("\t\tMASUKAN JARAK PENGIRIMAN (KM): ");
scanf("%d", &brg.jarak);

if(brg.jarak<1 || brg.jarak==0){
    printf("\t\tMASUKAN JARAK DENGAN BENAR! \n");
    getchar();
    jarak();
}

if(brg.jarak<=5){
    amn.harga1= brg.harga + 2000;
    fflush(stdin);

}else if(brg.jarak>5 && brg.jarak<110){
    int temp= (brg.jarak % 5);
    if(temp==0){
        amn.harga1= (brg.jarak/5) * ((brg.harga*5)/brg.harga) * 3000;
        fflush(stdin);
    }else{
        amn.harga1= ((brg.jarak/5)+1) * ((brg.harga*5)/brg.harga) * 3000;
        fflush(stdin);
    }
}else{
    printf("\t\tMOHON MAAF JARAK MAX 110 KM\n");
    jarak();
}
}

void menuBCA(){

resi();
printf("\t\t| BANK BCA                                         |\n");
printf("\t\t----------------------------------------------------\n");
printf("\t\tNO REKENING:                                     \n");
printf("\t\t0403288664                                       \n");
printf("\t\t----------------------------------------------------\n");
printf("\t\tTOTAL Rp %d \n", amn.harga2);
}

void menuBNI(){

resi();
printf("\t\t| BANK BNI                                         |\n");
printf("\t\t----------------------------------------------------\n");
printf("\t\tNO REKENING:                                     \n");
printf("\t\t0778193597                                       \n");
printf("\t\t----------------------------------------------------\n");
printf("\t\tTOTAL Rp %d \n", amn.harga2);
}

void menuMandiri(){

resi();
printf("\t\t| BANK MANDIRI                                     |\n");
printf("\t\t====================================================\n");
printf("\t\tNO REKENING:                                     \n");
printf("\t\t0403288664                                       \n");
printf("\t\t----------------------------------------------------\n");
printf("\t\tTOTAL Rp %d \n", amn.harga2);
}

void menuBRI(){

resi();
printf("\t\t| BANK BRI                                         |\n");
printf("\t\t====================================================\n");
printf("\t\tNO REKENING:                                     \n");
printf("\t\t0403288664                                       \n");
printf("\t\tTOTAL Rp %d \n", amn.harga2);
}


void atm(){

int pilih;

printf("\t\t=================== METODE BAYAR ===================\n");
printf("\t\t|| 1. BCA                                         ||\n");
printf("\t\t|| 2. BNI                                         ||\n");
printf("\t\t|| 3. MANDIRI                                     ||\n");
printf("\t\t|| 4. BRI                                         ||\n");
printf("\t\t====================================================\n");
printf("\t\tMASUKAN PILIHAN: ");
scanf("%d", &pilih);
fflush(stdin);
system("clear || cls");
switch(pilih){

    case 1:
    menuBCA();
    fflush(stdin);
    printf("\t\t====================================================\n");
    printf("\t\tTEKAN ENTER UNTUK MELANJUTKAN...\n");
    getchar();
    system("clear || cls");
    break;

    case 2:
    menuBNI();
    fflush(stdin);
    printf("\t\t====================================================\n");
    printf("\t\tTEKAN ENTER UNTUK MELANJUTKAN...\n");
    getchar();
    system("clear || cls");
    break;

    case 3:
    menuMandiri();
    fflush(stdin);
    printf("\t\t====================================================\n");
    printf("\t\tTEKAN ENTER UNTUK MELANJUTKAN...\n");
    getchar();
    system("clear || cls");
    break;

    case 4:
    menuBRI();
    fflush(stdin);
    printf("\t\t====================================================\n");
    printf("\t\tTEKAN ENTER UNTUK MELANJUTKAN...\n");
    getchar();
    system("clear || cls");
    break;

    default:
    printf("\t\tINPUT YANG ANDA MASUKAN TIDAK VALID \n");
    getchar();
    atm();
    break;
}
}

void metodeBayar(){

int pilih;
int hasil;

printf("\t\t=================== METODE BAYAR ===================\n");
printf("\t\t|| 1. TUNAI                                       ||\n");
printf("\t\t|| 2. ATM                                         ||\n");
printf("\t\t|| 3. PAY LATER                                   ||\n");
printf("\t\t====================================================\n");
printf("\t\tMASUKAN PILIHAN: ");
scanf("%d", &pilih);
fflush(stdin);
system("clear || cls");

switch(pilih){

    case 1:
    resi();
    printf("\t\tTOTAL: Rp%d                                         \n", amn.harga2);
    printf("\t\t----------------------------------------------------\n");
    printf("\t\tPRESS ENTER TO CONTINUE.....\n");
    getchar();
    break;

    case 2:
    atm();
    break;

    case 3:
    hasil= amn.harga2 / 4;
    resi();
    printf("\t\tTOTAL: Rp%d                                         \n", amn.harga2);
    printf("\t\tLUNASKAN DALAM 4 BULAN >> Rp%d / BULAN              \n", hasil);
    printf("\t\t----------------------------------------------------\n");
    printf("\t\tPRESS ENTER TO CONTINUE.....\n");
    getchar();
    break;

    default:
    printf("\t\tMASUKAN INPUT DENGAN BENAR! \n");
    metodeBayar();
    
}


}

void menu(){

infoBarang();
dataPengirim();
dataPenerima();
lihatPengiriman();
berat();
jarak();
pengaman();
metodeBayar();
cobaLagi();
}

void final(){
    
    int pilih;

system("clear || cls");
printf("\t\t====================================================\n");
printf("\t\t||           J A S A   P E N G I R I M AN         ||\n");
printf("\t\t||                                                ||\n");
printf("\t\t||   PUTU GEDE PRAYATNA    ||     DANU DAKSAWAN   ||\n");
printf("\t\t||   2205551068            ||     2205551062      ||\n");
printf("\t\t----------------------------------------------------\n");
printf("\t\tTEKAN ENTER UNTUK MELANJUTKAN....\n");
getchar();

printf("\t\t-------------------- M E N U ----------------------\n");
printf("\t\t| 1. BUAT PESANAN                                 |\n");
printf("\t\t| 2. LIHAT HISTORY PEMESANAN                      |\n");
printf("\t\t| 3. LIHAT BARANG                                 |\n");
printf("\t\t---------------------------------------------------\n");
printf("\t\tMASUKAN PILIHAN ANDA: ");
scanf("%d", &pilih);
system("clear || cls");
switch(pilih){

    case 1:
    menu();
    fflush(stdin);
    break;

    case 2:
    tampilkanData();
    fflush(stdin);
    break;

    case 3:
    ruteBarang();
    fflush(stdin);
    break;

    default:
    printf("MASUKAN INPUT YANG VALID \n");
    main();
    fflush(stdin);
    break;
}
}

int main(){

    final();
}
