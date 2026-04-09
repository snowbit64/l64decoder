// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkCollideWithOverride
// Entry Point: 00f3fa30
// Size: 60 bytes
// Signature: undefined __thiscall checkCollideWithOverride(btCollisionObject * this, btCollisionObject * param_1)


/* btCollisionObject::checkCollideWithOverride(btCollisionObject const*) const */

bool __thiscall
btCollisionObject::checkCollideWithOverride(btCollisionObject *this,btCollisionObject *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(this + 300);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      if (*(btCollisionObject **)(*(long *)(this + 0x138) + uVar2 * 8) == param_1)
      goto LAB_00f3fa60;
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  uVar2 = (ulong)uVar1;
LAB_00f3fa60:
  return (int)uVar1 <= (int)uVar2;
}


