#slicing시 index는 0번부터 시작 / [2:4]의 경우 2번째 index에서 시작해서 4번째 index에서 문자를 자름 -> 4번째 index 미포함
a = "Hello Groom"
b = a[0:5]
print(b)

a = "Hello Groom"
b = a[:5]
c = a[5:]
print(b)
print(c)

a = "Hello Groom"
b = a[0:-5]
c = a[1:-1]
print(b)
print(c)
