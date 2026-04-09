// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLocalScaling
// Entry Point: 00f5e650
// Size: 188 bytes
// Signature: undefined __thiscall setLocalScaling(btCapsuleShape * this, btVector3 * param_1)


/* btCapsuleShape::setLocalScaling(btVector3 const&) */

void __thiscall btCapsuleShape::setLocalScaling(btCapsuleShape *this,btVector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(this + 0x24);
  uVar8 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x28) = 0;
  *(float *)(this + 0x24) = ABS(fVar4);
  *(undefined4 *)(this + 0x38) = 0;
  fVar6 = ABS((float)uVar8);
  fVar7 = ABS((float)((ulong)uVar8 >> 0x20));
  uVar8 = *(undefined8 *)(this + 0x1c);
  *(ulong *)(this + 0x1c) = CONCAT44(fVar7,fVar6);
  *(float *)(this + 0x34) = (ABS(fVar4) * (*(float *)(this + 0x34) + fVar3)) / fVar5 - fVar3;
  *(ulong *)(this + 0x2c) =
       CONCAT44((fVar7 * ((float)((ulong)*(undefined8 *)(this + 0x2c) >> 0x20) + fVar2)) /
                (float)((ulong)uVar8 >> 0x20) - fVar2,
                (fVar6 * ((float)*(undefined8 *)(this + 0x2c) + fVar1)) / (float)uVar8 - fVar1);
  return;
}


