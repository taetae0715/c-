# 파이썬에서 클래스

class Student:
    def __init__(self, name, tel, rank):
        self.name = name
        self.tel = tel
        self.rank = rank

    def print_st(self):
        print("----------------------------------------")
        print("이름: ", self.name)
        print("연락처: ", self.tel)
        print("성적: ", self.rank)

student1 = Student("조태정", "010-1234-5678", "1등")
student1.print_st()