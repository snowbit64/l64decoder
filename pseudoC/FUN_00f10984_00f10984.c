// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f10984
// Entry Point: 00f10984
// Size: 208 bytes
// Signature: undefined FUN_00f10984(void)


void FUN_00f10984(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x260);
  do {
    do {
      lVar3 = lVar5;
      if (lVar3 == 0) {
        return;
      }
      uVar2 = (ulong)*(int *)(lVar3 + 0x28);
      iVar7 = 0;
      if (uVar2 != 0) {
        iVar7 = (int)(((long)*(int *)(lVar3 + 0x20) - 0x38U) / uVar2);
      }
      lVar5 = *(long *)(lVar3 + 0x18);
      lVar6 = lVar3 + 0x38 + uVar2 * (long)iVar7;
    } while (lVar3 + 0x38 + (long)*(int *)(lVar3 + 0x30) + uVar2 == lVar6);
    iVar7 = *(int *)(lVar3 + 0x34);
    lVar1 = (long)*(int *)(lVar3 + 0x30) + 0x38;
    lVar8 = lVar3 + uVar2;
    do {
      if (((*(char *)(lVar8 + lVar1) != '\0') &&
          (uVar4 = (*param_3)(param_2,lVar3,lVar8 + lVar1), (uVar4 & 1) != 0)) &&
         (iVar7 = iVar7 + -1, iVar7 == 0)) break;
      lVar8 = lVar8 + uVar2;
    } while (lVar8 + lVar1 != lVar6);
  } while( true );
}


