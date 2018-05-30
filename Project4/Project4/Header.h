#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "locale.h"

void increment(int *n);
void incrementStackVariable();
void incrementHeapVariable();
void writeArray(int *arr, int n);
void readArray(int *arr, int n);
void sort(int *arr, int n);
void sortStackArray();
void sortHeapArray();

