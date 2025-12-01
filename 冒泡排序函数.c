//
// Created by rint on 2025/12/1.
//
void bubbleSort(int nums[]) {
    int i,j,tmp;
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }
}