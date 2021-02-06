.MODEL SMALL
.STACK 100H
.DATA


MSG1 DB "Enter a HEX Digit: $"
MSG2   DB "In Decimal it is: $"

VAR DB ?


.CODE

MAIN PROC
    
    MOV AX,@DATA
    MOV DS,AX
    
    LEA DX,MSG1 
    MOV AH,9     ;1ST MESSAGE
    INT 21H
    
    
    MOV AH,1     ;ACTIVATE KEYBOARD
    INT 21H     
                                   
                                   
    MOV VAR,AL  ; STORE THE VALUE TO VAR
     
    
    MOV AH,2
    MOV DL,0AH
    INT 21H      ; { New Line }
    MOV DL,0DH
    INT 21H           
    
    
    LEA DX,MSG2
    MOV AH,9      ;PRINTING FINAL MESSAGE
    INT 21H   
    
    
    

    
    MOV AH,2
    MOV DL,49d   ;PRINTING 1 FIRST 
    INT 21H      
    
    
            
    
    
    MOV AH,2 
    SUB VAR,17   ; AS -17 IS THE DESIRED 2ND DECIMAL VALUE 
    
    MOV DL,VAR   ; STORING 2ND FINAL VALUE TO DISPLAY
    INT 21H      
    
    
    
    
    
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN