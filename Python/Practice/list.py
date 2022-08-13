#변수 설정시 []를 이용하여 list 설정 가능
oddnumber = [1, 3, 5, 7, 9]
cafes = ['star', 'bene', 'yoger', 'friends']
A = [1, 5, 'A', 'CC', 'B']
listInList = [[1, 3, 5, 6, 7], cafes, oddnumber, 1, 3, 'Abc']   # list내 또다른 list 설정 가능

#print function을 이용한 list 출력시 출력값에 []를 포함
print(oddnumber)
print(cafes)
print(A)
print(listInList)

#index값을 사용하여 list 내 접근 가능
a = oddnumber[3]
b = cafes[1]
c = A[2]
d = listInList[0][1]    # 0번 index의 list안 1번 index 값에 접근

print(a)
print(b)
print(c)
print(d)
print(a + d, oddnumber[4] * listInList[4]) #숫자 + 숫자 연산 가능
print(b + c) #문자열 + 문자열: 문자열 합하기

#list slicing
a = oddnumber[1:5]
b = cafes[1:]
c = A[:2]
d = listInList[0][1:4] # 0번 index의 list안 1~4번 index Slicing

print(a)
print(b)
print(c)
print(d)

