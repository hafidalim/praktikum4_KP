#include <stdio.h>

int main(void) {
  // printf("Program konversi celcius ke fahrenheit\n");
  // printf("Masukan suhu celcius :");
  // int c, f;
  // scanf("%d",&c);
  // f = c * 1.8 + 32;
  // printf("Hasilnya adalah %d",f);


  int gaji, tsi, ta,thr,bt, jumlahanak,lamakerja, pajak, polis = 20000, total, transport;
  printf("~~~Program menghitung pendapatan karyawan~~~\n");
  printf("Masukan gaji anda :");
  scanf("%d",&gaji);
  tsi = gaji*10/100;
  printf("Tunjangan istri/suami yg didapatkan : %d\n",tsi);
  printf("Berapakah jumlah anak anda ? : ");
  scanf("%d",&jumlahanak);
  ta = gaji * jumlahanak * 5 /100;
  printf("Maka anda mendapatkan Tunjangan anak Rp. %d\n",ta);
  printf("Sudah berapa bulankah anda bekerja : ");
  scanf("%d",&lamakerja);
  thr = lamakerja * 5000;
  printf("Maka anda mendapatkan THR sebesar : %d\n",thr);
  transport = 3000*lamakerja*30;
  printf("Bantuan uang transport anda : %d\n",transport);
  pajak = gaji*15/100 + tsi*15/100 + ta * 15 /100;
  printf("Pajak yang anda bayarkan adalah : %d\n",pajak);
  printf("Polis asuransi : %d \n",polis);
  total = gaji + tsi + ta + thr + transport - pajak - 20000;
  printf("Total pendapatan gaji anda adalah Rp. %d ,-\n",total);

  return 0;
}