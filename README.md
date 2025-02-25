LEDControl-Blynk
Proyek LEDControl-Blynk adalah sebuah aplikasi IoT sederhana yang menggunakan platform Blynk untuk mengontrol LED secara remote melalui ESP32. Dengan memanfaatkan virtual pin V0 pada aplikasi Blynk, pengguna dapat dengan mudah menghidupkan atau mematikan LED melalui koneksi WiFi.

Deskripsi Proyek
Proyek ini dirancang untuk:

Menghubungkan ESP32 ke WiFi: Memanfaatkan modul ESP32 untuk terhubung ke jaringan nirkabel.
Integrasi dengan Blynk: Menggunakan platform Blynk untuk membuat antarmuka kontrol sederhana melalui smartphone.
Kontrol LED Real-Time: Mengatur status LED (ON/OFF) secara real-time menggunakan virtual pin V0 di aplikasi Blynk.
Fitur
Setup WiFi & Blynk: Konfigurasi ESP32 untuk koneksi WiFi dan integrasi dengan Blynk melalui token autentikasi.
Kontrol LED: Pengaturan LED melalui perintah dari aplikasi Blynk.
Kode yang Mudah Dipahami: Kode dilengkapi dengan komentar yang memudahkan pemahaman dan modifikasi.
Cara Penggunaan
Persiapan:

Pastikan Anda memiliki ESP32, LED, dan koneksi internet.
Siapkan aplikasi Blynk di smartphone dan buat proyek baru untuk mendapatkan BLYNK_AUTH_TOKEN.
Konfigurasi Kode:

Ganti BLYNK_AUTH_TOKEN, ssid, dan pass sesuai dengan konfigurasi jaringan WiFi dan akun Blynk Anda.
Instalasi:

Buka kode ini menggunakan Arduino IDE atau platform pemrograman lainnya yang mendukung ESP32.
Upload kode ke board ESP32.
Kontrol LED:

Jalankan aplikasi Blynk dan hubungkan dengan proyek yang telah dibuat.
Gunakan widget (misalnya tombol) yang terhubung dengan virtual pin V0 untuk menghidupkan atau mematikan LED.
Kontribusi
Kontribusi dan saran perbaikan sangat diterima! Jika Anda menemukan bug atau memiliki fitur baru yang bisa ditambahkan, silakan fork repo ini dan ajukan pull request.
