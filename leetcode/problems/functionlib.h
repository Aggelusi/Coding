// LIBRARY DEFINITION
#ifndef FUNCTIONLIB
#define FUNCTIONLIB

// LIBRARY INCLUSIONS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// DATA STRUCTURES
struct ListNode {
    int value;
    struct ListNode* next;
};

// FUNCTIONS

// compare broco
int compare(const void* a, const void* b);

//1. Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
int* twoSum(int* nums, int numsSize, int target, int* returnSize);

// 2. List addition
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

// 3. Given a string s, find the length of the longest substring without duplicate characters.
int lengthOfLongestSubstring(char* s);

// 4. Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size);

// 5. Given a string s, return the longest palindromic substring in s.
char* longestPalindrome(char* s);

#endif