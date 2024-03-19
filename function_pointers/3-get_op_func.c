#include "calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 *
 * Return:
 */

 int (*get_op_func(char *s))(int, int)

 {

    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;







 }
