#include <iostream>  
#include <vector>    
#include <string>    

using namespace std;   

class Karakter {   // Membuat class Karakter
private:
    string nama;   // Menyimpan nama karakter
    int level;     // Menyimpan level karakter
    int hp;        // Menyimpan HP karakter

public:
    Karakter(string nama, int level, int hp) {   // Constructor Karakter
        this->nama = nama;   // Mengisi nama
        this->level = level;   // Mengisi level
        this->hp = hp;   // Mengisi HP
    }

    virtual ~Karakter() {} // Membuat Karakter menjadi polymorphic

    string getNama() {   // Getter nama
        return nama;   // Mengembalikan nama
    }

    int getLevel() {   // Getter level
        return level;   // Mengembalikan level
    }

    int getHp() {   // Getter HP
        return hp;   // Mengembalikan HP
    }

    void setNama(string nama) {   // Setter nama
        this->nama = nama;   // Mengubah nama
    }

    void setLevel(int level) {   // Setter level
        this->level = level;   // Mengubah level
    }

    void setHp(int hp) {   // Setter HP
        this->hp = hp;   // Mengubah HP
    }
};

class Mage : public Karakter {   // Mage mewarisi Karakter
private:
    int mana;   // Menyimpan mana
    int kekuatanSihir;   // Menyimpan kekuatan sihir
    string jenisSihir;   // Menyimpan jenis sihir

public:
    Mage(
        string nama,
        int level,
        int hp,
        int mana,
        int kekuatanSihir,
        string jenisSihir
    ) : Karakter(nama, level, hp) {   // Memanggil constructor Karakter

        this->mana = mana;   // Mengisi mana
        this->kekuatanSihir = kekuatanSihir;   // Mengisi kekuatan sihir
        this->jenisSihir = jenisSihir;   // Mengisi jenis sihir
    }

    int getMana() {   // Getter mana
        return mana;   // Mengembalikan mana
    }

    int getKekuatanSihir() {   // Getter kekuatan sihir
        return kekuatanSihir;   // Mengembalikan kekuatan sihir
    }

    string getJenisSihir() {   // Getter jenis sihir
        return jenisSihir;   // Mengembalikan jenis sihir
    }

    void setMana(int mana) {   // Setter mana
        this->mana = mana;   // Mengubah mana
    }

    void setKekuatanSihir(int kekuatanSihir) {   // Setter kekuatan sihir
        this->kekuatanSihir = kekuatanSihir;   // Mengubah kekuatan sihir
    }

    void setJenisSihir(string jenisSihir) {   // Setter jenis sihir
        this->jenisSihir = jenisSihir;   // Mengubah jenis sihir
    }
};


class Warior : public Karakter {   // Warior mewarisi Karakter
private:
    int kekuatanSerangan;   // Menyimpan kekuatan serangan
    int armor;   // Menyimpan armor
    string jenisSenjata;   // Menyimpan jenis senjata

public:
    Warior(
        string nama,
        int level,
        int hp,
        int kekuatanSerangan,
        int armor,
        string jenisSenjata
    ) : Karakter(nama, level, hp) {   // Memanggil constructor Karakter

        this->kekuatanSerangan = kekuatanSerangan;   // Mengisi kekuatan serangan
        this->armor = armor;   // Mengisi armor
        this->jenisSenjata = jenisSenjata;   // Mengisi jenis senjata
    }

    int getKekuatanSerangan() {   // Getter kekuatan serangan
        return kekuatanSerangan;   // Mengembalikan kekuatan serangan
    }

    int getArmor() {   // Getter armor
        return armor;   // Mengembalikan armor
    }

    string getJenisSenjata() {   // Getter jenis senjata
        return jenisSenjata;   // Mengembalikan jenis senjata
    }

    void setKekuatanSerangan(int kekuatanSerangan) {   // Setter kekuatan serangan
        this->kekuatanSerangan = kekuatanSerangan;   // Mengubah kekuatan serangan
    }

    void setArmor(int armor) {   // Setter armor
        this->armor = armor;   // Mengubah armor
    }

    void setJenisSenjata(string jenisSenjata) {   // Setter jenis senjata
        this->jenisSenjata = jenisSenjata;   // Mengubah jenis senjata
    }
};

class Peralatan {   // Membuat class Peralatan
private:
    string namaPeralatan;   // Menyimpan nama peralatan
    string jenisPeralatan;   // Menyimpan jenis peralatan
    int levelPeralatan;   // Menyimpan level peralatan

public:
    Peralatan(
        string namaPeralatan,
        string jenisPeralatan,
        int levelPeralatan
    ) {
        this->namaPeralatan = namaPeralatan;   // Mengisi nama peralatan
        this->jenisPeralatan = jenisPeralatan;   // Mengisi jenis peralatan
        this->levelPeralatan = levelPeralatan;   // Mengisi level peralatan
    }

