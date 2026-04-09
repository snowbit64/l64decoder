// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24704
// Entry Point: 00f24704
// Size: 288 bytes
// Signature: undefined FUN_00f24704(void)


/* WARNING: Removing unreachable block (ram,0x00f24760) */

undefined8
FUN_00f24704(undefined8 param_1,long *param_2,long *param_3,int param_4,long param_5,int param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (((param_4 < 2) && (2 < param_6)) && (*(int *)((long)param_3 + 0xc) == 6)) {
    if ((*(int *)(param_5 + 0xc) != 0) && (lVar2 = *param_3, *(char *)(lVar2 + 4) == '\0')) {
      lVar3 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = lVar3;
      puVar1 = (undefined8 *)FUN_00f1750c(param_1,lVar2,param_5);
      uVar4 = *(undefined8 *)(param_5 + 0x10);
      puVar1[1] = *(undefined8 *)(param_5 + 0x18);
      *puVar1 = uVar4;
      if ((4 < *(int *)(param_5 + 0x1c)) &&
         (((*(byte *)(lVar2 + 1) >> 2 & 1) != 0 &&
          ((*(byte *)(*(long *)(param_5 + 0x10) + 1) & 3) != 0)))) {
        FUN_00f0c9ec(param_1,lVar2);
      }
      return 1;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}


