#include <stdio.h>

void selectionSort(int array[], int size) {
  int i, j, minIndex, temp;

  for (i = 0; i < size - 1; i++) {
    // Dizinin siralanmamis kismindaki minimum elemani bulun
    minIndex = i;
    for (j = i + 1; j < size; j++) {
      if (array[j] < array[minIndex]) {
        minIndex = j;
      }
    }

    // Minimum ögeyi geçerli dizindeki ögeyle degiştir
    temp = array[i];
    array[i] = array[minIndex];
    array[minIndex] = temp;
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

  selectionSort(array, size);

  printf("Sirali array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}