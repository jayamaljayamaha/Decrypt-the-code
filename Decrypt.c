#include <stdio.h>
#include <string.h>

char *getMsg(char *encryptedMsg);
int getKey();
void printDecryptMsg(char *encryptedMsg, int key);

char *getMsg(char *encryptedMsg){
	scanf("%[^\n]s", encryptedMsg);
	return encryptedMsg;
	
	}	
int getKey(){
	int key;
	scanf("%d", &key);
	return key;
	}

void printDecryptMsg(char *encryptedMsg, int key){
	int counter;
	int leangth;
	leangth = strlen(encryptedMsg);
	char decryptedMsg[leangth];
	
	for(counter=0; counter<(leangth); counter++){
		if(encryptedMsg[counter]==126){
			decryptedMsg[counter]=32;
			continue;
			}
		decryptedMsg[counter]=encryptedMsg[counter]-key;
		}
	printf("%s\n", decryptedMsg);
	}
	
	
int main(){
	char *encryptedMsg[20];
	char *msg;
	int key1;
	msg = getMsg(encryptedMsg[20]);
	key1 = getKey();
	printDecryptMsg(msg,key1);
	
	return 0;
	}
		
	
	
	
	


		

	
	


