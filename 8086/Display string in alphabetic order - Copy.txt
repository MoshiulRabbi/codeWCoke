.MODEL SMALL
.STACK 100H

.CODE
MAIN PROC
 
    MOV AH,2     
    MOV DL,3FH   ;print "?"
    INT 21H
 
    MOV AH,1
    INT 21H
    MOV BL,AL   ;get userinput 1
    INT 21H
    MOV BH,AL   ;2
 
    MOV AH,2
    MOV DL,0AH
    INT 21H       ;next line
    MOV DL,0DH
    INT 21H
        
        
        
    CMP BL,BH     ;Compare
    JGE PRINT_1   ;if bl is greater than printbh first in print1
     
     
     
    PRINT-2:
    MOV AH,2      ;Else print Bl first
    MOV DL,BL
    INT 21H
 
    MOV DL,BH
    INT 21H
    JMP END_     ;end jump function
 
    PRINT_1:
    MOV AH,2
    MOV DL,BH
    INT 21H
    MOV DL,BL
    INT 21H
 
    END_:       ;end jump function
 
    MOV AH,4CH
    INT 21H
 
    MAIN ENDP
END MAIN