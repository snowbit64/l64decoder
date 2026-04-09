// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionAndDirection
// Entry Point: 008805ac
// Size: 40 bytes
// Signature: undefined __thiscall getPositionAndDirection(AnimalSteering * this, Vector3 * param_1, Vector3 * param_2)


/* AnimalSteering::getPositionAndDirection(Vector3&, Vector3&) */

void __thiscall
AnimalSteering::getPositionAndDirection(AnimalSteering *this,Vector3 *param_1,Vector3 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(this + 8);
  uVar1 = *(undefined4 *)(this + 0x74);
  *(undefined4 *)param_1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)param_2 = uVar1;
  *(undefined4 *)(param_2 + 8) = uVar2;
  return;
}


