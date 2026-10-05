Saya putri selly dengan nim 2509481 mengerjakan tp 3 dalam mata kuliah pemrograman berorientasi objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.


<img width="697" height="327" alt="Untitled Diagram drawio (4)" src="https://github.com/user-attachments/assets/c1ade79c-7e99-4074-ad80-5f5bc9ff6a2e" />

**1. Penjelasan Atribut dan Method Setiap Kelas**

**Class Karakter**

Class Karakter merupakan class induk yang menjadi dasar bagi class Mage dan Warior. Class ini menyimpan informasi dasar yang dimiliki oleh setiap karakter, yaitu nama, level, dan hp. Atribut nama digunakan untuk menyimpan nama karakter, level untuk menyimpan tingkatan karakter, sedangkan hp untuk menyimpan jumlah health point karakter.
Class ini memiliki constructor Karakter() yang digunakan untuk memberikan nilai awal pada ketiga atribut tersebut. Selain itu, terdapat method getNama(), getLevel(), dan getHp() yang digunakan untuk mengambil nilai dari masing-masing atribut. Terdapat juga setNama(), setLevel(), dan setHp() yang digunakan untuk mengubah nilai atribut. Class ini juga memiliki destructor virtual ~Karakter() agar Karakter dapat digunakan sebagai class polymorphic sehingga dynamic_cast dapat digunakan untuk mengetahui jenis object turunannya.

**Class Mage**

Class Mage merupakan turunan dari class Karakter yang digunakan untuk merepresentasikan karakter yang menggunakan kemampuan sihir. Karena mewarisi Karakter, Mage juga memiliki atribut nama, level, dan hp.
Selain atribut yang diwarisi tersebut, Mage memiliki tiga atribut khusus, yaitu mana, kekuatanSihir, dan jenisSihir. Mana digunakan untuk menyimpan jumlah mana yang dimiliki, kekuatanSihir menyimpan nilai kekuatan sihir, sedangkan jenisSihir menyimpan jenis sihir yang digunakan.
Constructor Mage() digunakan untuk mengisi seluruh data Mage sekaligus memanggil constructor dari class Karakter. Method getMana(), getKekuatanSihir(), dan getJenisSihir() digunakan untuk mengambil nilai atribut. Sementara itu, setMana(), setKekuatanSihir(), dan setJenisSihir() digunakan untuk mengubah nilai atribut tersebut.

**Class Warior**

Class Warior merupakan turunan dari Karakter dan digunakan untuk merepresentasikan karakter yang memiliki kemampuan bertarung secara fisik. Warior mewarisi atribut nama, level, dan hp dari Karakter.
Warior memiliki atribut tambahan berupa kekuatanSerangan, armor, dan jenisSenjata. KekuatanSerangan digunakan untuk menyimpan nilai serangan karakter, armor digunakan untuk menyimpan nilai perlindungan, sedangkan jenisSenjata menyimpan jenis senjata yang digunakan.
Constructor Warior() digunakan untuk memberikan nilai awal pada seluruh atribut Warior dan memanggil constructor Karakter. Method getKekuatanSerangan(), getArmor(), dan getJenisSenjata() digunakan untuk mengambil data, sedangkan setKekuatanSerangan(), setArmor(), dan setJenisSenjata() digunakan untuk mengubah data tersebut.

**Class Knight**

Class Knight merupakan turunan dari Warior. Karena Warior sendiri merupakan turunan dari Karakter, maka Knight mendapatkan atribut dari kedua class tersebut. Dengan demikian, Knight memiliki data dasar seperti nama, level, dan hp, serta data dari Warior seperti kekuatanSerangan, armor, dan jenisSenjata.
Knight juga memiliki atribut khusus yaitu pertahanan, stamina, dan jenisPerisai. Pertahanan digunakan untuk menyimpan nilai pertahanan Knight, stamina menyimpan daya tahan karakter, sedangkan jenisPerisai menyimpan jenis perisai yang digunakan.
Selain itu, Knight memiliki atribut peralatan yang merupakan object dari class Peralatan. Atribut tersebut digunakan untuk menerapkan konsep composition, karena object Peralatan menjadi bagian dari object Knight.
Constructor Knight() digunakan untuk mengisi data Knight, memanggil constructor Warior, serta membuat object Peralatan yang dimiliki Knight. Method getPertahanan(), getStamina(), dan getJenisPerisai() digunakan untuk mengambil data Knight. Method setPertahanan(), setStamina(), dan setJenisPerisai() digunakan untuk mengubah data tersebut. Terdapat juga getPeralatan() untuk mengambil object Peralatan dan setPeralatan() untuk mengubah data peralatan.

