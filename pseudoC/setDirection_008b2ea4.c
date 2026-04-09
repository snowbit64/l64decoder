// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDirection
// Entry Point: 008b2ea4
// Size: 28 bytes
// Signature: undefined __thiscall setDirection(Sample * this, float * param_1)


/* Sample::setDirection(float const*) */

void __thiscall Sample::setDirection(Sample *this,float *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(float *)(this + 0x48) = param_1[2];
  *(undefined8 *)(this + 0x40) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x008b2ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


