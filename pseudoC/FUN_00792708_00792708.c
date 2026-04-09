// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792708
// Entry Point: 00792708
// Size: 292 bytes
// Signature: undefined FUN_00792708(void)


void FUN_00792708(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  I3DStreamingManager::getInstance();
  I3DStreamingManager::getAllI3DLoadTaskRequestIds();
  uVar14 = local_48 - (long)local_50;
                    /* try { // try from 00792744 to 00792747 has its CatchHandler @ 0079282c */
  pvVar4 = operator_new__(uVar14 & 0x3fffffffc);
  if ((int)(uVar14 >> 2) != 0) {
    uVar6 = uVar14 >> 2 & 0xffffffff;
    if ((uVar6 < 8) ||
       ((pvVar4 < (void *)((long)local_50 + uVar6 * 4) &&
        (local_50 < (void *)((long)pvVar4 + uVar6 * 4))))) {
      lVar8 = 0;
    }
    else {
      uVar10 = uVar14 >> 2 & 7;
      puVar12 = (undefined8 *)((long)local_50 + 0x10);
      lVar8 = uVar6 - uVar10;
      puVar13 = (undefined8 *)((long)pvVar4 + 0x10);
      lVar7 = lVar8;
      do {
        puVar2 = puVar12 + -1;
        uVar15 = puVar12[-2];
        uVar17 = puVar12[1];
        uVar16 = *puVar12;
        puVar12 = puVar12 + 4;
        lVar7 = lVar7 + -8;
        puVar13[-1] = *puVar2;
        puVar13[-2] = uVar15;
        puVar13[1] = uVar17;
        *puVar13 = uVar16;
        puVar13 = puVar13 + 4;
      } while (lVar7 != 0);
      if (uVar10 == 0) goto LAB_0079279c;
    }
    lVar7 = lVar8 - uVar6;
    puVar9 = (undefined4 *)((long)pvVar4 + lVar8 * 4);
    puVar11 = (undefined4 *)((long)local_50 + lVar8 * 4);
    do {
      bVar3 = lVar7 != -1;
      lVar7 = lVar7 + 1;
      *puVar9 = *puVar11;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (bVar3);
  }
LAB_0079279c:
  *(void **)(param_1 + 0x100) = pvVar4;
  *(undefined4 *)(param_1 + 0x108) = 0xb;
  *(char *)(param_1 + 0x10e) = (char)(uVar14 >> 0x11);
  *(ushort *)(param_1 + 0x10c) = (ushort)(uVar14 >> 1) | 1;
  if (local_50 != (void *)0x0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


