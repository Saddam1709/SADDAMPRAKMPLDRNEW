.global LDR_DigitalRead
LDR_DigitalRead:
    in r24, 0x03 ; Read the PINB register (digital pins 8-13 are in PORTB)
    sbrs r24, 0 ; Check Bit 0 (Digital Pin 8)
    rjmp LDR_Low
    ldi r24, 1 ; Light detected (HIGH)
    ret
LDR_Low:
    ldi r24, 0 ; No light detected (LOW)
    ret

.global LDR2_DigitalRead
LDR2_DigitalRead:
    in r24, 0x03 ; Read the PINB register
    sbrs r24, 1 ; Check Bit 1 (Digital Pin 9)
    rjmp LDR2_Low
    ldi r24, 1 ; Light detected (HIGH)
    ret
LDR2_Low:
    ldi r24, 0 ; No light detected (LOW)
    ret