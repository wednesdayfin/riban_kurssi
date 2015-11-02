#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>

/*static void sig_usr(int signo){
  if(signo == SIGINT){
  char buf[] = "SIGINT signal caught!!\n";
  int wr = strlen(buf);
  write(STDOUT_FILENO, buf, wr);
}
  return;
}*/

int main(void)
{
    //signalointi
    /*
    pid_t pid, ppid;
    ppid = getpid();
    struct sigaction sig;
    sigemptyset(&sig.sa_mask);
    sig.sa_flags = 0;
    sig.sa_handler = sig_usr;
    if(sigaction(SIGINT,&sig,NULL) == 0)
                printf("Signal processed OKay ");
    sleep(10);
    printf("%d ", ppid);
    if((pid = fork()) == 0)
    { //Child    
        kill(ppid, SIGINT);
    }
    */
    
    //dekoodaustaulu tahan
    
    //bufferi tahan?
    
    //forkkaus
    
    int var_glb; /* A global variable*/
    
    pid_t childPID;
    int var_lcl = 0;

    loli = fork();

    if(loli >= 0) // onnistui
    {
        if(loli == 0) // loliprosessi
        {
            //taalta signaalit pedolle
            FILE* filu1;
            filu1 = fopen(luku, "r");
            int merk;
            while((merk = fgetc(filu1)) != EOF) {
              switch(merk) {

               case 'A':
               case 'a':
                  //signaloi morse .-
                  break; /* optional */
            	
               case 'B':
               case 'b':
                  //signaloi morse
                  break; /* optional */
            
               case 'C':
               case 'c':
                  //signaloi morse .-
                  break; /* optional */
            	
               case 'D':
               case 'd':
                  //signaloi morse
                  break; /* optional */
                  
               case 'E':
               case 'e':
                  //signaloi morse .-
                  break; /* optional */
            	
               case 'F':
               case 'f':
                  //signaloi morse
                  break; /* optional */
                  
               case 'G':
               case 'g':
                  //signaloi morse .-
                  break; /* optional */
            	
               case 'H':
               case 'h':
                  //signaloi morse
                  break; /* optional */
                  
               case 'I':
               case 'i':
                  //signaloi morse .-
                  break; /* optional */
            	
               case 'J':
               case 'j':
                  //signaloi morse
                  break; /* optional */
                  
               case 'K':
               case 'k':
                  //signaloi morse .-
                  break; /* optional */
            	
               case 'L':
               case 'l':
                  //signaloi morse
                  break; /* optional */
                  
               case 'M':
               case 'm':
                  //signaloi morse .-
                  break; /* optional */
            	
               case 'N':
               case 'n':
                  //signaloi morse
                  break; /* optional */
                  
               case 'O':
               case 'o':
                  //signaloi morse .-
                  break; /* optional */
            	
               case 'P':
               case 'p':
                  //signaloi morse
                  break; /* optional */
                  
               case 'Q':
               case 'q':
                  //signaloi morse .-
                  break; /* optional */
            	
               case 'R':
               case 'r':
                  //signaloi morse
                  break; /* optional */
                  
               case 'S':
               case 's':
                  //signaloi morse .-
                  break; /* optional */
            	
               case 'T':
               case 't':
                  //signaloi morse
                  break; /* optional */
                  
               case 'U':
               case 'u':
                  //signaloi morse .-
                  break; /* optional */
            	
               case 'V':
               case 'v':
                  //signaloi morse
                  break; /* optional */
                  
               case 'W':
               case 'v':
                  //signaloi morse .-
                  break; /* optional */
            	
               case 'X':
               case 'x':
                  //signaloi morse
                  break; /* optional */
                  
               case 'Y':
               case 'y':
                  //signaloi morse .-
                  break; /* optional */
            	
               case 'Z':
               case 'z':
                  //signaloi morse
                  break; /* optional */
                  
               case '1':
                  //signaloi morse .-
                  break; /* optional */
            	
               case '2':
                  //signaloi morse
                  break; /* optional */
                  
               case '3':
                  //signaloi morse .-
                  break; /* optional */
            	
               case '4':
                  //signaloi morse
                  break; /* optional */
                  
               case '5':
                  //signaloi morse .-
                  break; /* optional */
            	
               case '6':
                  //signaloi morse
                  break; /* optional */
                  
               
               default: /* Optional */
                printf("Mita vittua Hessu?\n");
            }
              //signaloi pedolle
            }
            fclose(filu1);
        }
        else // pedoprosessi
        {
            //taalla kuunnellaan signaaleja, etsitään merkki ja kirjoitetaan filuun
            FILE* filu2;
            filu2 = fopen(kirj, "w");
            //kuunnellaan signaali
            //etsitään merkki taulukosta
            //kirjoitetaan merkki tiedostoon
            fclose(filu2);
        }
    }
    else // fork failed
    {
        printf("\n Fork failed, quitting!!!!!!\n");
        return 1;
    }

    return 0;
    
}
