// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7b7dc
// Entry Point: 00d7b7dc
// Size: 360 bytes
// Signature: undefined FUN_00d7b7dc(void)


ulong FUN_00d7b7dc(long param_1,ulong param_2,ulong param_3,long param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((int)param_3 < (int)param_5) {
    cVar3 = FUN_00d7b638(param_1,param_2,param_3,param_5);
    if (cVar3 == '\0') {
      return 0xffffffff;
    }
    param_2 = *(ulong *)(param_1 + 0x10);
    param_3 = (ulong)*(uint *)(param_1 + 0x18);
  }
  uVar2 = (int)param_3 - param_5;
  uVar6 = (ulong)uVar2;
  lVar8 = (long)(int)param_5;
  uVar7 = (ulong)(int)(*(uint *)(&DAT_00548b04 + (ulong)param_5 * 4) &
                      (uint)((long)param_2 >> (uVar6 & 0x3f)));
  if (*(long *)(param_4 + (long)(int)param_5 * 8) < (long)uVar7) {
    do {
      iVar5 = (int)uVar6;
      if (iVar5 < 1) {
        cVar3 = FUN_00d7b638(param_1,param_2,uVar6,1);
        if (cVar3 == '\0') {
          return 0xffffffff;
        }
        param_2 = *(ulong *)(param_1 + 0x10);
        iVar5 = *(int *)(param_1 + 0x18);
      }
      uVar6 = (ulong)(iVar5 - 1U);
      lVar1 = lVar8 * 8;
      lVar8 = lVar8 + 1;
      uVar7 = param_2 >> (uVar6 & 0x3f) & 1 | uVar7 << 1;
    } while (*(long *)(param_4 + 8 + lVar1) < (long)uVar7);
    *(ulong *)(param_1 + 0x10) = param_2;
    *(uint *)(param_1 + 0x18) = iVar5 - 1U;
    if (0x10 < (int)lVar8) {
LAB_00d7b8b8:
      plVar4 = *(long **)(param_1 + 0x20);
      lVar8 = *plVar4;
      *(undefined4 *)(lVar8 + 0x28) = 0x79;
      (**(code **)(lVar8 + 8))(plVar4,0xffffffff);
      return 0;
    }
  }
  else {
    *(ulong *)(param_1 + 0x10) = param_2;
    *(uint *)(param_1 + 0x18) = uVar2;
    if (0x10 < (int)param_5) goto LAB_00d7b8b8;
  }
  return (ulong)*(byte *)(*(long *)(param_4 + 0x118) +
                          (long)(*(int *)(param_4 + lVar8 * 8 + 0x90) + (int)uVar7) + 0x11);
}


