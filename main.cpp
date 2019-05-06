#include <iostream>
#include <stdio.h>
#include <thread>
#include <stdlib.h>
#include <time.h>
using  namespace std;
#define NOTHREADS 2

//int a[] = {10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9,10, 8, 5, 2, 3, 6, 7, 1, 4, 9};
int nThreads =250;// thread::hardware_concurrency();

void SelectSort(int* data,int length)///listas pequeñas o largas odenadas)
{      for (int i =0; i < length-1; ++i)
    {  // bool swapped = false;//flag
        int min = i;
        for (int j = i+1; j < length; ++j)
        {
            if (data[j] < data[min])
            {
                min = j;
               // swapped = true;
            }
        }
        if (min != i)                       //si es diferente que el supuesto entonces lo cambia
        {
            swap(data[i],data[min]);
        }

        //if (!swapped) break;
       // contador ++;
     }
}

int main()
{
    int a[100000]; //= {5, 6, 1, 2, 0,45,4};
        for(int i=0;i<100000;i++)
        {
            a[i]=rand()%100;
            cout<<a[i]<<",";
        }  cout<<endl;

    thread A[nThreads];
    int longitud=sizeof(a)/4;
    float genera1,genera2;
    genera1=clock();
    for (int i =0; i < longitud; ++i)
    {
        if(i%((longitud+1)/nThreads)==0)
        {
          // cout<<"holo entro ";
           A[i/((longitud+1)/nThreads)]= thread(SelectSort,a,longitud);
        }
    }
    for(int y=0;y<nThreads;y++)
    {
        A[y].join();
    }genera2=clock();
    for(int m=0;m<longitud;m++)
    {cout<<a[m]<<",";}

    printf ("\n");
     cout<<"Tiempo : "<<(genera2-genera1)/CLK_TCK<<endl;

    return 0;
}
