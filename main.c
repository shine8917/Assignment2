#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

void filestat1(void);
void filestat2(void);
void filetime1(void);
void filetime2(void);
void sizecmp(void);
void blockcmp(void);
void datecmp(void);
void timecmp(void);

int main(void)
{
	filestat1();
	filestat2();
	filetime1();
	filetime2();
	sizecmp();
	blockcmp();
	datecmp();
	timecmp();
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1(void)
{
	stat("text1", &stat1);
}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(void)
{
	stat("text2", &stat2);
}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(void)
{
	time1 = localtime(&stat1.st_mtime);
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(void)
{
	time2 = localtime(&stat2.st_mtime);
}

//두 개의 파일 크기를 비교하는 함수 작성
void sizecmp(void)
{
	int s1 = (int)stat1.st_size; //st_size를 사용하여 stat1의 size를 s1에 저장한다.
	int s2 = (int)stat2.st_size; //st_size를 사용하여 stat2의 size를 s2에 저장한다.
	printf("size : ");
	if(s1 > s2) //s1이 s2보다 크다면 조건문 실행
		printf("text1 is bigger\n"); //text1 is bigger 출력
	else if(s1 < s2) //s2가 s1보다 크다면 조건문 실행
		printf("text2 is bigger\n"); //text2 is bigger 출력
	else //s2와 s1이 같다면 조건문 실행
		printf("sizes are equal\n"); //sizes are equal 출력
}

//두 개의 파일 블락 수를 비교하는 함수 작성
void blockcmp(void)
{
	int s1 = (int)stat1.st_blocks; //st_size를 사용하여 stat1의 blocks를 s1에 저장한다.
	int s2 = (int)stat2.st_blocks; //st_size를 사용하여 stat2의 blocks를 s1에 저장한다.
	printf("blocks : ");
	if(s1 > s2) //s1이 s2보다 크다면 조건문 실행
			printf("text1 is bigger\n"); //text1 is bigger 출력
		else if(s1 < s2) //s2가 s1보다 크다면 조건문 실행
			printf("text2 is bigger\n"); //text2 is bigger 출력
		else //s2와 s1이 같다면 조건문 실행
			printf("block sizes are equal\n"); //sizes are equal 출력
}

//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp(void)
{
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void timecmp(void)
{
}
