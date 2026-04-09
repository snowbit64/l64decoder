// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_safe_execute
// Entry Point: 00daf874
// Size: 200 bytes
// Signature: undefined png_safe_execute(void)


void png_safe_execute(long *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_154;
  __jmp_buf_tag _Stack_148;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(*param_1 + 0x10);
  iVar2 = setjmp(&_Stack_148);
  local_154 = (uint)(iVar2 == 0);
  if (local_154 != 0) {
    *(__jmp_buf_tag **)(*param_1 + 0x10) = &_Stack_148;
    local_154 = (*param_2)(param_3);
  }
  *(undefined8 *)(*param_1 + 0x10) = uVar3;
  if (local_154 == 0) {
    png_image_free(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_154);
}


