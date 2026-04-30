#include <stdio.h>
#include <string.h>

#define MAX 1000

int dq[MAX];
int front = -1;
int rear = -1;

int isEmpty() {
    return front == -1;
}

int size() {
    if (isEmpty()) return 0;
    return rear - front + 1;
}

void push_front(int x) {
    if (front == -1) {
        front = rear = MAX/2;
        dq[front] = x;
    } else {
        dq[--front] = x;
    }
}

void push_back(int x) {
    if (front == -1) {
        front = rear = MAX/2;
        dq[rear] = x;
    } else {
        dq[++rear] = x;
    }
}

void pop_front() {
    if (isEmpty()) return;
    if (front == rear) front = rear = -1;
    else front++;
}

void pop_back() {
    if (isEmpty()) return;
    if (front == rear) front = rear = -1;
    else rear--;
}

int get_front() {
    if (isEmpty()) return -1;
    return dq[front];
}

int get_back() {
    if (isEmpty()) return -1;
    return dq[rear];
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char op[20];
        scanf("%s", op);

        if (strcmp(op, "push_front") == 0) {
            int x;
            scanf("%d", &x);
            push_front(x);
        }
        else if (strcmp(op, "push_back") == 0) {
            int x;
            scanf("%d", &x);
            push_back(x);
        }
        else if (strcmp(op, "pop_front") == 0) {
            pop_front();
        }
        else if (strcmp(op, "pop_back") == 0) {
            pop_back();
        }
        else if (strcmp(op, "front") == 0) {
            printf("%d\n", get_front());
        }
        else if (strcmp(op, "back") == 0) {
            printf("%d\n", get_back());
        }
        else if (strcmp(op, "empty") == 0) {
            printf("%d\n", isEmpty());
        }
        else if (strcmp(op, "size") == 0) {
            printf("%d\n", size());
        }
    }

    return 0;
}