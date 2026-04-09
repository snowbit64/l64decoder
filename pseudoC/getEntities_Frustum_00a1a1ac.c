// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEntities<Frustum>
// Entry Point: 00a1a1ac
// Size: 664 bytes
// Signature: uint __thiscall getEntities<Frustum>(CullingGrid2D * this, Frustum * param_1, Vector3 * param_2, float param_3, float param_4, CullingResult * param_5, uint param_6)


/* unsigned int CullingGrid2D::getEntities<Frustum>(Frustum const&, Vector3 const&, float, float,
   CullingGrid2D::CullingResult*, unsigned int) const */

uint __thiscall
CullingGrid2D::getEntities<Frustum>
          (CullingGrid2D *this,Frustum *param_1,Vector3 *param_2,float param_3,float param_4,
          CullingResult *param_5,uint param_6)

{
  long *plVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_a8;
  float fStack_a4;
  undefined4 local_a0;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  fVar21 = param_3;
  if (param_3 <= param_4) {
    fVar21 = param_4;
  }
  if (*(int *)(this + 0x10) == 0) {
    uVar10 = 0;
  }
  else {
    fVar17 = *(float *)(this + 0x24);
    fVar15 = *(float *)(this + 0x28);
    uVar10 = 0;
    uVar6 = 0;
    do {
      lVar13 = *(long *)this;
      uVar7 = (ulong)uVar6;
      lVar8 = lVar13 + (ulong)uVar6 * 0x48;
      local_a8 = *(undefined4 *)(lVar8 + 0x38);
      local_a0 = *(undefined4 *)(lVar8 + 0x3c);
      local_b8 = *(float *)(lVar8 + 0x30);
      local_b0 = *(float *)(lVar8 + 0x34);
      fStack_b4 = (fVar15 + fVar17) * 0.5;
      fStack_a4 = (fVar15 - fVar17) * 0.5;
      uVar4 = Frustum::aabbInFrustumNonVirtual(param_1,(Vector3 *)&local_b8,(Vector3 *)&local_a8);
      if ((uVar4 & 1) == 0) {
        uVar6 = *(uint *)(lVar13 + uVar7 * 0x48 + 0x44);
      }
      else {
        uVar4 = 0;
        fVar16 = *(float *)(lVar8 + 0x34) - *(float *)(param_2 + 8);
        fVar18 = *(float *)(lVar8 + 0x30) - *(float *)param_2;
        fVar16 = (float)NEON_fmadd(fVar18,fVar18,fVar16 * fVar16);
        do {
          fVar18 = (float)NEON_fmadd(fVar21,*(undefined4 *)(this + uVar4 * 4 + 0x34),
                                     *(undefined4 *)(lVar13 + uVar7 * 0x48 + 0x40));
          uVar11 = (uint)uVar4;
          if (fVar18 * fVar18 <= fVar16) {
            uVar11 = uVar11 + 1;
          }
          uVar4 = (ulong)uVar11;
        } while (fVar18 * fVar18 <= fVar16 && uVar11 < 2);
        do {
          plVar1 = (long *)(lVar13 + uVar7 * 0x48 + uVar4 * 0x10);
          plVar12 = plVar1 + 1;
          if (*(ushort *)plVar12 != 0) {
            uVar9 = 0;
            lVar8 = 0x2c;
            do {
              lVar14 = *plVar1;
              pfVar2 = (float *)(lVar14 + lVar8);
              fVar16 = param_4;
              if (0.0 <= *pfVar2) {
                fVar16 = param_3;
              }
              fVar18 = ABS(*pfVar2);
              uVar19 = NEON_fmadd(*(float *)(param_2 + 4) - pfVar2[-2],
                                  *(float *)(param_2 + 4) - pfVar2[-2],
                                  (*(float *)param_2 - pfVar2[-3]) *
                                  (*(float *)param_2 - pfVar2[-3]));
              fVar20 = (float)NEON_fmadd(pfVar2[-5],fVar16,fVar18);
              fVar22 = (float)NEON_fmadd(*(float *)(param_2 + 8) - pfVar2[-1],
                                         *(float *)(param_2 + 8) - pfVar2[-1],uVar19);
              if (((fVar22 < fVar20 * fVar20) &&
                  (fVar16 = (float)NEON_fnmsub(pfVar2[-4],fVar16,fVar18),
                  (fVar16 < 0.0 || fVar22 != fVar16 * fVar16) &&
                  (fVar16 < 0.0 || fVar16 * fVar16 <= fVar22))) &&
                 (uVar5 = Frustum::sphereInFrustumNonVirtual
                                    (param_1,(Vector3 *)(lVar14 + lVar8 + -0x24),
                                     *(float *)(lVar14 + lVar8 + -0x18)), (uVar5 & 1) != 0)) {
                if (uVar10 < param_6) {
                  *(undefined8 *)(param_5 + (ulong)uVar10 * 0x10) =
                       *(undefined8 *)(lVar14 + lVar8 + -0x2c);
                  *(float *)((long)(param_5 + (ulong)uVar10 * 0x10) + 8) = fVar22;
                }
                uVar10 = uVar10 + 1;
              }
              uVar9 = uVar9 + 1;
              lVar8 = lVar8 + 0x30;
            } while (uVar9 < *(ushort *)plVar12);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != 3);
        uVar6 = uVar6 + 1;
      }
    } while (uVar6 < *(uint *)(this + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


