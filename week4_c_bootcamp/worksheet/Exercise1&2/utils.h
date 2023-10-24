#ifndef UTILS_H
#define UTILS_H
#include <stdlib.h>
#include <stdio.h>

FILE *open_file(char filename[], char mode[]);

#endif /* UTILS_H*/

// Header File 
// Files that use this file must use #include "utils.h"
// "Guards to prevent double inclusions"