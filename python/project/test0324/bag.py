bag = int(input("짐의 무게는 얼마입니까?"))
if (bag<10):
    print("수수료는 없습니다.")
else:
    res=(bag//10)*10000
    print("수수료는 {:,d}원입니다.".format(res))

