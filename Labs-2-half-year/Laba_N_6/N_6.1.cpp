#include <iostream>
#include <cmath>

using namespace std;

bool squareAndPerimetr(int* a, int* b, int* c){
if ((*a + *b > *c) && (*a + *c > *b) && (*b + *c > *a)){
    float p = *a + *b + *c;
    float P = (*a + *b + *c) / 2.0;
    float S = sqrt(P * (P - *a) * (P - *b) * (P - *c));
    printf("p = %f\ns = %f\n", p, S);
    return 1;
}
    return 0;
}

int main() {
	int a, b, c;
	cout << "Vvedite a:";
    cin >> a;
	cout << "Vvedite b:";
    cin >> b;
	cout << "Vvedite c:";
    cin >> c;    
    printf("%d", squareAndPerimetr(&a, &b, &c));
}