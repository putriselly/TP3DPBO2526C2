class Karakter:  # Membuat class induk Karakter
    def __init__(self, nama, level, hp):  # Constructor untuk membuat object Karakter
        self.__nama = nama  # Menyimpan nama karakter
        self.__level = level  # Menyimpan level karakter
        self.__hp = hp  # Menyimpan HP karakter

    def getNama(self):  # Method untuk mengambil nama
        return self.__nama  # Mengembalikan nama karakter
    def getLevel(self):  # Method untuk mengambil level
        return self.__level  # Mengembalikan level karakter
    def getHp(self):  # Method untuk mengambil HP
        return self.__hp  # Mengembalikan HP karakter
    def setNama(self, nama):  # Method untuk mengubah nama
        self.__nama = nama  # Mengubah nama karakter
    def setLevel(self, level):  # Method untuk mengubah level
        self.__level = level  # Mengubah level karakter
    def setHp(self, hp):  # Method untuk mengubah HP
        self.__hp = hp  # Mengubah HP karakter


class Mage(Karakter):  # Membuat Mage sebagai turunan Karakter
    def __init__(self, nama, level, hp, mana, kekuatanSihir, jenisSihir):  # Constructor Mage
        super().__init__(nama, level, hp)  # Memanggil constructor dari Karakter
        self.__mana = mana  # Menyimpan mana Mage
        self.__kekuatanSihir = kekuatanSihir  # Menyimpan kekuatan sihir
        self.__jenisSihir = jenisSihir  # Menyimpan jenis sihir

    def getMana(self):  # Method untuk mengambil mana
        return self.__mana  # Mengembalikan mana
    def getKekuatanSihir(self):  # Method untuk mengambil kekuatan sihir
        return self.__kekuatanSihir  # Mengembalikan kekuatan sihir
    def getJenisSihir(self):  # Method untuk mengambil jenis sihir
        return self.__jenisSihir  # Mengembalikan jenis sihir
    def setMana(self, mana):  # Method untuk mengubah mana
        self.__mana = mana  # Mengubah mana
    def setKekuatanSihir(self, kekuatanSihir):  # Method untuk mengubah kekuatan sihir
        self.__kekuatanSihir = kekuatanSihir  # Mengubah kekuatan sihir
    def setJenisSihir(self, jenisSihir):  # Method untuk mengubah jenis sihir
        self.__jenisSihir = jenisSihir  # Mengubah jenis sihir


class Warior(Karakter):  # Membuat Warior sebagai turunan Karakter
    def __init__(self, nama, level, hp, kekuatanSerangan, armor, jenisSenjata):  # Constructor Warior
        super().__init__(nama, level, hp)  # Memanggil constructor dari Karakter
        self.__kekuatanSerangan = kekuatanSerangan  # Menyimpan kekuatan serangan
        self.__armor = armor  # Menyimpan armor
        self.__jenisSenjata = jenisSenjata  # Menyimpan jenis senjata

    def getKekuatanSerangan(self):  # Method untuk mengambil kekuatan serangan
        return self.__kekuatanSerangan  # Mengembalikan kekuatan serangan
    def getArmor(self):  # Method untuk mengambil armor
        return self.__armor  # Mengembalikan armor
    def getJenisSenjata(self):  # Method untuk mengambil jenis senjata
        return self.__jenisSenjata  # Mengembalikan jenis senjata
    def setKekuatanSerangan(self, kekuatanSerangan):  # Method untuk mengubah kekuatan serangan
        self.__kekuatanSerangan = kekuatanSerangan  # Mengubah kekuatan serangan
    def setArmor(self, armor):  # Method untuk mengubah armor
        self.__armor = armor  # Mengubah armor
    def setJenisSenjata(self, jenisSenjata):  # Method untuk mengubah jenis senjata
        self.__jenisSenjata = jenisSenjata  # Mengubah jenis senjata


