#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int answer; // 정답을 저장할 변수
    int guess; // 사용자의 추측을 저장할 변수
    srand(time(NULL)); // 시드값 설정
    answer = rand() % 100 + 1; // 1부터 100 사이의 랜덤한 정수 생성하여 answer에 저장

    printf("1부터 100까지의 숫자 중 임의의 수 하나를 맞춰보세요!\n"); // 사용자에게 숫자 선택 지시

    while(1){ // 무한 루프
        printf("숫자 입력 : "); // 사용자에게 추측 요청
        scanf("%d", &guess); // 사용자의 입력을 guess에 저장

        if (guess == answer){ // 추측이 정답과 일치하는지 확인
            printf("정답입니다!\n"); // 정답인 경우 메시지 출력 후 루프 종료
            break;
        }
        else if (guess < answer){ // 추측이 정답보다 낮은지 확인
            printf("숫자가 너무 작습니다. 다시 시도해보세요!\n"); // 낮으면 메시지 출력
        }
        else if (guess > answer){ // 추측이 정답보다 높은지 확인
            printf("숫자가 너무 큽니다. 다시 시도해보세요!\n"); // 높으면 메시지 출력
      }
   }
   return 0;
}
