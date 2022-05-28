#include <iostream>
using namespace std;

static bool test(int numbers[], int arr_length)
        {
          for (int i = 0; i <= arr_length - 3; i++)
            {
                if (numbers[i] == numbers[i + 1] - 1
                    && numbers[i] == numbers[i + 2] - 2)
                {
                    return true;
                }
            }
            return false;
          }   
          
int main() 
 {  
  int nums1[] = {1, 2, 3, 5, 3, 7};
  int arr_length = sizeof(nums1) / sizeof(nums1[0]);
  cout << test(nums1, arr_length) << endl; 
  int nums2[] = {3, 7, 5, 5, 3, 7 };
  arr_length = sizeof(nums2) / sizeof(nums2[0]);
  cout << test(nums2, arr_length) << endl;
  int nums3[] = {3, 7, 5, 5, 6, 7, 5};
  arr_length = sizeof(nums3) / sizeof(nums3[0]);
  cout << test(nums3, arr_length) << endl;
  return 0;    
}