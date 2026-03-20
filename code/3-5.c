#include <stdarg.h>
#include <stdio.h>

void my_sum(char typ, int count, ...){
    va_list ap;
    va_start(ap, count);
    if(typ == 'S'){
        for(int i=0; i<count; i++){
            if (i == count - 1) {
                printf("%s\n", va_arg(ap,char*));
                break;
            }
            printf("%s ", va_arg(ap, char*));
            
        }
    }
    else if(typ == 'C'){
        for(int i=0; i<count; i++){
            printf("%c", va_arg(ap, int));
        }
        printf("\n");
    }
    else if(typ == 'D'){
        int sum =0; 
        for(int i=0; i<count; i++){
           sum += va_arg(ap,int);
        }
        printf("%d", sum);
    }
    va_end(ap);
    return ;


}


int main(void){
    my_sum('S', 2, "Hello", "World");
    
    my_sum('C', 3, 'C', 'N', 'U');
  
    my_sum('D', 4, 10, 20, 30, 40);
    return 0;
}
