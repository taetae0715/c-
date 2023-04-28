# Wordpro.py -> import chap3.sec1.Wordpro (as wp)
#문자열 분리 .split("?") list에 tt를 담고 리스트 형식으로 출력된다
#lst1 = tt.split(' ')
#print(tt)
#print(lst1)

#리스트를 하나의 문자열로 합치기 .join
#j1 = '*'.join(lst3)
#print(lst3)
#print(j1)

#sep 구분자
#toString() 리스트를 하나의 문자열로 만드는 함수 .join 정의
def toString(lst, sep):
    res = sep.join(lst)
    return res

#toList() 하나의 문자열을 분리하여 리스트로 만드는 함수 .split 정의
def toList(data, sep):
    res = data.split(sep)
    return res

'''
사용자 정의 함수 def 4가지
def fn1():
    print("매개변수 X 리턴값 X")

def fn2(n):
    print("n 값: ", n)

def fn3():
    return "강아지"

def fn4(s1, s2):
    return s1*2, s2*3
'''
'''
#정의한 함수 호출
fn1()

fn2(99.9)

data=fn3()
print(data)

data2=fn4("바보", "멍청이")
print(data2)
'''