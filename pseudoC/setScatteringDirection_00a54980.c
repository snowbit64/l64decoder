// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setScatteringDirection
// Entry Point: 00a54980
// Size: 24 bytes
// Signature: undefined __thiscall setScatteringDirection(LightSource * this, Vector3 * param_1)


/* LightSource::setScatteringDirection(Vector3 const&) */

void __thiscall LightSource::setScatteringDirection(LightSource *this,Vector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x184) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x17c) = uVar1;
  return;
}


