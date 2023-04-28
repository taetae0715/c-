#project > ch01 >  sec 1 > ex 1.py
print("Hello World")
#변수 : 데이터 저장 목적으로 알기힘든 16진수 주소대신 알기쉬운 별명을 붙인 것
a = 100
b = 3.14
c = "이태석"
d = True
e = a + b
f = a + c
print("a=", a, type(a), id(a)) # a : 100 int
print("b=", b, type(b), id(b)) # b : 3.14 float
print("c=", c, type(c), id(c)) # c : 이태석 str
print("d=", d, type(d), id(d)) # d : True bool
print("e=", e, type(e), id(e)) # e : 103.14 float
print("f=", f, type(f), id(f)) # f : type Error

import keyword
py_word = keyword.kwlist
print(py_word)

