// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPreferredPenetrationDirection
// Entry Point: 009ba764
// Size: 160 bytes
// Signature: undefined __thiscall getPreferredPenetrationDirection(btTriangleShape * this, int param_1, btVector3 * param_2)


/* btTriangleShape::getPreferredPenetrationDirection(int, btVector3&) const */

void __thiscall
btTriangleShape::getPreferredPenetrationDirection
          (btTriangleShape *this,int param_1,btVector3 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(this + 0x60) - *(float *)(this + 0x50);
  fVar3 = *(float *)(this + 100) - *(float *)(this + 0x54);
  fVar5 = *(float *)(this + 0x74) - *(float *)(this + 0x54);
  fVar6 = *(float *)(this + 0x68) - *(float *)(this + 0x58);
  fVar8 = *(float *)(this + 0x78) - *(float *)(this + 0x58);
  fVar4 = *(float *)(this + 0x70) - *(float *)(this + 0x50);
  *(undefined4 *)(param_2 + 0xc) = 0;
  fVar7 = (float)NEON_fmadd(fVar6,fVar4,fVar8 * -fVar1);
  fVar6 = (float)NEON_fmadd(fVar3,fVar8,fVar5 * -fVar6);
  fVar3 = (float)NEON_fmadd(fVar1,fVar5,fVar4 * -fVar3);
  uVar2 = NEON_fmadd(fVar6,fVar6,fVar7 * fVar7);
  fVar1 = (float)NEON_fmadd(fVar3,fVar3,uVar2);
  fVar1 = 1.0 / SQRT(fVar1);
  *(float *)param_2 = fVar6 * fVar1;
  *(float *)(param_2 + 4) = fVar7 * fVar1;
  *(float *)(param_2 + 8) = fVar3 * fVar1;
  if (param_1 != 0) {
    *(float *)param_2 = -(fVar6 * fVar1);
    *(float *)(param_2 + 4) = -(fVar7 * fVar1);
    *(float *)(param_2 + 8) = -(fVar3 * fVar1);
  }
  return;
}


