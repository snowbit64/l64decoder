// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mix
// Entry Point: 00e3917c
// Size: 132 bytes
// Signature: undefined __thiscall mix(Soloud * this, float * param_1, uint param_2)


/* SoLoud::Soloud::mix(float*, unsigned int) */

void __thiscall SoLoud::Soloud::mix(Soloud *this,float *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  mix_internal(this,param_2);
  uVar1 = *(uint *)(this + 0x20a4);
  if (uVar1 != 0) {
    uVar3 = 0;
    uVar4 = 0;
    lVar6 = *(long *)(this + 0x58);
    uVar5 = uVar4;
    do {
      for (; uVar4 < uVar1 * param_2; uVar4 = uVar4 + uVar1) {
        uVar2 = (ulong)uVar3;
        uVar3 = uVar3 + 1;
        param_1[uVar4] = *(float *)(lVar6 + uVar2 * 4);
      }
      uVar4 = uVar5 + 1;
      uVar5 = uVar4;
    } while (uVar4 != uVar1);
  }
  return;
}


