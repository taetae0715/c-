import chap3.sec1.Wordpro as wp
#문자열을 리스트로 분리하기  .split
d1 = "일주일*길다*언제*주말*오지"
res1 = wp.toList(d1, "*")
print(d1)
print(res1)

#리스트를 문자열로 합치기 .join
d2 = ["가나다", "라마바사", "아", "자차카", "타파하"]
res2 = wp.toString(d2, "-")
print(d2)
print(res2)