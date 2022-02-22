#include <stdio.h>
#include <malloc.h>

/*
int main(){
    int c = 12;
    int *p = &c;
    printf("%d\n%d\n", &c, p);
    printf("%d\n%d\n", c, *p);
}*/

//포인터
/*
int calculate_sum (int*);   //함수 선언할 때, 포인터를 가져온다는것을 명심.

int main(){
    int arr[10], sum;
    int* p = arr;
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    sum = calculate_sum(arr);
    printf("%d\n", sum);
}

int calculate_sum (int arr[]){      //*arr로 적어도됨.
    int sum = 0;
    for(int i = 0; i < 10; i++) sum += arr[i];

    return sum;
}*/


/*
*a 와 a[0]는 동일한 의미

또한 a[1]은 *(a+1)과 동일하고 a[i]는 *(a+i)이다.
*(a+i)연산을 포인터 arithmetic이라고 한다.
*/

#include <stdlib.h>
//동적 메모리 할당 malloc, calloc, realloc
/*
int main(){
    int* p;
    p = (int *)malloc(40);  //int형의 크기가40인 동적메모리 할당.
    // malloc은 기본적으로 타입이 없는 주소(void*)이다.
    if (p==NULL){}
    for(int i = 0; i < 10; i++) {
        p[i] = 12*(i+1);
        printf("%d\n", p[i]);
    }
}*/

//배열 키우기

int main(){
    int* p;
    p = (int *)malloc(3*sizeof(int));
    p[0]=1, p[1]=2, p[5]=6, p[6]=7;
    printf("%d\n%d\n%d\n", p[0], p[6], p[5]);
    printf("%d", _msize(p));

    int* p2 = (int *)malloc(6*sizeof(int));
    for(int i = 0; i < 3; i++) p2[i] = p[i];
    p = p2;     //3바이트 동적메모리 p가 6바이트 동정메모리가 됐음.
    //동적메모리가 아닌 정적메모리로 선언한 배열은 그 주소를 바꿀 수 없다.
    //왜냐하면 p는 배열이 아니라 포인터 변수이기 때문
}