// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_sCAL_s
// Entry Point: 00dcaeb0
// Size: 244 bytes
// Signature: undefined png_write_sCAL_s(void)


void png_write_sCAL_s(undefined8 param_1,undefined param_2,char *param_3,char *param_4)

{
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  size_t __n;
  undefined local_a8 [2];
  undefined auStack_a6 [62];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  sVar3 = strlen(param_3);
  __n = strlen(param_4);
  uVar1 = sVar3 + __n + 2;
  if (uVar1 < 0x41) {
    local_a8[0] = param_2;
    __memcpy_chk((ulong)local_a8 | 1,param_3,sVar3 + 1,0x3f);
    memcpy(auStack_a6 + sVar3,param_4,__n);
    FUN_00dc8238(param_1,0x7343414c,local_a8,uVar1);
  }
  else {
    png_warning(param_1,"Can\'t write sCAL (buffer too small)");
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


