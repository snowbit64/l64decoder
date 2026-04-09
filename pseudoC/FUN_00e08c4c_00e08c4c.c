// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e08c4c
// Entry Point: 00e08c4c
// Size: 356 bytes
// Signature: undefined FUN_00e08c4c(void)


undefined8 FUN_00e08c4c(int *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0xc);
  if (plVar5 == (long *)0x0) {
    return 0xffffff7f;
  }
  iVar1 = oggpack_read(param_2,0x20);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    return 0xffffff7a;
  }
  iVar1 = oggpack_read(param_2,8);
  param_1[1] = iVar1;
  uVar3 = oggpack_read(param_2,0x20);
  *(undefined8 *)(param_1 + 2) = uVar3;
  iVar1 = oggpack_read(param_2,0x20);
  *(long *)(param_1 + 4) = (long)iVar1;
  iVar1 = oggpack_read(param_2,0x20);
  *(long *)(param_1 + 6) = (long)iVar1;
  iVar1 = oggpack_read(param_2,0x20);
  *(long *)(param_1 + 8) = (long)iVar1;
  uVar2 = oggpack_read(param_2,4);
  *plVar5 = (long)(1 << (ulong)(uVar2 & 0x1f));
  uVar2 = oggpack_read(param_2,4);
  iVar1 = 1 << (ulong)(uVar2 & 0x1f);
  plVar5[1] = (long)iVar1;
  if ((((0 < *(long *)(param_1 + 2)) && (0 < param_1[1])) && (0x3f < *plVar5)) &&
     (((*plVar5 <= (long)iVar1 && (iVar1 < 0x2001)) && (lVar4 = oggpack_read(param_2,1), lVar4 == 1)
      ))) {
    return 0;
  }
  vorbis_info_clear(param_1);
  return 0xffffff7b;
}


