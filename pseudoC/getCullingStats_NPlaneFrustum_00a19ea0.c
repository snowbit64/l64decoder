// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCullingStats<NPlaneFrustum>
// Entry Point: 00a19ea0
// Size: 780 bytes
// Signature: void __thiscall getCullingStats<NPlaneFrustum>(CullingGrid2D * this, NPlaneFrustum * param_1, Vector3 * param_2, float param_3, float param_4, uint * param_5, uint * param_6, uint * param_7, uint * param_8)


/* void CullingGrid2D::getCullingStats<NPlaneFrustum>(NPlaneFrustum const&, Vector3 const&, float,
   float, unsigned int&, unsigned int&, unsigned int&, unsigned int&) const */

void __thiscall
CullingGrid2D::getCullingStats<NPlaneFrustum>
          (CullingGrid2D *this,NPlaneFrustum *param_1,Vector3 *param_2,float param_3,float param_4,
          uint *param_5,uint *param_6,uint *param_7,uint *param_8)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_a8;
  float fStack_a4;
  undefined4 local_a0;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  fVar26 = param_3;
  if (param_3 <= param_4) {
    fVar26 = param_4;
  }
  *param_5 = 0;
  *param_6 = 0;
  *param_8 = 0;
  if (*(int *)(this + 0x10) != 0) {
    fVar17 = *(float *)(this + 0x24);
    fVar15 = *(float *)(this + 0x28);
    uVar4 = 0;
    do {
      lVar14 = *(long *)this;
      uVar12 = (ulong)uVar4;
      lVar13 = lVar14 + (ulong)uVar4 * 0x48;
      local_a8 = *(undefined4 *)(lVar13 + 0x38);
      local_a0 = *(undefined4 *)(lVar13 + 0x3c);
      local_b8 = *(float *)(lVar13 + 0x30);
      local_b0 = *(float *)(lVar13 + 0x34);
      *param_5 = *param_5 + 1;
      fStack_b4 = (fVar15 + fVar17) * 0.5;
      fStack_a4 = (fVar15 - fVar17) * 0.5;
      uVar3 = NPlaneFrustum::aabbInFrustumNonVirtual
                        (param_1,(Vector3 *)&local_b8,(Vector3 *)&local_a8);
      if ((uVar3 & 1) == 0) {
        uVar4 = *(uint *)(lVar14 + uVar12 * 0x48 + 0x44);
      }
      else {
        uVar3 = 0;
        fVar16 = *(float *)(param_2 + 8);
        fVar20 = *(float *)(lVar13 + 0x34) - fVar16;
        fVar18 = *(float *)param_2;
        fVar19 = *(float *)(lVar13 + 0x30) - fVar18;
        fVar19 = (float)NEON_fmadd(fVar19,fVar19,fVar20 * fVar20);
        do {
          fVar20 = (float)NEON_fmadd(fVar26,*(undefined4 *)(this + uVar3 * 4 + 0x34),
                                     *(undefined4 *)(lVar14 + uVar12 * 0x48 + 0x40));
          uVar5 = (uint)uVar3;
          if (fVar20 * fVar20 <= fVar19) {
            uVar5 = uVar5 + 1;
          }
          uVar3 = (ulong)uVar5;
        } while (fVar20 * fVar20 <= fVar19 && uVar5 < 2);
        uVar6 = 0;
        do {
          uVar1 = *(ushort *)(lVar14 + uVar12 * 0x48 + uVar6 * 0x10 + 8);
          uVar5 = (uint)uVar1;
          if (uVar6 < uVar3) {
            *param_8 = *param_8 + uVar5;
          }
          else {
            *param_6 = *param_6 + uVar5;
            if (uVar5 != 0) {
              uVar7 = 0;
              fVar19 = *(float *)(param_2 + 4);
              lVar13 = *(long *)(lVar14 + uVar12 * 0x48 + uVar6 * 0x10);
              do {
                lVar8 = lVar13 + uVar7 * 0x30;
                fVar21 = fVar18 - *(float *)(lVar8 + 0x20);
                fVar25 = fVar19 - *(float *)(lVar8 + 0x24);
                fVar23 = ABS(*(float *)(lVar8 + 0x2c));
                fVar24 = fVar16 - *(float *)(lVar8 + 0x28);
                fVar20 = param_4;
                if (0.0 <= *(float *)(lVar8 + 0x2c)) {
                  fVar20 = param_3;
                }
                uVar22 = NEON_fmadd(fVar25,fVar25,fVar21 * fVar21);
                fVar25 = (float)NEON_fmadd(*(undefined4 *)(lVar8 + 0x18),fVar20,fVar23);
                fVar21 = (float)NEON_fmadd(fVar24,fVar24,uVar22);
                if ((fVar21 < fVar25 * fVar25) &&
                   (fVar20 = (float)NEON_fnmsub(*(undefined4 *)(lVar8 + 0x1c),fVar20,fVar23),
                   (fVar20 < 0.0 || fVar21 != fVar20 * fVar20) &&
                   (fVar20 < 0.0 || fVar20 * fVar20 <= fVar21))) {
                  uVar5 = *(uint *)(param_1 + 0x10);
                  if (uVar5 == 0) {
LAB_00a1a064:
                    *param_7 = *param_7 + 1;
                  }
                  else {
                    lVar8 = lVar13 + uVar7 * 0x30;
                    puVar10 = *(undefined4 **)(param_1 + 8);
                    uVar22 = NEON_fmadd(*puVar10,*(undefined4 *)(lVar8 + 8),
                                        *(float *)(lVar8 + 0xc) * (float)puVar10[1]);
                    fVar20 = (float)NEON_fmadd(puVar10[2],*(undefined4 *)(lVar8 + 0x10),uVar22);
                    if (-*(float *)(lVar8 + 0x14) < (float)puVar10[3] + fVar20) {
                      uVar9 = 0;
                      pfVar11 = (float *)(puVar10 + 7);
                      do {
                        if ((ulong)uVar5 - 1 == uVar9) goto LAB_00a1a064;
                        uVar9 = uVar9 + 1;
                        uVar22 = NEON_fmadd(pfVar11[-3],*(undefined4 *)(lVar8 + 8),
                                            *(float *)(lVar8 + 0xc) * pfVar11[-2]);
                        fVar20 = (float)NEON_fmadd(pfVar11[-1],*(undefined4 *)(lVar8 + 0x10),uVar22)
                        ;
                        fVar21 = *pfVar11;
                        pfVar11 = pfVar11 + 4;
                      } while (-*(float *)(lVar8 + 0x14) < fVar21 + fVar20);
                      if (uVar5 <= uVar9) goto LAB_00a1a064;
                    }
                  }
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 != uVar1);
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != 3);
        uVar4 = uVar4 + 1;
      }
    } while (uVar4 < *(uint *)(this + 0x10));
  }
  if (*(long *)(lVar2 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


