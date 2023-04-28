'''1. 화물 수수료 계산
2. 1000미만의 자연수에서 3과 5의 배수의 총합 계산
3. 사칙연산 계산기 함수 구하기 '''

#1. 화물 수수료 계산: 수수료는 10kg단위로 10,000원씩 증가하며, 만약 무게가 10kg 미만이면 수수료는 없다


#2. 1000미만의 자연수에서 3과 5의 배수의 총합 계산
tot = 0
for i in range (0, 1000):
    if i % 3 == 0 and i % 5 == 0 :
        tot+=i
        i+=1
print("0~1000까지 3과 5의 배수 합계1: ", tot)

tot = 0
for i in range (0, 1000):
    if i % 3 == 0 :
        tot+=i
        i+=1
print("0~1000까지 3의 배수 합계1: ", tot)

tot3 = 0
for i in range (0, 1000, 3): #range: begine, end, step -> step 3씩 간격
        tot3 += i
print("0~1000까지 3의 배수 합계: ", tot3)

tot = 0
for i in range (0, 1000):
    if i % 5 == 0 :
        tot+=i
        i+=1
print("0~1000까지 5의 배수 합계1: ", tot)

tot5 = 0
for i in range (0, 1000, 5): #range: begine, end, step -> step 5씩 간격
        tot5 += i
print("0~1000까지 5의 배수 합계: ", tot5)

print("0~1000까지 3과 5의 배수 합계2: ", tot3+tot5)

#3.사칙연산 계산기 함수 구하기
def add(a, b):
    return a + b

def sub(a, b): # 음수로 나오지 않게 절대값 if문
    if a > b:
        return a - b
    else:
        return b - a

def multi(a, b):
    return a * b

def div(a, b):
    return a / b

#계산기 함수 불러오기 > import 폴더.패키지.클래스 (as 약칭)

import chap3.sec1.Calculator as cal
print("더하기: ", cal.add(5, 17))
print("빼기: ", cal.sub(100, 120))
print("곱하기: ", cal.multi(9, 9))
print("나누기: ", cal.div(88, 4))