// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopEffects
// Entry Point: 0074c3fc
// Size: 260 bytes
// Signature: undefined stopEffects(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CollisionEffectManager::stopEffects() */

void CollisionEffectManager::stopEffects(void)

{
  void **ppvVar1;
  long in_x0;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  void *pvVar8;
  long **pplVar9;
  
  for (plVar6 = *(long **)(in_x0 + 0x48); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    lVar4 = plVar6[4];
    if (plVar6[5] != lVar4) {
      uVar7 = 0;
      do {
        pplVar9 = (long **)(lVar4 + uVar7 * 0x10 + 8);
        uVar2 = (**(code **)(**pplVar9 + 0x38))();
        if ((uVar2 & 1) != 0) {
          (**(code **)(**pplVar9 + 0x20))(0,0);
        }
        if (*pplVar9 != (long *)0x0) {
          (**(code **)(**pplVar9 + 8))();
        }
        lVar4 = plVar6[4];
        uVar7 = (ulong)((int)uVar7 + 1);
      } while (uVar7 < (ulong)(plVar6[5] - lVar4 >> 4));
    }
  }
  if (*(long *)(in_x0 + 0x50) != 0) {
    ppvVar1 = (void **)*(void **)(in_x0 + 0x48);
    while (ppvVar1 != (void **)0x0) {
      pvVar3 = ppvVar1[4];
      pvVar8 = *ppvVar1;
      if (pvVar3 != (void *)0x0) {
        ppvVar1[5] = pvVar3;
        operator_delete(pvVar3);
      }
      operator_delete(ppvVar1);
      ppvVar1 = (void **)pvVar8;
    }
    lVar4 = *(long *)(in_x0 + 0x40);
    *(undefined8 *)(in_x0 + 0x48) = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)(in_x0 + 0x38) + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    *(undefined8 *)(in_x0 + 0x50) = 0;
  }
  return;
}


