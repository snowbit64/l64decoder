// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCornerColor
// Entry Point: 006f39bc
// Size: 72 bytes
// Signature: undefined __thiscall setCornerColor(Overlay * this, uint param_1, float param_2, float param_3, float param_4, float param_5)


/* Overlay::setCornerColor(unsigned int, float, float, float, float) */

void __thiscall
Overlay::setCornerColor
          (Overlay *this,uint param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)NEON_fmadd(param_4,0x437f0000,0x3f000000);
  fVar4 = (float)NEON_fmadd(param_5,0x437f0000,0x3f000000);
  fVar2 = (float)NEON_fmadd(param_3,0x437f0000,0x3f000000);
  fVar1 = (float)NEON_fmadd(param_2,0x437f0000,0x3f000000);
  *(uint *)(this + (ulong)param_1 * 4 + 0x60) =
       ((int)fVar3 & 0xffU) << 0x10 | (int)fVar4 << 0x18 | ((int)fVar2 & 0xffU) << 8 |
       (int)fVar1 & 0xffU;
  return;
}


