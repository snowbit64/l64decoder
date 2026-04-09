// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearCache
// Entry Point: 00f9acf8
// Size: 264 bytes
// Signature: undefined clearCache(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBodyConcaveCollisionAlgorithm::clearCache() */

void btSoftBodyConcaveCollisionAlgorithm::clearCache(void)

{
  void **ppvVar1;
  void **ppvVar2;
  long in_x0;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long **pplVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  
  if (0 < *(int *)(in_x0 + 0xb4)) {
    lVar7 = 0;
    do {
      lVar9 = *(long *)(*(long *)(in_x0 + 0x20) + 0x348);
      iVar5 = *(int *)(lVar9 + 0x44);
      pplVar8 = (long **)(*(long *)(in_x0 + 0xc0) + lVar7 * 0x10 + 8);
      plVar6 = *pplVar8;
      if (0 < iVar5) {
        lVar10 = 0;
        do {
          ppvVar1 = (void **)(*(long *)(lVar9 + 0x50) + lVar10 * 8);
          pvVar3 = *ppvVar1;
          if (pvVar3 != (void *)0x0) {
            pvVar11 = (void *)0x0;
            do {
              while (pvVar4 = pvVar3, pvVar3 = *(void **)((long)pvVar4 + 0x120),
                    *(long **)((long)pvVar4 + 0x118) == plVar6) {
                ppvVar2 = ppvVar1;
                if (pvVar11 != (void *)0x0) {
                  ppvVar2 = (void **)((long)pvVar11 + 0x120);
                }
                *ppvVar2 = pvVar3;
                operator_delete(pvVar4);
                if (pvVar3 == (void *)0x0) goto LAB_00f9ad64;
              }
              pvVar11 = pvVar4;
            } while (pvVar3 != (void *)0x0);
LAB_00f9ad64:
            iVar5 = *(int *)(lVar9 + 0x44);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar5);
        plVar6 = *pplVar8;
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(in_x0 + 0xb4));
  }
  btHashMap<btHashKey<btTriIndex>,btTriIndex>::clear();
  return;
}


