#ex23.py 내장 모듈이지만 import가 필요한 함수 //모듈이란? 하나의 파이썬 파일

''' 불러오기 > 폴더.패키지.클래스
여러 모듈 단위로 각각 임포트
import math
import statistics

여러 모듈 단위로 한꺼번에 임포트
import statistics, math

하나의 모듈에서 특정 함수만 임포트
from statistics import stdev, mean
'''

#import statistics, math
from statistics import mean, harmonic_mean, geometric_mean, stdev, variance, median, mode
lst = [100, 99, 85, 65, 70, 74, 82, 55, 60, 70]
print("lst 개수: ", len(lst), lst)
print("lst 합계: ", sum(lst))
print("lst 산술평균: ", mean(lst))
#산포도/통계/집계
print("lst 조화평균: ", harmonic_mean(lst)) #추이 평균
print("lst 기하평균: ", geometric_mean(lst))
print("lst 표준편차: ", stdev(lst)) #평균의 표준 편차
print("lst 분산: ", variance(lst)) #표준편차가 적으면 사용
print("lst 중간값: ", median(lst))
print("lst 최빈수: ", mode(lst)) #가장 빈번히 나오는 수(선착순)

#전체 불러오면 매번 math. 이런 식으로 써야 해서 as 별칭 구해서 m. 으로 쓴다
import math as m
print(m.sqrt(5)) #제곱근
print(m.pi) #파이값
print(m.pow(5,7)) #5의 7승
#print(m.acos(30))
#print(m.asin(30))
#print(m.atan(30))
print(m.cos(30))
print(m.sin(30))
print(m.tan(30))
#print(round(68.457)) #반올림
print(m.ceil(68.457)) #올림
print(m.floor(68.457)) #버림
print(m.trunc(68.457)) #소숫점 삭제 - 절사
#print(round(-68.457)) #-반올림
print(m.ceil(-68.457)) #-올림
print(m.floor(-68.457)) #-버림
print(m.trunc(-68.457)) #소숫점 삭제 - 절사

print(m.gcd(20, 52)) #최대공약수
print(m.lcm(20, 52)) #최소공배수