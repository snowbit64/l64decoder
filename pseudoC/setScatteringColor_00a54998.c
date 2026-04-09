// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setScatteringColor
// Entry Point: 00a54998
// Size: 20 bytes
// Signature: undefined __thiscall setScatteringColor(LightSource * this, Vector3 * param_1)


/* LightSource::setScatteringColor(Vector3 const&) */

void __thiscall LightSource::setScatteringColor(LightSource *this,Vector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 400) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x188) = uVar1;
  return;
}


