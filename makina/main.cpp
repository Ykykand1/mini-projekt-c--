#include <iostream>

using namespace std;

class Automjet
{
public:
    string emri;
    string brand;
    string modeli;
    int viti;

    Automjet(string emri, string brand, string modeli, int viti)
        : emri(emri), brand(brand), modeli(modeli), viti(viti) {}
    virtual void PrintInfo();
};

class Makine : public Automjet
{
public:
    Makine(string emri, string brand, string modeli, int viti) : Automjet(emri, brand, modeli, viti) {}

    void PrintInfo() override
    {
        cout << "Makina: " << emri << endl;
        cout << "Brand-i: " << brand << endl;
        cout << "Modeli: " << modeli << endl;
        cout << "Viti: " << viti << endl;
    }
};

class Motorr : public Automjet
{
public:
    Motorr(string emri, string brand, string modeli, int viti) : Automjet(emri, brand, modeli, viti) {}

    void PrintInfo() override
    {
        cout << "Motorri: " << emri << endl;
        cout << "Brand-i: " << brand << endl;
        cout << "Modeli: " << modeli << endl;
        cout << "Viti: " << viti << endl;
    }
};

class Kamion : public Automjet
{
public:
    Kamion(string emri, string brand, string modeli, int viti) : Automjet(emri, brand, modeli, viti) {}

    void PrintInfo() override
    {
        cout << "Kamion: " << emri << endl;
        cout << "Brand-i: " << brand << endl;
        cout << "Modeli: " << modeli << endl;
        cout << "Viti: " << viti << endl;
    }
};

void shfaqMenu()
{
    cout << "\t 1 Shto makine: " << endl;
    cout << "\t 2 Shto motor: " << endl;
    cout << "\t 3 Shto kamion: " << endl;
    cout << "\t 4 Dil: " << endl;
    cout << " Zgjidhni: ";
}

int main()
{
    int zgjedhja = 0;
    bool on = true;
    while (on)
    {
        shfaqMenu();
        cin >> zgjedhja;
        string x, y, z;
        int a;
        switch (zgjedhja)
        {
        case 1:
            cout << "Jep emrin: " << endl;
            cin >> x;
            cout << "Jep brand-in: " << endl;
            cin >> y;
            cout << "Jep modelin: " << endl;
            cin >> z;
            cout << "Jep vitin e prodhimit: " << endl;
            cin >> a;
            cout << endl;
            {
                Makine m1(x, y, z, a);
                m1.PrintInfo();
            }
            break;

        case 2:
            cout << "Jep emrin: " << endl;
            cin >> x;
            cout << "Jep brand-in: " << endl;
            cin >> y;
            cout << "Jep modelin: " << endl;
            cin >> z;
            cout << "Jep vitin e prodhimit: " << endl;
            cin >> a;
            cout << endl;
            {
                Motorr mo1(x, y, z, a);
                mo1.PrintInfo();
            }
            break;

        case 3:
            cout << "Jep emrin: " << endl;
            cin >> x;
            cout << "Jep brand-in: " << endl;
            cin >> y;
            cout << "Jep modelin: " << endl;
            cin >> z;
            cout << "Jep vitin e prodhimit: " << endl;
            cin >> a;
            cout << endl;
            {
                Kamion k1(x, y, z, a);
                k1.PrintInfo();
            }
            break;

        case 4:
            cout << "Duke dal nga programi..." << endl;
            return 0;

        default:
            cout << "Zgjedhje e gabuar. Provoni serish!!" << endl;
            break;
        }
    }

    return 0;
}

void Automjet::PrintInfo()
{
}
