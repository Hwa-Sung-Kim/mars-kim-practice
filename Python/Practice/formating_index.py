name1 = "변덕현"
name2 = "변덕자"
age = 29
height = 179.123456789

print("제 이름은 {1}입니다. 나이는 {2}살이고 키는 {0}cm 입니다." .format(height, name1, age))
print("{1}의 나이 : {2}, {0}의 나이 : {3}" .format(name2, name1, age, age)) #동일 변수 인데스에 2번 정의 가능

#변수 이름으로 index 대입(정상출력)
print("제 이름은 {0}입니다. 나이는 {age}살 이고 키는 {1}cm 입니다. 제 쌍무적계약관계는 {gap}입니다." .format( "변덕현", 179.123, age = 29, gap = "이찬호"))

#변수 이름으로 index 대입(SyntaxError 발생 - index와 변수 혼용시 index값 입력 완료 후 변수를 지정해야함, index 내 변수 지정시 해당 index 지정 안됨 )
#print("제 이름은 {0}입니다. 나이는 {age}살 이고 키는 {2}cm 입니다. 제 쌍무적계약관계는 {gap}입니다." .format( "변덕현", age = 29, 179.123 gap = "이찬호"))


print("{length: >10d}".format(length = 30)) # >10d는 공백을 빈칸으로 채움 a>10d는 공백을 a로 채움
#print("{0: >10d".format(name1))    변수가 아닌 index값으로 지정하면 에러 발생
# 공백문자: (공백) ,정렬: 오른쪽 정렬, 폭: 10
# 순서대로 입력해야하고 생략 가능

print("{0:0^10}".format("goorm"))
# 공백문자: 0 ,정렬: 가운데 정렬, 폭: 10
# 순서대로 입력해야하고 생략 가능

print("{height:!<13.2f}".format(height = 181.24363))
# 공백문자: ! ,정렬: 왼쪽 정렬, 폭: 13, 소수점 2자리 표시
# 순서대로 입력해야하고 생략 가능
