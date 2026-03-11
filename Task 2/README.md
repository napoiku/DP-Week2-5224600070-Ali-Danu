Core Loop:  
1. Pemain memilih blind  
2. Sistem generate deck & hand pemain  
3. Pemain memilih kartu  
4. Sistem menghitung kombinasi kartu dan skor  
5. Sistem cek win/lose 
6. Sistem memberi reward ke pemain  
7. Sistem membuka fase toko
8. Pemain membeli upgrade
9. ulangi  
  
1. Which steps in your loop must NEVER change order?  
-Step 2 hingga 8, karena saling berurutan  
  
2. Which components must always exist for the game to function?  
-RunSession: Kelas utama yang mengontrol aliran dari langkah 1 sampai 9.  
-Scoring System: Logika untuk mengevaluasi kombinasi kartu pemain.  
-Inventory/State Management: Komponen untuk menyimpan jumlah uang dan daftar upgrade yang sudah dibeli pemain.  
-Win/Lose Checker: Logika penentu apakah permainan lanjut ke ronde berikutnya atau berakhir.  
  
3. What would break if the order changes?  
-Jika pemain dapat memilih kartu sebelum hand dibuat, apa yang akan dipilih pemain.  
-Jika sistem menghitung kombinasi kartu tetapi pemain belum memilih, sistem akan error karena tidak ada yang bisa dihitung  
-Jika sistem cek win/lose sebelum menghitung kombinasi, apa yang akan dibandingkan dengan target blind.  
Jadi jika urutan berubah keseluruhan sistem permainan akan hancur  
  
1. What is the invariant structure of your game?  
-Struktur invarian dalam game ini adalah alur urutan fase (core loop) yang didefinisikan di dalam metode processRound() pada kelas RunSession. Struktur ini mencakup sembilan langkah sistematis: dimulai dari pemilihan blind, pembuatan hand, aksi pemain, penghitungan skor, pengecekan kondisi menang/kalah, pemberian hadiah, hingga fase toko dan pengulangan ronde.  

2. What parts are mutable?  
-Select blind, generate hand, modifier, scoring, reward, dan shop system.  

3. If you wanted to add a new feature, which class would change?  
-SimpleGenerate, Reward, Scoring, ShopSystem, SelectBlind, ModifierFactory, atau membuat class baru dari interface yang ada.  

4. If you changed the loop order, what would break?  
-Jika urutan loop diubah, integritas dan logika permainan akan hancur.