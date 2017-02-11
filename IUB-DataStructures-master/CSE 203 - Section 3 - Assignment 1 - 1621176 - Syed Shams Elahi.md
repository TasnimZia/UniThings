
# Name: Syed Shams Elahi
## ID: 1621176
## Course: Data Structures - CSE 203
## Assignment 1

In the first problem a diamond was formed using a recursive call involving a formula that uses bitshifting values to generate the required sequence of values for the recursive call to obtain the pattern below. 


```python
def triangles(n):
#     if not n & 1:
#         raise ValueError('n must be odd')
    print_diamond(0, n, n >> 1)

def print_diamond(start, stop, midpoint):
    if start < stop:
        if start <= midpoint:
            print('  ' * (midpoint - start) + '* ' * ((start << 1) + 1))
        else:
            print('  ' * (start - midpoint) + '* ' * ((stop - start << 1) - 1))
        print_diamond(start + 1, stop, midpoint)
        
triangles(5)
```

        * 
      * * * 
    * * * * * 
      * * * 
        * 



```python
triangles(3)
```

      * 
    * * * 
      * 



```python
def print_same_value(n, m):
    if (n == 0):
        return
    print_same_value(n-1, m)
    print(str(m) + " ", end="")
    
print_same_value(5, 5)
    
```

    5 5 5 5 5 


```python
def print_space(n):
    if (n == 0):
        return
    print_space(n-1)
    print(" ", end=" ")
    
# print_space(4)


def print_binary_value(n, m):
    if (n == 0):
        return
    print_binary_value(n-1, m)
    
    if (n % 2 == 0):
        print(str(0) + " ", end="")
    else:
        print(str(1) + " ", end="")
    
print_binary_value(5, 5)
    


def print_same_binary_value(n, m):
    if (n == 0):
        return
    
    print_same_binary_value(n-1, m)
    print_space(m - n)
    print_binary_value(n, n)
    
    print()
    
print()
print()

print_same_binary_value(5, 5)
```

    1 0 1 0 1 
    
            1 
          1 0 
        1 0 1 
      1 0 1 0 
    1 0 1 0 1 

