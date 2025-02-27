#include <stdio.h>
#include <ctype.h>
int main(void) {
    int c, o = 0, p = 0, b = 0, q = 0, r = 0, s = 0;
   while ((c = getchar()) != '@') {

        if (isspace(c)) {

            continue;

        }

        if (c == '(') {

            o++;

        } else if (c == ')') {

            p++;

        } else if (c == '[') {

            q++;

        } else if (c == ']') {

            r++;

        } else if (c == '{') {

            b++;

        } else if (c == '}') {

            s++;

        }

    }



    if (o == p && q == r && b == s) {

        printf("NULL\n");

    } else if(b != s) {

            printf("{}");
            if(q!=r)
            printf("[]");
            if(o!=p)
            printf("()");
            
            } else if(q != r) {
            if (b != s) 

                printf("{}");
            
            if (q!=r)
            printf("[]");
            if(o!=p)
            printf("()");

            }
            else if (o != p) {
                if(b!=s)
                printf("{}");
                if(q!=r)
                printf("[]");
            printf("()");
            
            }
            }
        
    


