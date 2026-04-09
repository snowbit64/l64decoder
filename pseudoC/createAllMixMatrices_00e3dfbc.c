// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAllMixMatrices
// Entry Point: 00e3dfbc
// Size: 764 bytes
// Signature: undefined createAllMixMatrices(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::createAllMixMatrices() */

void SoLoud::Soloud::createAllMixMatrices(void)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long in_x0;
  undefined4 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_170 [8];
  undefined8 local_130 [24];
  long local_70;
  
  lVar4 = tpidr_el0;
  lVar15 = 0;
  local_70 = *(long *)(lVar4 + 0x28);
  *(undefined8 *)(in_x0 + 0x2380) = 0;
  *(undefined8 *)(in_x0 + 0x2378) = 0;
  *(undefined8 *)(in_x0 + 0x2390) = 0;
  *(undefined8 *)(in_x0 + 0x2388) = 0;
  *(undefined8 *)(in_x0 + 0x2360) = 0;
  *(undefined8 *)(in_x0 + 0x2358) = 0;
  *(undefined8 *)(in_x0 + 0x2370) = 0;
  *(undefined8 *)(in_x0 + 0x2368) = 0;
  *(undefined8 *)(in_x0 + 0x2340) = 0;
  *(undefined8 *)(in_x0 + 0x2338) = 0;
  *(undefined8 *)(in_x0 + 0x2350) = 0;
  *(undefined8 *)(in_x0 + 0x2348) = 0;
  *(undefined8 *)(in_x0 + 0x2320) = 0;
  *(undefined8 *)(in_x0 + 0x2318) = 0;
  *(undefined8 *)(in_x0 + 0x2330) = 0;
  *(undefined8 *)(in_x0 + 9000) = 0;
  *(undefined8 *)(in_x0 + 0x2300) = 0;
  *(undefined8 *)(in_x0 + 0x22f8) = 0;
  *(undefined8 *)(in_x0 + 0x2310) = 0;
  *(undefined8 *)(in_x0 + 0x2308) = 0;
  *(undefined8 *)(in_x0 + 0x22e0) = 0;
  *(undefined8 *)(in_x0 + 0x22d8) = 0;
  *(undefined8 *)(in_x0 + 0x22f0) = 0;
  *(undefined8 *)(in_x0 + 0x22e8) = 0;
  *(undefined8 *)(in_x0 + 0x22c0) = 0;
  *(undefined8 *)(in_x0 + 0x22b8) = 0;
  *(undefined8 *)(in_x0 + 0x22d0) = 0;
  *(undefined8 *)(in_x0 + 0x22c8) = 0;
  *(undefined8 *)(in_x0 + 0x22a0) = 0;
  *(undefined8 *)(in_x0 + 0x2298) = 0;
  *(undefined8 *)(in_x0 + 0x22b0) = 0;
  *(undefined8 *)(in_x0 + 0x22a8) = 0;
  *(undefined8 *)(in_x0 + 0x2280) = 0;
  *(undefined8 *)(in_x0 + 0x2278) = 0;
  *(undefined8 *)(in_x0 + 0x2290) = 0;
  *(undefined8 *)(in_x0 + 0x2288) = 0;
  *(undefined8 *)(in_x0 + 0x2260) = 0;
  *(undefined8 *)(in_x0 + 0x2258) = 0;
  *(undefined8 *)(in_x0 + 0x2270) = 0;
  *(undefined8 *)(in_x0 + 0x2268) = 0;
  *(undefined8 *)(in_x0 + 0x2240) = 0;
  *(undefined8 *)(in_x0 + 0x2238) = 0;
  *(undefined8 *)(in_x0 + 0x2250) = 0;
  *(undefined8 *)(in_x0 + 0x2248) = 0;
  *(undefined8 *)(in_x0 + 0x2220) = 0;
  *(undefined8 *)(in_x0 + 0x2218) = 0;
  *(undefined8 *)(in_x0 + 0x2230) = 0;
  *(undefined8 *)(in_x0 + 0x2228) = 0;
  *(undefined8 *)(in_x0 + 0x2200) = 0;
  *(undefined8 *)(in_x0 + 0x21f8) = 0;
  *(undefined8 *)(in_x0 + 0x2210) = 0;
  *(undefined8 *)(in_x0 + 0x2208) = 0;
  *(undefined8 *)(in_x0 + 0x21e0) = 0;
  *(undefined8 *)(in_x0 + 0x21d8) = 0;
  *(undefined8 *)(in_x0 + 0x21f0) = 0;
  *(undefined8 *)(in_x0 + 0x21e8) = 0;
  *(undefined8 *)(in_x0 + 0x21c0) = 0;
  *(undefined8 *)(in_x0 + 0x21b8) = 0;
  *(undefined8 *)(in_x0 + 0x21d0) = 0;
  *(undefined8 *)(in_x0 + 0x21c8) = 0;
  *(undefined8 *)(in_x0 + 0x21a0) = 0;
  *(undefined8 *)(in_x0 + 0x2198) = 0;
  *(undefined8 *)(in_x0 + 0x21b0) = 0;
  *(undefined8 *)(in_x0 + 0x21a8) = 0;
  do {
    uVar3 = (&DAT_0055fa60)[lVar15];
    uVar14 = (ulong)(uVar3 - 1);
    uVar2 = uVar3;
    if (uVar3 == 0 || uVar3 - 1 == 0) {
      uVar2 = 1;
    }
    uVar16 = (ulong)uVar2;
    createMixMatrix(1,uVar3,(float *)local_170);
    puVar5 = (undefined4 *)operator_new__((ulong)uVar3 << 2);
    if (uVar2 < 5) {
      lVar10 = 0;
      puVar8 = puVar5;
    }
    else {
      uVar1 = 4;
      if ((uVar2 & 3) != 0) {
        uVar1 = uVar16 & 3;
      }
      lVar10 = uVar16 - uVar1;
      puVar8 = puVar5 + lVar10;
      puVar12 = (undefined8 *)(puVar5 + 2);
      lVar11 = lVar10;
      puVar6 = local_130;
      do {
        puVar9 = puVar6 + -8;
        lVar11 = lVar11 + -4;
        puVar13 = puVar6 + -4;
        uVar17 = *puVar6;
        uVar18 = puVar6[4];
        puVar6 = puVar6 + 0x10;
        puVar12[-1] = CONCAT44((int)*puVar13,(int)*puVar9);
        *puVar12 = CONCAT44((int)uVar18,(int)uVar17);
        puVar12 = puVar12 + 2;
      } while (lVar11 != 0);
    }
    lVar11 = uVar16 - lVar10;
    puVar6 = local_170 + lVar10 * 4;
    do {
      lVar11 = lVar11 + -1;
      *puVar8 = *(undefined4 *)puVar6;
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 4;
    } while (lVar11 != 0);
    *(undefined4 **)(in_x0 + uVar14 * 0x40 + 0x2198) = puVar5;
    createMixMatrix(2,uVar3,(float *)local_170);
    puVar6 = (undefined8 *)operator_new__((ulong)(uVar3 << 1) << 2);
    if (uVar2 < 3) {
      lVar10 = 0;
      puVar9 = puVar6;
    }
    else {
      puVar12 = local_170;
      uVar1 = 2;
      if ((uVar2 & 1) != 0) {
        uVar1 = uVar16 & 1;
      }
      lVar10 = uVar16 - uVar1;
      puVar9 = puVar6 + lVar10;
      lVar11 = lVar10;
      puVar13 = puVar6;
      do {
        uVar17 = *puVar12;
        lVar11 = lVar11 + -2;
        uVar18 = puVar12[4];
        puVar12 = puVar12 + 8;
        *(int *)puVar13 = (int)uVar17;
        *(int *)((long)puVar13 + 4) = (int)((ulong)uVar17 >> 0x20);
        *(int *)(puVar13 + 1) = (int)uVar18;
        *(int *)((long)puVar13 + 0xc) = (int)((ulong)uVar18 >> 0x20);
        puVar13 = puVar13 + 2;
      } while (lVar11 != 0);
    }
    lVar11 = uVar16 - lVar10;
    puVar12 = local_170 + lVar10 * 4;
    do {
      lVar11 = lVar11 + -1;
      *puVar9 = *puVar12;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 4;
    } while (lVar11 != 0);
    *(undefined8 **)(in_x0 + uVar14 * 0x40 + 0x21a0) = puVar6;
    createMixMatrix(4,uVar3,(float *)local_170);
    pvVar7 = operator_new__((ulong)(uVar3 << 2) << 2);
    lVar11 = 0;
    puVar6 = local_170;
    do {
      uVar17 = *puVar6;
      ((undefined8 *)((long)pvVar7 + lVar11))[1] = puVar6[1];
      *(undefined8 *)((long)pvVar7 + lVar11) = uVar17;
      lVar11 = lVar11 + 0x10;
      puVar6 = puVar6 + 4;
    } while (uVar16 * 0x10 - lVar11 != 0);
    *(void **)(in_x0 + uVar14 * 0x40 + 0x21b0) = pvVar7;
    createMixMatrix(6,uVar3,(float *)local_170);
    pvVar7 = operator_new__((ulong)(uVar3 * 6) << 2);
    lVar11 = 0;
    puVar6 = local_170 + 2;
    do {
      uVar17 = puVar6[-2];
      puVar12 = (undefined8 *)((long)pvVar7 + lVar11);
      uVar18 = *puVar6;
      lVar11 = lVar11 + 0x18;
      puVar12[1] = puVar6[-1];
      *puVar12 = uVar17;
      puVar12[2] = uVar18;
      puVar6 = puVar6 + 4;
    } while (uVar16 * 0x18 - lVar11 != 0);
    *(void **)(in_x0 + uVar14 * 0x40 + 0x21c0) = pvVar7;
    createMixMatrix(8,uVar3,(float *)local_170);
    pvVar7 = operator_new__((ulong)(uVar3 << 3) << 2);
    lVar11 = 0;
    do {
      puVar6 = (undefined8 *)((long)pvVar7 + lVar11);
      lVar10 = lVar11 + 0x20;
      uVar17 = *(undefined8 *)((long)local_170 + lVar11);
      uVar19 = *(undefined8 *)((long)local_170 + lVar11 + 0x18);
      uVar18 = *(undefined8 *)((long)local_170 + lVar11 + 0x10);
      puVar6[1] = *(undefined8 *)((long)local_170 + lVar11 + 8);
      *puVar6 = uVar17;
      puVar6[3] = uVar19;
      puVar6[2] = uVar18;
      lVar11 = lVar10;
    } while (uVar16 * 0x20 - lVar10 != 0);
    lVar15 = lVar15 + 1;
    *(void **)(in_x0 + uVar14 * 0x40 + 0x21d0) = pvVar7;
  } while (lVar15 != 5);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


