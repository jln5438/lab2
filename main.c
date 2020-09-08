#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
//Author: Jacob Noethiger jln5438@psu.edu
//Collaborator: Travis Navarro trn5106@psu.edu
//Collaborator: Minsoo Joo mbj5335@psu.edu
//Collaborator: Shravani Samala sjs7049@psu.edu
//Section: 2
//Breakout: 4
int main(void){
  double grade = atof(readline("Enter your CMPSC 131 grade: "));
  if(grade>=93.0){
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if(grade>=90){
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if(grade>=87){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if(grade>=83){
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if(grade>=80){
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if(grade>=77){
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if(grade>=70){
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if(grade>=60){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else{
    printf("Your letter grade for CMPSC 131 is F.\n");
  }

}