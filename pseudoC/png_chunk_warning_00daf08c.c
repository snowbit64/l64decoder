// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_chunk_warning
// Entry Point: 00daf08c
// Size: 152 bytes
// Signature: undefined png_chunk_warning(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_chunk_warning(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined auStack_100 [216];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    fprintf(_stderr,"libpng warning: %s",param_2);
    uVar2 = fputc(10,_stderr);
    uVar3 = (ulong)uVar2;
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00daf120;
  }
  else {
    FUN_00daf198(*(undefined4 *)(param_1 + 0x250),auStack_100);
    uVar3 = png_warning(param_1,auStack_100);
    if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_00daf120:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
  }
  return;
}


