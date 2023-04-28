#ex15.py for 변수 in 컬렉션프레임


lst= [77, 87, 97, 67, 88, 98, 78, 68, 80, 90]

#카운트 변수 i -> lst[0], lst[1], lst[2] ...
for i in range(0, len(lst)):    #range(begine, end) 생략시 알아서 0부터 end까지, i: 0~9
    if lst[i] >= 85:
        print(i+1,"번 판정: 합격") #0번은 없으니까 i+1해서 1번부터 출력되게 함
    else:
        print(i+1,"번 판정: 불합격")

#데이터 변수 -> 77, 87, 97 ... *카운트를 하지 않기 때문에 몇 번째인지는 표시 못함
for jum in lst: #jum이라는 변수를 사용해서 in lst 개수만큼 판정한다
    if jum>=85:
        print("합격")
    else:
        print("불합격")

#for ~ in ~ range를 활용하여 0~100까지 5의 배수 합계
tot = 0
for i in range (0, 101):
    if i % 5 == 0 :
        tot+=i
        i+=1
print("0~100까지 5의 배수 합계1: ", tot)

tot = 0
for i in range (0, 101, 5): #range: begine, end, step -> step 5씩 간격
        tot += i
print("0~100까지 5의 배수 합계2: ", tot)

tot=0
for i in range (0, int(100/5)+1): #5의 배수의 개수만큼 실행
        tot+=i*5
print("0~100까지 5의 배수 합계3: ", tot)