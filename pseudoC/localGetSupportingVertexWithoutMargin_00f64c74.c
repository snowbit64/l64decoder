// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertexWithoutMargin
// Entry Point: 00f64c74
// Size: 572 bytes
// Signature: undefined __thiscall localGetSupportingVertexWithoutMargin(btPolyhedralConvexShape * this, btVector3 * param_1)


/* btPolyhedralConvexShape::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

float __thiscall
btPolyhedralConvexShape::localGetSupportingVertexWithoutMargin
          (btPolyhedralConvexShape *this,btVector3 *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_8a8 [512];
  long local_a8;
  
  lVar2 = tpidr_el0;
  fVar15 = 0.0;
  local_a8 = *(long *)(lVar2 + 0x28);
  fVar16 = 0.0;
  fVar14 = 0.0;
  fVar17 = 1.0;
  fVar9 = *(float *)param_1;
  fVar10 = *(float *)(param_1 + 4);
  uVar12 = NEON_fmadd(fVar10,fVar10,fVar9 * fVar9);
  fVar11 = *(float *)(param_1 + 8);
  fVar13 = (float)NEON_fmadd(fVar11,fVar11,uVar12);
  if (0.0001 <= fVar13) {
    fVar14 = 1.0 / SQRT(fVar13);
    fVar17 = fVar14 * fVar9;
    fVar16 = fVar14 * fVar10;
    fVar14 = fVar14 * fVar11;
  }
  iVar3 = (**(code **)(*(long *)this + 0xc0))(this);
  if (0 < iVar3) {
    fVar9 = -1e+18;
    fVar15 = 0.0;
    iVar3 = 0;
    do {
      iVar4 = (**(code **)(*(long *)this + 0xc0))(this);
      if (iVar4 - iVar3 < 0x80) {
        iVar4 = (**(code **)(*(long *)this + 0xc0))(this);
        uVar5 = iVar4 - iVar3;
        if (0 < (int)uVar5) goto LAB_00f64dc4;
        lVar6 = -1;
        fVar11 = -3.402823e+38;
        if (fVar9 < -3.402823e+38) goto LAB_00f64e48;
      }
      else {
        uVar5 = 0x80;
LAB_00f64dc4:
        uVar8 = 0;
        pfVar7 = local_8a8;
        do {
          (**(code **)(*(long *)this + 0xd8))(this,uVar8 & 0xffffffff,pfVar7);
          uVar8 = uVar8 + 1;
          pfVar7 = pfVar7 + 4;
        } while (uVar5 != uVar8);
        lVar6 = 0;
        pfVar7 = local_8a8 + 2;
        fVar10 = -3.402823e+38;
        iVar4 = -1;
        do {
          uVar12 = NEON_fmadd(pfVar7[-1],fVar16,pfVar7[-2] * fVar17);
          fVar11 = (float)NEON_fmadd(*pfVar7,fVar14,uVar12);
          iVar1 = (int)lVar6;
          if (fVar11 <= fVar10) {
            iVar1 = iVar4;
          }
          lVar6 = lVar6 + 1;
          pfVar7 = pfVar7 + 4;
          fVar10 = fVar11;
          iVar4 = iVar1;
        } while ((int)uVar5 != lVar6);
        lVar6 = (long)iVar1;
        if (fVar9 < fVar11) {
LAB_00f64e48:
          fVar15 = local_8a8[lVar6 * 4];
          fVar9 = fVar11;
        }
      }
      iVar3 = iVar3 + 0x80;
      iVar4 = (**(code **)(*(long *)this + 0xc0))(this);
    } while (iVar3 < iVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_a8) {
    return fVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


