// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGravity
// Entry Point: 00f40150
// Size: 64 bytes
// Signature: undefined __thiscall setGravity(btRigidBody * this, btVector3 * param_1)


/* btRigidBody::setGravity(btVector3 const&) */

void __thiscall btRigidBody::setGravity(btRigidBody *this,btVector3 *param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (*(float *)(this + 0x19c) != 0.0) {
    fVar3 = *(float *)(param_1 + 8);
    fVar1 = 1.0 / *(float *)(this + 0x19c);
    uVar2 = *(undefined8 *)param_1;
    *(undefined4 *)(this + 0x1bc) = 0;
    *(ulong *)(this + 0x1b0) = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar1,(float)uVar2 * fVar1);
    *(float *)(this + 0x1b8) = fVar3 * fVar1;
  }
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1c8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1c0) = uVar2;
  return;
}


