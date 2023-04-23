#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;

const int n = 6;
int main()
{
    struct card { int number; float zone; char facult[4]; int live;};
    struct card house[n];
    string strok[n];
    int flag = 0,k=0,sum_house=0,sum_live=0,j;
    float sr_zone=0;


    int i;

    house[0].number = 900;
    house[0].zone = 30.2;
    strcpy(house[0].facult, "AWT");
    house[0].live = 2;

    house[1].number = 907;
    house[1].zone = 24.7;
    strcpy(house[1].facult, "GF");
    house[1].live = 5;

    house[2].number = 910;
    house[2].zone = 27.2;
    strcpy(house[2].facult, "IVT");
    house[2].live = 4;

    house[3].number = 443;
    house[3].zone = 19.6;
    strcpy(house[3].facult, "IVT");
    house[3].live = 3;

    house[4].number = 123;
    house[4].zone = 31.2;
    strcpy(house[4].facult, "MRM");
    house[4].live = 2;
    
    house[5].number = 654;
    house[5].zone = 31.2;
    strcpy(house[5].facult, "MRM");
    house[5].live = 6;

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
        sr_zone=0;
        for ( j = 0; j < n; j++){
            if (strok[i] == house[j].facult){
                sum_house++;
                sum_live += house[j].live;
                sr_zone += house[j].zone;
            }
        }
        cout << "Faculty " << strok[i] << " rooms " << sum_house << " students "
        << sum_live << " Average zone per students: " <<(float)sr_zone/sum_live << endl;
    }
    return 0;
}