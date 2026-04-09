// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792f84
// Entry Point: 00792f84
// Size: 276 bytes
// Signature: undefined FUN_00792f84(void)


void FUN_00792f84(uint *param_1)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long **pplVar5;
  long **pplVar6;
  uint uVar7;
  long **pplVar8;
  long *plVar9;
  
  param_1[0x44] = 0;
  *(undefined *)(param_1 + 0x48) = 0;
  param_1[0x42] = 6;
  param_1[0x4a] = 3;
  *(ushort *)(param_1 + 0x43) = *(ushort *)(param_1 + 0x43) & 0xfffe;
  *(undefined **)(param_1 + 0x40) = &DAT_0050a39f;
  param_1[0x46] = 1;
  lVar4 = I3DManager::getInstance();
  uVar2 = *param_1;
  if (uVar2 < *(uint *)(lVar4 + 0x40)) {
    pplVar5 = *(long ***)(lVar4 + 0x30);
    if (uVar2 != 0) {
      uVar7 = 0;
      pplVar6 = pplVar5;
      do {
        pplVar8 = (long **)pplVar6[1];
        if ((long **)pplVar6[1] == (long **)0x0) {
          pplVar8 = pplVar6 + 2;
          pplVar5 = (long **)*pplVar8;
          if ((long **)*pplVar5 != pplVar6) {
            do {
              plVar9 = *pplVar8;
              pplVar8 = (long **)(plVar9 + 2);
              pplVar5 = (long **)*pplVar8;
            } while (*pplVar5 != plVar9);
          }
        }
        else {
          do {
            pplVar5 = pplVar8;
            pplVar8 = (long **)*pplVar5;
          } while (*pplVar5 != (long *)0x0);
        }
        uVar7 = uVar7 + 1;
        pplVar6 = pplVar5;
      } while (uVar7 != uVar2);
    }
    plVar1 = pplVar5[7];
    plVar9 = (long *)((long)pplVar5 + 0x21);
    if ((*(byte *)(pplVar5 + 4) & 1) != 0) {
      plVar9 = pplVar5[6];
    }
    uVar2 = *(uint *)(plVar1 + 2);
    if (*(char *)(plVar1 + 1) == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = *(int *)((long)plVar1 + 0xc) == 0;
    }
    *(long **)(param_1 + 0x40) = plVar9;
    param_1[0x44] = uVar2;
    *(bool *)(param_1 + 0x48) = bVar3;
  }
  return;
}


