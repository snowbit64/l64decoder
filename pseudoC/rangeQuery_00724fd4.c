// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rangeQuery
// Entry Point: 00724fd4
// Size: 864 bytes
// Signature: undefined __thiscall rangeQuery(DynamicAvoidance * this, DynamicObstacle * param_1, Vector2 * param_2, float param_3, Obstacle * * param_4, uint param_5)


/* DynamicAvoidance::rangeQuery(DynamicObstacle const&, Vector2 const&, float, Obstacle**, unsigned
   int) const */

void __thiscall
DynamicAvoidance::rangeQuery
          (DynamicAvoidance *this,DynamicObstacle *param_1,Vector2 *param_2,float param_3,
          Obstacle **param_4,uint param_5)

{
  Obstacle **ppOVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  Obstacle **ppOVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  uint uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  ulong local_c0 [4];
  long local_a0;
  
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
  StoppingPath::getCurrentOffsetPose
            (*(StoppingPath **)(param_1 + 0x20),(PlanarPose *)&local_d0,&fStack_f4);
  fVar18 = *(float *)(param_2 + 4);
  if ((long)(fVar18 / 14.14214) == 0) {
    uVar3 = 0;
  }
  else {
    fVar19 = *(float *)param_2;
    lVar9 = 0;
    uVar3 = 0;
    lVar6 = (long)(fVar19 / 14.14214);
    do {
      if (lVar6 != 0) {
        lVar5 = 0;
        uVar7 = *(ulong *)(this + 0x40);
        fVar24 = (float)(unkuint9)(lVar9 << 1 | 1) * 14.14214;
        do {
          uVar11 = 0;
          uVar8 = 0;
          local_e0 = 0x4162463041624630;
          local_d8 = 0;
          local_e8 = local_c8;
          uStack_e4 = uStack_c4;
          uVar17 = NEON_fmadd((float)(unkuint9)(lVar5 << 1 | 1),0x41624630,
                              (float)(int)(fVar19 / 14.14214) * -14.14214);
          uVar20 = NEON_fmsub(uStack_c4,uVar17,local_d0);
          uVar17 = NEON_fmadd(local_c8,uVar17,uStack_cc);
          local_f0 = (float)NEON_fmadd(local_c8,fVar24,uVar20);
          fStack_ec = (float)NEON_fmadd(uStack_c4,fVar24,uVar17);
          fVar21 = *(float *)this;
          do {
            fVar22 = 20.0;
            if ((uVar11 & 1) != 0) {
              fVar22 = -20.0;
            }
            fVar23 = 20.0;
            if ((uVar11 & 2) != 0) {
              fVar23 = -20.0;
            }
            uVar13 = ((long)((fStack_ec + fVar23) / fVar21) * 0x127409f ^
                     (long)((local_f0 + fVar22) / fVar21) * 0x70b209) & uVar7;
            if (uVar8 != 0) {
              uVar14 = (ulong)uVar8;
              puVar15 = local_c0;
              do {
                if (*puVar15 == uVar13) goto LAB_00725164;
                uVar14 = uVar14 - 1;
                puVar15 = puVar15 + 1;
              } while (uVar14 != 0);
            }
            local_c0[(int)uVar8] = uVar13;
            uVar8 = uVar8 + 1;
LAB_00725164:
            uVar11 = uVar11 + 1;
          } while (uVar11 != 4);
          if (uVar8 != 0) {
            uVar13 = 0;
            lVar10 = *(long *)(this + 0x20);
            do {
              uVar14 = local_c0[uVar13];
              uVar11 = *(uint *)(lVar10 + uVar14 * 8 + 4);
              if (uVar11 + 1 < 2) {
                uVar16 = 0;
              }
              else {
                uVar16 = 0;
                do {
                  uVar16 = uVar16 + 1;
                  uVar14 = uVar14 + 1 & uVar7;
                  uVar11 = *(uint *)(lVar10 + uVar14 * 8 + 4);
                } while ((uVar11 != 0xffffffff && uVar16 <= uVar11) &&
                         (uVar11 == 0xffffffff || uVar11 != uVar16));
              }
              uVar4 = uVar3;
              if (uVar11 == uVar16) {
                do {
                  ppOVar1 = (Obstacle **)
                            (*(long *)(this + 8) + (ulong)*(uint *)(lVar10 + uVar14 * 8) * 0x20);
                  uVar3 = uVar4;
                  if ((*ppOVar1 != (Obstacle *)param_1) &&
                     (uVar7 = Obstacle::overlaps(*ppOVar1,(OrientedBox *)&local_f0,param_3),
                     (uVar7 & 1) != 0)) {
                    uVar16 = (uint)uVar4;
                    if (uVar16 != 0) {
                      ppOVar12 = param_4;
                      uVar7 = uVar4;
                      do {
                        if (*ppOVar12 == *ppOVar1) goto LAB_0072524c;
                        uVar7 = uVar7 - 1;
                        ppOVar12 = ppOVar12 + 1;
                      } while (uVar7 != 0);
                    }
                    uVar3 = (ulong)param_5;
                    if (uVar16 != param_5) {
                      param_4[uVar4] = *ppOVar1;
                      uVar3 = (ulong)(uVar16 + 1);
                    }
                  }
LAB_0072524c:
                  uVar7 = *(ulong *)(this + 0x40);
                  lVar10 = *(long *)(this + 0x20);
                  uVar11 = uVar11 + 1;
                  uVar14 = uVar7 & uVar14 + 1;
                  uVar4 = uVar3;
                } while (*(uint *)(lVar10 + uVar14 * 8 + 4) == uVar11);
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar8);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 != lVar6);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != (long)(fVar18 / 14.14214));
  }
  if (*(long *)(lVar2 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


