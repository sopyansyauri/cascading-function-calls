#include <iostream>

class Mahasiswa{
    private:
        std::string name;
        int umur;
        std::string jurusan;

    public:
        Mahasiswa() {
            this->name = "Rifa'i Sopyan Syauri";
            this->umur = 20;
            this->jurusan = "Teknik Komputer dan Jaringan";
        }

        void display() {
            std::cout << "DAFTER MAHASISWA" << std::endl;
            std::cout << "Nama: " << this->name << std::endl;
            std::cout << "Umur: " << this->umur << " Tahun" << std::endl;
            std::cout << "Jurusan: " << this->jurusan << std::endl;
        }

        Mahasiswa& setName(const char* Nama) {
            this->name = Nama;
            return *this;
        }

        Mahasiswa& setUmur(int Umur) {
            this->umur = Umur;
            return *this;
        }

        Mahasiswa& setJurusan(const char* Jurusan) {
            this->jurusan = Jurusan;
            return *this;
        }
};

int main () {
    Mahasiswa* murid1 = new Mahasiswa();
    murid1->display();

    std::cout << std::endl;

    // INI NAMANYA Cascading Function Calls
    murid1->setName("Saepuloh").setUmur(22).setJurusan("Teknik Kimia");
    murid1->display();


    return 0;
}