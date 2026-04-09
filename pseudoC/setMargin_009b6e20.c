// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMargin
// Entry Point: 009b6e20
// Size: 216 bytes
// Signature: undefined __thiscall setMargin(btCylinderShape * this, float param_1)


/* btCylinderShape::setMargin(float) */

void __thiscall btCylinderShape::setMargin(btCylinderShape *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  *(float *)(this + 0x3c) = param_1;
  fVar7 = *(float *)(this + 0x2c);
  fVar8 = *(float *)(this + 0x30);
  fVar9 = *(float *)(this + 0x34);
  fVar4 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar5 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar6 = (float)(**(code **)(*(long *)this + 0x60))(this);
  *(undefined4 *)(this + 0x38) = 0;
  *(float *)(this + 0x2c) = (fVar1 + fVar7) - fVar4;
  *(float *)(this + 0x30) = (fVar2 + fVar8) - fVar5;
  *(float *)(this + 0x34) = (fVar3 + fVar9) - fVar6;
  return;
}


