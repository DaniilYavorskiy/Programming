#include <iostream>

using namespace std;

int main() {
  printf("Vvedite n: ");
  int n;
  cin >> n;
  float *a = new float[n];
  for (int i = 0; i < n; i++)
    a[i] = rand() % 10;
  float **b = new float *[n];
  for (int i = 0; i < n; i++)
    b[i] = &a[i];
  cout << endl;
  for (int i = 0; i < n; i++)
    cout << " b[" << i << "]: " << b[i] << " - &a[" << i << "]: " << &a[i] << endl;

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++)
      if (*b[i] > *b[j])
        swap(b[i], b[j]);
  }
  cout << "a[]: ";
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
  cout << "b[]: ";
  for (int i = 0; i < n; i++)
    cout << *b[i] << " ";

  
  delete[] a;
  delete[] b;
  return 0;
}