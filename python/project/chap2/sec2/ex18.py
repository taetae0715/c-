num1 = 777
str1 = """내일은 
드디어
금요일 ~.~
"""
float1 = 2.724595778888
chr1='조태정'
#양수는 오른쪽정렬, 음스눈 왼쪽정렬
print("10진수 num1=%d" % num1)
print("10진수 num1=%10d" % num1)
print("10진수 num1=%-10d" % num1)
print("8진수 num1=%o" % num1)
print("16진수 num1=%x" % num1)
print("문자열 str1=%s" % str1)
print("문자열 chr1=%10s" % chr1)
print("문자열 chr1=%-10s" % chr1)
print("문자 str1[c]=%c" % str1[2])
print("float1=%f" %float1)
print("float1=%.4f" %float1)
print("float1=%0.2f" %float1)
print("float1=%10.3f" %float1)
print("float1=%-10.3f" %float1)

name = "조태정"
age = 29
height = 160.3
weight = "??"

print("name\tage\theight\tweight")
print("%s\t%d\t%5.2f\t%s\n" % (name, age, height, weight))
print("D:\\tjtj\\taetae0715\\web1")
print("내 이름은 \"조태정\"이야")

#format 함수 익히기
print("name: {}, age: {}, hejght: {}".format(name, age, height))
print("name: {1}, age: {2}, hejght: {0}".format(age, height, name)) #name: {1} 1번 인덱스 값이 들어옴
print("name: {0}({1}살)".format(name, age)) #(29살)
print("키: {0:f}, 이름: {1:s}".format(height, name))
print("나이키: {0:10d}, {1:5.2f}".format(age, height))

print("이름: {0:>10}".format(name)) #10칸 확보 후 오른쪽 정렬
print("이름: {0:<10}".format(name)) #10칸 확보 후 왼쪽 정렬
print("이름: {0:^10}".format(name)) #10칸 확보 후 가운데 정렬
print("이름: {0:*^10}".format(name)) #10칸 확보 후 가운데 정렬하고, 공백은 *로 채움

print("나이: {0:o}".format(age))  #8진수
print("나이: {0:x}".format(age))  #16진수