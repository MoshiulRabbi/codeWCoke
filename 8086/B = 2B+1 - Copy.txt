.model small
.data


SUM DB ?

MSG1 DB "Enter B : $"    ;PRoBLEM :-  B=2B+1
MSG2 DB "B :  $"

.CODE

MAIN PROC
    MOV AX,@DATA    ;Importing data
    MOV DS,AX     
    
    
    
    LEA DX,MSG1 ;SHOW MSG1 to enter number
    MOV AH,9
    INT 21H
    
        
    
    MOV AH,1     ;ACTIVATE KEYBOARD
    INT 21H 
                   
                   
                 ;AL resister NoW HoLDING USER INPUT VALUE
       
    
    
    
    
    MOV BH,2 
    
    MUL BH   ; MUL ALWAYS WoRKS WITH AL register
    
    ADD AL,1
    
    SUB AL,48
    
    MOV SUM,AL
    
     
    MOV AH,2      ;Activate Display
    MOV DL,10     ;Next Line
    INT 21h 
    MOV DL,13     ; START FROM  BEGINING LINE
    INT 21H

      
    
    LEA DX,MSG2
    MOV AH,9         
    INT 21H
    
    MOV AH,2  ;Activate Display
    MOV DL,SUM  ;Store the Result to DISPLAY
    INT 21h
    

    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN  
    
           
