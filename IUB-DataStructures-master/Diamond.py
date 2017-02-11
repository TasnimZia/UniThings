
import gym

import universe


def print_assending(n):
    if (n == 0):
        return
    print_assending(n - 1)
    print(n, end=" ")





def print_descending(n):
    if (n == 0):
        return
    print(n, end= " ")
    print_descending(n - 1)






def print_space(n):
    if (n == 0):
        return
    print_space(n-1)
    print(" ", end=" ")







def print_upper_half_diamond(n, m):
    if (n == 0):
        return

    print_upper_half_diamond(n - 1, m)

    print_space(m - n)

    print_assending(n)

    print_descending(n - 1)

    print()




def print_lower_half_diamond(n, m):
    if (n == 0):
        return
    print_space(m - n + 1)
    print_assending(n)
    print_descending(n - 1)
    print()

    print_lower_half_diamond(n - 1, m)


print_lower_half_diamond(5, 5)