// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: filter
// Entry Point: 00e44c84
// Size: 140 bytes
// Signature: undefined __thiscall filter(FilterInstance * this, float * param_1, uint param_2, uint param_3, float param_4, double param_5)


/* SoLoud::FilterInstance::filter(float*, unsigned int, unsigned int, float, double) */

void __thiscall
SoLoud::FilterInstance::filter
          (FilterInstance *this,float *param_1,uint param_2,uint param_3,float param_4,
          double param_5)

{
  ulong uVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    uVar2 = 0;
    uVar1 = 0;
    do {
      (**(code **)(*(long *)this + 0x18))
                (param_4,param_5,this,param_1 + uVar2,param_2,uVar1 & 0xffffffff,(ulong)param_3);
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 + param_2;
    } while (param_3 != uVar1);
  }
  return;
}


