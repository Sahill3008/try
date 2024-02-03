#include <iostream>

using namespace std;

int binarySearch(int array[], int size, int target) {
  int low = 0;
  int high = size - 1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (array[mid] == target) {
      return mid;
    } else if (array[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  int array[] = {1, 3, 5, 7, 9};
  int size = sizeof(array) / sizeof(array[0]);
  int target;

  cout << "Enter the target element: ";
  cin >> target;

  int result = binarySearch(array, size, target);

  if (result == -1) {
    cout << "Target element not found." << endl;
  } else {
    cout << "Target element found at index " << result << endl;
  }

  return 0;
}
