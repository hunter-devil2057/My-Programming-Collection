
;<Program to do 8 bit subtraction>
MVI A, 10H
STA 3001H
MOV B, A
MVI A, 15H
STA 3000H
LDA 3000H
SUB B
STA 3002H
JC GO
MVI A, 00H
STA 3003H
HLT

GO: MVI A, 01H
STA 3003H
HLT
