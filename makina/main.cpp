#include <iostream>
#include <vector> // për të përdorur vector
#include <string>
using namespace std;

// Klasa bazë për Automjet
class Automjet
{
public:
    string emri;
    string brand;
    string modeli;
    int viti;

    Automjet(string emri, string brand, string modeli, int viti)
        : emri(emri), brand(brand), modeli(modeli), viti(viti) {}

    virtual void PrintInfo(); // funksion virtual
};

// Klasa për Makina
class Makine : public Automjet
{
public:
    Makine(string emri, string brand, string modeli, int viti)
        : Automjet(emri, brand, modeli, viti) {}

    void PrintInfo() override
    {
        cout << "Makina: " << emri << ", Brand: " << brand
             << ", Modeli: " << modeli << ", Viti: " << viti << endl;
    }
};

// Klasa për Motorra
class Motorr : public Automjet
{
public:
    Motorr(string emri, string brand, string modeli, int viti)
        : Automjet(emri, brand, modeli, viti) {}

    void PrintInfo() override
    {
        cout << "Motorri: " << emri << ", Brand: " << brand
             << ", Modeli: " << modeli << ", Viti: " << viti << endl;
    }
};

// Klasa për Kamionë
class Kamion : public Automjet
{
public:
    Kamion(string emri, string brand, string modeli, int viti)
        : Automjet(emri, brand, modeli, viti) {}

    void PrintInfo() override
    {
        cout << "Kamion: " << emri << ", Brand: " << brand
             << ", Modeli: " << modeli << ", Viti: " << viti << endl;
    }
};

// Funksion për të shfaqur menunë
void shfaqMenu()
{
    cout << "\n--- Menuja ---" << endl;
    cout << "\t1. Shto makine" << endl;
    cout << "\t2. Shto motor" << endl;
    cout << "\t3. Shto kamion" << endl;
    cout << "\t4. Shfaq te gjitha automjetet" << endl;
    cout << "\t5. Dil" << endl;
    cout << "Zgjidhni: ";
}

// Funksion për të marrë të dhënat nga përdoruesi
void merrTeDhena(string &emri, string &brand, string &modeli, int &viti)
{
    cout << "Jep emrin: ";
    getline(cin, emri);
    cout << "Jep brand-in: ";
    getline(cin, brand);
    cout << "Jep modelin: ";
    getline(cin, modeli);
    cout << "Jep vitin e prodhimit: ";
    cin >> viti;
}

// Funksion për të shfaqur të gjithë automjetet e regjistruara
void shfaqTeGjithaAutomjetet(const vector<Automjet *> &automjetet)
{
    if (automjetet.empty())
    {
        cout << "Nuk ka automjete te regjistruara!" << endl;
        return;
    }

    cout << "\nLista e automjeteve:\n";
    for (const auto &automjet : automjetet)
    {
        automjet->PrintInfo();
    }
}

int main()
{
    vector<Automjet *> automjetet; // vektor për të ruajtur automjetet
    int zgjedhja;

    while (true)
    {
        shfaqMenu();
        cin >> zgjedhja;
        string emri, brand, modeli;
        int viti;

        switch (zgjedhja)
        {
        case 1:
        {
            merrTeDhena(emri, brand, modeli, viti);
            automjetet.push_back(new Makine(emri, brand, modeli, viti)); // ruaj pointerin në vektor
            cout << "Makina u shtua me sukses!" << endl;
            break;
        }
        case 2:
        {
            merrTeDhena(emri, brand, modeli, viti);
            automjetet.push_back(new Motorr(emri, brand, modeli, viti));
            cout << "Motorri u shtua me sukses!" << endl;
            break;
        }
        case 3:
        {
            merrTeDhena(emri, brand, modeli, viti);
            automjetet.push_back(new Kamion(emri, brand, modeli, viti));
            cout << "Kamioni u shtua me sukses!" << endl;
            break;
        }
        case 4:
        {
            shfaqTeGjithaAutomjetet(automjetet);
            break;
        }

        case 5:
        {

            cout << "\tDuke dal nga programi....";
            return 0;
        }
        default:
            cout << "Zgjedhje e gabuar. Provoni perseri!" << endl;
            break;
        }
    }

    // PASTROJME MEMORIEN
    for (auto automjet : automjetet)
    {
        delete automjet;
    }

    return 0;
}
