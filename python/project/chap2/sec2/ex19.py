#문자열 슬라이싱: 리스트처럼 슬라이싱이 가능하다
# +는 왼쪽부터, -는 오른쪽부터
tt = "손잡이 달린 스타벅스 텀블러 보라색"
print("tt[3]:", tt[3])        #인덱스 3번 슬라이싱
print("tt[0:8]:", tt[0:8])      #인덱스 0번부터 8번 전까지 슬라이싱
print("tt[2:]:", tt[2:])       #인덱스 2번부터 끝까지
print("tt[:6]:", tt[:6])       #
print("tt[-5]:", tt[-5])
print("tt[:-5]:", tt[:-5])
print("tt[-4:]:", tt[-4:])
print("tt[-4:-8]:", tt[-3:-5])
print("tt[7:-3]:", tt[7:-3])

#[begin:end:step] step만큼 건너뛰면서 출력
print("tt[0:10:2]:", tt[0:10:2])
print("tt[0::2]:", tt[0::2])

#문자열 분리 .split("?") list로 바꿔서 출력된다
lst1 = tt.split(' ')
print(tt)
print(lst1)

jj= "한국/중국/일본/태국/터키/미국"
lst2= jj.split("/")
print(jj)
print(lst2)

oo= "엄마*아빠*언니*오빠*왓섭"
lst3= oo.split("*")
print(oo)
print(lst3)

#리스트를 하나의 문자열로 합치기 .join
j1 = '*'.join(lst3)
print(lst3)
print(j1)

j2 = ', '.join(lst2)
print(lst2)
print(j2)
