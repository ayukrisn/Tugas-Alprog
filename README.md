# Tugas-Alprog
I Gusti Ayu Krisna Kusuma Dewi - 2205551072 \n
Pada program C ini berisikan rumus-rumus operasi aritmetika yang dapat digunakan untuk menyelesaikan suatu perhitungan dengan menggunakan fungsi dan prosedur. Program ini mengaplikasikan fungsi serta prosedur di dalam setiap pemanggilan menu dan rumus yang akan digunakan. Hal ini bertujuan untuk membagi-bagi kode program menjadi bagian yang lebih kecil sehingga lebih memudahkan programmer untuk melakukan perubahan ataupun membaca kode program tersebut. Fungsi dan prosedur dapat dipanggil secara berulang kali, sehingga menghemat waktu programmer dan membuat program lebih mudah untuk dibaca.


# Penggunaan Program Ini
### Menu
Pada setiap bagian menu (baik menu utama maupun sub menu), pengguna diharapkan untuk memasukkan pilihan berupa angka/integer sesuai dengan fitur yang ingin diakses dan lalu menekan enter. Menu menggunakan statement switch-case untuk mencocokkan pilihan pengguna dengan kondisi yang ada dan memanggil fungsi atau prosedur sesuai dengan pilihan pengguna. Bila pengguna memasukkan pilihan yang salah, maka program akan memperingati pengguna, menjalankan system("cls") untuk membersihkan layar memanggil kembali menu yang bersangkutan.
### Kalkulator
Setelah memasuki fitur, Pengguna memasukkan angka yang diperlukan (dapat berupa float maupun integer) sesuai dengan keperluan rumus dan menekan enter. Program akan memberikan hasil dari perhitungan tersebut.
### Pengulangan 
Setelah mendapatkan hasil, pengguna dapat kembali ke menu awal dengan memasukkan input 'Y' atau keluar dari program dengan memasukkan input 'N'. Fitur ini menggunakan statement if-else.
### Salah input
Bila pengguna memasukkan input yang salah (contoh: kesalahan dalam memasukkan tipe data), maka program akan memperingati pengguna dan memberi tahu untuk memasukkan input yang benar, menjalankan system("cls") untuk membersihkan layar dan terakhir memanggil kembali menu yang bersangkutan. Ini akan terus diulang hingga pengguna memasukkan input yang sesuai dengan permintaan program. Fitur ini memanfaatkan suatu fungsi serta if-else dan bool dalam penggunaannya.
### Berpindah Menu / Mengulang Input
Pada saat berpindah menu atau mengulang input, program menggunakan fungsi yang telah disediakan untuk me-reset tampilan layar sehingga tidak memenuhi layar tersebut serta melalukan flush pada stdin.


# Output Program
Berikut adalah output dari program rumus operasi aritmetika.

