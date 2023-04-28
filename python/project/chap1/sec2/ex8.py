#ex8.py 7개의 연산자
#사직 연산: +, -, *, /, //, %, **

a = 77
b = 33
c = "jo"
d = "taejeong"

print("a+b= ", a+b)
print("c+d= ", c+d)
#print("c+a= ", c+a) -> str 문자열과 int 숫자는 더하기 불가
print("a-b= ", a-b)
#print("c-d= ", c-d) - > 문자열끼리는 뺄셈, 나눗셈, 곱하기 불가
print("a*b= ", a*b)
print("d*3= ", d*3) #문자열*숫자 -> 문자열을 숫자만큼 반복(repeat)
print("a/b= ", a/b) #나누기
print("a//b= ", a//b) #몫
print("a%b= ", a%b) #나머지
print("a**b= ", a**b) #거듭제곱: a의 b승 77의 33승
print("b**a= ", b**a) #거듭제곱: b의 a승 33의 77승