class Knight(Warior):  # Membuat Knight sebagai turunan Warior
    def __init__(self, nama, level, hp, kekuatanSerangan, armor, jenisSenjata, pertahanan, stamina, jenisPerisai, namaPeralatan, jenisPeralatan, levelPeralatan):  # Constructor Knight
        super().__init__(nama, level, hp, kekuatanSerangan, armor, jenisSenjata)  # Memanggil constructor Warior
        self.__pertahanan = pertahanan  # Menyimpan pertahanan Knight
        self.__stamina = stamina  # Menyimpan stamina Knight
        self.__jenisPerisai = jenisPerisai  # Menyimpan jenis perisai
        self.__peralatan = Peralatan(namaPeralatan, jenisPeralatan, levelPeralatan)  # Membuat object Peralatan di dalam Knight

    def getPertahanan(self):  # Method untuk mengambil pertahanan
        return self.__pertahanan  # Mengembalikan pertahanan
    def getStamina(self):  # Method untuk mengambil stamina
        return self.__stamina  # Mengembalikan stamina
    def getJenisPerisai(self):  # Method untuk mengambil jenis perisai
        return self.__jenisPerisai  # Mengembalikan jenis perisai
    def getPeralatan(self):  # Method untuk mengambil Peralatan
        return self.__peralatan  # Mengembalikan object Peralatan
    def setPertahanan(self, pertahanan):  # Method untuk mengubah pertahanan
        self.__pertahanan = pertahanan  # Mengubah pertahanan
    def setStamina(self, stamina):  # Method untuk mengubah stamina
        self.__stamina = stamina  # Mengubah stamina
    def setJenisPerisai(self, jenisPerisai):  # Method untuk mengubah jenis perisai
        self.__jenisPerisai = jenisPerisai  # Mengubah jenis perisai
    def setPeralatan(self, namaPeralatan, jenisPeralatan, levelPeralatan):  # Method untuk mengubah Peralatan
        self.__peralatan = Peralatan(namaPeralatan, jenisPeralatan, levelPeralatan)  # Membuat Peralatan baru


class Peralatan:  # Membuat class Peralatan
    def __init__(self, namaPeralatan, jenisPeralatan, levelPeralatan):  # Constructor Peralatan
        self.__namaperalatan = namaPeralatan  # Menyimpan nama peralatan
        self.__jenisperalatan = jenisPeralatan  # Menyimpan jenis peralatan
        self.__levelperalatan = levelPeralatan  # Menyimpan level peralatan

    def getNamaPeralatan(self):  # Method untuk mengambil nama peralatan
        return self.__namaperalatan  # Mengembalikan nama peralatan
    def getJenisPeralatan(self):  # Method untuk mengambil jenis peralatan
        return self.__jenisperalatan  # Mengembalikan jenis peralatan
    def getLevelPeralatan(self):  # Method untuk mengambil level peralatan
        return self.__levelperalatan  # Mengembalikan level peralatan
    def setNamaPeralatan(self, nama):  # Method untuk mengubah nama peralatan
        self.__namaperalatan = nama  # Mengubah nama peralatan
    def setJenisPeralatan(self, jenis):  # Method untuk mengubah jenis peralatan
        self.__jenisperalatan = jenis  # Mengubah jenis peralatan
    def setLevelPeralatan(self, level):  # Method untuk mengubah level peralatan
        self.__levelperalatan = level  # Mengubah level peralatan


daftarKarakter = []  # Membuat list untuk menyimpan object karakter

mage1 = Mage("Luna", 10, 100, 150, 80, "Api")  # Membuat object Mage
knight1 = Knight("Arthur", 15, 200, 120, 100, "Pedang", 150, 100, "Baja", "Excalibur", "Pedang", 20)  # Membuat object Knight

daftarKarakter.append(mage1)  # Menambahkan Mage ke dalam list
daftarKarakter.append(knight1)  # Menambahkan Knight ke dalam list

print("=== DATA SEBELUM DITAMBAHKAN ===")  # Menampilkan judul data awal

