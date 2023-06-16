#include <stdio.h>

int main() {
    int score;
    
    printf("ENTER THE SCORES: ");
    scanf("%d", &score);
    
    if (score >= 90 && score <= 100)
     {
        printf("GRADE A\n");
    } else if (score >= 75 && score <= 89)
     {
        printf("GRADE B\n");
    } else if (score >= 60 && score <= 74)
    
     {
        printf("GRADE C\n");
    } else if (score >= 50 && score <= 59)
     {
        printf("GRADE D\n");
    } else if (score >= 0 && score <= 49)
     {
        printf("GRADE F\n");
    } else {
        printf("INVALID SCORE.\n");
    }
    
    return 0;
}