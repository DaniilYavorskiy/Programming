#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;

const int n = 5;
int main()
{   setlocale (LC_ALL, "Russian");
    struct card { int number; float area; char facult[3]; int live;};
    struct card house[n];
    string strok[n];
    int flag = 0,k=0,sum_house=0,sum_live=0,j;
    float sr_area=0;


    int i;

    house[0].number = 701;
    house[0].area = 25.6;
    strcpy(house[0].facult, "IVT");
    house[0].live = 3;

    house[1].number = 704;
    house[1].area = 32.1;
    strcpy(house[1].facult, "MRM");
    house[1].live = 4;

    house[2].number = 905;
    house[2].area = 26.6;
    strcpy(house[2].facult, "KB");
    house[2].live = 3;

    house[3].number = 856;
    house[3].area = 18.3;
    strcpy(house[3].facult, "IVT");
    house[3].live = 2;

    house[4].number = 276;
    house[4].area = 33.5;
    strcpy(house[4].facult, "MRM");
    house[4].live = 4;

    for ( i = 0; i < n; i++){
        flag = 0;
        for( j = 0; j < n; j++){
            if ( house[i].facult == strok[j])
                flag = 1;
        }
        if ( flag == 0){
            strok[k] = house[i].facult;
            k++;
        }
    }

    for ( i = 0; i < k; i++){
        sum_house=0;
        sum_live=0;
        sr_area=0;
        for ( j = 0; j < n; j++){
            if (strok[i] == house[j].facult){
                sum_house++;
                sum_live += house[j].live;
                sr_area += house[j].area;
            }
        }
        cout << "Факультет " << strok[i] << " Кол-во комнат " << sum_house << " Кол-во студентов "
        << sum_live << " Средняя площадь на студента: " <<(float)sr_area/sum_live << endl;
    }
    return 0;
}
