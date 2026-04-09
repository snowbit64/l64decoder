// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAabb
// Entry Point: 00f7834c
// Size: 24 bytes
// Signature: undefined __thiscall getAabb(btSoftBody * this, btVector3 * param_1, btVector3 * param_2)


/* btSoftBody::getAabb(btVector3&, btVector3&) const */

void __thiscall btSoftBody::getAabb(btSoftBody *this,btVector3 *param_1,btVector3 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x494);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0x49c);
  *(undefined8 *)param_1 = uVar1;
  uVar1 = *(undefined8 *)(this + 0x4a4);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(this + 0x4ac);
  *(undefined8 *)param_2 = uVar1;
  return;
}


