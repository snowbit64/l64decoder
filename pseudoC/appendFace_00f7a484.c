// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendFace
// Entry Point: 00f7a484
// Size: 248 bytes
// Signature: undefined __thiscall appendFace(btSoftBody * this, int param_1, int param_2, int param_3, Material * param_4)


/* btSoftBody::appendFace(int, int, int, btSoftBody::Material*) */

void __thiscall
btSoftBody::appendFace(btSoftBody *this,int param_1,int param_2,int param_3,Material *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (((param_3 != param_1) && (param_1 != param_2)) && (param_2 != param_3)) {
    appendFace(this,-1,param_4);
    lVar2 = *(long *)(this + 0x380) + (long)param_1 * 0x78;
    lVar1 = *(long *)(this + 0x3c0) + (long)*(int *)(this + 0x3b4) * 0x48;
    fVar4 = *(float *)(lVar2 + 0x10);
    fVar6 = *(float *)(lVar2 + 0x14);
    *(long *)(lVar1 + -0x38) = lVar2;
    fVar11 = *(float *)(lVar2 + 0x18);
    lVar3 = *(long *)(this + 0x380) + (long)param_2 * 0x78;
    this[0x4b4] = (btSoftBody)0x1;
    *(long *)(lVar1 + -0x30) = lVar3;
    fVar12 = *(float *)(lVar3 + 0x18);
    fVar7 = *(float *)(lVar3 + 0x10);
    lVar2 = *(long *)(this + 0x380) + (long)param_3 * 0x78;
    fVar8 = *(float *)(lVar3 + 0x14) - fVar6;
    fVar10 = *(float *)(lVar2 + 0x10);
    fVar13 = *(float *)(lVar2 + 0x14);
    *(long *)(lVar1 + -0x28) = lVar2;
    fVar10 = fVar10 - fVar4;
    fVar7 = fVar7 - fVar4;
    fVar12 = fVar12 - fVar11;
    fVar13 = fVar13 - fVar6;
    fVar11 = *(float *)(lVar2 + 0x18) - fVar11;
    fVar4 = (float)NEON_fnmsub(fVar13,fVar7,fVar10 * fVar8);
    uVar9 = NEON_fnmsub(fVar11,fVar8,fVar13 * fVar12);
    uVar5 = NEON_fnmsub(fVar10,fVar12,fVar11 * fVar7);
    uVar9 = NEON_fmadd(uVar9,uVar9,fVar4 * fVar4);
    fVar4 = (float)NEON_fmadd(uVar5,uVar5,uVar9);
    *(float *)(lVar1 + -0x10) = SQRT(fVar4);
  }
  return;
}


