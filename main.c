#include <stdio.h>
#include "lexer.h"
#include "types.h"

int main(int argc, char *argv[])
{
    if (initializeLexer(argv[1]) == e_success)
    {
        Token token;
        while (1)
        {
            token = getNextToken();
            // printf("Hi\n");

            if (token.type == END_OF_FILE)
            {
                break;
            }
            if (token.lexeme[0] != '\0')
            {
                printf("Token: %-20s       Type: %s\n", token.lexeme,tokenTypeToString(&token));
            }
            
            // for (int i=0; i<100; i++)               // Printing Charcter by character
            // {
            //     printf("%c",token.lexeme[i]);
            // }
            // printf("\n\n");

        }
        return 1;
    }
    return 0;
}
