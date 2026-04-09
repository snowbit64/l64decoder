// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_fopen
// Entry Point: 00e1dda4
// Size: 188 bytes
// Signature: undefined ov_fopen(void)


ulong ov_fopen(char *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  FILE *__stream;
  ulong uVar3;
  ulong uVar4;
  code *local_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __stream = fopen(param_1,"rb");
  if (__stream == (FILE *)0x0) {
    uVar3 = 0;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return 0xffffffff;
    }
    goto LAB_00e1de5c;
  }
  pcStack_58 = FUN_00e1dd94;
  local_60 = fread;
  pcStack_48 = ftell;
  pcStack_50 = fclose;
  uVar2 = FUN_00e1d970(__stream,param_2,0,0,&local_60);
  uVar4 = (ulong)uVar2;
  if (uVar2 == 0) {
    uVar3 = FUN_00e1db58(param_2);
    uVar4 = uVar3 & 0xffffffff;
    if ((int)uVar3 != 0) goto LAB_00e1de18;
  }
  else {
LAB_00e1de18:
    uVar2 = fclose(__stream);
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00e1de5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


