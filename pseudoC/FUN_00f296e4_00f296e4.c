// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f296e4
// Entry Point: 00f296e4
// Size: 252 bytes
// Signature: undefined FUN_00f296e4(void)


long FUN_00f296e4(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *param_2;
  switch(uVar1) {
  case 0:
    lVar2 = FUN_00f29ec0(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
    return lVar2;
  default:
    if (0x1c < uVar1) {
      fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getRegister","unsupported arm64 register");
      fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar3 = (long *)(param_3 + (ulong)uVar1 * 8);
    break;
  case 0x1d:
    plVar3 = (long *)(param_3 + 0xe8);
    break;
  case 0x1e:
    plVar3 = (long *)(param_3 + 0xf0);
    break;
  case 0x22:
    plVar3 = (long *)(param_3 + 0x108);
    break;
  case 0xfffffffe:
  case 0x1f:
    plVar3 = (long *)(param_3 + 0xf8);
    break;
  case 0xffffffff:
  case 0x20:
    plVar3 = (long *)(param_3 + 0x100);
  }
  return *plVar3 + (long)(int)param_2[1];
}


