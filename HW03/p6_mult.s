.data
		A: 9, 11, 0
.text
main:
		ldi r3, high(A)
		ldi r0, 8
		shl r3, r3, r0
		ldi r0, low(A)
		or r3, r3, r0
		ld r1, r3, 0
		ld r2, r3, 1
		jal mult
		st r0, r3, 2
quit

mult:	
		ldi r0, 0
		ldi r4, 4
		ldi r5, 1
		ldi r7, 1
		br loop
loop:	
		bz r4, finish
		and r6, r5, r2
		bz r6, shift
		add r0, r0, r1
shift:	
		shl r1, r1, r7
		shl r5, r5, r7
		sub r4, r4, r7
		br loop
finish:	
		jr r15
