#ex10.py 비교 연산자와 논리 연산자
# 비교 연산자: >, >=, <, <=, ==, !=
# 논리 연산자: and, or, not(반대로 출력)

a=17
b=23
c=15

print("비교 연산자")
print("a>b :", a>b) #a가 더 크다 (초과)
print("a>=b :", a>=b) #a가 더 크거나 같다 (이상)
print("a<b :", a<b) #a가 더 작다 (미만)
print("a<=b :", a<=b) #a가 더 작거나 같다 (이하)
print("a==b :", a==b) #a와 b가 같다
print("a!=b :", a!=b) #a와 b가 같지 않다

print("논리 연산자")
print("a>b and b>c :", a>b and b>c) #and 두 조건이 만족해야 True
print("a>b and b<c :", a>b and b<c)
print("a<b and b>c :", a<b and b>c)
print("a<b and b<c :", a<b and b<c)

print("a>b or b>c :", a>b or b>c) #or 둘 중 하나라도 만족하면 True
print("a>b or b<c :", a>b or b<c)
print("a<b or b>c :", a<b or b>c)
print("a<b or b<c :", a<b or b<c)

print("a==b :", a==b)
print("not a==b :", not a==b) #원래 a랑 b는 다른 값인데 앞에 not을 써서 False인 결과를 True로 바꿈