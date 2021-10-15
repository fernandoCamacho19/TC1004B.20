#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 20

int saldo; 

void * printhola(void *arg){
    printf("hola desde el hilo\n");
    pthread_exit(NULL);
}

int main(){
    pthread_t threads[NUM_THREADS]; 

    for(int i=0; i< NUM_THREADS; i++){
        pthread_create(&threads[i], NULL, printhola, NULL); 
    }
    pthread_exit(NULL); 

    return 0; 
}