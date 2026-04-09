// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateEntity
// Entry Point: 008c17ac
// Size: 1428 bytes
// Signature: undefined __thiscall updateEntity(CullingGrid2D * this, CullingEntity * param_1, BoundingVolume * param_2, Vector3 * param_3, float param_4, float param_5, float param_6, bool param_7)


/* CullingGrid2D::updateEntity(CullingGrid2D::CullingEntity*, BoundingVolume const*, Vector3 const&,
   float, float, float, bool) */

void __thiscall
CullingGrid2D::updateEntity
          (CullingGrid2D *this,CullingEntity *param_1,BoundingVolume *param_2,Vector3 *param_3,
          float param_4,float param_5,float param_6,bool param_7)

{
  void **ppvVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  float *pfVar12;
  ushort *puVar13;
  uint *puVar14;
  CullingEntity **ppCVar15;
  int iVar16;
  uint uVar17;
  undefined8 *puVar18;
  CullingEntity *pCVar19;
  short sVar20;
  undefined8 uVar21;
  uint uVar22;
  uint uVar23;
  CullingEntity **ppCVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  void *__dest;
  void *__src;
  ulong uVar29;
  void **ppvVar30;
  long lVar31;
  uint uVar32;
  undefined4 uVar33;
  float fVar34;
  int iVar35;
  int iVar36;
  int iVar39;
  undefined8 uVar37;
  CullingEntity *pCVar38;
  int iVar40;
  int iVar43;
  undefined8 uVar41;
  CullingEntity *pCVar42;
  int iVar44;
  int iVar45;
  undefined8 uVar46;
  CullingEntity *pCVar47;
  undefined8 uVar48;
  CullingEntity *pCVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  uint local_94;
  uint local_90;
  uint uStack_8c;
  long local_88;
  
  lVar9 = tpidr_el0;
  local_88 = *(long *)(lVar9 + 0x28);
  uVar17 = *(uint *)param_1;
  uVar32 = uVar17 >> 3 & 0x7f;
  uVar4 = *(uint *)(this + 0xc);
  uVar11 = uVar17 >> 6 & 0x700 | uVar17 >> 10 & 0xf;
  uVar32 = (uVar32 | uVar32 << 4) & 0xffffff0f;
  uVar11 = (uVar11 | uVar11 << 2) & 0xf3f3f3f3;
  uVar32 = (uVar32 | uVar32 << 2) & 0xf3f3f3f3;
  uVar11 = ((uVar32 | uVar32 << 1) & 0xdddddddd | (uVar11 << 2 | uVar11 << 1) & 0xbbbbbbbb) <<
           (ulong)((uVar4 + ~(uVar17 & 7)) * 2 & 0x1f);
  uVar32 = uVar11 + (uVar17 & 7);
  if (2 < uVar4) {
    uVar23 = uVar4 - 2;
    if (uVar23 < 8) {
      uVar22 = 1;
    }
    else {
      iVar36 = 0;
      iVar39 = 0;
      uVar3 = uVar23 & 0xfffffff8;
      iVar40 = 0;
      iVar43 = 0;
      iVar44 = 0;
      iVar45 = 0;
      uVar22 = uVar3 | 1;
      iVar35 = 0;
      uVar8 = uVar3;
      iVar16 = 1;
      iVar50 = 2;
      iVar51 = 3;
      iVar52 = 4;
      do {
        auVar56._0_4_ = iVar16 * 2;
        auVar56._4_4_ = iVar50 * 2;
        auVar56._8_4_ = iVar51 * 2;
        auVar56._12_4_ = iVar52 * 2;
        uVar8 = uVar8 - 8;
        auVar55 = NEON_neg(auVar56,4);
        auVar53._0_4_ = iVar16 * -2 + -8;
        auVar53._4_4_ = iVar50 * -2 + -8;
        auVar53._8_4_ = iVar51 * -2 + -8;
        auVar53._12_4_ = iVar52 * -2 + -8;
        auVar54._4_4_ = uVar11;
        auVar54._0_4_ = uVar11;
        auVar54._8_4_ = uVar11;
        auVar54._12_4_ = uVar11;
        auVar56 = NEON_ushl(auVar54,auVar55,4);
        auVar55._4_4_ = uVar11;
        auVar55._0_4_ = uVar11;
        auVar55._8_4_ = uVar11;
        auVar55._12_4_ = uVar11;
        auVar54 = NEON_ushl(auVar55,auVar53,4);
        uVar32 = auVar56._0_4_ + uVar32;
        iVar35 = auVar56._4_4_ + iVar35;
        iVar36 = auVar56._8_4_ + iVar36;
        iVar39 = auVar56._12_4_ + iVar39;
        iVar40 = auVar54._0_4_ + iVar40;
        iVar43 = auVar54._4_4_ + iVar43;
        iVar44 = auVar54._8_4_ + iVar44;
        iVar45 = auVar54._12_4_ + iVar45;
        iVar16 = iVar16 + 8;
        iVar50 = iVar50 + 8;
        iVar51 = iVar51 + 8;
        iVar52 = iVar52 + 8;
      } while (uVar8 != 0);
      uVar32 = iVar40 + uVar32 + iVar43 + iVar35 + iVar44 + iVar36 + iVar45 + iVar39;
      if (uVar23 == uVar3) goto LAB_008c1908;
    }
    uVar23 = uVar22 << 1;
    iVar16 = ~uVar22 + uVar4;
    do {
      iVar16 = iVar16 + -1;
      uVar32 = (uVar11 >> (ulong)(uVar23 & 0x1f)) + uVar32;
      uVar23 = uVar23 + 2;
    } while (iVar16 != 0);
  }
LAB_008c1908:
  lVar31 = *(long *)this;
  uVar27 = (ulong)uVar32;
  uVar28 = (ulong)(uVar17 >> 0x11) & 3;
  uVar4 = uVar17 >> 0x13;
  uVar29 = (ulong)uVar4;
  lVar10 = getGridCell(this,param_2,&uStack_8c,&local_90,&local_94);
  uVar11 = 2;
  if (param_4 + param_5 <= *(float *)(this + 0x38)) {
    uVar11 = 1;
  }
  if (param_4 + param_5 <= *(float *)(this + 0x34)) {
    uVar11 = 0;
  }
  if ((lVar31 + (ulong)uVar32 * 0x48 == lVar10) && ((uint)uVar28 == uVar11)) {
    if (uVar4 == 0x1fff) {
      uVar29 = (ulong)*(ushort *)(lVar31 + uVar27 * 0x48 + uVar28 * 0x10 + 8);
      if (0x1fff < uVar29) {
        lVar10 = uVar29 - 0x1fff;
        pfVar12 = (float *)(*(long *)(lVar31 + uVar27 * 0x48 + uVar28 * 0x10) + 0x5ffe8);
        do {
          if (*(CullingEntity **)(pfVar12 + -6) == param_1) {
            if (param_2 == (BoundingVolume *)0x0) {
              *(undefined8 *)(pfVar12 + -4) = 0;
              pfVar12[-2] = 0.0;
              fVar34 = 3.402823e+38;
            }
            else {
              uVar21 = *(undefined8 *)(param_2 + 0xc);
              pfVar12[-2] = *(float *)(param_2 + 0x14);
              *(undefined8 *)(pfVar12 + -4) = uVar21;
              fVar34 = *(float *)(param_2 + 0x18);
            }
            pfVar12[-1] = fVar34;
            fVar34 = -param_4;
            if (!param_7) {
              fVar34 = param_4;
            }
            fVar5 = *(float *)(param_3 + 8);
            uVar21 = *(undefined8 *)param_3;
            *pfVar12 = param_5;
            pfVar12[1] = param_6;
            pfVar12[4] = fVar5;
            *(undefined8 *)(pfVar12 + 2) = uVar21;
            pfVar12[5] = fVar34;
            break;
          }
          lVar10 = lVar10 + -1;
          pfVar12 = pfVar12 + 0xc;
        } while (lVar10 != 0);
      }
    }
    else {
      lVar10 = *(long *)(lVar31 + uVar27 * 0x48 + uVar28 * 0x10);
      lVar31 = lVar10 + uVar29 * 0x30;
      if (param_2 == (BoundingVolume *)0x0) {
        *(undefined8 *)(lVar31 + 8) = 0;
        *(undefined4 *)(lVar31 + 0x10) = 0;
        uVar33 = 0x7f7fffff;
      }
      else {
        uVar21 = *(undefined8 *)(param_2 + 0xc);
        *(undefined4 *)(lVar31 + 0x10) = *(undefined4 *)(param_2 + 0x14);
        *(undefined8 *)(lVar31 + 8) = uVar21;
        uVar33 = *(undefined4 *)(param_2 + 0x18);
      }
      lVar10 = lVar10 + uVar29 * 0x30;
      fVar34 = -param_4;
      if (!param_7) {
        fVar34 = param_4;
      }
      *(undefined4 *)(lVar10 + 0x14) = uVar33;
      uVar33 = *(undefined4 *)(param_3 + 8);
      uVar21 = *(undefined8 *)param_3;
      *(float *)(lVar10 + 0x18) = param_5;
      *(float *)(lVar10 + 0x2c) = fVar34;
      *(undefined4 *)(lVar10 + 0x28) = uVar33;
      *(undefined8 *)(lVar10 + 0x20) = uVar21;
      *(float *)(lVar10 + 0x1c) = param_6;
    }
  }
  else {
    puVar13 = (ushort *)(lVar31 + uVar27 * 0x48 + uVar28 * 0x10 + 8);
    uVar32 = (uint)*puVar13;
    if (uVar4 == 0x1fff) {
      if (0x1fff < uVar32) {
        plVar2 = (long *)(lVar31 + uVar27 * 0x48 + uVar28 * 0x10);
        lVar31 = *plVar2;
        ppCVar15 = (CullingEntity **)(lVar31 + 0x5ffd0);
        uVar27 = 0x1fff;
        do {
          if (*ppCVar15 == param_1) {
            uVar32 = uVar32 - 1;
            uVar17 = (uint)uVar27;
            *puVar13 = (ushort)uVar32;
            if (uVar17 < (uVar32 & 0xffff)) {
              ppCVar24 = (CullingEntity **)(lVar31 + ((ulong)uVar32 & 0xffff) * 0x30);
              pCVar42 = ppCVar24[2];
              pCVar38 = ppCVar24[5];
              pCVar19 = ppCVar24[4];
              pCVar49 = ppCVar24[1];
              pCVar47 = *ppCVar24;
              ppCVar15[3] = ppCVar24[3];
              ppCVar15[2] = pCVar42;
              ppCVar15[5] = pCVar38;
              ppCVar15[4] = pCVar19;
              ppCVar15[1] = pCVar49;
              *ppCVar15 = pCVar47;
              puVar14 = *(uint **)(*plVar2 + (ulong)*puVar13 * 0x30);
              if (0x1ffe < uVar17) {
                uVar17 = 0x1fff;
              }
              *puVar14 = *puVar14 & 0x7ffff | uVar17 << 0x13;
            }
            break;
          }
          uVar27 = uVar27 + 1;
          ppCVar15 = ppCVar15 + 6;
        } while (*puVar13 != uVar27);
      }
    }
    else {
      uVar32 = uVar32 - 1;
      *puVar13 = (ushort)uVar32;
      if (uVar4 < (uVar32 & 0xffff)) {
        lVar31 = lVar31 + uVar27 * 0x48;
        lVar25 = *(long *)(lVar31 + uVar28 * 0x10);
        puVar18 = (undefined8 *)(lVar25 + ((ulong)uVar32 & 0xffff) * 0x30);
        puVar26 = (undefined8 *)(lVar25 + uVar29 * 0x30);
        uVar41 = puVar18[2];
        uVar37 = puVar18[5];
        uVar21 = puVar18[4];
        uVar48 = puVar18[1];
        uVar46 = *puVar18;
        puVar26[3] = puVar18[3];
        puVar26[2] = uVar41;
        puVar26[5] = uVar37;
        puVar26[4] = uVar21;
        puVar26[1] = uVar48;
        *puVar26 = uVar46;
        puVar14 = *(uint **)(*(long *)(lVar31 + uVar28 * 0x10) + (ulong)*puVar13 * 0x30);
        *puVar14 = uVar17 & 0xfff80000 | *puVar14 & 0x7ffff;
      }
    }
    ppvVar1 = (void **)(lVar10 + (ulong)uVar11 * 0x10);
    ppvVar30 = ppvVar1 + 1;
    uVar6 = *(ushort *)ppvVar30;
    uVar27 = (ulong)uVar6;
    uVar7 = *(ushort *)((long)ppvVar1 + 10);
    if (uVar6 < uVar7) {
      __dest = *ppvVar1;
    }
    else {
      sVar20 = 8;
      if (0x3f < uVar7) {
        sVar20 = 0x20;
      }
      uVar7 = sVar20 + uVar7;
      *(ushort *)((long)ppvVar1 + 10) = uVar7;
      __dest = operator_new__(((ulong)uVar7 + (ulong)uVar7 * 2) * 0x10);
      if (uVar6 == 0) {
        __src = *ppvVar1;
      }
      else {
        __src = *ppvVar1;
        memcpy(__dest,__src,uVar27 * 0x30);
      }
      if (__src != (void *)0x0) {
        operator_delete__(__src);
        uVar27 = (ulong)*(ushort *)ppvVar30;
      }
      *ppvVar1 = __dest;
    }
    if (param_2 == (BoundingVolume *)0x0) {
      *(undefined8 *)((long)__dest + uVar27 * 0x30 + 8) = 0;
      *(undefined4 *)((long)__dest + uVar27 * 0x30 + 0x10) = 0;
      uVar33 = 0x7f7fffff;
    }
    else {
      uVar21 = *(undefined8 *)(param_2 + 0xc);
      *(undefined4 *)((long)__dest + uVar27 * 0x30 + 0x10) = *(undefined4 *)(param_2 + 0x14);
      *(undefined8 *)((long)__dest + uVar27 * 0x30 + 8) = uVar21;
      uVar33 = *(undefined4 *)(param_2 + 0x18);
    }
    ppCVar15 = (CullingEntity **)((long)__dest + uVar27 * 0x30);
    fVar34 = -param_4;
    if (!param_7) {
      fVar34 = param_4;
    }
    *(undefined4 *)((long)ppCVar15 + 0x14) = uVar33;
    pCVar19 = *(CullingEntity **)param_3;
    uVar33 = *(undefined4 *)(param_3 + 8);
    *(float *)(ppCVar15 + 3) = param_5;
    *(float *)((long)ppCVar15 + 0x1c) = param_6;
    *(float *)((long)ppCVar15 + 0x2c) = fVar34;
    ppCVar15[4] = pCVar19;
    *(undefined4 *)(ppCVar15 + 5) = uVar33;
    *ppCVar15 = param_1;
    uVar32 = (uint)*(ushort *)ppvVar30;
    if (0x1ffe < uVar32) {
      uVar32 = 0x1fff;
    }
    *(ushort *)ppvVar30 = *(ushort *)ppvVar30 + 1;
    *(uint *)param_1 = uStack_8c | uVar11 << 0x11 | local_90 << 3 | uVar32 << 0x13 | local_94 << 10;
  }
  if (*(long *)(lVar9 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


