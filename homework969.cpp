#include <iostream>

using namespace std;

double kubuTap(double n)
{
    return  n*n*n;
}

double boyukEded(double a, double b)
{
    if (a > b)
        return a;
    else
        return b;
}
double Musbet(double number) 
{
    return number > 0;
}

int Arasinda(int start, int end) 
{
    int ara = 0;
for (int i = start; i <= end; ++i) 
{
        ara += i;
    }
return ara;
}

double eded_1, eded_2;
double num;
int a, b;

int main()
{
   /* cout << "Tapsiriq 1\n";

    double eded;

    cout << "Ededi daxil et: ";
    cin >> eded;

    double cavab = kubuTap(eded);

    cout << eded << " Kubu: " << cavab << endl;

    return  0;
    cout << "-----------------------------------------------";

    cout << "Tapsiriq 2\n";


    cout << "Birinci ededi daxil et:";
    cin >> eded_1;

    cout << "ikinci ededi daxil et:";
    cin >> eded_2;

    double netice = boyukEded(eded_1, eded_2);

    cout << "Boyuk eded: " << netice << endl;

    return 0;

    cout << "-----------------------------------------------";*/

    /*cout << "Eded daxil ediin (musbet ve ya menfi daxil et): ";
    cin >> num;
    
    cout << "Tapsiriq 3\n";

    if (Musbet(num)) {
        cout << "Bu eded musbetdir" << endl;
    }
    else {
        cout << "Bu eded menfidir" << endl;
    }

    return 0;*/

    /*cout << "-----------------------------------------------\n";

    cout << "Tapsiriq 9\n";

    cout << "Iki eded daxil edin: ";
    cin >> a >> b;

    int netice = Arasinda(a, b);

    cout << "Bu ededlerin arasindaki toplam: " << netice << endl;

    return 0;


}*/