// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWindVelocity
// Entry Point: 00f8cb14
// Size: 16 bytes
// Signature: undefined __thiscall setWindVelocity(btSoftBody * this, btVector3 * param_1)


/* btSoftBody::setWindVelocity(btVector3 const&) */

void __thiscall btSoftBody::setWindVelocity(btSoftBody *this,btVector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x660) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x658) = uVar1;
  return;
}


