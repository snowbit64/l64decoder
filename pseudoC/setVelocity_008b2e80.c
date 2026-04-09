// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVelocity
// Entry Point: 008b2e80
// Size: 28 bytes
// Signature: undefined __thiscall setVelocity(Sample * this, float * param_1)


/* Sample::setVelocity(float const*) */

void __thiscall Sample::setVelocity(Sample *this,float *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(float *)(this + 0x54) = param_1[2];
  *(undefined8 *)(this + 0x4c) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x008b2e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xa8))();
  return;
}


