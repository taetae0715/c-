# Calculator.py 계산기(+, -, *, /)

def add(a, b):
    return a+b

#음수로 나오지 않게 절대값 if문
def sub(a, b):
    if a>b:
        return a-b
    else :
        return b-a
    
def multi(a, b):
    return a*b

def div(a, b):
    return a/b