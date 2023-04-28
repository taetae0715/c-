#ex6.py
'''딕셔너리(dictionary=dict 딕트):  키(key)와 값(value)을 튜플 형식의 데이터로서 집합연산이
해당 키는 중복이 될 수 없으며, 값은 중복이 될 수 있음'''

data1 = {'name':'조태정', 'age':29, 'tel':'010-1234-5678'}
data1['birth'] = '95-07-15' #요소의 추가
data1['point'] = [100, 99, 90] #리스트를 요소로 추가

print("data1의 타입: ", type(data1))
print("data1의 주소: ", id(data1))
print("data1의 데이터 집합: ", data1)
print("data1의 요소 개수: ", len(data1))

dct_key = data1.keys()
print("data1의 key: ", dct_key) #키만 모아서 출력

dct_val = data1.values()
print("data1의 value: ", dct_val) #값만 모아서 출력

dct_tp = data1.items()
print("data1의 tp 순서쌍: ", dct_tp) #순서쌍의 튜플로 모으기: 짝꿍으로 () 묶어서 나온다

del data1['tel'] #특정 요소의 삭제
print("tel이 삭제된 data1의 데이터 집합: ", data1)

# data1.clear -> 모든 요소 제거

print("data1의 birth 요소: ", data1.get('birth')) #특정 요소의 값만 취할 경우
print("data1의 birth 요소: ", data1['birth']) #특정 요소의 값만 취할 경우
print("age 항목이 있는지: ", 'age' in data1) #특정 요소(키)의 존재 유무 파악
print("tel 항목이 있는지: ", 'tel' in data1) #특정 요소(키)의 존재 유무 파악 -> 위에서 del했으므로 없다고 나옴