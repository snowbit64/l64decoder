// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlaneEquation
// Entry Point: 00f57f90
// Size: 144 bytes
// Signature: undefined __thiscall getPlaneEquation(btBoxShape * this, btVector4 * param_1, int param_2)


/* btBoxShape::getPlaneEquation(btVector4&, int) const */

void __thiscall btBoxShape::getPlaneEquation(btBoxShape *this,btVector4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (5 < (uint)param_2) {
    return;
  }
  fVar3 = *(float *)(this + 0x2c);
  uVar1 = 0;
  uVar2 = 0x3f800000;
  switch(param_2) {
  case 1:
    uVar2 = 0xbf800000;
    break;
  case 2:
    uVar2 = 0x3f80000000000000;
    fVar3 = *(float *)(this + 0x30);
    break;
  case 3:
    uVar2 = 0xbf80000000000000;
    fVar3 = *(float *)(this + 0x30);
    break;
  case 4:
    uVar1 = 0x3f800000;
    goto LAB_00f58008;
  case 5:
    uVar1 = 0xbf800000;
LAB_00f58008:
    uVar2 = 0;
    fVar3 = *(float *)(this + 0x34);
  }
  *(undefined8 *)param_1 = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(float *)(param_1 + 0xc) = -fVar3;
  return;
}


