// Import library
#include <iostream>
#include <string>

// Using standard namespace.
using namespace std;

// Deklarasi kelas DPR
class Dpr
{
    // atribut privat
    private:
        string id;
        string nama;
        string bidang;
        string partai;

    // public method
    public:

        // Constructor
        Dpr()
        {
            // set atribut ke nilai default
            this->id = "";
            this->nama = "";
            this->bidang = "";
            this->partai = "";
        }

        Dpr(string id, string nama, string bidang, string partai)
        {
            this->id = id;
            this->nama = nama;
            this->bidang = bidang;
            this->partai = partai;
        }

        // Getter dan setter
        // Get id
        string get_id()
        {
            return this->id;
        }

        // Set id
        void set_id(string id)
        {
            this->id = id;
        }

        // Get nama
        string get_nama()
        {
            return this->nama;
        }

        // Set nama
        void set_nama(string nama)
        {
            this->nama = nama;
        }

        // Get bidang
        string get_bidang()
        {
            return this->bidang;
        }

        // Set bidang
        void set_bidang(string bidang)
        {
            this->bidang = bidang;
        }

        // Get partai
        string get_partai()
        {
            return this->partai;
        }

        // Set partai
        void set_partai(string partai)
        {
            this->partai = partai;
        }

        // Destructor
        ~Dpr()
        {

        }
};