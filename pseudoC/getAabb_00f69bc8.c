// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAabb
// Entry Point: 00f69bc8
// Size: 172 bytes
// Signature: undefined __thiscall getAabb(btSphereShape * this, btTransform * param_1, btVector3 * param_2, btVector3 * param_3)


/* btSphereShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btSphereShape::getAabb
          (btSphereShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar4 = *(float *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)(param_2 + 8) = fVar4 - fVar3;
  *(ulong *)param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) - fVar2,(float)uVar5 - fVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  fVar4 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(ulong *)param_3 = CONCAT44((float)((ulong)uVar5 >> 0x20) + fVar2,(float)uVar5 + fVar1);
  *(float *)(param_3 + 8) = fVar4 + fVar3;
  return;
}


