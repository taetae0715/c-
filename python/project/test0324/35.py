tot = 0
for i in range (0, 1000):
    if i % 3 == 0 and i % 5 == 0 :
        tot+=i
        i+=1
print("0~1000까지 3과 5의 배수 합계: ", tot)



