#ex16.py 반복 실행 for 내포문

lst= [77, 87, 97, 67, 88, 98, 78, 68, 80, 90]
#판정 내기 문장 구조 -> [1."조건만족시출력" 2.if 3.조건식 4.else 5."조건거짓시출력" 6.for 7.변수명 8.in 9.컬렉션명]
res = ["합격" if su>=85 else "불합격" for su in lst]
'''
for su in lst:
    if su >= 80:
        res.append("합격")
    else :
        res.append("불합격")
'''

#평점 구하기 문장 구조 -> [1.계산식 2.for 3.변수명 4.in 5.컬렉션명]
py = [num/10 for num in lst]
'''
for num in lst:
    py.append(num/10)
'''

#각 항목의 [i] 값 출력
for i in range(len(lst)):
    print("점수: ", lst[i])
    print("평점: ", py[i])
    print("판정: ", res[i])
    print("\n")