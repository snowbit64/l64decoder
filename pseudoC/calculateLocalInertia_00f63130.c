// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateLocalInertia
// Entry Point: 00f63130
// Size: 292 bytes
// Signature: undefined __thiscall calculateLocalInertia(btCylinderShape * this, float param_1, btVector3 * param_2)


/* btCylinderShape::calculateLocalInertia(float, btVector3&) const */

void __thiscall
btCylinderShape::calculateLocalInertia(btCylinderShape *this,float param_1,btVector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *(float *)(this + 0x2c);
  fVar7 = *(float *)(this + 0x30);
  fVar6 = *(float *)(this + 0x34);
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar5 = param_1 * 0.25;
  fVar4 = param_1 * 0.5;
  fVar1 = (fVar1 + fVar8) * (fVar1 + fVar8);
  if (*(int *)(this + 0x44) == 2) {
    fVar2 = (float)NEON_fmadd((fVar3 + fVar6) * (fVar3 + fVar6),param_1 * 0.3333333,fVar1 * fVar5);
    fVar3 = fVar1 * fVar4;
    fVar1 = fVar2;
  }
  else {
    fVar6 = (fVar2 + fVar7) * (fVar2 + fVar7);
    fVar2 = (float)NEON_fmadd(fVar6,param_1 * 0.3333333,fVar1 * fVar5);
    fVar5 = (float)NEON_fmadd(fVar1,param_1 * 0.3333333,fVar6 * fVar5);
    fVar3 = fVar2;
    fVar1 = fVar1 * fVar4;
    if (*(int *)(this + 0x44) == 0) {
      fVar2 = fVar6 * fVar4;
      fVar3 = fVar5;
      fVar1 = fVar5;
    }
  }
  *(float *)param_2 = fVar2;
  *(float *)(param_2 + 4) = fVar1;
  *(float *)(param_2 + 8) = fVar3;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}


