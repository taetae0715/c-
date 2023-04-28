#ex7.py
# 기본형 타입(int, str, bool, float)의 형 변환
a = 777
b = "777"
c = True
d = 77.7
e = "77.7"

#각각 타입 출력
print("a의 타입: ", type(a))
print("b의 타입: ", type(b))
print("c의 타입: ", type(c))
print("d의 타입: ", type(d))
print("e의 타입: ", type(e))

#정수화 int
print("a: ", int(a))
print("b: ", int(b)) # -> 따옴표 떼고 777 출력
print("c: ", int(c)) # -> 값이 있으니까 1로 출력
print("d: ", int(d)) # -> 77.7에서 소수점 떼고 77로 출력
#print("e: ", int(e)) # -> 형변환 두 번 거쳐야 하기 때문에 오류

#실수화 float -> 전부 .0 바꿔서 출력 가능
print("a: ", float(a))
print("b: ", float(b))
print("c: ", float(c))
print("d: ", float(d))
print("e: ", float(e))

#문자화 str -> 전부 "" 씌워서 값 고대로 출력 가능
print("a: ", str(a))
print("b: ", str(b))
print("c: ", str(c))
print("d: ", str(d))
print("e: ", str(e))

#논리화 bool -> 값이 있으면 전부 True, 없거나 0이면 False
print("a: ", bool(a))
print("b: ", bool(b))
print("c: ", bool(c))
print("d: ", bool(d))
print("e: ", bool(e))



