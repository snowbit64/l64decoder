// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Convert
// Entry Point: 00ecbb18
// Size: 2908 bytes
// Signature: undefined __thiscall Convert(VoxelSet * this, Mesh * param_1, VOXEL_VALUE param_2)


/* VHACD::VoxelSet::Convert(VHACD::Mesh&, VHACD::VOXEL_VALUE) const */

void __thiscall VHACD::VoxelSet::Convert(VoxelSet *this,Mesh *param_1,VOXEL_VALUE param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong **ppuVar10;
  long lVar11;
  VoxelSet *pVVar12;
  Mesh *__src;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  long lVar26;
  ulong *puVar27;
  undefined8 uVar28;
  ulong uVar29;
  int *piVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  ulong uVar34;
  ulong *puVar35;
  ulong *puVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  Mesh *pMVar40;
  double dVar41;
  double dVar42;
  undefined8 uVar43;
  ulong local_140 [6];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar26 = tpidr_el0;
  local_80 = *(long *)(lVar26 + 0x28);
  lVar31 = *(long *)(this + 0xa08);
  if (lVar31 != 0) {
    puVar8 = (ulong *)(param_1 + 0x920);
    lVar32 = 0;
    puVar9 = (ulong *)(param_1 + 0x618);
    ppuVar10 = (ulong **)(param_1 + 0x918);
    do {
      pVVar12 = this + 0x9c0;
      if (*(long *)(this + 0xa10) != 8) {
        pVVar12 = *(VoxelSet **)(this + 0xa00);
      }
      uVar28 = *(undefined8 *)(pVVar12 + lVar32 * 8);
      if ((int)(short)((ulong)uVar28 >> 0x30) == param_2) {
        uVar43 = *(undefined8 *)(this + 0x9b8);
        dVar41 = (double)(int)(short)((ulong)uVar28 >> 0x20);
        dVar42 = (double)((int)uVar28 >> 0x10);
        uVar29 = *(ulong *)(param_1 + 0x608);
        uVar38 = *(ulong *)(param_1 + 0x610);
        local_140[3] = NEON_fmadd((double)(int)(short)uVar28 + 0.5,uVar43,
                                  *(undefined8 *)(this + 0x9a0));
        local_140[2] = NEON_fmadd(dVar41 + -0.5,uVar43,*(undefined8 *)(this + 0x9b0));
        local_140[4] = NEON_fmadd(dVar42 + -0.5,uVar43,*(undefined8 *)(this + 0x9a8));
        uStack_f8 = NEON_fmadd((double)(int)(short)uVar28 + -0.5,uVar43,
                               *(undefined8 *)(this + 0x9a0));
        local_f0 = NEON_fmadd(dVar42 + 0.5,uVar43,*(undefined8 *)(this + 0x9a8));
        local_d0 = NEON_fmadd(dVar41 + 0.5,uVar43,*(undefined8 *)(this + 0x9b0));
        local_140[5] = local_140[2];
        local_100 = local_140[2];
        uStack_e8 = local_140[2];
        local_140[0] = uStack_f8;
        local_140[1] = local_140[4];
        local_110 = local_140[3];
        uStack_108 = local_f0;
        local_e0 = uStack_f8;
        uStack_d8 = local_140[4];
        local_b0 = local_140[3];
        uStack_a8 = local_f0;
        uStack_c8 = local_140[3];
        local_c0 = local_140[4];
        uStack_b8 = local_d0;
        local_a0 = local_d0;
        uStack_98 = uStack_f8;
        local_90 = local_f0;
        uStack_88 = local_d0;
        uVar39 = uVar29;
        lVar37 = 0;
        do {
          if (uVar39 == uVar38) {
            uVar34 = uVar38 * 2;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar34;
            uVar39 = uVar38 * 0x30 | 8;
            if (SUB168(auVar13 * ZEXT816(0x18),8) != 0) {
              uVar39 = 0xffffffffffffffff;
            }
            puVar27 = (ulong *)operator_new__(uVar39);
            pMVar40 = *(Mesh **)(param_1 + 0x600);
            __src = param_1;
            if (uVar38 != 0x40) {
              __src = pMVar40;
            }
            puVar36 = puVar27 + 1;
            *puVar27 = uVar34;
            memcpy(puVar36,__src,uVar38 * 0x18);
            uVar39 = uVar38;
            if (pMVar40 != (Mesh *)0x0) {
              operator_delete__(pMVar40 + -8);
              uVar39 = *(ulong *)(param_1 + 0x608);
            }
            *(ulong **)(param_1 + 0x600) = puVar36;
            *(ulong *)(param_1 + 0x610) = uVar34;
            uVar38 = uVar34;
          }
          else {
            puVar36 = *(ulong **)(param_1 + 0x600);
          }
          puVar27 = (ulong *)param_1;
          if (uVar38 != 0x40) {
            puVar27 = puVar36;
          }
          lVar11 = lVar37 + 0x18;
          puVar27 = puVar27 + uVar39 * 3;
          uVar39 = uVar39 + 1;
          uVar34 = *(ulong *)((long)local_140 + lVar37);
          *(ulong *)(param_1 + 0x608) = uVar39;
          *puVar27 = uVar34;
          puVar27[1] = *(ulong *)((long)local_140 + lVar37 + 8);
          puVar27[2] = *(ulong *)((long)local_140 + lVar37 + 0x10);
          lVar37 = lVar11;
        } while (lVar11 != 0xc0);
        uVar39 = *(ulong *)(param_1 + 0x920);
        uVar38 = *(ulong *)(param_1 + 0x928);
        if (uVar39 == uVar38) {
          uVar38 = uVar39 * 2;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar38;
          uVar34 = uVar39 * 0x18 + 8;
          if (SUB168(auVar14 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar39 * 0x18) {
            uVar34 = 0xffffffffffffffff;
          }
          puVar27 = (ulong *)operator_new__(uVar34);
          puVar35 = *ppuVar10;
          puVar36 = puVar27 + 1;
          *puVar27 = uVar38;
          puVar27 = puVar9;
          if (uVar39 != 0x40) {
            puVar27 = puVar35;
          }
          memcpy(puVar36,puVar27,uVar39 * 0xc);
          if (puVar35 != (ulong *)0x0) {
            operator_delete__(puVar35 + -1);
            uVar39 = *puVar8;
          }
          *(ulong **)(param_1 + 0x918) = puVar36;
          *(ulong *)(param_1 + 0x928) = uVar38;
        }
        else {
          puVar36 = *ppuVar10;
        }
        puVar27 = puVar9;
        if (uVar38 != 0x40) {
          puVar27 = puVar36;
        }
        piVar30 = (int *)((long)puVar27 + uVar39 * 0xc);
        uVar39 = uVar39 + 1;
        iVar33 = (int)uVar29;
        iVar1 = iVar33 + 2;
        iVar2 = iVar33 + 1;
        *puVar8 = uVar39;
        *piVar30 = iVar33;
        piVar30[1] = iVar1;
        piVar30[2] = iVar2;
        if (uVar39 == uVar38) {
          uVar29 = uVar38 * 2;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar29;
          uVar39 = uVar38 * 0x18 + 8;
          if (SUB168(auVar15 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar38 * 0x18) {
            uVar39 = 0xffffffffffffffff;
          }
          puVar27 = (ulong *)operator_new__(uVar39);
          puVar35 = *ppuVar10;
          puVar36 = puVar27 + 1;
          *puVar27 = uVar29;
          puVar27 = puVar9;
          if (uVar38 != 0x40) {
            puVar27 = puVar35;
          }
          memcpy(puVar36,puVar27,uVar38 * 0xc);
          uVar39 = uVar38;
          if (puVar35 != (ulong *)0x0) {
            operator_delete__(puVar35 + -1);
            uVar39 = *puVar8;
          }
          *(ulong **)(param_1 + 0x918) = puVar36;
          *(ulong *)(param_1 + 0x928) = uVar29;
          uVar38 = uVar29;
        }
        else {
          puVar36 = *ppuVar10;
        }
        uVar29 = uVar39 + 1;
        puVar27 = puVar9;
        if (uVar38 != 0x40) {
          puVar27 = puVar36;
        }
        piVar30 = (int *)((long)puVar27 + uVar39 * 0xc);
        iVar3 = iVar33 + 3;
        *puVar8 = uVar29;
        *piVar30 = iVar33;
        piVar30[1] = iVar3;
        piVar30[2] = iVar1;
        if (uVar29 == uVar38) {
          uVar34 = uVar38 * 2;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar34;
          uVar39 = uVar38 * 0x18 + 8;
          if (SUB168(auVar16 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar38 * 0x18) {
            uVar39 = 0xffffffffffffffff;
          }
          puVar27 = (ulong *)operator_new__(uVar39);
          puVar35 = *ppuVar10;
          puVar36 = puVar27 + 1;
          *puVar27 = uVar34;
          puVar27 = puVar9;
          if (uVar38 != 0x40) {
            puVar27 = puVar35;
          }
          memcpy(puVar36,puVar27,uVar38 * 0xc);
          uVar29 = uVar38;
          if (puVar35 != (ulong *)0x0) {
            operator_delete__(puVar35 + -1);
            uVar29 = *puVar8;
          }
          *(ulong **)(param_1 + 0x918) = puVar36;
          *(ulong *)(param_1 + 0x928) = uVar34;
          uVar38 = uVar34;
        }
        else {
          puVar36 = *ppuVar10;
        }
        uVar39 = uVar29 + 1;
        puVar27 = puVar9;
        if (uVar38 != 0x40) {
          puVar27 = puVar36;
        }
        piVar30 = (int *)((long)puVar27 + uVar29 * 0xc);
        iVar4 = iVar33 + 6;
        iVar5 = iVar33 + 4;
        iVar6 = iVar33 + 5;
        *puVar8 = uVar39;
        *piVar30 = iVar5;
        piVar30[1] = iVar6;
        piVar30[2] = iVar4;
        if (uVar39 == uVar38) {
          uVar29 = uVar38 * 2;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar29;
          uVar39 = uVar38 * 0x18 + 8;
          if (SUB168(auVar17 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar38 * 0x18) {
            uVar39 = 0xffffffffffffffff;
          }
          puVar27 = (ulong *)operator_new__(uVar39);
          puVar35 = *ppuVar10;
          puVar36 = puVar27 + 1;
          *puVar27 = uVar29;
          puVar27 = puVar9;
          if (uVar38 != 0x40) {
            puVar27 = puVar35;
          }
          memcpy(puVar36,puVar27,uVar38 * 0xc);
          uVar39 = uVar38;
          if (puVar35 != (ulong *)0x0) {
            operator_delete__(puVar35 + -1);
            uVar39 = *puVar8;
          }
          *(ulong **)(param_1 + 0x918) = puVar36;
          *(ulong *)(param_1 + 0x928) = uVar29;
          uVar38 = uVar29;
        }
        else {
          puVar36 = *ppuVar10;
        }
        uVar29 = uVar39 + 1;
        puVar27 = puVar9;
        if (uVar38 != 0x40) {
          puVar27 = puVar36;
        }
        piVar30 = (int *)((long)puVar27 + uVar39 * 0xc);
        iVar7 = iVar33 + 7;
        *puVar8 = uVar29;
        piVar30[2] = iVar7;
        *piVar30 = iVar5;
        piVar30[1] = iVar4;
        if (uVar29 == uVar38) {
          uVar34 = uVar38 * 2;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar34;
          uVar39 = uVar38 * 0x18 + 8;
          if (SUB168(auVar18 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar38 * 0x18) {
            uVar39 = 0xffffffffffffffff;
          }
          puVar27 = (ulong *)operator_new__(uVar39);
          puVar35 = *ppuVar10;
          puVar36 = puVar27 + 1;
          *puVar27 = uVar34;
          puVar27 = puVar9;
          if (uVar38 != 0x40) {
            puVar27 = puVar35;
          }
          memcpy(puVar36,puVar27,uVar38 * 0xc);
          uVar29 = uVar38;
          if (puVar35 != (ulong *)0x0) {
            operator_delete__(puVar35 + -1);
            uVar29 = *puVar8;
          }
          *(ulong **)(param_1 + 0x918) = puVar36;
          *(ulong *)(param_1 + 0x928) = uVar34;
          uVar38 = uVar34;
        }
        else {
          puVar36 = *ppuVar10;
        }
        uVar39 = uVar29 + 1;
        puVar27 = puVar9;
        if (uVar38 != 0x40) {
          puVar27 = puVar36;
        }
        piVar30 = (int *)((long)puVar27 + uVar29 * 0xc);
        *puVar8 = uVar39;
        *piVar30 = iVar7;
        piVar30[1] = iVar4;
        piVar30[2] = iVar1;
        if (uVar39 == uVar38) {
          uVar29 = uVar38 * 2;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar29;
          uVar39 = uVar38 * 0x18 + 8;
          if (SUB168(auVar19 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar38 * 0x18) {
            uVar39 = 0xffffffffffffffff;
          }
          puVar27 = (ulong *)operator_new__(uVar39);
          puVar35 = *ppuVar10;
          puVar36 = puVar27 + 1;
          *puVar27 = uVar29;
          puVar27 = puVar9;
          if (uVar38 != 0x40) {
            puVar27 = puVar35;
          }
          memcpy(puVar36,puVar27,uVar38 * 0xc);
          uVar39 = uVar38;
          if (puVar35 != (ulong *)0x0) {
            operator_delete__(puVar35 + -1);
            uVar39 = *puVar8;
          }
          *(ulong **)(param_1 + 0x918) = puVar36;
          *(ulong *)(param_1 + 0x928) = uVar29;
          uVar38 = uVar29;
        }
        else {
          puVar36 = *ppuVar10;
        }
        uVar29 = uVar39 + 1;
        puVar27 = puVar9;
        if (uVar38 != 0x40) {
          puVar27 = puVar36;
        }
        piVar30 = (int *)((long)puVar27 + uVar39 * 0xc);
        *puVar8 = uVar29;
        *piVar30 = iVar7;
        piVar30[1] = iVar1;
        piVar30[2] = iVar3;
        if (uVar29 == uVar38) {
          uVar34 = uVar38 * 2;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar34;
          uVar39 = uVar38 * 0x18 + 8;
          if (SUB168(auVar20 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar38 * 0x18) {
            uVar39 = 0xffffffffffffffff;
          }
          puVar27 = (ulong *)operator_new__(uVar39);
          puVar35 = *ppuVar10;
          puVar36 = puVar27 + 1;
          *puVar27 = uVar34;
          puVar27 = puVar9;
          if (uVar38 != 0x40) {
            puVar27 = puVar35;
          }
          memcpy(puVar36,puVar27,uVar38 * 0xc);
          uVar29 = uVar38;
          if (puVar35 != (ulong *)0x0) {
            operator_delete__(puVar35 + -1);
            uVar29 = *puVar8;
          }
          *(ulong **)(param_1 + 0x918) = puVar36;
          *(ulong *)(param_1 + 0x928) = uVar34;
          uVar38 = uVar34;
        }
        else {
          puVar36 = *ppuVar10;
        }
        uVar39 = uVar29 + 1;
        puVar27 = puVar9;
        if (uVar38 != 0x40) {
          puVar27 = puVar36;
        }
        piVar30 = (int *)((long)puVar27 + uVar29 * 0xc);
        *puVar8 = uVar39;
        *piVar30 = iVar5;
        piVar30[1] = iVar2;
        piVar30[2] = iVar6;
        if (uVar39 == uVar38) {
          uVar29 = uVar38 * 2;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar29;
          uVar39 = uVar38 * 0x18 + 8;
          if (SUB168(auVar21 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar38 * 0x18) {
            uVar39 = 0xffffffffffffffff;
          }
          puVar27 = (ulong *)operator_new__(uVar39);
          puVar35 = *ppuVar10;
          puVar36 = puVar27 + 1;
          *puVar27 = uVar29;
          puVar27 = puVar9;
          if (uVar38 != 0x40) {
            puVar27 = puVar35;
          }
          memcpy(puVar36,puVar27,uVar38 * 0xc);
          uVar39 = uVar38;
          if (puVar35 != (ulong *)0x0) {
            operator_delete__(puVar35 + -1);
            uVar39 = *puVar8;
          }
          *(ulong **)(param_1 + 0x918) = puVar36;
          *(ulong *)(param_1 + 0x928) = uVar29;
          uVar38 = uVar29;
        }
        else {
          puVar36 = *ppuVar10;
        }
        uVar29 = uVar39 + 1;
        puVar27 = puVar9;
        if (uVar38 != 0x40) {
          puVar27 = puVar36;
        }
        piVar30 = (int *)((long)puVar27 + uVar39 * 0xc);
        *puVar8 = uVar29;
        *piVar30 = iVar5;
        piVar30[1] = iVar33;
        piVar30[2] = iVar2;
        if (uVar29 == uVar38) {
          uVar34 = uVar38 * 2;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar34;
          uVar39 = uVar38 * 0x18 + 8;
          if (SUB168(auVar22 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar38 * 0x18) {
            uVar39 = 0xffffffffffffffff;
          }
          puVar27 = (ulong *)operator_new__(uVar39);
          puVar35 = *ppuVar10;
          puVar36 = puVar27 + 1;
          *puVar27 = uVar34;
          puVar27 = puVar9;
          if (uVar38 != 0x40) {
            puVar27 = puVar35;
          }
          memcpy(puVar36,puVar27,uVar38 * 0xc);
          uVar29 = uVar38;
          if (puVar35 != (ulong *)0x0) {
            operator_delete__(puVar35 + -1);
            uVar29 = *puVar8;
          }
          *(ulong **)(param_1 + 0x918) = puVar36;
          *(ulong *)(param_1 + 0x928) = uVar34;
          uVar38 = uVar34;
        }
        else {
          puVar36 = *ppuVar10;
        }
        uVar39 = uVar29 + 1;
        puVar27 = puVar9;
        if (uVar38 != 0x40) {
          puVar27 = puVar36;
        }
        piVar30 = (int *)((long)puVar27 + uVar29 * 0xc);
        *puVar8 = uVar39;
        *piVar30 = iVar4;
        piVar30[1] = iVar6;
        piVar30[2] = iVar2;
        if (uVar39 == uVar38) {
          uVar29 = uVar38 * 2;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar29;
          uVar39 = uVar38 * 0x18 + 8;
          if (SUB168(auVar23 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar38 * 0x18) {
            uVar39 = 0xffffffffffffffff;
          }
          puVar27 = (ulong *)operator_new__(uVar39);
          puVar35 = *ppuVar10;
          puVar36 = puVar27 + 1;
          *puVar27 = uVar29;
          puVar27 = puVar9;
          if (uVar38 != 0x40) {
            puVar27 = puVar35;
          }
          memcpy(puVar36,puVar27,uVar38 * 0xc);
          uVar39 = uVar38;
          if (puVar35 != (ulong *)0x0) {
            operator_delete__(puVar35 + -1);
            uVar39 = *puVar8;
          }
          *(ulong **)(param_1 + 0x918) = puVar36;
          *(ulong *)(param_1 + 0x928) = uVar29;
          uVar38 = uVar29;
        }
        else {
          puVar36 = *ppuVar10;
        }
        uVar29 = uVar39 + 1;
        puVar27 = puVar9;
        if (uVar38 != 0x40) {
          puVar27 = puVar36;
        }
        piVar30 = (int *)((long)puVar27 + uVar39 * 0xc);
        *puVar8 = uVar29;
        *piVar30 = iVar4;
        piVar30[1] = iVar2;
        piVar30[2] = iVar1;
        if (uVar29 == uVar38) {
          uVar34 = uVar38 * 2;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar34;
          uVar39 = uVar38 * 0x18 + 8;
          if (SUB168(auVar24 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar38 * 0x18) {
            uVar39 = 0xffffffffffffffff;
          }
          puVar27 = (ulong *)operator_new__(uVar39);
          puVar35 = *ppuVar10;
          puVar36 = puVar27 + 1;
          *puVar27 = uVar34;
          puVar27 = puVar9;
          if (uVar38 != 0x40) {
            puVar27 = puVar35;
          }
          memcpy(puVar36,puVar27,uVar38 * 0xc);
          uVar29 = uVar38;
          if (puVar35 != (ulong *)0x0) {
            operator_delete__(puVar35 + -1);
            uVar29 = *puVar8;
          }
          *(ulong **)(param_1 + 0x918) = puVar36;
          *(ulong *)(param_1 + 0x928) = uVar34;
          uVar38 = uVar34;
        }
        else {
          puVar36 = *ppuVar10;
        }
        uVar39 = uVar29 + 1;
        puVar27 = puVar9;
        if (uVar38 != 0x40) {
          puVar27 = puVar36;
        }
        piVar30 = (int *)((long)puVar27 + uVar29 * 0xc);
        *puVar8 = uVar39;
        *piVar30 = iVar7;
        piVar30[1] = iVar33;
        piVar30[2] = iVar5;
        if (uVar39 == uVar38) {
          uVar29 = uVar38 * 2;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar29;
          uVar39 = uVar38 * 0x18 + 8;
          if (SUB168(auVar25 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar38 * 0x18) {
            uVar39 = 0xffffffffffffffff;
          }
          puVar27 = (ulong *)operator_new__(uVar39);
          puVar35 = *ppuVar10;
          puVar36 = puVar27 + 1;
          *puVar27 = uVar29;
          puVar27 = puVar9;
          if (uVar38 != 0x40) {
            puVar27 = puVar35;
          }
          memcpy(puVar36,puVar27,uVar38 * 0xc);
          uVar39 = uVar38;
          if (puVar35 != (ulong *)0x0) {
            operator_delete__(puVar35 + -1);
            uVar39 = *puVar8;
          }
          *(ulong **)(param_1 + 0x918) = puVar36;
          *(ulong *)(param_1 + 0x928) = uVar29;
          uVar38 = uVar29;
        }
        else {
          puVar36 = *ppuVar10;
        }
        puVar27 = puVar9;
        if (uVar38 != 0x40) {
          puVar27 = puVar36;
        }
        piVar30 = (int *)((long)puVar27 + uVar39 * 0xc);
        *puVar8 = uVar39 + 1;
        *piVar30 = iVar7;
        piVar30[1] = iVar3;
        piVar30[2] = iVar33;
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 != lVar31);
  }
  if (*(long *)(lVar26 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


