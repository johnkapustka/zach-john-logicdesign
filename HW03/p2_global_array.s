 // int A[4] = {0xabc0, 0xabc1, 0xabc2, 0xabc3};

 // int main()
 // {
 //     int* r1_A_ptr = A;
 //     int  r2_i = 2;                  
 //     int* r3_Ai_ptr = r1_A_ptr + r2_i;
 //     int  r4_d = *r3_Ai_ptr;
 // }
.data
A: 0xabc0, 0xabc1, 0xabc2, 0xabc3

.text
main:

ldi r1, high(A)
ldi r0, 8
shl r1, r1, r0
ldi r0, low(A)
or r1, r1, r0
ldi r2, 2
add r3, r1, r2
ld r4, r3, 0
quit
