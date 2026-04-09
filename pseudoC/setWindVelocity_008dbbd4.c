// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWindVelocity
// Entry Point: 008dbbd4
// Size: 20 bytes
// Signature: undefined __thiscall setWindVelocity(Precipitation * this, float * param_1)


/* Precipitation::setWindVelocity(float*) */

void __thiscall Precipitation::setWindVelocity(Precipitation *this,float *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(float *)(this + 0x9c) = param_1[2];
  *(undefined8 *)(this + 0x94) = uVar1;
  return;
}


