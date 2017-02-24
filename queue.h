#ifndef _QUEUE_H_
#define _QUEUE_H_

typedef int elemType;

typedef struct nodet
{
    elemType data;
    struct nodet *next;
}node_t;

typedef struct queuet
{
    node_t *head;
    node_t *tail;
}queue_t;



#endif