**Class Peralatan**

Class Peralatan digunakan untuk menyimpan informasi mengenai peralatan yang dimiliki oleh Knight. Class ini memiliki atribut namaPeralatan, jenisPeralatan, dan levelPeralatan. NamaPeralatan menyimpan nama peralatan, jenisPeralatan menyimpan jenis peralatan, sedangkan levelPeralatan menyimpan tingkat atau level peralatan.
Constructor Peralatan() digunakan untuk memberikan nilai awal pada ketiga atribut tersebut. Method getNamaPeralatan(), getJenisPeralatan(), dan getLevelPeralatan() digunakan untuk mengambil data peralatan. Sementara itu, setNamaPeralatan(), setJenisPeralatan(), dan setLevelPeralatan() digunakan untuk mengubah data peralatan.

**2. Penjelasan Desain Program**

Desain program menggunakan hybrid inheritance yang menggabungkan hierarchical inheritance dan multilevel inheritance. Struktur inheritance yang digunakan adalah seperti table di agram di atas.
Pada bagian hierarchical inheritance, class Mage dan Warior sama-sama mewarisi class Karakter. Artinya, kedua class tersebut mendapatkan atribut dan method dasar dari Karakter, tetapi masing-masing memiliki kemampuan dan atribut tambahan yang berbeda.
Kemudian terdapat multilevel inheritance pada hubungan Karakter -> Warior -> Knight. Knight mewarisi Warior, sedangkan Warior mewarisi Karakter. Oleh karena itu, Knight dapat menggunakan data dan method yang berasal dari Warior maupun Karakter.
Karena hierarchical inheritance dan multilevel inheritance digunakan secara bersamaan, struktur inheritance tersebut disebut hybrid inheritance.
Selain inheritance, program juga menggunakan composition antara Knight dan Peralatan.
Composition diterapkan dengan membuat object Peralatan sebagai atribut di dalam class Knight. Dengan demikian, setiap object Knight memiliki object Peralatan yang menjadi bagian dari dirinya. Pada saat Knight dibuat, data Peralatan juga dibuat melalui constructor Knight.
Program juga menggunakan vector<Karakter*> untuk menyimpan object dari class yang berbeda, yaitu Mage dan Knight. Karena keduanya masih merupakan turunan dari Karakter, keduanya dapat disimpan dalam satu vector menggunakan pointer Karakter*. Kemudian dynamic_cast digunakan untuk mengetahui apakah object yang sedang diperiksa merupakan Mage atau Knight.

**3. Penjelasan Alur Program**

Program dimulai dengan membuat sebuah vector<Karakter*> bernama daftarKarakter yang digunakan untuk menyimpan berbagai object karakter. Setelah itu dibuat object Mage bernama Luna dan object Knight bernama Arthur. Kedua object tersebut kemudian dimasukkan ke dalam vector.
Selanjutnya program menampilkan data yang sudah ada dengan judul DATA SEBELUM DITAMBAHKAN. Data yang ditampilkan meliputi seluruh atribut yang dimiliki oleh Mage dan Knight, termasuk data Peralatan yang dimiliki oleh Knight.
Setelah data awal ditampilkan, program membuat object Knight kedua bernama Leon. Object tersebut kemudian dimasukkan ke dalam daftarKarakter. Setelah penambahan selesai, program menampilkan judul DATA SESUDAH DITAMBAHKAN dan melakukan perulangan terhadap seluruh object yang terdapat di dalam vector.
Pada setiap perulangan, program menggunakan dynamic_cast untuk mengecek jenis object. Jika object merupakan Mage, maka data Mage ditampilkan. Jika object merupakan Knight, maka data Knight beserta data Peralatan yang dimilikinya ditampilkan. Dengan demikian, alur program menunjukkan proses pembuatan object, penyimpanan object, penambahan data, dan penampilan data sebelum serta sesudah penambahan.

**4. Dokumentasi**

**python**

<img width="423" height="460" alt="data sesudah ditambah 1" src="https://github.com/user-attachments/assets/8fc6ed05-2642-4b4e-9d6e-c925b49ddfcf" />

**c++**

<img width="243" height="456" alt="sesudah tambah data" src="https://github.com/user-attachments/assets/55e9fc5b-76c0-4dc1-a4bd-0a3e079964db" />

