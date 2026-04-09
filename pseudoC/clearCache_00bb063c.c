// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearCache
// Entry Point: 00bb063c
// Size: 264 bytes
// Signature: undefined clearCache(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2SoftBodyHeightfieldTriangleCallback::clearCache() */

void Bt2SoftBodyHeightfieldTriangleCallback::clearCache(void)

{
  long **pplVar1;
  void **ppvVar2;
  void **ppvVar3;
  long in_x0;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  
  if (0 < *(int *)(in_x0 + 0x9c)) {
    lVar8 = 0;
    do {
      lVar9 = *(long *)(*(long *)(in_x0 + 8) + 0x348);
      pplVar1 = (long **)(*(long *)(in_x0 + 0xa8) + lVar8 * 0x10);
      iVar6 = *(int *)(lVar9 + 0x44);
      plVar7 = *pplVar1;
      if (0 < iVar6) {
        lVar10 = 0;
        do {
          ppvVar2 = (void **)(*(long *)(lVar9 + 0x50) + lVar10 * 8);
          pvVar4 = *ppvVar2;
          if (pvVar4 != (void *)0x0) {
            pvVar11 = (void *)0x0;
            do {
              while (pvVar5 = pvVar4, pvVar4 = *(void **)((long)pvVar5 + 0x120),
                    *(long **)((long)pvVar5 + 0x118) == plVar7) {
                ppvVar3 = ppvVar2;
                if (pvVar11 != (void *)0x0) {
                  ppvVar3 = (void **)((long)pvVar11 + 0x120);
                }
                *ppvVar3 = pvVar4;
                operator_delete(pvVar5);
                if (pvVar4 == (void *)0x0) goto LAB_00bb06a8;
              }
              pvVar11 = pvVar5;
            } while (pvVar4 != (void *)0x0);
LAB_00bb06a8:
            iVar6 = *(int *)(lVar9 + 0x44);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar6);
        plVar7 = *pplVar1;
      }
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(in_x0 + 0x9c));
  }
  btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
  ::clear();
  return;
}


