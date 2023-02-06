.text
		ldi r0, 0
		ldi r1, 5
		ldi r2, 13
		br mult
mult:	ldi r4, 4
		ldi r5, 1
		ldi r7, 1
		br loop
loop:	bz r4, finish
		and r6, r5, r2
		bz r6, shift
		add r0, r0, r1
shift:	shl r1, r1, r7
		shl r5, r5, r7
		sub r4, r4, r7
		br loop
finish:	quit
