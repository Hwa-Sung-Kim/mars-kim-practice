# count()	                전달 인자의 문자 개수를 반환
# find()	                함수의 대상이 되는 문자열에 전달 인자와 같은 문자가 있는지 찾고,
#                           그 문자가 처음 발견된 인덱스 값을 반환. 만약 전달 인자가 문자열 내에 없다면 -1 반환
# index()	                find()와 같은 역할을 수행하나, 전달 인자가 문자열 내에 없으면 오류 발생
# join()	                전달 인자 사이에 함수의 대상이 되는 문자열을 삽입
#                           (ex. ",".join("goorm") → "g, o, o, r, m")
# upper() / lower()	        함수의 대상이 되는 문자열을 대문자로 / 소문자로 변환
# lstrip() / rstrip()	    함수의 대상이 되는 문자열의 가장 왼쪽 / 오른쪽 공백을 모두 삭제
# strip()	                함수의 대상이 되는 문자열의 양쪽에 있는 한 칸 이상의 공백 모두 삭제
# replace()	                replace(전달 인자1, 전달 인자2) 형식으로 사용하며,
#                           함수의 대상이 되는 문자열에서 전달 인자1과 동일한 부분을 찾아 전달 인자2로 교체
# split()                   함수의 대상이 되는 문자열을 전달 인자 기준으로 쪼개 리스트로 반환
#                           (ex. "g!oo!rm".split("!") → ['g','oo','rm'])

str_sample = "Hello goorm! I study Python."

num_empty = str_sample.count(' ')      #str_sample의 Quotation Mark 사이의 문자 갯수 반환, 여기서는 공백이므로 공백의 개수
num_o = str_sample.count("o")          #str_sample의 Quotation Mark 사이의 문자 갯수 반환, 여기서는 o이므로 o의 개수
print("빈칸의 개수는 %d입니다." %num_empty)
print(f'"{str_sample}"문장의 o의 개수는 {num_o}개 입니다')     #print()안에 콜론 추가시 동일 콜론 사용하면 에러 발생 ""와 ''을 구분해서 사용 필요
print("처음 등장하는 'H'의 인덱스 값은 %d입니다." %str_sample.find('H'))   #index 값은 0부터 시작하여 공백을 포함함 / 대문자 소문자 구분 필요 / 찾는 문자가 없을경우 -1을 반환함
print("처음 등장하는 'g'의 인덱스 값은 %d입니다." %str_sample.find('g'))
print("처음 등장하는 'a'의 인덱스 값은 %d입니다. 인덱스의 값이 -1이면 해당문자가 문자열 내에 없습니다." %str_sample.find('a'))
sample_good_day = "Good day"
print("Good day에서 처음 등장하는 'y'의 인덱스 값은 %d입니다." %"Good day".index('y'))
print("Good day에서 처음 등장하는 'd'와 'y'의 인덱스 값은 d=%d, y=%d 입니다." %("Good day".index('d'),"Good day".index('y')))
print("{0}에서 처음 등장하는 'd'와 'y'의 인덱스 값은 d={1}, y={2} 입니다.".format("Good day", "Good day".index('d'), "Good day".index('y')))
print("{0}에서 처음 등장하는 'd'와 'y'의 인덱스 값은 d={1}, y={2} 입니다.".format(sample_good_day, sample_good_day.index('d'), sample_good_day.index('y')))
#string function에 기존 formating, index,f-string 사용법과 동일하게 적용가능
print(f'"{sample_good_day}"에서 처음 등장하는 "d"와 "y"의 인덱스 값은 d={sample_good_day.index("d")}, y={sample_good_day.index("y")} 입니다.')
# Single Quotation Mark(')와 Qoutation Mark(")를 혼용해서 사용하려면 Escape기능을 하는 Back Slash(\)를 사용하면된다.
# \' = ' , \" = " , \n = 줄바꿈, \t = 탭(TAP), \\ = \, \b = Backspace
print(f'\"{sample_good_day}\"에서 처음 등장하는 \'d\'와 \'y\'의 인덱스 값은 d={sample_good_day.index("d")}, y={sample_good_day.index("y")} 입니다.')

print("#".join(str_sample))                 #str_sample의 한 글자 사이사이에 Quotation Mark 안의 문자를 삽입
print("#".join([str_sample, str_sample]))   #[]사용시 안에 지정된 Variable을 하나로 보고 Varible과 Varible 사이에 Quotation Mark 안의 문자를 삽입
print(str_sample.upper())   #str_sample을 대문자로 전환
print(str_sample.lower())   #str_sample을 소문자로 전환
print("Python 공부 좋아요.".upper(),"Python 공부 좋아요.".lower()) #단, 한글처럼 대소문자 구분이 없는경우 한글을 제외한 나머지 글자에 적용
print("Python öğrenmeyi seviyorum.".upper(),"Python öğrenmeyi seviyorum.".lower())    #터키어와 같은 외국어라도 대소문자 구분이 있으면 적용 가능
print(''.join(["     ", str_sample, "     ."]).lstrip())    #문자열 왼쪽의 공백 제거
print(''.join(["     .", str_sample, "     "]).rstrip())    #문자열 오른쪽의 공백 제거
print(str_sample.replace('Python', 'C'))    #문자열안의 Python을 C로 교체
print(str_sample.split())               #문자열을 어절로 split하여 리스트로 반환

sentence = "I like studying Python"
print(len(sentence), len("goorm"))      #문자열의 길이를 반환(공백 포함)
