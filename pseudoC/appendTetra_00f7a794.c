// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendTetra
// Entry Point: 00f7a794
// Size: 268 bytes
// Signature: undefined __thiscall appendTetra(btSoftBody * this, int param_1, int param_2, int param_3, int param_4, Material * param_5)


/* btSoftBody::appendTetra(int, int, int, int, btSoftBody::Material*) */

void __thiscall
btSoftBody::appendTetra
          (btSoftBody *this,int param_1,int param_2,int param_3,int param_4,Material *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  appendTetra(this,-1,param_5);
  lVar2 = *(long *)(this + 0x380) + (long)param_1 * 0x78;
  lVar1 = *(long *)(this + 0x3e0) + (long)*(int *)(this + 0x3d4) * 0x88;
  fVar5 = *(float *)(lVar2 + 0x10);
  fVar6 = *(float *)(lVar2 + 0x14);
  *(long *)(lVar1 + -0x78) = lVar2;
  fVar12 = *(float *)(lVar2 + 0x18);
  lVar3 = *(long *)(this + 0x380) + (long)param_2 * 0x78;
  this[0x4b4] = (btSoftBody)0x1;
  *(long *)(lVar1 + -0x70) = lVar3;
  fVar18 = *(float *)(lVar3 + 0x14);
  fVar16 = *(float *)(lVar3 + 0x18);
  lVar4 = *(long *)(this + 0x380) + (long)param_3 * 0x78;
  *(long *)(lVar1 + -0x68) = lVar4;
  fVar13 = *(float *)(lVar4 + 0x18) - fVar12;
  lVar2 = *(long *)(this + 0x380) + (long)param_4 * 0x78;
  fVar9 = *(float *)(lVar4 + 0x14) - fVar6;
  fVar7 = *(float *)(lVar4 + 0x10) - fVar5;
  fVar11 = *(float *)(lVar2 + 0x10);
  fVar14 = *(float *)(lVar2 + 0x14);
  fVar17 = *(float *)(lVar2 + 0x18);
  *(long *)(lVar1 + -0x60) = lVar2;
  fVar11 = fVar11 - fVar5;
  fVar14 = fVar14 - fVar6;
  fVar17 = fVar17 - fVar12;
  fVar15 = (float)NEON_fnmsub(fVar14,fVar7,fVar11 * fVar9);
  uVar10 = NEON_fnmsub(fVar17,fVar9,fVar14 * fVar13);
  uVar8 = NEON_fnmsub(fVar11,fVar13,fVar17 * fVar7);
  uVar10 = NEON_fmadd(uVar10,*(float *)(lVar3 + 0x10) - fVar5,fVar15 * (fVar16 - fVar12));
  uVar10 = NEON_fmadd(uVar8,fVar18 - fVar6,uVar10);
  *(undefined4 *)(lVar1 + -0x58) = uVar10;
  return;
}


