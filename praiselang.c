#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if (argc == 4)
	{
		// CLI Argument Data Def
		int textLength = atoi(argv[1]);
		char *textArray = (char*)malloc(sizeof(char) * textLength + 1);
		char processType[10];
		strcpy(textArray, (char*)argv[2]);
		strcpy(processType, argv[3]);

		// Upper Characters (Encryption System)
		char aBigENC[] = "chemosh";
		char bBigENC[] = "haborym";
		char cBigENC[] = "mastema";
		char dBigENC[] = "midgard";
		char eBigENC[] = "shaitan";
		char fBigENC[] = "sekhmet";
		char gBigENC[] = "abaddon";
		char hBigENC[] = "alastor";
		char iBigENC[] = "halphas";
		char jBigENC[] = "incubus";
		char kBigENC[] = "gramory";
		char lBigENC[] = "krampus";
		char mBigENC[] = "kukuduh";
		char nBigENC[] = "leviath";
		char oBigENC[] = "malphas";
		char pBigENC[] = "maricha";
		char qBigENC[] = "lucifer";
		char rBigENC[] = "astarte";
		char sBigENC[] = "olelbis";
		char tBigENC[] = "mazdean";
		char uBigENC[] = "apolyon";
		char vBigENC[] = "ahriman";
		char wBigENC[] = "metztli";
		char xBigENC[] = "hiblish";
		char yBigENC[] = "hecates";
		char zBigENC[] = "korpuso";

		// Lower Characters (Encryption System)
		char aENC[] = "abraham";
		char bENC[] = "ishmael";
		char cENC[] = "manahen";
		char dENC[] = "deborah";
		char eENC[] = "gabriel";
		char fENC[] = "ezekiel";
		char gENC[] = "micaiah";
		char hENC[] = "norbert";
		char iENC[] = "richard";
		char jENC[] = "michael";
		char kENC[] = "vincent";
		char lENC[] = "allegra";
		char mENC[] = "tabitha";
		char nENC[] = "roxanne";
		char oENC[] = "bethany";
		char pENC[] = "abigail";
		char qENC[] = "bernice";
		char rENC[] = "juliana";
		char sENC[] = "bridget";
		char tENC[] = "aaliyah";
		char uENC[] = "aayushi";
		char vENC[] = "abishek";
		char wENC[] = "abrasha";
		char xENC[] = "absolom";
		char yENC[] = "adalynn";
		char zENC[] = "aldrich";

		// UI Design
		printf(" ██████╗ ██████╗  █████╗ ██╗███████╗███████╗██╗      █████╗ ███╗   ██╗ ██████╗  \n");
		printf(" ██╔══██╗██╔══██╗██╔══██╗██║██╔════╝██╔════╝██║     ██╔══██╗████╗  ██║██╔════╝  \n");
		printf(" ██████╔╝██████╔╝███████║██║███████╗█████╗  ██║     ███████║██╔██╗ ██║██║  ███╗ \n");
		printf(" ██╔═══╝ ██╔══██╗██╔══██║██║╚════██║██╔══╝  ██║     ██╔══██║██║╚██╗██║██║   ██║ \n");
		printf(" ██║     ██║  ██║██║  ██║██║███████║███████╗███████╗██║  ██║██║ ╚████║╚██████╔╝ \n");
		printf(" ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚══════╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝  \n");

		printf("█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗\n");
		printf("╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝\n\n");
	
		if (strcmp(processType, "Encrypt") == 0)
		{	
			printf("Encrypted Text --> ");	
			for(int i = 0; i < textLength; i++)
			{
				char analysisCharacter = *textArray;
				
				switch (analysisCharacter)
				{
					case 'a':
						printf("%s", aENC);
						break;
					case 'b':
						printf("%s", bENC);
						break;
					case 'c':
						printf("%s", cENC);
						break;
					case 'd':
						printf("%s", dENC);
						break;
					default:
						printf("########");
						break;
				}	
				
				textArray++;		
			}
			printf("\n");
		}
		else if (strcmp(processType, "Decrypt") == 0)
		{
		
		}
	}
	else 
	{
		printf("|----------------------------|\n");
		printf("| Please Enter CLI Arguments |\n");
		printf("|----------------------------|\n");
	}

}
