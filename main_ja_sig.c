#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    //signalointi
    void sig_handler(int signo) {
        if (signo == SIGUSR1) {
          //lyhyt
        }
        else if (signo == SIGUSR2) {
          //pitka
        }
        else if (signo == SIGUSR3) {
          //vali
        }
        else if (signo == SIGUSR4) {
          //rivinvaihto
        }
        else {
          //joku muu
        }
    }
    
    //dekoodaustaulu tahan
    
    //bufferi tahan?
    
    //forkkaus
    
    int var_glb; /* A global variable*/
    
    pid_t childPID;
    int var_lcl = 0;

    child = fork();

    if(child >= 0) // onnistui
    {
        if(child == 0) // childprosessi
        {
            //taalta signaalit parentille
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
               case 'w':
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
                  
               case '7':
                  //signaloi morse
                  break; /* optional */
                  
               case '8':
                  //signaloi morse
                  break; /* optional */
                  
               case '9':
                  //signaloi morse
                  break; /* optional */
                  
               case '0':
                  //signaloi morse
                  break; /* optional */
                  
               case ' ':
                  //signaloi morse
                  break; /* optional */
                  
               default: /* Optional */
                printf("Mita sviduu Hessu?\n");
            }
              //signaloi parentille
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
    else // Eipa onnistu
    {
        printf("\nEipa onnistu\n");
        return 1;
    }

    return 0;
    
}
