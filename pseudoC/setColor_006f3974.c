// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setColor
// Entry Point: 006f3974
// Size: 72 bytes
// Signature: undefined __thiscall setColor(Overlay * this, float param_1, float param_2, float param_3, float param_4)


/* Overlay::setColor(float, float, float, float) */

void __thiscall
Overlay::setColor(Overlay *this,float param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)NEON_fmadd(param_3,0x437f0000,0x3f000000);
  fVar5 = (float)NEON_fmadd(param_4,0x437f0000,0x3f000000);
  fVar3 = (float)NEON_fmadd(param_2,0x437f0000,0x3f000000);
  fVar2 = (float)NEON_fmadd(param_1,0x437f0000,0x3f000000);
  uVar1 = ((int)fVar4 & 0xffU) << 0x10 | (int)fVar5 << 0x18 | ((int)fVar3 & 0xffU) << 8 |
          (int)fVar2 & 0xffU;
  *(ulong *)(this + 0x68) = CONCAT44(uVar1,uVar1);
  *(ulong *)(this + 0x60) = CONCAT44(uVar1,uVar1);
  return;
}


