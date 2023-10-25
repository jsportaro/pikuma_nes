.macro PPU_SETADDR addr
    bit PPU_STATUS      ; Reset latch on PPU_ADDR
    lda #>addr          ; Get high byte and put in PPU_ADDR
    sta PPU_ADDR
    lda #<addr          ; Get low byte and put in PPU_ADDR
    sta PPU_ADDR
.endmacro

.macro PPU_SETDATA val
    lda val
    sta PPU_DATA
.endmacro
