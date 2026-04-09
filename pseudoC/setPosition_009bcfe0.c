// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPosition
// Entry Point: 009bcfe0
// Size: 36 bytes
// Signature: undefined __thiscall setPosition(Bt2PhysicsCharacterController * this, Vector3 * param_1)


/* Bt2PhysicsCharacterController::setPosition(Vector3 const&) */

void __thiscall
Bt2PhysicsCharacterController::setPosition(Bt2PhysicsCharacterController *this,Vector3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x5e] = (Bt2PhysicsCharacterController)0x1;
  *(undefined4 *)(this + 0x68) = uVar1;
  *(undefined8 *)(this + 0x60) = uVar2;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  return;
}


