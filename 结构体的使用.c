// #include <stdio.h>

// typedef struct {
//     int age;
//     char name[20];
// } Person;

// int main() {
//     Person *p = malloc(sizeof(Person)); // 分配内存并初始化指针
//     p->age = 25; // 使用 -> 运算符访问结构体成员
//     strcpy(p->name, "Kimi");

//     printf("Name: %s, Age: %d\n", p->name, p->age);

//     free(p); // 释放内存
//     return 0;
// }
///在C语言中，-> 是一个运算符，用于访问指向结构体的指针所指向的结构体成员。它结合了解引用指针（*）和成员访问（.）的操作。
//具体来说，如果你有一个指向结构体的指针，
// 比如 structType *ptr;，你可以使用 ptr->memberName 的方式来访问结构体中的成员 memberName。
// 这里的 -> 运算符就是用来实现这一操作的。


#include <stdio.h>
#include <stdbool.h>

#define QUEUE_SIZE 5  // 定义队列的最大容量

typedef struct {
    int items[QUEUE_SIZE];
    int front;
    int rear;
} Queue;

// 初始化队列
void initQueue(Queue *q) {
    q->front = 0;
    q->rear = 0;
}

// 检查队列是否为空
bool isEmpty(Queue *q) {
    return q->front == q->rear;
}

// 检查队列是否已满
bool isFull(Queue *q) {
    return (q->rear + 1) % QUEUE_SIZE == q->front;
}

// 入队操作
bool enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full.\n");
        return false;
    }
    q->items[q->rear] = value;
    q->rear = (q->rear + 1) % QUEUE_SIZE;
    return true;
}

// 出队操作
bool dequeue(Queue *q, int *value) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return false;
    }
    *value = q->items[q->front];
    q->front = (q->front + 1) % QUEUE_SIZE;
    return true;
}

// 打印队列中的元素
void printQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i != q->rear; i = (i + 1) % QUEUE_SIZE) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);

    printQueue(&q);

    int value;
    if (dequeue(&q, &value)) {
        printf("Dequeued: %d\n", value);
    }

    printQueue(&q);

    return 0;
}

