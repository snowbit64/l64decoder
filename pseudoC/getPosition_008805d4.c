// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPosition
// Entry Point: 008805d4
// Size: 24 bytes
// Signature: undefined __thiscall getPosition(AnimalSteering * this, Vector3 * param_1)


/* AnimalSteering::getPosition(Vector3&) */

void __thiscall AnimalSteering::getPosition(AnimalSteering *this,Vector3 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(this + 8);
  uVar1 = *(undefined4 *)(this + 0x74);
  *(undefined4 *)param_1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}


