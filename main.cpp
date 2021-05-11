
#include <iostream>
using namespace std;
int main()
{
    cout << "-------------------------çözüm 2: \n";
    
    int row_column = 0;
    cout << "dizi boyutu girin: ";
    cin >> row_column;

    int sayi_min, sayi_max;
    cout << "aralik degeri... kucuk degeri girin: ";
    cin >> sayi_min;
    cout << "aralik degeri... buyuk degeri girin: ";
    cin >> sayi_max;
    
    int** dizi_integer = new int* [row_column];

    for (int say1 = 0; say1 < row_column; say1++)     //int tipinde iki boyutlu matris olusturup random degerler atama
    {
        dizi_integer[say1] = new int[row_column];
    }

    for (int say1 = 0; say1 < row_column; say1++)   //random deger atamalari yapilir
    {
        for (int say2 = 0; say2 < row_column; say2++)
        {
            dizi_integer[say1][say2] = rand() % 10;
        }
    }

    char** dizi_char = new char* [row_column];

    for (int say1 = 0; say1 < row_column; say1++)     //char tipinde iki boyutlu matris olusturulur
    {
        dizi_char[say1] = new char[row_column];
    }


    for (int say1 = 0; say1 < row_column; say1++)     //degerleri atanmis dizi yazdirilir ilk sefericin
    {
        for (int say2 = 0; say2 < row_column; say2++)
        {
            cout << dizi_integer[say1][say2] << " ";
        }
        cout << endl;
    }

    for (int count1 = 0; count1 < row_column; count1++)     //boyut araliklari alinip char diziyi yazdirma
    {
        for (int count2 = 0; count2 < row_column; count2++)
        {
            if (dizi_integer[count1][count2] < sayi_min)    // girilen değer aralığından kucukse * yazirilir
            {
                dizi_char[count1][count2] = '*';
            }

            else if (dizi_integer[count1][count2] > sayi_max)   // girilen değer aralığından buyukse - yazdirilir
            {
                dizi_char[count1][count2] = '-';
            }

            else    // girilen değer araliktaysa ~ yazdirilir
            {
                dizi_char[count1][count2] = '~';
            }
            cout << dizi_char[count1][count2] << " ";
        }
        cout << endl;
    }
}

ß