    string getNamaPeralatan() {   // Getter nama peralatan
        return namaPeralatan;   // Mengembalikan nama peralatan
    }

    string getJenisPeralatan() {   // Getter jenis peralatan
        return jenisPeralatan;   // Mengembalikan jenis peralatan
    }

    int getLevelPeralatan() {   // Getter level peralatan
        return levelPeralatan;   // Mengembalikan level peralatan
    }

    void setNamaPeralatan(string nama) {   // Setter nama peralatan
        this->namaPeralatan = nama;   // Mengubah nama peralatan
    }

    void setJenisPeralatan(string jenis) {   // Setter jenis peralatan
        this->jenisPeralatan = jenis;   // Mengubah jenis peralatan
    }

    void setLevelPeralatan(int level) {   // Setter level peralatan
        this->levelPeralatan = level;   // Mengubah level peralatan
    }
};

class Knight : public Warior {   // Knight mewarisi Warior
private:
    int pertahanan;   // Menyimpan pertahanan
    int stamina;   // Menyimpan stamina
    string jenisPerisai;   // Menyimpan jenis perisai
    Peralatan peralatan;   // Composition dengan Peralatan

public:
    Knight(
        string nama,
        int level,
        int hp,
        int kekuatanSerangan,
        int armor,
        string jenisSenjata,
        int pertahanan,
        int stamina,
        string jenisPerisai,
        string namaPeralatan,
        string jenisPeralatan,
        int levelPeralatan
    )
        : Warior(   // Memanggil constructor Warior
            nama,
            level,
            hp,
            kekuatanSerangan,
            armor,
            jenisSenjata
        ),
          peralatan(   // Membuat object Peralatan
            namaPeralatan,
            jenisPeralatan,
            levelPeralatan
        ) {

        this->pertahanan = pertahanan;   // Mengisi pertahanan
        this->stamina = stamina;   // Mengisi stamina
        this->jenisPerisai = jenisPerisai;   // Mengisi jenis perisai
    }

    int getPertahanan() {   // Getter pertahanan
        return pertahanan;   // Mengembalikan pertahanan
    }

    int getStamina() {   // Getter stamina
        return stamina;   // Mengembalikan stamina
    }

    string getJenisPerisai() {   // Getter jenis perisai
        return jenisPerisai;   // Mengembalikan jenis perisai
    }

    Peralatan& getPeralatan() {   // Getter Peralatan
        return peralatan;   // Mengembalikan object Peralatan
    }

    void setPertahanan(int pertahanan) {   // Setter pertahanan
        this->pertahanan = pertahanan;   // Mengubah pertahanan
    }

    void setStamina(int stamina) {   // Setter stamina
        this->stamina = stamina;   // Mengubah stamina
    }

    void setJenisPerisai(string jenisPerisai) {   // Setter jenis perisai
        this->jenisPerisai = jenisPerisai;   // Mengubah jenis perisai
    }

    void setPeralatan(
        string namaPeralatan,
        string jenisPeralatan,
        int levelPeralatan
    ) {   // Setter Peralatan

        peralatan = Peralatan(   // Membuat Peralatan baru
            namaPeralatan,
            jenisPeralatan,
            levelPeralatan
        );
    }
};

