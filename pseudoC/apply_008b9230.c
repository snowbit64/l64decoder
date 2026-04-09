// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: apply
// Entry Point: 008b9230
// Size: 44 bytes
// Signature: undefined __thiscall apply(WetDry * this, float param_1, float * param_2)


/* WetDry::apply(float, float&) */

void __thiscall WetDry::apply(WetDry *this,float param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)this;
  if (this[8] != (WetDry)0x0) {
    fVar1 = -fVar1;
    *(float *)this = fVar1;
  }
  fVar1 = (float)NEON_fmadd(param_1,*(undefined4 *)(this + 4),*param_2 * fVar1);
  *param_2 = fVar1;
  return;
}


