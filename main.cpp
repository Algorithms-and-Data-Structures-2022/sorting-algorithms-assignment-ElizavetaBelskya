#include <iostream>

#include "assignment/insertion_sort.hpp"

#include "assignment/heap_sort.hpp"

#include "assignment/partitioning.hpp"
#include "assignment/quick_sort.hpp"

#include "assignment/merging.hpp"
#include "assignment/merge_sort.hpp"

using namespace std;
using namespace assignment;

int main() {

  std::vector<int> arr = {-39, -79, 66, 34, 8, 90, -4, 12, 99, -600};
  QuickSort sort;
  sort.Sort(arr);
  std::cout << arr[0] << endl;
  std::cout << arr[1] << endl;
  std::cout << arr[2] << endl;
  std::cout << arr[3] << endl;
  std::cout << arr[4] << endl;
  std::cout << arr[5] << endl;
  std::cout << arr[6] << endl;
  std::cout << arr[7] << endl;
  std::cout << arr[8] << endl;


  return 0;
}
