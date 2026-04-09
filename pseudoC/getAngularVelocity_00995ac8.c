// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAngularVelocity
// Entry Point: 00995ac8
// Size: 48 bytes
// Signature: undefined __thiscall getAngularVelocity(Bt2PhysicsRBObject * this, Vector3 * param_1)


/* Bt2PhysicsRBObject::getAngularVelocity(Vector3&) const */

void __thiscall Bt2PhysicsRBObject::getAngularVelocity(Bt2PhysicsRBObject *this,Vector3 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(this + 0x30) != 0) &&
     (lVar1 = *(long *)(*(long *)(this + 0x30) + 0x228), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0xa8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 0xb0);
    *(undefined8 *)param_1 = uVar2;
    return;
  }
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