int main() {  

    vector<Karakter*> daftarKarakter;   // Membuat vector karakter

    Mage* mage1 = new Mage(   // Membuat object Mage
        "Luna",
        10,
        100,
        150,
        80,
        "Api"
    );

    Knight* knight1 = new Knight(   // Membuat object Knight
        "Arthur",
        15,
        200,
        120,
        100,
        "Pedang",
        150,
        100,
        "Baja",
        "Excalibur",
        "Pedang",
        20
    );

    daftarKarakter.push_back(mage1);   // Menambahkan Mage ke vector
    daftarKarakter.push_back(knight1);   // Menambahkan Knight ke vector

    cout << "=== DATA SEBELUM DITAMBAHKAN ===" << endl;   // Menampilkan judul

    cout << "\n*** Mage ***" << endl;   // Menampilkan judul Mage

    cout << "Nama: "
         << mage1->getNama()
         << endl;   // Menampilkan nama

    cout << "Level: "
         << mage1->getLevel()
         << endl;   // Menampilkan level

    cout << "HP: "
         << mage1->getHp()
         << endl;   // Menampilkan HP

    cout << "Mana: "
         << mage1->getMana()
         << endl;   // Menampilkan mana

    cout << "Kekuatan Sihir: "
         << mage1->getKekuatanSihir()
         << endl;   // Menampilkan kekuatan sihir

    cout << "Jenis Sihir: "
         << mage1->getJenisSihir()
         << endl;   // Menampilkan jenis sihir


    cout << "\n*** Knight ***" << endl;   // Menampilkan judul Knight

    cout << "Nama: "
         << knight1->getNama()
         << endl;   // Menampilkan nama

    cout << "Level: "
         << knight1->getLevel()
         << endl;   // Menampilkan level

    cout << "HP: "
         << knight1->getHp()
         << endl;   // Menampilkan HP

    cout << "Kekuatan Serangan: "
         << knight1->getKekuatanSerangan()
         << endl;   // Menampilkan kekuatan serangan

    cout << "Armor: "
         << knight1->getArmor()
         << endl;   // Menampilkan armor

    cout << "Jenis Senjata: "
         << knight1->getJenisSenjata()
         << endl;   // Menampilkan jenis senjata

    cout << "Pertahanan: "
         << knight1->getPertahanan()
         << endl;   // Menampilkan pertahanan

    cout << "Stamina: "
         << knight1->getStamina()
         << endl;   // Menampilkan stamina

    cout << "Jenis Perisai: "
         << knight1->getJenisPerisai()
         << endl;   // Menampilkan jenis perisai

    cout << "\n*** Peralatan Knight ***" << endl;   // Menampilkan judul Peralatan

    cout << "Nama Peralatan: "
         << knight1->getPeralatan().getNamaPeralatan()
         << endl;   // Menampilkan nama peralatan

    cout << "Jenis Peralatan: "
         << knight1->getPeralatan().getJenisPeralatan()
         << endl;   // Menampilkan jenis peralatan

    cout << "Level Peralatan: "
         << knight1->getPeralatan().getLevelPeralatan()
         << endl;   // Menampilkan level peralatan


    Knight* knight2 = new Knight(   // Membuat Knight kedua
        "Leon",
        20,
        250,
        150,
        120,
        "Kapak",
        180,
        130,
        "Besi",
        "Battle Axe",
        "Kapak",
        25
    );

    daftarKarakter.push_back(knight2);   // Menambahkan Knight kedua

    cout << "\n=== DATA SESUDAH DITAMBAHKAN ===" << endl;   // Menampilkan judul

    for (Karakter* karakter : daftarKarakter) {   // Melakukan loop semua karakter

        Mage* mage = dynamic_cast<Mage*>(karakter);   // Mengecek apakah Mage

        if (mage != nullptr) {   // Jika object adalah Mage

            cout << "\n*** Mage ***" << endl;   // Menampilkan judul Mage

            cout << "Nama: "
                 << mage->getNama()
                 << endl;   // Menampilkan nama

            cout << "Level: "
                 << mage->getLevel()
                 << endl;   // Menampilkan level

            cout << "HP: "
                 << mage->getHp()
                 << endl;   // Menampilkan HP

            cout << "Mana: "
                 << mage->getMana()
                 << endl;   // Menampilkan mana

            cout << "Kekuatan Sihir: "
                 << mage->getKekuatanSihir()
                 << endl;   // Menampilkan kekuatan sihir

            cout << "Jenis Sihir: "
                 << mage->getJenisSihir()
                 << endl;   // Menampilkan jenis sihir
        }

        Knight* knight = dynamic_cast<Knight*>(karakter);   // Mengecek apakah Knight

        if (knight != nullptr) {   // Jika object adalah Knight

            cout << "\n*** Knight ***" << endl;   // Menampilkan judul Knight

            cout << "Nama: "
                 << knight->getNama()
                 << endl;   // Menampilkan nama

            cout << "Level: "
                 << knight->getLevel()
                 << endl;   // Menampilkan level

            cout << "HP: "
                 << knight->getHp()
                 << endl;   // Menampilkan HP

            cout << "Kekuatan Serangan: "
                 << knight->getKekuatanSerangan()
                 << endl;   // Menampilkan kekuatan serangan

            cout << "Armor: "
                 << knight->getArmor()
                 << endl;   // Menampilkan armor

            cout << "Jenis Senjata: "
                 << knight->getJenisSenjata()
                 << endl;   // Menampilkan jenis senjata

            cout << "Pertahanan: "
                 << knight->getPertahanan()
                 << endl;   // Menampilkan pertahanan

            cout << "Stamina: "
                 << knight->getStamina()
                 << endl;   // Menampilkan stamina

            cout << "Jenis Perisai: "
                 << knight->getJenisPerisai()
                 << endl;   // Menampilkan jenis perisai

            cout << "\n*** Peralatan Knight ***" << endl;   // Menampilkan judul Peralatan

            cout << "Nama Peralatan: "
                 << knight->getPeralatan().getNamaPeralatan()
                 << endl;   // Menampilkan nama peralatan

            cout << "Jenis Peralatan: "
                 << knight->getPeralatan().getJenisPeralatan()
                 << endl;   // Menampilkan jenis peralatan

            cout << "Level Peralatan: "
                 << knight->getPeralatan().getLevelPeralatan()
                 << endl;   // Menampilkan level peralatan
        }
    }

    return 0;  
}