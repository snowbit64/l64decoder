// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPosition
// Entry Point: 008b2e5c
// Size: 28 bytes
// Signature: undefined __thiscall setPosition(Sample * this, float * param_1)


/* Sample::setPosition(float const*) */

void __thiscall Sample::setPosition(Sample *this,float *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(float *)(this + 0x3c) = param_1[2];
  *(undefined8 *)(this + 0x34) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x008b2e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa0))();
  return;
}


