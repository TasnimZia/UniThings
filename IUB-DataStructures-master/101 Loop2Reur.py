def non_neg(num):
    if (num == -1):
        return
    num = int(input("Please enter a number: "))
    non_neg(num)


# non_neg(4)


def non_dot(char):
    if (char == "."):
        return
    char = input("Please enter a character: ")
    non_dot(char)

# non_dot("2")


def display_linear_range(term):
    if (term == 0):
        return

    print(term)
    display_linear_range(term-1)
    # print(term)

# display_linear_range(4)


def print_range(start, end):
    if (start == end):
        return
    start = start + 1
    print(start)
    print( (print_range(start, end)))

print(print_range(1, 5))