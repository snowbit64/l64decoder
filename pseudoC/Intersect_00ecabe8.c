// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Intersect
// Entry Point: 00ecabe8
// Size: 1556 bytes
// Signature: undefined __thiscall Intersect(VoxelSet * this, Plane * param_1, SArray * param_2, SArray * param_3, ulong param_4)


/* VHACD::VoxelSet::Intersect(VHACD::Plane const&, VHACD::SArray<VHACD::Vec3<double>, 64ul>*,
   VHACD::SArray<VHACD::Vec3<double>, 64ul>*, unsigned long) const */

void __thiscall
VHACD::VoxelSet::Intersect
          (VoxelSet *this,Plane *param_1,SArray *param_2,SArray *param_3,ulong param_4)

{
  long lVar1;
  VoxelSet *pVVar2;
  SArray *pSVar3;
  int iVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  SArray *pSVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  ulong local_188;
  ulong local_180;
  ulong local_150 [6];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  
  lVar9 = tpidr_el0;
  local_90 = *(long *)(lVar9 + 0x28);
  lVar11 = *(long *)(this + 0xa08);
  if (lVar11 != 0) {
    dVar27 = *(double *)(this + 0x9b8);
    lVar13 = 0;
    local_188 = 0;
    local_180 = 0;
    dVar19 = dVar27;
    while( true ) {
      uVar23 = *(undefined8 *)(this + 0x9a8);
      uVar24 = *(undefined8 *)(this + 0x9a0);
      pVVar2 = this + 0x9c0;
      if (*(long *)(this + 0xa10) != 8) {
        pVVar2 = *(VoxelSet **)(this + 0xa00);
      }
      iVar4 = *(int *)(pVVar2 + lVar13 * 8);
      dVar22 = (double)(int)*(short *)((long)(pVVar2 + lVar13 * 8) + 4);
      dVar25 = (double)(iVar4 >> 0x10);
      dVar26 = (double)(int)(short)iVar4;
      dVar20 = (double)NEON_fmadd(dVar25,dVar19,uVar23);
      uVar28 = NEON_fmadd(dVar26,dVar19,uVar24);
      uVar21 = *(undefined8 *)(this + 0x9b0);
      uVar29 = NEON_fmadd(dVar22,dVar19,uVar21);
      uVar28 = NEON_fmadd(*(undefined8 *)param_1,uVar28,dVar20 * *(double *)(param_1 + 8));
      dVar20 = (double)NEON_fmadd(*(undefined8 *)(param_1 + 0x10),uVar29,uVar28);
      dVar20 = *(double *)(param_1 + 0x18) + dVar20;
      if (0.0 <= dVar20) {
        if (dVar20 <= dVar27) {
          uVar12 = *(ulong *)(param_2 + 0x608);
          uVar17 = *(ulong *)(param_2 + 0x610);
          local_150[1] = NEON_fmadd(dVar25 + -0.5,dVar19,uVar23);
          uStack_118 = NEON_fmadd(dVar25 + 0.5,dVar19,uVar23);
          local_150[0] = NEON_fmadd(dVar26 + -0.5,dVar19,uVar24);
          local_120 = NEON_fmadd(dVar26 + 0.5,dVar19,uVar24);
          local_150[2] = NEON_fmadd(dVar22 + -0.5,dVar19,uVar21);
          local_e0 = NEON_fmadd(dVar22 + 0.5,dVar19,uVar21);
          local_f0 = local_150[0];
          uStack_e8 = local_150[1];
          local_c0 = local_120;
          uStack_b8 = uStack_118;
          local_150[3] = local_120;
          local_150[4] = local_150[1];
          local_150[5] = local_150[2];
          local_110 = local_150[2];
          uStack_108 = local_150[0];
          local_100 = uStack_118;
          uStack_f8 = local_150[2];
          uStack_d8 = local_120;
          local_d0 = local_150[1];
          uStack_c8 = local_e0;
          local_b0 = local_e0;
          uStack_a8 = local_150[0];
          local_a0 = uStack_118;
          uStack_98 = local_e0;
          lVar18 = 0;
          do {
            if (uVar12 == uVar17) {
              uVar15 = uVar17 * 2;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar15;
              uVar12 = uVar17 * 0x30 | 8;
              if (SUB168(auVar8 * ZEXT816(0x18),8) != 0) {
                uVar12 = 0xffffffffffffffff;
              }
              puVar10 = (ulong *)operator_new__(uVar12);
              pSVar14 = *(SArray **)(param_2 + 0x600);
              pSVar3 = param_2;
              if (uVar17 != 0x40) {
                pSVar3 = pSVar14;
              }
              puVar16 = puVar10 + 1;
              *puVar10 = uVar15;
              memcpy(puVar16,pSVar3,uVar17 * 0x18);
              uVar12 = uVar17;
              if (pSVar14 != (SArray *)0x0) {
                operator_delete__(pSVar14 + -8);
                uVar12 = *(ulong *)(param_2 + 0x608);
              }
              *(ulong **)(param_2 + 0x600) = puVar16;
              *(ulong *)(param_2 + 0x610) = uVar15;
              uVar17 = uVar15;
            }
            else {
              puVar16 = *(ulong **)(param_2 + 0x600);
            }
            puVar10 = (ulong *)param_2;
            if (uVar17 != 0x40) {
              puVar10 = puVar16;
            }
            lVar1 = lVar18 + 0x18;
            puVar10 = puVar10 + uVar12 * 3;
            uVar12 = uVar12 + 1;
            uVar15 = *(ulong *)((long)local_150 + lVar18);
            *(ulong *)(param_2 + 0x608) = uVar12;
            *puVar10 = uVar15;
            puVar10[1] = *(ulong *)((long)local_150 + lVar18 + 8);
            puVar10[2] = *(ulong *)((long)local_150 + lVar18 + 0x10);
            lVar18 = lVar1;
          } while (lVar1 != 0xc0);
        }
        else {
          local_188 = local_188 + 1;
          if (local_188 == param_4) {
            uVar12 = *(ulong *)(param_2 + 0x608);
            uVar17 = *(ulong *)(param_2 + 0x610);
            local_150[1] = NEON_fmadd(dVar25 + -0.5,dVar19,uVar23);
            uStack_118 = NEON_fmadd(dVar25 + 0.5,dVar19,uVar23);
            local_150[0] = NEON_fmadd(dVar26 + -0.5,dVar19,uVar24);
            local_120 = NEON_fmadd(dVar26 + 0.5,dVar19,uVar24);
            local_150[2] = NEON_fmadd(dVar22 + -0.5,dVar19,uVar21);
            local_e0 = NEON_fmadd(dVar22 + 0.5,dVar19,uVar21);
            local_f0 = local_150[0];
            uStack_e8 = local_150[1];
            local_c0 = local_120;
            uStack_b8 = uStack_118;
            local_150[3] = local_120;
            local_150[4] = local_150[1];
            local_150[5] = local_150[2];
            local_110 = local_150[2];
            uStack_108 = local_150[0];
            local_100 = uStack_118;
            uStack_f8 = local_150[2];
            uStack_d8 = local_120;
            local_d0 = local_150[1];
            uStack_c8 = local_e0;
            local_b0 = local_e0;
            uStack_a8 = local_150[0];
            local_a0 = uStack_118;
            uStack_98 = local_e0;
            lVar18 = 0;
            do {
              if (uVar12 == uVar17) {
                uVar15 = uVar17 * 2;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar15;
                uVar12 = uVar17 * 0x30 | 8;
                if (SUB168(auVar6 * ZEXT816(0x18),8) != 0) {
                  uVar12 = 0xffffffffffffffff;
                }
                puVar10 = (ulong *)operator_new__(uVar12);
                pSVar14 = *(SArray **)(param_2 + 0x600);
                pSVar3 = param_2;
                if (uVar17 != 0x40) {
                  pSVar3 = pSVar14;
                }
                puVar16 = puVar10 + 1;
                *puVar10 = uVar15;
                memcpy(puVar16,pSVar3,uVar17 * 0x18);
                uVar12 = uVar17;
                if (pSVar14 != (SArray *)0x0) {
                  operator_delete__(pSVar14 + -8);
                  uVar12 = *(ulong *)(param_2 + 0x608);
                }
                *(ulong **)(param_2 + 0x600) = puVar16;
                *(ulong *)(param_2 + 0x610) = uVar15;
                uVar17 = uVar15;
              }
              else {
                puVar16 = *(ulong **)(param_2 + 0x600);
              }
              puVar10 = (ulong *)param_2;
              if (uVar17 != 0x40) {
                puVar10 = puVar16;
              }
              lVar1 = lVar18 + 0x18;
              puVar10 = puVar10 + uVar12 * 3;
              uVar12 = uVar12 + 1;
              uVar15 = *(ulong *)((long)local_150 + lVar18);
              *(ulong *)(param_2 + 0x608) = uVar12;
              *puVar10 = uVar15;
              puVar10[1] = *(ulong *)((long)local_150 + lVar18 + 8);
              puVar10[2] = *(ulong *)((long)local_150 + lVar18 + 0x10);
              lVar18 = lVar1;
            } while (lVar1 != 0xc0);
            local_188 = 0;
          }
        }
      }
      else if (-dVar20 <= dVar27) {
        uVar12 = *(ulong *)(param_3 + 0x608);
        uVar17 = *(ulong *)(param_3 + 0x610);
        local_150[1] = NEON_fmadd(dVar25 + -0.5,dVar19,uVar23);
        uStack_118 = NEON_fmadd(dVar25 + 0.5,dVar19,uVar23);
        local_150[0] = NEON_fmadd(dVar26 + -0.5,dVar19,uVar24);
        local_120 = NEON_fmadd(dVar26 + 0.5,dVar19,uVar24);
        local_150[2] = NEON_fmadd(dVar22 + -0.5,dVar19,uVar21);
        local_e0 = NEON_fmadd(dVar22 + 0.5,dVar19,uVar21);
        local_f0 = local_150[0];
        uStack_e8 = local_150[1];
        local_c0 = local_120;
        uStack_b8 = uStack_118;
        local_150[3] = local_120;
        local_150[4] = local_150[1];
        local_150[5] = local_150[2];
        local_110 = local_150[2];
        uStack_108 = local_150[0];
        local_100 = uStack_118;
        uStack_f8 = local_150[2];
        uStack_d8 = local_120;
        local_d0 = local_150[1];
        uStack_c8 = local_e0;
        local_b0 = local_e0;
        uStack_a8 = local_150[0];
        local_a0 = uStack_118;
        uStack_98 = local_e0;
        lVar18 = 0;
        do {
          if (uVar12 == uVar17) {
            uVar15 = uVar17 * 2;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar15;
            uVar12 = uVar17 * 0x30 | 8;
            if (SUB168(auVar7 * ZEXT816(0x18),8) != 0) {
              uVar12 = 0xffffffffffffffff;
            }
            puVar10 = (ulong *)operator_new__(uVar12);
            pSVar14 = *(SArray **)(param_3 + 0x600);
            pSVar3 = param_3;
            if (uVar17 != 0x40) {
              pSVar3 = pSVar14;
            }
            puVar16 = puVar10 + 1;
            *puVar10 = uVar15;
            memcpy(puVar16,pSVar3,uVar17 * 0x18);
            uVar12 = uVar17;
            if (pSVar14 != (SArray *)0x0) {
              operator_delete__(pSVar14 + -8);
              uVar12 = *(ulong *)(param_3 + 0x608);
            }
            *(ulong **)(param_3 + 0x600) = puVar16;
            *(ulong *)(param_3 + 0x610) = uVar15;
            uVar17 = uVar15;
          }
          else {
            puVar16 = *(ulong **)(param_3 + 0x600);
          }
          puVar10 = (ulong *)param_3;
          if (uVar17 != 0x40) {
            puVar10 = puVar16;
          }
          lVar1 = lVar18 + 0x18;
          puVar10 = puVar10 + uVar12 * 3;
          uVar12 = uVar12 + 1;
          uVar15 = *(ulong *)((long)local_150 + lVar18);
          *(ulong *)(param_3 + 0x608) = uVar12;
          *puVar10 = uVar15;
          puVar10[1] = *(ulong *)((long)local_150 + lVar18 + 8);
          puVar10[2] = *(ulong *)((long)local_150 + lVar18 + 0x10);
          lVar18 = lVar1;
        } while (lVar1 != 0xc0);
      }
      else {
        local_180 = local_180 + 1;
        if (local_180 == param_4) {
          uVar12 = *(ulong *)(param_3 + 0x608);
          uVar17 = *(ulong *)(param_3 + 0x610);
          local_150[1] = NEON_fmadd(dVar25 + -0.5,dVar19,uVar23);
          uStack_118 = NEON_fmadd(dVar25 + 0.5,dVar19,uVar23);
          local_150[0] = NEON_fmadd(dVar26 + -0.5,dVar19,uVar24);
          local_120 = NEON_fmadd(dVar26 + 0.5,dVar19,uVar24);
          local_150[2] = NEON_fmadd(dVar22 + -0.5,dVar19,uVar21);
          local_e0 = NEON_fmadd(dVar22 + 0.5,dVar19,uVar21);
          local_f0 = local_150[0];
          uStack_e8 = local_150[1];
          local_c0 = local_120;
          uStack_b8 = uStack_118;
          local_150[3] = local_120;
          local_150[4] = local_150[1];
          local_150[5] = local_150[2];
          local_110 = local_150[2];
          uStack_108 = local_150[0];
          local_100 = uStack_118;
          uStack_f8 = local_150[2];
          uStack_d8 = local_120;
          local_d0 = local_150[1];
          uStack_c8 = local_e0;
          local_b0 = local_e0;
          uStack_a8 = local_150[0];
          local_a0 = uStack_118;
          uStack_98 = local_e0;
          lVar18 = 0;
          do {
            if (uVar12 == uVar17) {
              uVar15 = uVar17 * 2;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar15;
              uVar12 = uVar17 * 0x30 | 8;
              if (SUB168(auVar5 * ZEXT816(0x18),8) != 0) {
                uVar12 = 0xffffffffffffffff;
              }
              puVar10 = (ulong *)operator_new__(uVar12);
              pSVar14 = *(SArray **)(param_3 + 0x600);
              pSVar3 = param_3;
              if (uVar17 != 0x40) {
                pSVar3 = pSVar14;
              }
              puVar16 = puVar10 + 1;
              *puVar10 = uVar15;
              memcpy(puVar16,pSVar3,uVar17 * 0x18);
              uVar12 = uVar17;
              if (pSVar14 != (SArray *)0x0) {
                operator_delete__(pSVar14 + -8);
                uVar12 = *(ulong *)(param_3 + 0x608);
              }
              *(ulong **)(param_3 + 0x600) = puVar16;
              *(ulong *)(param_3 + 0x610) = uVar15;
              uVar17 = uVar15;
            }
            else {
              puVar16 = *(ulong **)(param_3 + 0x600);
            }
            puVar10 = (ulong *)param_3;
            if (uVar17 != 0x40) {
              puVar10 = puVar16;
            }
            lVar1 = lVar18 + 0x18;
            puVar10 = puVar10 + uVar12 * 3;
            uVar12 = uVar12 + 1;
            uVar15 = *(ulong *)((long)local_150 + lVar18);
            *(ulong *)(param_3 + 0x608) = uVar12;
            *puVar10 = uVar15;
            puVar10[1] = *(ulong *)((long)local_150 + lVar18 + 8);
            puVar10[2] = *(ulong *)((long)local_150 + lVar18 + 0x10);
            lVar18 = lVar1;
          } while (lVar1 != 0xc0);
          local_180 = 0;
        }
      }
      lVar13 = lVar13 + 1;
      if (lVar13 == lVar11) break;
      dVar19 = *(double *)(this + 0x9b8);
    }
  }
  if (*(long *)(lVar9 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


