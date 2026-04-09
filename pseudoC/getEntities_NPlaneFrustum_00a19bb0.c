// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEntities<NPlaneFrustum>
// Entry Point: 00a19bb0
// Size: 752 bytes
// Signature: uint __thiscall getEntities<NPlaneFrustum>(CullingGrid2D * this, NPlaneFrustum * param_1, Vector3 * param_2, float param_3, float param_4, CullingResult * param_5, uint param_6)


/* unsigned int CullingGrid2D::getEntities<NPlaneFrustum>(NPlaneFrustum const&, Vector3 const&,
   float, float, CullingGrid2D::CullingResult*, unsigned int) const */

uint __thiscall
CullingGrid2D::getEntities<NPlaneFrustum>
          (CullingGrid2D *this,NPlaneFrustum *param_1,Vector3 *param_2,float param_3,float param_4,
          CullingResult *param_5,uint param_6)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  float *pfVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_a8;
  float fStack_a4;
  undefined4 local_a0;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  fVar23 = param_3;
  if (param_3 <= param_4) {
    fVar23 = param_4;
  }
  if (*(int *)(this + 0x10) == 0) {
    uVar12 = 0;
  }
  else {
    fVar19 = *(float *)(this + 0x24);
    fVar16 = *(float *)(this + 0x28);
    uVar12 = 0;
    uVar3 = 0;
    do {
      lVar15 = *(long *)this;
      uVar13 = (ulong)uVar3;
      lVar14 = lVar15 + (ulong)uVar3 * 0x48;
      local_a8 = *(undefined4 *)(lVar14 + 0x38);
      local_a0 = *(undefined4 *)(lVar14 + 0x3c);
      local_b8 = *(float *)(lVar14 + 0x30);
      local_b0 = *(float *)(lVar14 + 0x34);
      fStack_b4 = (fVar16 + fVar19) * 0.5;
      fStack_a4 = (fVar16 - fVar19) * 0.5;
      uVar2 = NPlaneFrustum::aabbInFrustumNonVirtual
                        (param_1,(Vector3 *)&local_b8,(Vector3 *)&local_a8);
      if ((uVar2 & 1) == 0) {
        uVar3 = *(uint *)(lVar15 + uVar13 * 0x48 + 0x44);
      }
      else {
        uVar2 = 0;
        fVar17 = *(float *)(lVar14 + 0x34) - *(float *)(param_2 + 8);
        fVar20 = *(float *)(lVar14 + 0x30) - *(float *)param_2;
        fVar17 = (float)NEON_fmadd(fVar20,fVar20,fVar17 * fVar17);
        do {
          fVar20 = (float)NEON_fmadd(fVar23,*(undefined4 *)(this + uVar2 * 4 + 0x34),
                                     *(undefined4 *)(lVar15 + uVar13 * 0x48 + 0x40));
          uVar4 = (uint)uVar2;
          if (fVar20 * fVar20 <= fVar17) {
            uVar4 = uVar4 + 1;
          }
          uVar2 = (ulong)uVar4;
        } while (fVar20 * fVar20 <= fVar17 && uVar4 < 2);
        do {
          uVar5 = (ulong)*(ushort *)(lVar15 + uVar13 * 0x48 + uVar2 * 0x10 + 8);
          if (uVar5 != 0) {
            uVar4 = *(uint *)(param_1 + 0x10);
            uVar6 = 0;
            lVar14 = *(long *)(lVar15 + uVar13 * 0x48 + uVar2 * 0x10);
            do {
              lVar7 = lVar14 + uVar6 * 0x30;
              fVar20 = *(float *)param_2 - *(float *)(lVar7 + 0x20);
              fVar22 = *(float *)(param_2 + 4) - *(float *)(lVar7 + 0x24);
              fVar21 = ABS(*(float *)(lVar7 + 0x2c));
              fVar17 = param_4;
              if (0.0 <= *(float *)(lVar7 + 0x2c)) {
                fVar17 = param_3;
              }
              uVar18 = NEON_fmadd(fVar22,fVar22,fVar20 * fVar20);
              fVar22 = (float)NEON_fmadd(*(undefined4 *)(lVar7 + 0x18),fVar17,fVar21);
              fVar20 = *(float *)(param_2 + 8) - *(float *)(lVar7 + 0x28);
              fVar20 = (float)NEON_fmadd(fVar20,fVar20,uVar18);
              if ((fVar20 < fVar22 * fVar22) &&
                 (fVar17 = (float)NEON_fnmsub(*(undefined4 *)(lVar7 + 0x1c),fVar17,fVar21),
                 (fVar17 < 0.0 || fVar20 != fVar17 * fVar17) &&
                 (fVar17 < 0.0 || fVar17 * fVar17 <= fVar20))) {
                if (uVar4 == 0) {
LAB_00a19e2c:
                  if (uVar12 < param_6) {
                    uVar9 = *(undefined8 *)(lVar14 + uVar6 * 0x30);
                    *(float *)((long)(param_5 + (ulong)uVar12 * 0x10) + 8) = fVar20;
                    *(undefined8 *)(param_5 + (ulong)uVar12 * 0x10) = uVar9;
                  }
                  uVar12 = uVar12 + 1;
                }
                else {
                  lVar7 = lVar14 + uVar6 * 0x30;
                  puVar10 = *(undefined4 **)(param_1 + 8);
                  uVar18 = NEON_fmadd(*puVar10,*(undefined4 *)(lVar7 + 8),
                                      *(float *)(lVar7 + 0xc) * (float)puVar10[1]);
                  fVar17 = (float)NEON_fmadd(puVar10[2],*(undefined4 *)(lVar7 + 0x10),uVar18);
                  if (-*(float *)(lVar7 + 0x14) < (float)puVar10[3] + fVar17) {
                    uVar8 = 0;
                    pfVar11 = (float *)(puVar10 + 7);
                    do {
                      if ((ulong)uVar4 - 1 == uVar8) goto LAB_00a19e2c;
                      uVar8 = uVar8 + 1;
                      uVar18 = NEON_fmadd(pfVar11[-3],*(undefined4 *)(lVar7 + 8),
                                          *(float *)(lVar7 + 0xc) * pfVar11[-2]);
                      fVar17 = (float)NEON_fmadd(pfVar11[-1],*(undefined4 *)(lVar7 + 0x10),uVar18);
                      fVar21 = *pfVar11;
                      pfVar11 = pfVar11 + 4;
                    } while (-*(float *)(lVar7 + 0x14) < fVar21 + fVar17);
                    if (uVar4 <= uVar8) goto LAB_00a19e2c;
                  }
                }
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 != uVar5);
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != 3);
        uVar3 = uVar3 + 1;
      }
    } while (uVar3 < *(uint *)(this + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


