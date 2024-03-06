//
// Created by MASTER on 06.03.2024.
//

#ifndef HARMAN_MY_VA_ARG_H
#define HARMAN_MY_VA_ARG_H

typedef char * my_va_list;

#define my_va_start(list, var) list = (char *) &var

#define my_va_arg(list, var) list = list + sizeof(long long), *list

#define my_va_copy(newList, oldList) newList = oldList

#define my_va_end(list) (list = NULL)

#endif //HARMAN_MY_VA_ARG_H
