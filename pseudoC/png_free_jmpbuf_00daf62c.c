// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_free_jmpbuf
// Entry Point: 00daf62c
// Size: 168 bytes
// Signature: undefined png_free_jmpbuf(void)


void png_free_jmpbuf(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  __jmp_buf_tag _Stack_148;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x108);
    if (((lVar3 != 0) && (*(long *)(param_1 + 0x110) != 0)) && (lVar3 != param_1)) {
      iVar2 = setjmp(&_Stack_148);
      if (iVar2 == 0) {
        *(__jmp_buf_tag **)(param_1 + 0x108) = &_Stack_148;
        *(undefined8 *)(param_1 + 0x110) = 0;
        *(code **)(param_1 + 0x100) = longjmp;
        png_free(param_1,lVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


