// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2WheelShape
// Entry Point: 009b5d04
// Size: 360 bytes
// Signature: undefined __thiscall Bt2WheelShape(Bt2WheelShape * this, float param_1, float param_2)


/* Bt2WheelShape::Bt2WheelShape(float, float) */

void __thiscall Bt2WheelShape::Bt2WheelShape(Bt2WheelShape *this,float param_1,float param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c = 0;
  local_58 = param_1;
  fStack_54 = param_2;
  local_50 = param_1;
  btCylinderShape::btCylinderShape((btCylinderShape *)this,(btVector3 *)&local_58);
  fVar2 = (float)NEON_fmin(param_1 * 0.4,0x3dcccccd);
  uVar8 = *(undefined8 *)(this + 0x2c);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0x3f80000000000000;
  fVar9 = *(float *)(this + 0x34);
  fVar7 = param_1 - fVar2;
  *(float *)(this + 0x58) = fVar2;
  *(undefined ***)this = &PTR__btConvexShape_00fe1ab8;
  *(undefined4 *)(this + 8) = 0x13;
  fVar2 = fVar7;
  if (param_2 <= fVar7) {
    fVar2 = param_2;
  }
  uVar5 = NEON_fminnm(fVar2,0x3e19999a);
  fVar6 = *(float *)(this + 0x3c);
  *(undefined4 *)(this + 0x3c) = uVar5;
  fVar2 = (float)btConvexInternalShape::getMargin();
                    /* try { // try from 009b5dd4 to 009b5e2b has its CatchHandler @ 009b5e6c */
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar4 = (float)(**(code **)(*(long *)this + 0x60))(this);
  *(undefined4 *)(this + 0x38) = 0;
  *(float *)(this + 0x34) = (fVar6 + fVar9) - fVar4;
  *(ulong *)(this + 0x2c) =
       CONCAT44((fVar6 + (float)((ulong)uVar8 >> 0x20)) - fVar3,(fVar6 + (float)uVar8) - fVar2);
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  *(undefined4 *)(this + 0x38) = 0;
  *(float *)(this + 0x2c) = fVar7 - fVar2;
  *(float *)(this + 0x30) = param_2 - fVar2;
  *(float *)(this + 0x34) = fVar7 - fVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


