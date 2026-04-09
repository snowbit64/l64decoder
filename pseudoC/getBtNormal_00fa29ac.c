// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBtNormal
// Entry Point: 00fa29ac
// Size: 256 bytes
// Signature: undefined __thiscall getBtNormal(btConvexHullInternal * this, Face * param_1)


/* btConvexHullInternal::getBtNormal(btConvexHullInternal::Face*) */

float __thiscall btConvexHullInternal::getBtNormal(btConvexHullInternal *this,Face *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_28 [4];
  long local_18;
  
  lVar4 = tpidr_el0;
  local_18 = *(long *)(lVar4 + 0x28);
  iVar8 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(this + 0xa8);
  iVar2 = *(int *)(this + 0xb0);
  iVar10 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(this + 0xa4);
  fVar17 = *(float *)this;
  fVar15 = *(float *)(this + 4);
  local_28[iVar1] = (float)*(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x38);
  iVar12 = *(int *)(param_1 + 0x3c);
  local_28[iVar2] = (float)iVar8;
  iVar8 = *(int *)(param_1 + 0x40);
  local_28[iVar3] = (float)iVar10;
  fVar13 = local_28[2];
  fVar14 = local_28[1];
  fVar7 = local_28[0];
  local_28[iVar1] = (float)iVar5;
  fVar6 = *(float *)(this + 8);
  local_28[iVar2] = (float)iVar12;
  local_28[iVar3] = (float)iVar8;
  if (*(long *)(lVar4 + 0x28) == local_18) {
    fVar14 = fVar15 * fVar14;
    fVar18 = local_28[0] * fVar17;
    fVar17 = fVar17 * fVar7;
    fVar13 = fVar6 * fVar13;
    fVar15 = local_28[1] * fVar15;
    fVar6 = local_28[2] * fVar6;
    fVar16 = (float)NEON_fnmsub(fVar15,fVar17,fVar18 * fVar14);
    fVar7 = (float)NEON_fnmsub(fVar6,fVar14,fVar15 * fVar13);
    uVar11 = NEON_fnmsub(fVar18,fVar13,fVar6 * fVar17);
    uVar9 = NEON_fmadd(fVar7,fVar7,fVar16 * fVar16);
    fVar14 = (float)NEON_fmadd(uVar11,uVar11,uVar9);
    return (1.0 / SQRT(fVar14)) * fVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


