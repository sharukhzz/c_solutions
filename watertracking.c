#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int heights[n];
    //int n = sizeof(heights) / sizeof(int);
    //int result = max_water_trapped(heights, n);
    int left = 0, right = n-1;
    int left_max = 0, right_max = 0;
    int water_trapped = 0;
    for(int i=0;i<n;i++)
    {
     scanf("%d",&heights[i]);
    }
    while (left < right) {
        if (heights[left] < heights[right]) {
            if (heights[left] >= left_max) {
                left_max = heights[left];
            } else {
                water_trapped += left_max - heights[left];
            }
            left++;
        } else {
            if (heights[right] >= right_max) {
                right_max = heights[right];
            } else {
                water_trapped += right_max - heights[right];
            }
            right--;
        }
    }
    printf("The maximum amount of water that can be trapped is %d\n", water_trapped);

    return 0;
}
