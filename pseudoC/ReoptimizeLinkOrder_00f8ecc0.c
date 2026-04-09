// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ReoptimizeLinkOrder
// Entry Point: 00f8ecc0
// Size: 912 bytes
// Signature: undefined __cdecl ReoptimizeLinkOrder(btSoftBody * param_1)


/* btSoftBodyHelpers::ReoptimizeLinkOrder(btSoftBody*) */

void btSoftBodyHelpers::ReoptimizeLinkOrder(btSoftBody *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined auVar6 [16];
  void *__s;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *__s_00;
  undefined8 *__dest;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  long *plVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  size_t __n;
  void *pvVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  uVar12 = *(uint *)(param_1 + 0x374);
  uVar5 = *(uint *)(param_1 + 0x394);
  uVar24 = (ulong)(int)uVar5;
  lVar26 = *(long *)(param_1 + 0x380);
  uVar14 = ((long)(int)uVar12 + 1U) * 4;
  if ((long)(int)uVar12 + 1U >> 0x3e != 0) {
    uVar14 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar14);
  uVar14 = uVar24 << 2;
  if (uVar24 >> 0x3e != 0) {
    uVar14 = 0xffffffffffffffff;
  }
  pvVar7 = operator_new__(uVar14);
  pvVar8 = operator_new__(uVar14);
  pvVar9 = operator_new__(uVar14);
  uVar14 = uVar24 << 5;
  if ((uVar24 << 1) >> 0x3c != 0) {
    uVar14 = 0xffffffffffffffff;
  }
  pvVar10 = operator_new__(uVar14);
  uVar14 = uVar24 * 8;
  if (uVar24 >> 0x3d != 0) {
    uVar14 = 0xffffffffffffffff;
  }
  __s_00 = operator_new__(uVar14);
  __n = uVar24 * 0x48;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar24;
  uVar14 = __n;
  if (SUB168(auVar6 * ZEXT816(0x48),8) != 0) {
    uVar14 = 0xffffffffffffffff;
  }
  __dest = (undefined8 *)operator_new__(uVar14);
  if (uVar5 != 0) {
    puVar16 = __dest;
    if (0x47 < __n - 0x48) {
      uVar14 = (__n - 0x48) / 0x48 + 1;
      uVar15 = uVar14 & 0x7fffffffffffffe;
      uVar23 = uVar15;
      do {
        *puVar16 = 0;
        uVar23 = uVar23 - 2;
        puVar16[9] = 0;
        puVar16 = puVar16 + 0x12;
      } while (uVar23 != 0);
      if (uVar14 == uVar15) goto LAB_00f8ee04;
      puVar16 = __dest + uVar15 * 9;
    }
    do {
      puVar22 = puVar16 + 9;
      *puVar16 = 0;
      puVar16 = puVar22;
    } while (puVar22 != __dest + uVar24 * 9);
  }
LAB_00f8ee04:
  pvVar25 = *(void **)(param_1 + 0x3a0);
  memcpy(__dest,pvVar25,__n);
  if (-1 < (int)uVar12) {
    memset(__s,0xff,(ulong)uVar12 * 4 + 4);
  }
  if (0 < (int)uVar5) {
    memset(__s_00,0,(ulong)uVar5 << 3);
    uVar14 = 0;
    uVar12 = 0;
    iVar21 = 0;
    plVar18 = (long *)((long)pvVar25 + 0x18);
    iVar20 = -1;
    do {
      lVar3 = *plVar18;
      uVar24 = (plVar18[-1] - lVar26 >> 3) * -0x1111111111111111;
      uVar13 = *(uint *)((long)__s +
                        (-(uVar24 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar24 & 0xffffffff) << 2));
      uVar17 = (undefined4)uVar14;
      if ((int)uVar13 < 0) {
        uVar13 = 0xffffffff;
      }
      else {
        puVar2 = (undefined4 *)((long)pvVar10 + (long)iVar21 * 0x10);
        iVar21 = iVar21 + 1;
        uVar11 = *(undefined8 *)((long)__s_00 + (ulong)uVar13 * 8);
        *puVar2 = uVar17;
        *(undefined4 **)((long)__s_00 + (ulong)uVar13 * 8) = puVar2;
        *(undefined8 *)(puVar2 + 2) = uVar11;
      }
      *(uint *)((long)pvVar7 + uVar14 * 4) = uVar13;
      uVar23 = (lVar3 - lVar26 >> 3) * -0x1111111111111111;
      uVar4 = *(uint *)((long)__s +
                       (-(uVar23 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar23 & 0xffffffff) << 2));
      if ((int)uVar4 < 0) {
        *(undefined4 *)((long)pvVar8 + uVar14 * 4) = 0xffffffff;
        if (uVar13 == 0xffffffff) {
          *(undefined4 *)((long)pvVar9 + (long)(int)uVar12 * 4) = uVar17;
          *(undefined4 *)((long)pvVar8 + uVar14 * 4) = 0xfffffffe;
          *(undefined4 *)((long)pvVar7 + uVar14 * 4) = 0xfffffffe;
          uVar12 = uVar12 + 1;
        }
      }
      else {
        piVar1 = (int *)((long)pvVar10 + (long)iVar21 * 0x10);
        iVar21 = iVar21 + 1;
        *(uint *)((long)pvVar8 + uVar14 * 4) = uVar4;
        uVar11 = *(undefined8 *)((long)__s_00 + (ulong)uVar4 * 8);
        *piVar1 = iVar20;
        *(int **)((long)__s_00 + (ulong)uVar4 * 8) = piVar1;
        *(undefined8 *)(piVar1 + 2) = uVar11;
      }
      plVar18 = plVar18 + 9;
      iVar20 = iVar20 + -1;
      *(undefined4 *)((long)__s + (long)(int)uVar23 * 4) = uVar17;
      *(undefined4 *)((long)__s + (long)(int)uVar24 * 4) = uVar17;
      uVar14 = uVar14 + 1;
    } while (uVar5 != uVar14);
    if (uVar12 != 0) {
      uVar14 = 0;
      while( true ) {
        lVar26 = (long)*(int *)((long)pvVar9 + uVar14 * 4);
        puVar22 = (undefined8 *)((long)pvVar25 + uVar14 * 0x48);
        puVar16 = __dest + lVar26 * 9;
        uVar11 = *puVar16;
        puVar22[1] = puVar16[1];
        *puVar22 = uVar11;
        uVar29 = puVar16[4];
        uVar28 = puVar16[7];
        uVar27 = puVar16[6];
        uVar11 = puVar16[8];
        uVar31 = puVar16[3];
        uVar30 = puVar16[2];
        puVar22[5] = puVar16[5];
        puVar22[4] = uVar29;
        puVar22[7] = uVar28;
        puVar22[6] = uVar27;
        puVar22[8] = uVar11;
        puVar22[3] = uVar31;
        puVar22[2] = uVar30;
        for (puVar19 = *(uint **)((long)__s_00 + lVar26 * 8); puVar19 != (uint *)0x0;
            puVar19 = *(uint **)(puVar19 + 2)) {
          uVar13 = *puVar19;
          uVar5 = uVar13 ^ (int)uVar13 >> 0x1f;
          pvVar25 = pvVar7;
          if ((int)uVar13 < 0) {
            pvVar25 = pvVar8;
          }
          *(undefined4 *)((long)pvVar25 + (ulong)uVar5 * 4) = 0xffffffff;
          uVar13 = uVar12;
          if ((*(int *)((long)pvVar7 + (long)(int)uVar5 * 4) == -1) &&
             (*(int *)((long)pvVar8 + (long)(int)uVar5 * 4) == -1)) {
            uVar13 = uVar12 + 1;
            lVar26 = (long)(int)uVar5 * 4;
            *(uint *)((long)pvVar9 + (long)(int)uVar12 * 4) = uVar5;
            *(undefined4 *)((long)pvVar8 + lVar26) = 0xfffffffe;
            *(undefined4 *)((long)pvVar7 + lVar26) = 0xfffffffe;
          }
          uVar12 = uVar13;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 == uVar12) break;
        pvVar25 = *(void **)(param_1 + 0x3a0);
      }
    }
  }
  operator_delete__(__s);
  operator_delete__(pvVar7);
  operator_delete__(pvVar8);
  operator_delete__(pvVar9);
  operator_delete__(pvVar10);
  operator_delete__(__s_00);
  operator_delete__(__dest);
  return;
}


