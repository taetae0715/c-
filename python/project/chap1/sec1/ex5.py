# ex5.py 셋(set): {} 집합으로 순서가 없는 비순서형 자료형이며 데이터 중복도 없음
# 자료의 추가, 삭제 등이 가능하고, 합집합 / 차집합 등의 연산이 가능함
lst1 = [80, 90, 70, 80, 60, 70]
s1 = {80, 90, 70, 80, 60, 70}
s2 = {40, 70, 65, 75, 60, 85}
print("lst1: ", type(lst1), len(lst1), lst1)
print("s1: ", type(s1), len(s1), s1)    #중복 데이터는 제외하고, 순서도 없이 출력
lst1 = set(lst1)
print("lst1 중복성 및 순서성 제거: ", type(lst1), len(lst1), lst1)

#각 집합의 연산자와 메소드명
print("s1과 s2의 교집합 연산 &: ", s1&s2)
print("s1과 s2의 교집합 연산 intersection: ", s1.intersection(s2))

print("s1과 s2의 합집합 연산 |: ", s1|s2)
print("s1과 s2의 합집합 연산 union: ", s1.union(s2))

print("s1과 s2의 차집합 연산 -: ", s1-s2)
print("s1과 s2의 차집합 연산 differenc: ", s1.difference(s2))

#원소의 추가
print("s1 => ", s1)                       #{80, 90, 60, 70}
s1.add(74)                                #1개씩만 추가할 수 있음
print("add된 s1 => ", s1)                 #{70, 74, 80, 90, 60}
s1.update([65, 75, 55, 85])              #[] 여러 개 추가할 수 있음
print("update된 s1 => ", s1)             #{65, 70, 74, 75, 80, 85, 55, 90, 60}
s1.remove(75)                           #{65, 70, 74, 80, 85, 55, 90, 60}
print("remove된 s1 => ", s1)

#슬라이싱 하기 위해 형변환
s1 = list(s1)           #set을 list로
print("형변환 s1: ", type(s1), len(s1), s1)
print(s1[1:4])