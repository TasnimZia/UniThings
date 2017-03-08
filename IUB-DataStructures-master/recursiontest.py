import sys


def build_diamond(n,x=1):
    a = " "*n+"*"*x*2
    print (a)
    if(n<=0):
        return
    else:
        build_diamond(n-1,x+1)
        print(a)


build_diamond(10)

