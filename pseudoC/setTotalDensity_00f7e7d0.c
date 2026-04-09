// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTotalDensity
// Entry Point: 00f7e7d0
// Size: 196 bytes
// Signature: undefined __thiscall setTotalDensity(btSoftBody * this, float param_1)


/* btSoftBody::setTotalDensity(float) */

void __thiscall btSoftBody::setTotalDensity(btSoftBody *this,float param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  
  fVar7 = 0.0;
  if ((0 < *(int *)(this + 0x374)) &&
     (uVar2 = (ulong)*(uint *)(this + 0x3b4), 0 < (int)*(uint *)(this + 0x3b4))) {
    lVar4 = *(long *)(this + 0x380);
    fVar7 = 0.0;
    fVar6 = *(float *)(lVar4 + 0x10);
    fVar8 = *(float *)(lVar4 + 0x14);
    plVar3 = (long *)(*(long *)(this + 0x3c0) + 0x20);
    fVar9 = *(float *)(lVar4 + 0x18);
    do {
      lVar4 = plVar3[-1];
      lVar1 = *plVar3;
      uVar2 = uVar2 - 1;
      lVar5 = plVar3[-2];
      plVar3 = plVar3 + 9;
      fVar10 = *(float *)(lVar4 + 0x14) - fVar8;
      fVar14 = *(float *)(lVar4 + 0x10) - fVar6;
      fVar12 = *(float *)(lVar1 + 0x10) - fVar6;
      fVar15 = *(float *)(lVar4 + 0x18) - fVar9;
      fVar16 = *(float *)(lVar1 + 0x14) - fVar8;
      fVar18 = *(float *)(lVar1 + 0x18) - fVar9;
      uVar17 = NEON_fnmsub(fVar16,fVar14,fVar12 * fVar10);
      uVar11 = NEON_fnmsub(fVar18,fVar10,fVar16 * fVar15);
      uVar17 = NEON_fmadd(uVar17,*(float *)(lVar5 + 0x18) - fVar9,fVar7);
      uVar13 = NEON_fnmsub(fVar12,fVar15,fVar18 * fVar14);
      uVar17 = NEON_fmadd(uVar11,*(float *)(lVar5 + 0x10) - fVar6,uVar17);
      fVar7 = (float)NEON_fmadd(uVar13,*(float *)(lVar5 + 0x14) - fVar8,uVar17);
    } while (uVar2 != 0);
    fVar7 = fVar7 * 0.1666667;
  }
  setTotalMass(this,fVar7 * param_1,true);
  return;
}


