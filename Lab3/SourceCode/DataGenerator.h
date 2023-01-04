#pragma once
#include "Enum.h"

template <class T>
void HoanVi(T &a, T &b);

//-------------------------------------------------

// Hàm phát sinh mảng dữ liệu ngẫu nhiên
void GenerateRandomData(int  a[], int  n);

// Hàm phát sinh mảng dữ liệu có thứ tự tăng dần
void GenerateSortedData(int  a[], int  n);

// Hàm phát sinh mảng dữ liệu có thứ tự ngược (giảm dần)
void GenerateReverseData(int  a[], int  n);

// Hàm phát sinh mảng dữ liệu gần như có thứ tự
void GenerateNearlySortedData(int  a[], int  n);

void GenerateData(int  a[], int  n, InputOrderType iot);

