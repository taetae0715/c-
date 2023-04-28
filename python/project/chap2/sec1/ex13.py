#ex13.py 조건문: if~, if~else~, if~elif~else~ (여기서는 else if 아니고 elif임)
#if문 실행문장이 여러 줄일 경우 다른 언어에서 쓰는 { } 블록을 '탭  '으로 표현한다

#여러 줄 if
money = False
if money :
    print("점심 먹는다")
    print("맛있는걸로")
else:
    print("굶는다")

'''다른 언어의 구조
if(money) {
    print("점심 먹는다")
    print("맛있는걸로")
}'''

#한 줄 if
var1=90
if var1>=70 : print("합격")

#세 과목의 점수를 입력받고 총점, 평균 구하기
sc1 = int(input("국어 점수 입력: "))
sc2 = int(input("영어 점수 입력: "))
sc3 = int(input("수학 점수 입력: "))
sum = (sc1+sc2+sc3)
avg = float((sc1+sc2+sc3)/3)
print("국어\t영어\t수학\t총점\t평균")
print(sc1,  sc2,  sc3,  sum,  avg)

#모든 과목이 60점 이상이고 평균이 70 이상이면 합격, 아니면 불합격
if sc1>=60 and sc2>=60 and sc3>=60 and avg>=70 :
    print("합격")
else:
    print("불합격")
    
#elif 구문
if avg==100 or avg>= 90  :
    print("1등급")
elif avg>=80 :
    print("2등급")
elif avg>=70 :
    print("3등급")
elif avg>=60 :
    print("4등급")
else :
    print("5등급")
    
#중첩 if 구문
if avg>=90 :
    if sc1==100 and sc2==100 and sc3==100:
        print("전체 과목 만점자")
    elif sc1==100 or sc2==100 or sc3==100:
        print("과목 만점자")
    else:
        print("평균 점수는 90점 이상이나 만점 과목이 없음")
    
else :
    if sc1 == 100 or sc2 == 100 or sc3 == 100 :
        print("만점 과목이 있으나 전체 평균이 90점 미만")
    else:
        print("학습 노력 필요")












