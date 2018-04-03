

	.file	"testComplex.txt"
	.text

 	.globl	_fonct1
	.type	_fonct1, @function
fonct1:
	push	%rbp
	mov	%rsp,%rbp
	sub	$0x2d,%rsp

B3_STARTED_BLOCK:
    movl  -0x1d(%rbp), %eax
    movl  -0x1d(%rbp), %edx
	add %eax, %edx
    movl  %eax, -0x29(%rbp)
    movl  -0x29(%rbp), %eax
	jne	.B8_blockEndIf
	jmp	.B7_blockThen
B7_blockThen:
    movl  -0x1d(%rbp), %eax
    movl  -0x1d(%rbp), %edx
	add %eax, %edx
    movl  %eax, -0x2d(%rbp)
    movl  -0x2d(%rbp), %eax
	jmp	.B8_blockEndIf
B8_blockEndIf:
	jmp	.BLOCK_END

.BLOCK_END:
	leaveq
	ret
	.size	fonct1, .-fonct1


 	.globl	_fonct2
	.type	_fonct2, @function
fonct2:
	push	%rbp
	mov	%rsp,%rbp
	sub	$0x19,%rsp

B4_STARTED_BLOCK:
	jmp	.BLOCK_END

.BLOCK_END:
	leaveq
	ret
	.size	fonct2, .-fonct2


 	.globl	_fonct3
	.type	_fonct3, @function
fonct3:
	push	%rbp
	mov	%rsp,%rbp
	sub	$0x4,%rsp

B5_STARTED_BLOCK:
	jmp	.BLOCK_END

.BLOCK_END:
	leaveq
	ret
	.size	fonct3, .-fonct3


 	.globl	_main
	.type	_main, @function
main:
	push	%rbp
	mov	%rsp,%rbp
	sub	$0x33,%rsp

B6_STARTED_BLOCK:
    movl  $12, -0x10(%rbp)
    movl  $32, -0x14(%rbp)
    movb  $53, -0x15(%rbp)
    movl  $12, -0x19(%rbp)
    movl  -0x8(%rbp), %eax
    push    %rax
    movl  -0xc(%rbp), %eax
    push    %rax
    push    %rax
    movzbl  -0x15(%rbp), %eax
    push    %rax
    movl  -0x14(%rbp), %eax
    push    %rax
    movl  -0x10(%rbp), %eax
    push    %rax
    sub     $0x8,%rsp
    call    tmp_25
    add     $0x38,%rsp
    movl  $1, -0x1d(%rbp)
    movl  $2, -0x21(%rbp)
    movl  -0x1d(%rbp), %eax
    movl  -0x21(%rbp), %edx
	UNKNOW %eax, %edx
    movl  %eax, -0x25(%rbp)
	jne	.B11_blockElse
	jmp	.B9_blockThen
B9_blockThen:
    movb  $86, -0x26(%rbp)
    push    %rax
    sub     $0x8,%rsp
    call    tmp_38
    add     $0x10,%rsp
    movb  $70, -0x27(%rbp)
    push    %rax
    sub     $0x8,%rsp
    call    tmp_39
    add     $0x10,%rsp
	jmp	.B10_blockEndIf
B10_blockEndIf:
    movl  $64, -0x2b(%rbp)
    movl  -0x2b(%rbp), %eax
    push    %rax
    sub     $0x8,%rsp
    call    tmp_47
    add     $0x10,%rsp
	jmp	.BLOCK_END
B11_blockElse:
	jmp	.B10_blockEndIf

.BLOCK_END:
	leaveq
	ret
	.size	main, .-main