## Menu Utama
![image](https://user-images.githubusercontent.com/113322119/196034833-e3baf98b-f806-42c7-9487-9d1fa8068e9d.png)

## Menu Bangun Datar
![menu bangun datar](https://user-images.githubusercontent.com/113322119/196032500-a28d5f68-e26d-483a-a53e-8f32d59e4527.png)
### 1. Rumus Persegi
![persegi](https://user-images.githubusercontent.com/113322119/196033773-5cfd830f-7392-40de-bb98-2619c1ab0e1a.png)
### 2. Rumus Persegi Panjang
![persegi panjang](https://user-images.githubusercontent.com/113322119/196033780-a544d7f5-f7cf-491a-be52-ba7685d9b608.png)
### 3. Rumus Trapesium
![trapesium](https://user-images.githubusercontent.com/113322119/196033792-5cd5aa30-77fe-4de8-91c0-d5ffd30bf69f.png)
### 4. Rumus Segitiga
Dalam segitiga, pengguna harus memasukkan nilai di mana a + b > c atau salah satu sisi harus lebih kecil dari jumlah kedua sisi lainnya.
![segitiga (benar)](https://user-images.githubusercontent.com/113322119/196033864-2aa0e1a5-616f-41a9-81d7-eacf2b8bf843.png)
![segitiga (salah)](https://user-images.githubusercontent.com/113322119/196033873-689ff52d-aa3f-4a61-bfdc-c62c976aca28.png)
### 5. Rumus Lingkaran
![lingkaran](https://user-images.githubusercontent.com/113322119/196033899-dfcd7ed8-3ab9-4de1-b66a-eeb9ed8ea124.png)


## Menu Bangun Ruang
![menu bangun ruang](https://user-images.githubusercontent.com/113322119/196032508-6dbc2dfc-0d31-4d63-a5a0-e029aee295df.png)
### 1. Rumus Balok
![balok](https://user-images.githubusercontent.com/113322119/196033971-18545303-9462-45a1-a24a-79b3f93c1663.png)
### 2. Rumus Limas Persegi
![limas persegi](https://user-images.githubusercontent.com/113322119/196033986-d654874d-1556-4e16-b1a4-e28b5f51f3e0.png)
### 3. Rumus Bola
![bola](https://user-images.githubusercontent.com/113322119/196034049-d24fcab4-a558-425a-80c7-f6f338553933.png)
### 4. Rumus Kerucut
![kerucut](https://user-images.githubusercontent.com/113322119/196034052-f85c96ee-9081-4044-b200-c8816d14daf4.png)
### 5. Rumus Tabung
![tabung](https://user-images.githubusercontent.com/113322119/196034059-033e2bbb-a5db-40d1-ae8b-d5de83a9bff8.png)


## Menu Baris dan Deret Aritmetika
![menu aritmetika](https://user-images.githubusercontent.com/113322119/196032515-fbb8c802-9f9a-4edc-8093-43595c29d0b8.png)
### 1. Beda Barisan Aritmetika
![beda](https://user-images.githubusercontent.com/113322119/196034375-03aa403f-b253-4627-9747-3f988cb2cd58.png)
### 2. Suku Ke-n dan Jumlah n Suku Pertama
![suku ke n dan jumlah](https://user-images.githubusercontent.com/113322119/196034380-582acb8a-5ff1-42bb-8335-e5b9eab5b660.png)

## Menu Baris dan Deret Geometri
![menu geometri](https://user-images.githubusercontent.com/113322119/196032520-c6bb82e9-fa4a-4fa9-b574-90dc7936e223.png)
### 1. Rasio Barisan Geometri (r)
![rasio](https://user-images.githubusercontent.com/113322119/196034357-776274d2-8a71-4081-9caa-92618789a216.png)
### 2. Nilai Suku Ke-n Barisan Geometri
![suku ke n](https://user-images.githubusercontent.com/113322119/196034366-2de24782-0a47-4e71-b8e7-8ff9e235ad65.png)
### 3. Jumlah Suku Ke-n Barisan Geometri
![jumlah n pertama](https://user-images.githubusercontent.com/113322119/196034345-4fcd87b7-a9ee-4b64-8ca9-d6bb354a13d7.png)

## Menu Debit, Waktu, dan Volume Air
Pada program ini, satuan yang digunakan adalah liter dan detik.
![menu debit](https://user-images.githubusercontent.com/113322119/196032529-e287e936-9ea4-4b7c-8989-14f4191c8bf6.png)
### 1. Menghitung Debit Air
![debit](https://user-images.githubusercontent.com/113322119/196034335-06009e64-8af7-4058-810e-0feda2c67bbc.png)
### 2. Menghitung Waktu Air
![waktu](https://user-images.githubusercontent.com/113322119/196034341-f2ebc5a2-a85c-42d5-996f-626552889fb5.png)
### 3. Menghitung Volume Air
![volume](https://user-images.githubusercontent.com/113322119/196034339-8748ab5a-40f5-4001-9f61-74d15ba1faaa.png)

### Keluar
![keluar](https://user-images.githubusercontent.com/113322119/196035650-78e9162f-c36f-4550-bd51-e8bc48e9301c.png)

### Salah Input
Program akan mengeluarkan output seperti pada tangkapan layar di bawah, lalu menjalankan system("cls") dan memanggil kembali fungsi menu yang bersangkutab.
![image](https://user-images.githubusercontent.com/113322119/196036063-6b3d70b2-9a99-407f-b7ea-ea94b3a45e00.png)
