// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadConfig
// Entry Point: 0074bf84
// Size: 432 bytes
// Signature: undefined unloadConfig(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CollisionEffectManager::unloadConfig() */

void CollisionEffectManager::unloadConfig(void)

{
  long lVar1;
  long *in_x0;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long **pplVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  
  lVar8 = *in_x0;
  lVar9 = in_x0[1];
  if (in_x0[1] != lVar8) {
    uVar6 = 0;
    do {
      lVar9 = lVar8 + uVar6 * 0x48;
      plVar10 = (long *)(lVar9 + 0x18);
      lVar4 = *plVar10;
      plVar11 = (long *)(lVar9 + 0x20);
      lVar9 = *plVar11;
      if (lVar9 != lVar4) {
        uVar12 = 0;
        lVar9 = lVar4;
        do {
          pplVar7 = (long **)(lVar9 + uVar12 * 0x18);
          if (*pplVar7 != (long *)0x0) {
            Sample::unload();
            plVar2 = *pplVar7;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 8))();
            }
          }
          uVar12 = (ulong)((int)uVar12 + 1);
          lVar9 = *plVar10;
          uVar5 = (*plVar11 - lVar9 >> 3) * -0x5555555555555555;
        } while (uVar12 <= uVar5 && uVar5 - uVar12 != 0);
      }
      lVar8 = lVar8 + uVar6 * 0x48;
      *plVar11 = lVar9;
      plVar10 = (long *)(lVar8 + 0x30);
      lVar4 = *plVar10;
      plVar11 = (long *)(lVar8 + 0x38);
      lVar9 = *plVar11;
      if (lVar9 != lVar4) {
        uVar12 = 0;
        lVar9 = lVar4;
        do {
          pplVar7 = (long **)(lVar9 + uVar12 * 0x18);
          if (*pplVar7 != (long *)0x0) {
            Sample::unload();
            plVar2 = *pplVar7;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 8))();
            }
          }
          uVar12 = (ulong)((int)uVar12 + 1);
          lVar9 = *plVar10;
          uVar5 = (*plVar11 - lVar9 >> 3) * -0x5555555555555555;
        } while (uVar12 <= uVar5 && uVar5 - uVar12 != 0);
      }
      lVar8 = *in_x0;
      lVar4 = in_x0[1];
      uVar6 = (ulong)((int)uVar6 + 1);
      *plVar11 = lVar9;
      uVar12 = (lVar4 - lVar8 >> 3) * -0x71c71c71c71c71c7;
    } while (uVar6 <= uVar12 && uVar12 - uVar6 != 0);
    while (lVar1 = lVar4, lVar9 = lVar8, lVar1 != lVar8) {
      pvVar3 = *(void **)(lVar1 + -0x18);
      if (pvVar3 != (void *)0x0) {
        *(void **)(lVar1 + -0x10) = pvVar3;
        operator_delete(pvVar3);
      }
      pvVar3 = *(void **)(lVar1 + -0x30);
      lVar4 = lVar1 + -0x48;
      if (pvVar3 != (void *)0x0) {
        *(void **)(lVar1 + -0x28) = pvVar3;
        operator_delete(pvVar3);
      }
    }
  }
  in_x0[1] = lVar9;
  return;
}


