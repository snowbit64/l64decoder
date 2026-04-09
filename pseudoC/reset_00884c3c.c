// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00884c3c
// Size: 20 bytes
// Signature: undefined __thiscall reset(SteeringTargetPosition * this, Vector3 * param_1)


/* SteeringTargetPosition::reset(Vector3 const&) */

void __thiscall SteeringTargetPosition::reset(SteeringTargetPosition *this,Vector3 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 8) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


