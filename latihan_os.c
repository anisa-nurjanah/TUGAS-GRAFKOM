//BAB 1
#include <stdio.h>
#include <stdlib.h>
int main(){
    system ("ps --forest");
    //system ("hostname|rev") menjalankan multi perintah
    //system ("cal 12 2019") buat calendar
    //exelcp("cal","cal","12","2019",NULL) buat calendar pake exelcp

    //contoh execvp
    //puts("Running Command");
    //char *args[] = {"ps","--forest","NULL"};
    //execvp (args[0],args);
    puts ("Done");
    return 0;
}

//BAB 2
//FORK
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
    pid_t pid;
    char *msg;
    int n;
    pid = fork();

    if (pid==0){
        //puts ("children");
        msg = "children";
        n=4;
    }
    else {
        //puts("parents");
        msg = "parents";
        n=5;
    }

    while (n--){
        puts (msg);
        sleep(1);
    }

    //if(pid>0) {wait(NULL);}
 return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
    int n=9;
    pid_t pid;
    char *msg;

    for(int i=0;i<n;i++){
        pid=fork();
        msg = "children";
        if (pid==0){
            puts (msg);
            sleep(1);
            return 0;
        }
        if (pid>0){wait (NULL);}

    }
    return 0;
}

//BAB 4 SIGNAL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

void foo(int sig){
    printf ("i got signal %d\n",sig);
    //klik ctrl+c 2x kalo mau stop
    signal(SIGINT,SIG_DFL);

}
int main(){
    signal (SIGINT,foo);
    while(1){
        puts("hello");
        sleep(1);
    }
    return 0;
}

//KILL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main(){
    pid_t child=fork();
    if(child==0){
        while(1){
        puts("child");
        sleep(1);
        }
    }
    else{
        sleep(4);
        kill(child,SIGSTOP);//BUAT STOP 4 DETIK
        sleep(3);
        kill(child,SIGCONT);//LANJUT 3 DETIK
        sleep(2);
        kill(child,SIGTERM);//MATI SETELAH 2 DETIK
    }
    return 0;
}

//PAUSE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

void ding(int sig){
    puts("ding!");
}
int main(){
if (fork()==0){
    sleep(5);
    kill(getppid(),SIGALRM);
}
else{
    signal(SIGALRM,ding);
    puts("waiting...");
    pause();
}
return 0;
}

//BAB 5 THREAD
#include <stdio.h>
#include <pthread.h>
void *hello(void *args){
    puts("hello");
    pthread_exit(NULL);
}
int main(){
    pthread_t t1,t2;
    //kalo multi t[N];
    pthread_create (&t1,NULL,hello,NULL);
    pthread_create (&t2,NULL,hello,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    //for(int i=0;i<N;i++){
        //pthread_create{&t[i],NULL,hello,NULL}}
    //for(int i=0li<N;i++){
        //pthread_join(t[i),NULL);}

    return 0;
}

//THREAD SUM
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#define N 16
#define SIZE 4

int sum =0;
void *array_sum(void *args){
    int *x = (int*)args;
    for (int i=0;i<N/SIZE;i++){
        sum+=x[i];
    }
pthread_exit (NULL);

}
int main(){
    pthread_t t[SIZE];
    int A[N]={68,34,64,95,35,78,65,93,51,67, 7,77, 4,73,52,91};
    for (int i=0;i<SIZE;i++){
        pthread_create(&t[i],NULL,array_sum,&A[i*N/SIZE]);
    }
    for(int i=0;i<SIZE;i++){
        pthread_join(t[i],NULL);
    }
    printf("%d\n",sum);
    return 0;
}

//BAB 6 MUTEX
#include <stdio.h>
#include <pthread.h>
#define N 1000000
#define T 4
int count = 0;
void *counting(void *arg)
    { //fungsi yg bakal inc sampe N/T
    	int i;
    	for (i = 0; i < N/T; i++)
    	count++; // critical section
    	pthread_exit(NULL);
    }
int main()
    {
    	pthread_t t[T];
    	int i;
    	for (i = 0; i < T; i++)//create thread
        pthread_create(&t[i], NULL, counting, NULL);
    	for (i = 0; i < T; i++)
        pthread_join(t[i], NULL);
    	printf("%d\n", count); // 1000000
    	return 0;
}


//MUTEX LOCK
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define N 100000
#define T 4

int sum = 0;
pthread_mutex_t mutex;
void *array_sum(void *arg)
{
    int *A = (int*)arg;         // cast void* --> int*
    int i;

    for (i = 0; i < N/T; i++){
		pthread_mutex_lock(&mutex);
        sum += A[i];
        pthread_mutex_unlock(&mutex);
	}

    pthread_exit(NULL);
}



int main()
{
    pthread_t t[T];
    int A[N], i;

	pthread_mutex_init(&mutex, NULL);

    for (i = 0; i < N; i++)
        A[i] = rand()%10;

    for (i = 0; i < T; i++)
        pthread_create(&t[i], NULL, array_sum, &A[i*N/T]);

    for (i = 0; i < T; i++)
        pthread_join(t[i], NULL);

    printf("%d\n", sum);    // 448706
    return 0;
}




