// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLocalScaling
// Entry Point: 009b9ed8
// Size: 208 bytes
// Signature: undefined __thiscall setLocalScaling(btCylinderShape * this, btVector3 * param_1)


/* btCylinderShape::setLocalScaling(btVector3 const&) */

void __thiscall btCylinderShape::setLocalScaling(btCylinderShape *this,btVector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  uVar5 = *(undefined8 *)(this + 0x2c);
  uVar7 = *(undefined8 *)(this + 0x1c);
  fVar4 = *(float *)(this + 0x34);
  fVar6 = *(float *)(this + 0x24);
  btConvexInternalShape::setLocalScaling((btConvexInternalShape *)this,param_1);
  *(undefined4 *)(this + 0x38) = 0;
  *(ulong *)(this + 0x2c) =
       CONCAT44(((fVar2 + (float)((ulong)uVar5 >> 0x20)) / (float)((ulong)uVar7 >> 0x20)) *
                (float)((ulong)*(undefined8 *)(this + 0x1c) >> 0x20) - fVar2,
                ((fVar1 + (float)uVar5) / (float)uVar7) * (float)*(undefined8 *)(this + 0x1c) -
                fVar1);
  *(float *)(this + 0x34) = ((fVar3 + fVar4) / fVar6) * *(float *)(this + 0x24) - fVar3;
  return;
}


