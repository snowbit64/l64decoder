// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateEntity
// Entry Point: 008c3598
// Size: 996 bytes
// Signature: undefined __thiscall updateEntity(DecalCullingStructure * this, CullingEntity * param_1, float param_2, float param_3, float param_4, float param_5)


/* DecalCullingStructure::updateEntity(DecalCullingStructure::CullingEntity*, float, float, float,
   float) */

void __thiscall
DecalCullingStructure::updateEntity
          (DecalCullingStructure *this,CullingEntity *param_1,float param_2,float param_3,
          float param_4,float param_5)

{
  void **ppvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  void **ppvVar10;
  void **ppvVar11;
  float *pfVar12;
  CullingEntity **ppCVar13;
  uint *puVar14;
  short sVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  CullingEntity **ppCVar19;
  uint uVar20;
  uint uVar21;
  void *pvVar22;
  void *__src;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  int iVar28;
  undefined8 uVar26;
  CullingEntity *pCVar27;
  int iVar29;
  int iVar32;
  undefined8 uVar30;
  CullingEntity *pCVar31;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  uint local_84;
  uint local_80;
  uint uStack_7c;
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  uVar4 = *(uint *)param_1;
  uVar25 = uVar4 >> 3 & 0x7f;
  uVar5 = *(uint *)(this + 0xc);
  uVar3 = uVar4 >> 6 & 0x700 | uVar4 >> 10 & 0xf;
  uVar25 = (uVar25 | uVar25 << 4) & 0xffffff0f;
  uVar3 = (uVar3 | uVar3 << 2) & 0xf3f3f3f3;
  uVar25 = (uVar25 | uVar25 << 2) & 0xf3f3f3f3;
  uVar3 = ((uVar25 | uVar25 << 1) & 0xdddddddd | (uVar3 << 2 | uVar3 << 1) & 0xbbbbbbbb) <<
          (ulong)((uVar5 + ~(uVar4 & 7)) * 2 & 0x1f);
  uVar25 = uVar3 + (uVar4 & 7);
  if (2 < uVar5) {
    uVar21 = uVar5 - 2;
    if (uVar21 < 8) {
      uVar20 = 1;
    }
    else {
      iVar29 = 0;
      iVar32 = 0;
      uVar2 = uVar21 & 0xfffffff8;
      iVar33 = 0;
      iVar34 = 0;
      iVar35 = 0;
      iVar36 = 0;
      uVar20 = uVar2 | 1;
      iVar28 = 0;
      uVar8 = uVar2;
      iVar16 = 1;
      iVar37 = 2;
      iVar38 = 3;
      iVar39 = 4;
      do {
        auVar43._0_4_ = iVar16 * 2;
        auVar43._4_4_ = iVar37 * 2;
        auVar43._8_4_ = iVar38 * 2;
        auVar43._12_4_ = iVar39 * 2;
        uVar8 = uVar8 - 8;
        auVar42 = NEON_neg(auVar43,4);
        auVar40._0_4_ = iVar16 * -2 + -8;
        auVar40._4_4_ = iVar37 * -2 + -8;
        auVar40._8_4_ = iVar38 * -2 + -8;
        auVar40._12_4_ = iVar39 * -2 + -8;
        auVar41._4_4_ = uVar3;
        auVar41._0_4_ = uVar3;
        auVar41._8_4_ = uVar3;
        auVar41._12_4_ = uVar3;
        auVar43 = NEON_ushl(auVar41,auVar42,4);
        auVar42._4_4_ = uVar3;
        auVar42._0_4_ = uVar3;
        auVar42._8_4_ = uVar3;
        auVar42._12_4_ = uVar3;
        auVar41 = NEON_ushl(auVar42,auVar40,4);
        uVar25 = auVar43._0_4_ + uVar25;
        iVar28 = auVar43._4_4_ + iVar28;
        iVar29 = auVar43._8_4_ + iVar29;
        iVar32 = auVar43._12_4_ + iVar32;
        iVar33 = auVar41._0_4_ + iVar33;
        iVar34 = auVar41._4_4_ + iVar34;
        iVar35 = auVar41._8_4_ + iVar35;
        iVar36 = auVar41._12_4_ + iVar36;
        iVar16 = iVar16 + 8;
        iVar37 = iVar37 + 8;
        iVar38 = iVar38 + 8;
        iVar39 = iVar39 + 8;
      } while (uVar8 != 0);
      uVar25 = iVar33 + uVar25 + iVar34 + iVar28 + iVar35 + iVar29 + iVar36 + iVar32;
      if (uVar21 == uVar2) goto LAB_008c36e0;
    }
    uVar21 = uVar20 << 1;
    iVar16 = ~uVar20 + uVar5;
    do {
      iVar16 = iVar16 + -1;
      uVar25 = (uVar3 >> (ulong)(uVar21 & 0x1f)) + uVar25;
      uVar21 = uVar21 + 2;
    } while (iVar16 != 0);
  }
LAB_008c36e0:
  lVar24 = *(long *)this;
  uVar3 = uVar4 >> 0x11;
  uVar23 = (ulong)uVar3;
  ppvVar1 = (void **)(lVar24 + (ulong)uVar25 * 0x20);
  ppvVar10 = (void **)getGridCell(this,param_2,param_3,param_4,param_5,&uStack_7c,&local_80,
                                  &local_84);
  if (ppvVar1 == ppvVar10) {
    if (uVar3 == 0x7fff) {
      uVar7 = *(ushort *)(lVar24 + (ulong)uVar25 * 0x20 + 8);
      if ((short)uVar7 < 0) {
        pfVar12 = (float *)((long)*ppvVar1 + 0xbfff4);
        lVar24 = (ulong)uVar7 - 0x7fff;
        do {
          if (*(CullingEntity **)(pfVar12 + -3) == param_1) {
            pfVar12[-1] = param_2;
            *pfVar12 = param_3;
            pfVar12[1] = param_4;
            pfVar12[2] = param_5;
            break;
          }
          pfVar12 = pfVar12 + 6;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
    }
    else {
      pvVar22 = *ppvVar1;
      *(float *)((long)pvVar22 + uVar23 * 0x18 + 8) = param_2;
      *(float *)((long)pvVar22 + uVar23 * 0x18 + 0xc) = param_3;
      *(float *)((long)pvVar22 + uVar23 * 0x18 + 0x10) = param_4;
      *(float *)((long)pvVar22 + uVar23 * 0x18 + 0x14) = param_5;
    }
  }
  else {
    ppvVar11 = ppvVar1 + 1;
    uVar7 = *(ushort *)ppvVar11;
    if (uVar3 == 0x7fff) {
      if ((short)uVar7 < 0) {
        ppCVar13 = (CullingEntity **)((long)*ppvVar1 + 0xbffe8);
        uVar23 = 0x7fff;
        do {
          if (*ppCVar13 == param_1) {
            uVar7 = uVar7 - 1;
            uVar25 = (uint)uVar23;
            *(ushort *)ppvVar11 = uVar7;
            if (uVar25 < uVar7) {
              ppCVar19 = (CullingEntity **)((long)*ppvVar1 + (ulong)uVar7 * 0x18);
              pCVar31 = ppCVar19[1];
              pCVar27 = *ppCVar19;
              ppCVar13[2] = ppCVar19[2];
              ppCVar13[1] = pCVar31;
              *ppCVar13 = pCVar27;
              puVar14 = *(uint **)((long)*ppvVar1 + (ulong)*(ushort *)ppvVar11 * 0x18);
              if (0x7ffe < uVar25) {
                uVar25 = 0x7fff;
              }
              *puVar14 = *puVar14 & 0x1ffff | uVar25 << 0x11;
            }
            break;
          }
          uVar23 = uVar23 + 1;
          ppCVar13 = ppCVar13 + 3;
        } while (uVar7 != uVar23);
      }
    }
    else {
      uVar7 = uVar7 - 1;
      *(ushort *)ppvVar11 = uVar7;
      if (uVar3 < uVar7) {
        puVar17 = (undefined8 *)((long)*ppvVar1 + (ulong)uVar7 * 0x18);
        puVar18 = (undefined8 *)((long)*ppvVar1 + uVar23 * 0x18);
        uVar30 = puVar17[1];
        uVar26 = *puVar17;
        puVar18[2] = puVar17[2];
        puVar18[1] = uVar30;
        *puVar18 = uVar26;
        puVar14 = *(uint **)((long)*ppvVar1 + (ulong)*(ushort *)ppvVar11 * 0x18);
        *puVar14 = uVar4 & 0xfffe0000 | *puVar14 & 0x1ffff;
      }
    }
    uVar6 = *(ushort *)(ppvVar10 + 1);
    uVar23 = (ulong)uVar6;
    uVar7 = *(ushort *)((long)ppvVar10 + 10);
    if (uVar6 < uVar7) {
      pvVar22 = *ppvVar10;
    }
    else {
      sVar15 = 8;
      if (0x3f < uVar7) {
        sVar15 = 0x20;
      }
      uVar7 = sVar15 + uVar7;
      *(ushort *)((long)ppvVar10 + 10) = uVar7;
      pvVar22 = operator_new__(((ulong)uVar7 + (ulong)uVar7 * 2) * 8);
      if (uVar6 == 0) {
        __src = *ppvVar10;
      }
      else {
        __src = *ppvVar10;
        memcpy(pvVar22,__src,uVar23 * 0x18);
      }
      if (__src != (void *)0x0) {
        operator_delete__(__src);
        uVar23 = (ulong)*(ushort *)(ppvVar10 + 1);
      }
      *ppvVar10 = pvVar22;
    }
    uVar25 = (uint)uVar23;
    if (0x7ffe < uVar25) {
      uVar25 = 0x7fff;
    }
    ppCVar13 = (CullingEntity **)((long)pvVar22 + uVar23 * 0x18);
    *(float *)(ppCVar13 + 1) = param_2;
    *(float *)((long)ppCVar13 + 0xc) = param_3;
    *(float *)(ppCVar13 + 2) = param_4;
    *(float *)((long)ppCVar13 + 0x14) = param_5;
    *ppCVar13 = param_1;
    *(short *)(ppvVar10 + 1) = (short)uVar23 + 1;
    *(uint *)param_1 = uStack_7c | uVar25 << 0x11 | local_80 << 3 | local_84 << 10;
  }
  if (*(long *)(lVar9 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


