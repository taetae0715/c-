#ex4.py tuple(튜플): (소괄호)로 선언, 읽기 전용으로 내용 변경이 불가능하며, 선언되면 그 값을 유지
tp1 = (60, 90, 70, 80, 65, 55, 85, 75)
print("tp1: ", tp1)
print("tp1의 자료형: ", type(tp1))
print("tp1의 주소: ", id(tp1))
print("tp1[1:4] -> ", tp1[1:4]) #슬라이싱
# tp1[2] = 75 -> X 요소의 값을 변경할 수 없다
print("tp1의 길이: ", tp1, len(tp1))
print("tp1에서 값이 55인 요소의 개수: ", tp1.count(55))
print("tp1에서 값이 55인 요소의 위치(인덱스): ", tp1.index(55))
#요소의 값을 변경할 수 없으므로 정렬, 삽입, 추가, 삭제가 불가능함

tp1 = list(tp1) # list로 형변환 []
print("tp1의 자료형: ", type(tp1), tp1)

tp1 = tuple(tp1) # tuple로 형변환 ()
print("tp1의 자료형: ", type(tp1), tp1)