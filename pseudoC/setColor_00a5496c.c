// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setColor
// Entry Point: 00a5496c
// Size: 20 bytes
// Signature: undefined __thiscall setColor(LightSource * this, Vector3 * param_1)


/* LightSource::setColor(Vector3 const&) */

void __thiscall LightSource::setColor(LightSource *this,Vector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x178) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x170) = uVar1;
  return;
}


