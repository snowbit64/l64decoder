// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPosition
// Entry Point: 00880640
// Size: 20 bytes
// Signature: undefined __thiscall setPosition(AnimalSteering * this, Vector3 * param_1)


/* AnimalSteering::setPosition(Vector3 const&) */

void __thiscall AnimalSteering::setPosition(AnimalSteering *this,Vector3 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = uVar1;
  return;
}


