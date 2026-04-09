// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCullingStats<Frustum>
// Entry Point: 00a1a444
// Size: 700 bytes
// Signature: void __thiscall getCullingStats<Frustum>(CullingGrid2D * this, Frustum * param_1, Vector3 * param_2, float param_3, float param_4, uint * param_5, uint * param_6, uint * param_7, uint * param_8)


/* void CullingGrid2D::getCullingStats<Frustum>(Frustum const&, Vector3 const&, float, float,
   unsigned int&, unsigned int&, unsigned int&, unsigned int&) const */

void __thiscall
CullingGrid2D::getCullingStats<Frustum>
          (CullingGrid2D *this,Frustum *param_1,Vector3 *param_2,float param_3,float param_4,
          uint *param_5,uint *param_6,uint *param_7,uint *param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ushort *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_a8;
  float fStack_a4;
  undefined4 local_a0;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  fVar21 = param_3;
  if (param_3 <= param_4) {
    fVar21 = param_4;
  }
  *param_5 = 0;
  *param_6 = 0;
  *param_8 = 0;
  if (*(int *)(this + 0x10) != 0) {
    fVar17 = *(float *)(this + 0x24);
    fVar14 = *(float *)(this + 0x28);
    uVar5 = 0;
    do {
      lVar12 = *(long *)this;
      uVar11 = (ulong)uVar5;
      lVar7 = lVar12 + (ulong)uVar5 * 0x48;
      local_a8 = *(undefined4 *)(lVar7 + 0x38);
      local_a0 = *(undefined4 *)(lVar7 + 0x3c);
      local_b8 = *(float *)(lVar7 + 0x30);
      local_b0 = *(float *)(lVar7 + 0x34);
      *param_5 = *param_5 + 1;
      fStack_b4 = (fVar14 + fVar17) * 0.5;
      fStack_a4 = (fVar14 - fVar17) * 0.5;
      uVar3 = Frustum::aabbInFrustumNonVirtual(param_1,(Vector3 *)&local_b8,(Vector3 *)&local_a8);
      if ((uVar3 & 1) == 0) {
        uVar5 = *(uint *)(lVar12 + uVar11 * 0x48 + 0x44);
      }
      else {
        uVar3 = 0;
        fVar15 = *(float *)(lVar7 + 0x34) - *(float *)(param_2 + 8);
        fVar18 = *(float *)(lVar7 + 0x30) - *(float *)param_2;
        fVar15 = (float)NEON_fmadd(fVar18,fVar18,fVar15 * fVar15);
        do {
          fVar18 = (float)NEON_fmadd(fVar21,*(undefined4 *)(this + uVar3 * 4 + 0x34),
                                     *(undefined4 *)(lVar12 + uVar11 * 0x48 + 0x40));
          uVar9 = (uint)uVar3;
          if (fVar18 * fVar18 <= fVar15) {
            uVar9 = uVar9 + 1;
          }
          uVar3 = (ulong)uVar9;
        } while (fVar18 * fVar18 <= fVar15 && uVar9 < 2);
        uVar13 = 0;
        do {
          puVar8 = (ushort *)(lVar12 + uVar11 * 0x48 + uVar13 * 0x10 + 8);
          uVar9 = (uint)*puVar8;
          if (uVar13 < uVar3) {
            *param_8 = *param_8 + uVar9;
          }
          else {
            *param_6 = *param_6 + uVar9;
            if (uVar9 != 0) {
              lVar7 = 0;
              uVar10 = 0;
              do {
                lVar6 = *(long *)(lVar12 + uVar11 * 0x48 + uVar13 * 0x10);
                lVar1 = lVar6 + lVar7;
                fVar18 = *(float *)param_2 - *(float *)(lVar1 + 0x20);
                fVar20 = *(float *)(param_2 + 4) - *(float *)(lVar1 + 0x24);
                fVar19 = ABS(*(float *)(lVar1 + 0x2c));
                fVar15 = param_4;
                if (0.0 <= *(float *)(lVar1 + 0x2c)) {
                  fVar15 = param_3;
                }
                uVar16 = NEON_fmadd(fVar20,fVar20,fVar18 * fVar18);
                fVar20 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x18),fVar15,fVar19);
                fVar18 = *(float *)(param_2 + 8) - *(float *)(lVar1 + 0x28);
                fVar18 = (float)NEON_fmadd(fVar18,fVar18,uVar16);
                if (((fVar18 < fVar20 * fVar20) &&
                    (fVar15 = (float)NEON_fnmsub(*(undefined4 *)(lVar1 + 0x1c),fVar15,fVar19),
                    (fVar15 < 0.0 || fVar18 != fVar15 * fVar15) &&
                    (fVar15 < 0.0 || fVar15 * fVar15 <= fVar18))) &&
                   (lVar6 = lVar6 + lVar7,
                   uVar4 = Frustum::sphereInFrustumNonVirtual
                                     (param_1,(Vector3 *)(lVar6 + 8),*(float *)(lVar6 + 0x14)),
                   (uVar4 & 1) != 0)) {
                  *param_7 = *param_7 + 1;
                }
                uVar10 = uVar10 + 1;
                lVar7 = lVar7 + 0x30;
              } while (uVar10 < *puVar8);
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != 3);
        uVar5 = uVar5 + 1;
      }
    } while (uVar5 < *(uint *)(this + 0x10));
  }
  if (*(long *)(lVar2 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


