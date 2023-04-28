#ex20.py 함수, 클래스, 멤버 선언
#사용자 정의 함수 def 4가지
def fn1():
    print("매개변수 X 리턴값 X")

def fn2(n):
    print("n 값: ", n)

def fn3():
    return "강아지"

def fn4(s1, s2):
    return s1*2, s2*3

#정의한 함수 호출
fn1()

fn2(99.9)

data=fn3()
print(data)

data2=fn4("바보", "멍청이")
print(data2)
