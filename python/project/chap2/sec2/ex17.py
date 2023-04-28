#ex17.py 출력 제어: print, 이스케이프문자, 형식지시자, format함수

name = "조태정"
age = 29

print("name=", name, "age=", age)
print("name", name, sep="=")
print("age", age, sep="=")

#이스케이프문자: \n, \t, \r, \f
print("name=", name, "\nage=", age)

#형식지시자: %s, %d, %f
print("name=%s, age=%d" % (name, age))

#format 함수 {}.format()
print("내 이름은 {}이고, 나이는 {}살이야.".format(name, age))