// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setColor
// Entry Point: 006f1d00
// Size: 68 bytes
// Signature: undefined __thiscall setColor(FontOverlayRenderer * this, float param_1, float param_2, float param_3, float param_4)


/* FontOverlayRenderer::setColor(float, float, float, float) */

void __thiscall
FontOverlayRenderer::setColor
          (FontOverlayRenderer *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)NEON_fmadd(param_3,0x437f0000,0x3f000000);
  fVar4 = (float)NEON_fmadd(param_4,0x437f0000,0x3f000000);
  fVar2 = (float)NEON_fmadd(param_2,0x437f0000,0x3f000000);
  fVar1 = (float)NEON_fmadd(param_1,0x437f0000,0x3f000000);
  *(uint *)(this + 0x28) =
       ((int)fVar3 & 0xffU) << 0x10 | (int)fVar4 << 0x18 | ((int)fVar2 & 0xffU) << 8 |
       (int)fVar1 & 0xffU;
  return;
}


