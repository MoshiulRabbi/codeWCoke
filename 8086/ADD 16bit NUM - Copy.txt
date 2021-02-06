
.data

A DB ?
B DB ?

MSG1 DB "Enter Number 1: $"
MSG2 DB "Enter Number 2: $"  
MSG3 DB "SUM IS: $"

.CODE

MAIN PROC   
    
    MOV AX,@DATA
    MOV DS,AX     
    
    
    LEA DX,MSG1   ;Show Mes1
    MOV AH,9
    INT 21H       
    
    
    
    MOV AH,1      ;Activate Key
    INT 21h
    MOV A,AL      ;Store V To A  
    
    
    
    
    MOV AH,2      ;Activate Display
    MOV DL,10     ;Next Line
    INT 21h
    MOV DL,13     ; START FROM  BEGINING LINE
    INT 21H
    
    
    
    
    LEA DX,MSG2
    MOV AH,9      ;Show Msg 2
    INT 21h
    
    
    MOV AH,1 
    INT 21h
    MOV B,AL      ;Store V to B     
    
    
    
    
    MOV BH,A     ;Store A to BH
    ADD BH,B     ;ADD 
    SUB BH,48    ;SUB       
    
    
    MOV AH,2      ;Activate Display
    MOV DL,10     ;Next Line
    INT 21h 
    MOV DL,13     ; START FROM  BEGINING LINE
    INT 21H
    
    
    
    
       
    
    LEA DX,MSG3  
    MOV AH,9      ;Show Msg 2
    INT 21H
                  
                  
                  
                  
    MOV AH,2  ;Activate Display
    MOV DL,BH  ;Store the Result to DISPLAY
    INT 21h
    

    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN  