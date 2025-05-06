#include "functionlib.h" 

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int lengthOfLongestSubstring(char* s) {
    char *start = s, *pointer = s;
    int max = 0;

    while (*pointer != '\0') {
        char *runner = start;
        while (runner < pointer) {
            if (*runner == *pointer) {
                start = runner + 1;  // move start after the repeated char
                break;
            }
            runner++;
        }

        int currentLength = pointer - start + 1;
        if (currentLength > max) {
            max = currentLength;
        }
        pointer++;
    }

    return max;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0; // in case no result is found
    return NULL;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;  // Dummy head
    struct ListNode* tail = &dummy;
    dummy.next = NULL;

    int carry = 0;

    while (l1 || l2 || carry) {
        int sum = carry;
        if (l1) {
            sum += l1->value;
            l1 = l1->next;
        }
        if (l2) {
            sum += l2->value;
            l2 = l2->next;
        }

        struct ListNode* node = malloc(sizeof(struct ListNode));
        node->value = sum % 10;
        node->next = NULL;

        tail->next = node;
        tail = node;

        carry = sum / 10;
    }

    return dummy.next;
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int tsize=nums1Size+nums2Size;
     int i = 0, j = 0, k = 0;
     double median;
    int *merged=(int*)malloc(tsize*sizeof(int));
    while(i< nums1Size && j<nums2Size)
    {
    if(nums1[i]<nums2[j]){
    merged[k++]=nums1[i++];
    }else{
    merged[k++]=nums2[j++];
    }
    }
    while(i<nums1Size){
    merged[k++]=nums1[i++];
    }   
    while(j<nums2Size){
    merged[k++]=nums2[j++];
    }     
    if(tsize%2==0){
    median=(merged[(tsize/2)-1]+merged[tsize/2])/2.0;
    }else{
    median=merged[tsize/2];
    
    }
    free(merged);
    return median;
    
}

