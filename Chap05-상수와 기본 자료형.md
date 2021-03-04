# Chap02

생성일: 2021년 3월 1일 오전 11:54

# 01. 기본 자료형

- 기본 자료형

![Chap02%20bd5d91878ab849e7a879219d1d74c1aa/Untitled.png](Chap02%20bd5d91878ab849e7a879219d1d74c1aa/Untitled.png)

- sizeof를 사용하면 자료형의 크기 확인 가능

```
sizeof(num) // 연산자임
```

- 정수형 (표현 & 처리) 위한 자료형 선택

1) int: 변수의 자료형이 달라도 일반적으로 CPU가 처리하기에 가장 적합한 크기의 정수 자료형

2) 따라서 int형 연산의 속도가 다른 자료형의 연산속도에 비해서 동일하거나 더 빠름

- 실수 (표현 & 처리) 위한 자료형 선택

1) double형을 자주 사용

```
double rad, area;
scanf_s("%lf", &rad);
printf("원의 넓이: %f\n", area);
```

2) double형 출력: %f | double형 입력: %lf

- unsigned를 붙여서 0과 양의 정수만 표현하게

1) 정수 자료형 앞에만 unsigned 사용 가능

2) unsigned가 붙으면 MSB도 데이터의 크기를 표현하는데 사용

3) 표현가능한 값이 양수 방향으로 두배 더 넓어짐

4) char형은 예외일수 있음

(1) 다른 정수 자료형들과 달리 char는 signed char와 다른 선언일 수도

(2) char를 unsigned char로 처리하는 컴파일러도 존재

(3) 따라서 char형 변수를 선언해서 음의정수를 저장하는 경우에는 signed 선언을 추가하기도

# **02. 문자의 표현방식과 문자를 위한 자료형**

- 문자 표현

```
char ch1 = 'A'; // 작은 따옴표 안에 문자 입력, 문자열은 큰 따옴표 안
```