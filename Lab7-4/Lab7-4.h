#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#include "my_stack.h"
void BulidArray(int Array[N]);
void QuickSort(int Array[N], int n);
int PartSort(int Array[N], int low, int high);
void PrintArray(int Array[N]);