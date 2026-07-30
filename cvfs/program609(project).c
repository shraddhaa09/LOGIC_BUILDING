#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////
//                                                           
//                                                           
//          User defined Macors                              
//                                                           
//                                                          
///////////////////////////////////////////////////////////////

#define MAXFILESIZE 50
#define MAXOPENFILES 10

#define READ 1
#define WRITE 2
#define EXCEUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXCUTE_SUCCESS 0

#define REGULARFILE 1
#define SPECIALFILE 2

////////////////////////////////////////////////////////////////
//                                                           
//                                                           
//          User defined Macors                              
//                                                           
//                                                          
///////////////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -1

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4

#define ERR_PREMISSION_DENIDED -5

#define ERR_INSUFFICICENT

////////////////////////////////////////////////////////////////
//                                                            
//                                                            
//          ENTERY POINT FUNCTION OF THE CVFS PROJECT                            
//                                                            
//                                                           
///////////////////////////////////////////////////////////////

int main(){

    return 0;
}