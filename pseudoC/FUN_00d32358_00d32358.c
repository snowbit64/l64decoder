// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d32358
// Entry Point: 00d32358
// Size: 312 bytes
// Signature: undefined FUN_00d32358(void)


undefined8 FUN_00d32358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  void *__src;
  int iVar4;
  long lVar5;
  void *__dest;
  long lVar6;
  long *plVar7;
  
  uVar2 = FUN_00d33dfc(param_1,0,*(undefined8 *)(param_1 + 0x120),param_2,param_3,param_4,
                       *(char *)(param_1 + 0x38c) == '\0');
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  plVar7 = *(long **)(param_1 + 0x2b0);
  while( true ) {
    if (plVar7 == (long *)0x0) {
      return 0;
    }
    lVar3 = plVar7[8];
    __src = (void *)plVar7[1];
    lVar1 = (long)*(int *)(plVar7 + 6) + 1;
    __dest = (void *)(lVar3 + lVar1);
    if (__src == __dest) break;
    iVar4 = *(int *)(plVar7 + 2);
    lVar6 = (long)(iVar4 + (int)lVar1);
    if (plVar7[9] - lVar3 < lVar6) {
      lVar3 = (**(code **)(param_1 + 0x20))(lVar3,lVar6);
      if (lVar3 == 0) {
        return 1;
      }
      if (plVar7[3] == plVar7[8]) {
        plVar7[3] = lVar3;
        lVar5 = plVar7[4];
      }
      else {
        lVar5 = plVar7[4];
      }
      if (lVar5 != 0) {
        plVar7[4] = lVar3 + (lVar5 - plVar7[8]);
      }
      __src = (void *)plVar7[1];
      __dest = (void *)(lVar3 + lVar1);
      iVar4 = *(int *)(plVar7 + 2);
      plVar7[8] = lVar3;
      plVar7[9] = lVar3 + lVar6;
    }
    memcpy(__dest,__src,(long)iVar4);
    plVar7[1] = (long)__dest;
    plVar7 = (long *)*plVar7;
  }
  return 0;
}


