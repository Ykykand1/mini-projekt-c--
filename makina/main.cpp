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
    cout << "1 Shto makine: " << endl;
    cout << "2 Shto motor: " << endl;
    cout << "3 Shto kamion: " << endl;
    cout << "4 Dil: " << endl;
    cout << " Zgjidhni: " << endl;
}

int main()
{
    int zgjedhja = 0;
    shfaqMenu();
    int i = 1;
    while (i != 4)
    {
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
            {
                Kamion k1(x, y, z, a);
                k1.PrintInfo();
            }
            break;

        case 4:
            cout << "Duke dal nga programi..." << endl;
            break;

        default:
            cout << "Zgjedhje e gabuar. Provoni serish!!" << endl;
            break;
        }
        i++;
    }

    return 0;
}

void Automjet::PrintInfo()
{
}
