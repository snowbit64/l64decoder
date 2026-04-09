// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlaneEquation
// Entry Point: 009baab0
// Size: 144 bytes
// Signature: undefined __thiscall getPlaneEquation(btTriangleShape * this, int param_1, btVector3 * param_2, btVector3 * param_3)


/* btTriangleShape::getPlaneEquation(int, btVector3&, btVector3&) const */

void __thiscall
btTriangleShape::getPlaneEquation
          (btTriangleShape *this,int param_1,btVector3 *param_2,btVector3 *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = *(float *)(this + 0x60) - *(float *)(this + 0x50);
  fVar3 = *(float *)(this + 100) - *(float *)(this + 0x54);
  fVar6 = *(float *)(this + 0x74) - *(float *)(this + 0x54);
  fVar7 = *(float *)(this + 0x68) - *(float *)(this + 0x58);
  fVar9 = *(float *)(this + 0x78) - *(float *)(this + 0x58);
  fVar4 = *(float *)(this + 0x70) - *(float *)(this + 0x50);
  *(undefined4 *)(param_2 + 0xc) = 0;
  fVar8 = (float)NEON_fmadd(fVar7,fVar4,fVar9 * -fVar2);
  fVar7 = (float)NEON_fmadd(fVar3,fVar9,fVar6 * -fVar7);
  fVar3 = (float)NEON_fmadd(fVar2,fVar6,fVar4 * -fVar3);
  uVar5 = NEON_fmadd(fVar7,fVar7,fVar8 * fVar8);
  fVar2 = (float)NEON_fmadd(fVar3,fVar3,uVar5);
  fVar2 = 1.0 / SQRT(fVar2);
  *(float *)param_2 = fVar7 * fVar2;
  *(float *)(param_2 + 4) = fVar8 * fVar2;
  *(float *)(param_2 + 8) = fVar3 * fVar2;
  uVar1 = *(undefined8 *)(this + 0x50);
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(this + 0x58);
  *(undefined8 *)param_3 = uVar1;
  return;
}


