#include<stdio.h>
#include"queue.h"

void initQueue(queue_t *queue_eg)
{
    queue->head = queue->tail = NULL;
}

void enqueue(queue_t *hq,elemType x)
{
    node_t *new;
    new = (node_t)malloc(sizeof(node_t));
    if(new != NULL)
    {
        new->data = x;
        new->next = NULL;
        if(hq->head == NULL)
        {
             hq->head = new;   
             hq->tail = new;   
        }
        else
        {
            hq->tail->next = new;
            hq->tail = new;
        }
    }
    return ;
}

elemType outQueue(queue_t hq)
{
    node_t *p;
    elemType temp;
    if(hq->head == NULL)
    {
        printf("del err");
        exit(1)

    }
    temp = hq->head->data;
    p = hp->head;
    hq->head = hq->head-next;
    if(hq->head ==NULL)
    {
        hq->tail = NULL;
    }
    free(p)
    return temp;

}



