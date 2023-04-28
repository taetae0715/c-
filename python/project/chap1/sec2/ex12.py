#ex12.py python에만 있는 연산자 (삼항연산자는 없음)
#기타 연산자: 맞교환 연산자, 멤버 존재 파악 연산자(in, not in), 주소 식별 연산자(is, is not)
#변수명이 달라도 값이 같으면 같은 메모리주소에 저장됨 (계산식이 된다면 달라짐)
a=20
b=74
c=20
d=c

print("교환 전")
print("a= ", a, ", b= ", b)
a, b = b, a # 교환 연산
print("교환 후")
print("a= ", a, ", b= ", b)

print("\n")

lst = [23, 45, 17, 6, 15, 9]
print("23이 존재하는가?", 23 in lst)
print("23이 없는가?", 23 not in lst)

print("\n")
print("a 주소: ", id(a))
print("b 주소: ", id(b))
print("c 주소: ", id(c))
print("d 주소: ", id(d))
print("\n")

print("a==c: ", a==c)
print("a is c: ", a is c)

print("b==c: ", b==c)
print("b is c: ", b is c)

print("c==d: ", c==d)
print("c is d: ", c is d)

print("a!=c: ", a!=c)
print("a is not c: ", a is not c)

print("b!=c: ", b!=c)
print("b is not c: ", b is not c)

print("c!=d: ", c!=d)
print("c is not d: ", c is not d)




