city = "안성"
date = 1
day = "월요일"
temperature = 33

#정수형 date와 temperature은 문자열과 덧셈 불가 -> str로 형변환
announcement = city + "의 " + str(date) + "일 " + day + " 기온은 " + str(temperature) + "도 입니다."
print(announcement)

#       %s                  문자열(strint)
#       %c                  문자1개(character)
#       %d                  정수(integer)
#       %f                  실수/부동 소수(floating-point)
#       %o                  8진수(octa)
#       %x                  16진수(hexa)
#       %%                  %자체를 출력

#1번 방법
announcement = "%s의 %d일 %s 기온은 %d도 입니다." %(city, date, day, temperature)
print(announcement)

#2번 방법
print("%s의 %d일 %s 기온은 %d도 입니다." %(city, date, day, temperature))



name = "duck"
age = 29
height = 178.123456789

print("저의 이름은 %s입니다" %name)
# print("저의 이름은 %c입니다" %name) %c는 문자 1개를 나타나기때문에 에러 발생

print("저는 %d살 입니다." %29) #숫자 포멧팅시 별도 따옴표 필요 없음
print("제 나이는 %d살 입니다." %age)
print("제 나이는 %s살 입니다." %age)
print("제 나이는 %.2f살 입니다." %age)

print("제 키는 %fcm입니다." %height)
print("제 키는 %.2fcm입니다." %height) #%.2f는 소수점 둘째자리까지 표현
print("제 키는 %dcm입니다" %height)

print("제 성별은 %c자 입니다." %"남") #문자 포멧팅시 따옴표 미사용시 에러 발생

print("제 나이는 16진수로 %x, 8진수로 %o 입니다." %(age, age))

print("%d" %10)         #정수를 자동으로 오른쪽 정렬
print("%10d" %10)       #정수 10자리 숫자를 맞춰서 오른쪽 정렬 단,숫자 앞 0은 생략
print("%-10d" %10)      #정수 10자리 숫자를 맞춰서 왼쪽 정렬 단,숫자 앞 0은 생략
print("%010d" %10)      #정수 10자리 표현 단, 숫자가 적은 경우 변수앞에 0으로 자리를 맞춤

print("%8s %8d %8s" %("변덕현", 29, "LG전자"))
print("%-8s %-8d %-8s" %("변덕현", 29, "LG전자"))
