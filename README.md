# 4-Queen
## Deklarasi global
Papan catur 4 x 4 dan variabel solusi
<br/>![global](https://user-images.githubusercontent.com/56763570/78850716-b7133500-79cc-11ea-9cd1-1240437483ea.PNG)<br/>
## Fungsi print untuk menampilkan solusi yang ditemukan. Pada fungsi ini  queen diberi tanda '1' dan yang lain ditandai dengan '0'. 
<br/>![printf](https://user-images.githubusercontent.com/56763570/78851142-ebd3bc00-79cd-11ea-9eb5-e304f73f6f6d.PNG)<br/>
## Fungsi area (forward checking) digunakan untuk menandai area mana saja yang telah dimiliki oleh queen
<br/>![area](https://user-images.githubusercontent.com/56763570/78851289-48cf7200-79ce-11ea-8b4b-bd4c9287461a.PNG)<br/>
## Fungsi Solve untuk mencari semua kemungkinan. Termasuk ketika ratu tidak dapat diletakkan pada sebuah baris karena sudah tidak ada area yang aman, maka akan kembali ke baris sebelumnya untuk memindahkan letak queen ke kolom selanjutnya(backtracking).
<br/>![solve](https://user-images.githubusercontent.com/56763570/78851809-9e584e80-79cf-11ea-895c-c22006dd13bb.PNG)<br/>
