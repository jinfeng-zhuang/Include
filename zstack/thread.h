#ifndef ZSTACK_IPC_H
#define ZSTACK_IPC_H

typedef unsigned int sem_t;

extern int thread_create(int (*thread_entry)(void*), void* args);

extern unsigned int mutex_create(void);
extern void         mutex_lock(unsigned int mutex);
extern void         mutex_unlock(unsigned int mutex);

extern sem_t sem_create(int count);
extern int sem_wait(sem_t sem, unsigned int ms);
extern int sem_post(sem_t sem);

#endif