print(f'''  # Menampilkan seluruh data Mage dan Knight
    *** Mage ***
    Nama: {mage1.getNama()}  # Menampilkan nama Mage
    Level: {mage1.getLevel()}  # Menampilkan level Mage
    HP: {mage1.getHp()}  # Menampilkan HP Mage
    Mana: {mage1.getMana()}  # Menampilkan mana Mage
    Kekuatan Sihir: {mage1.getKekuatanSihir()}  # Menampilkan kekuatan sihir
    Jenis Sihir: {mage1.getJenisSihir()}  # Menampilkan jenis sihir

    *** Knight ***
    Nama: {knight1.getNama()}  # Menampilkan nama Knight
    Level: {knight1.getLevel()}  # Menampilkan level Knight
    HP: {knight1.getHp()}  # Menampilkan HP Knight
    Kekuatan Serangan: {knight1.getKekuatanSerangan()}  # Menampilkan kekuatan serangan
    Armor: {knight1.getArmor()}  # Menampilkan armor
    Jenis Senjata: {knight1.getJenisSenjata()}  # Menampilkan jenis senjata
    Pertahanan: {knight1.getPertahanan()}  # Menampilkan pertahanan
    Stamina: {knight1.getStamina()}  # Menampilkan stamina
    Jenis Perisai: {knight1.getJenisPerisai()}  # Menampilkan jenis perisai

    *** Peralatan Knight ***
    Nama Peralatan: {knight1.getPeralatan().getNamaPeralatan()}  # Mengambil nama peralatan Knight
    Jenis Peralatan: {knight1.getPeralatan().getJenisPeralatan()}  # Mengambil jenis peralatan Knight
    Level Peralatan: {knight1.getPeralatan().getLevelPeralatan()}  # Mengambil level peralatan Knight
''')  # Menutup dan menjalankan print

knight2 = Knight("Leon", 20, 250, 150, 120, "Kapak", 180, 130, "Besi", "Battle Axe", "Kapak", 25)  # Membuat Knight kedua
daftarKarakter.append(knight2)  # Menambahkan Knight kedua ke list

print("=== DATA SESUDAH DITAMBAHKAN ===")  # Menampilkan judul data setelah ditambah

for object in daftarKarakter:  # Mengambil object dari list satu per satu
    if isinstance(object, Mage):  # Mengecek apakah object adalah Mage
        print(f'''  # Menampilkan data Mage
    *** Mage ***
    Nama: {object.getNama()}  # Mengambil nama Mage
    Level: {object.getLevel()}  # Mengambil level Mage
    HP: {object.getHp()}  # Mengambil HP Mage
    Mana: {object.getMana()}  # Mengambil mana Mage
    Kekuatan Sihir: {object.getKekuatanSihir()}  # Mengambil kekuatan sihir
    Jenis Sihir: {object.getJenisSihir()}  # Mengambil jenis sihir
''')  # Menampilkan data Mage

    elif isinstance(object, Knight):  # Mengecek apakah object adalah Knight
        print(f'''  # Menampilkan data Knight
    *** Knight ***
    Nama: {object.getNama()}  # Mengambil nama Knight
    Level: {object.getLevel()}  # Mengambil level Knight
    HP: {object.getHp()}  # Mengambil HP Knight
    Kekuatan Serangan: {object.getKekuatanSerangan()}  # Mengambil kekuatan serangan
    Armor: {object.getArmor()}  # Mengambil armor
    Jenis Senjata: {object.getJenisSenjata()}  # Mengambil jenis senjata
    Pertahanan: {object.getPertahanan()}  # Mengambil pertahanan
    Stamina: {object.getStamina()}  # Mengambil stamina
    Jenis Perisai: {object.getJenisPerisai()}  # Mengambil jenis perisai

    *** Peralatan Knight ***
    Nama Peralatan: {object.getPeralatan().getNamaPeralatan()}  # Mengambil nama peralatan
    Jenis Peralatan: {object.getPeralatan().getJenisPeralatan()}  # Mengambil jenis peralatan
    Level Peralatan: {object.getPeralatan().getLevelPeralatan()}  # Mengambil level peralatan
''')  # Menampilkan data Knight