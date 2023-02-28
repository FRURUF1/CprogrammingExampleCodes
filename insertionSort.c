#include <stdio.h>

void insertionSort(int array[], int size) {
  int i, j, key;

  for (i = 1; i < size; i++) {
    key = array[i];
    j = i - 1;

    // Dizinin, secili olandan daha buyuk olan ögelerini gecerli konumlarinin bir ilerisine tasinmasi
    while (j >= 0 && array[j] > key) {
      array[j + 1] = array[j];
      j = j - 1;
    }
    array[j + 1] = key;
  }
}

int main() {
  int array[] = {9, 4, 7, 5, 2, 8, 1, 3, 6};
  int size = sizeof(array) / sizeof(array[0]);

  printf("Verilen array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  insertionSort(array, size);

  printf("Sirali array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}