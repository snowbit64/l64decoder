// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ClipViewport
// Entry Point: 00a11730
// Size: 36 bytes
// Signature: undefined __thiscall ClipViewport(ClipViewport * this, PixelViewport * param_1, uint param_2, uint param_3)


/* Renderer::ClipViewport::ClipViewport(Renderer::PixelViewport const&, unsigned int, unsigned int)
    */

void __thiscall
Renderer::ClipViewport::ClipViewport
          (ClipViewport *this,PixelViewport *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined auVar3 [16];
  
  auVar3 = NEON_ucvtf(*(undefined (*) [16])param_1,4);
  uVar1 = NEON_ucvtf(CONCAT44(param_3,param_2),4);
  fVar2 = (float)((ulong)uVar1 >> 0x20);
  *(ulong *)(this + 8) = CONCAT44(auVar3._12_4_ / fVar2,auVar3._8_4_ / (float)uVar1);
  *(ulong *)this = CONCAT44(auVar3._4_4_ / fVar2,auVar3._0_4_ / (float)uVar1);
  return;
}


