// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateLocalInertia
// Entry Point: 00f578e4
// Size: 204 bytes
// Signature: undefined __thiscall calculateLocalInertia(btBoxShape * this, float param_1, btVector3 * param_2)


/* btBoxShape::calculateLocalInertia(float, btVector3&) const */

void __thiscall btBoxShape::calculateLocalInertia(btBoxShape *this,float param_1,btVector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  
  uVar4 = *(undefined8 *)(this + 0x2c);
  fVar5 = *(float *)(this + 0x34);
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  *(undefined4 *)(param_2 + 0xc) = 0;
  fVar3 = fVar3 + fVar5 + fVar3 + fVar5;
  fVar3 = fVar3 * fVar3;
  fVar5 = param_1 * 0.08333334;
  fVar1 = fVar1 + (float)uVar4;
  fVar2 = fVar2 + (float)((ulong)uVar4 >> 0x20);
  fVar1 = fVar1 + fVar1;
  fVar2 = fVar2 + fVar2;
  fVar1 = fVar1 * fVar1;
  fVar2 = fVar2 * fVar2;
  uVar4 = NEON_rev64(CONCAT44(fVar2,fVar1),4);
  *(float *)(param_2 + 8) = (fVar1 + fVar2) * fVar5;
  *(ulong *)param_2 =
       CONCAT44((fVar3 + (float)((ulong)uVar4 >> 0x20)) * fVar5,(fVar3 + (float)uVar4) * fVar5);
  return;
}


