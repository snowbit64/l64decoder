// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PixelViewport
// Entry Point: 00a11754
// Size: 88 bytes
// Signature: undefined __thiscall PixelViewport(PixelViewport * this, ClipViewport * param_1, uint param_2, uint param_3)


/* Renderer::PixelViewport::PixelViewport(Renderer::ClipViewport const&, unsigned int, unsigned int)
    */

void __thiscall
Renderer::PixelViewport::PixelViewport
          (PixelViewport *this,ClipViewport *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  
  uVar3 = NEON_ucvtf(CONCAT44(param_3,param_2),4);
  fVar4 = (float)((ulong)uVar3 >> 0x20);
  fVar5 = (float)(int)((float)*(undefined8 *)param_1 * (float)uVar3);
  fVar6 = (float)(int)((float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar4);
  uVar7 = NEON_fcmle(CONCAT44(fVar6,fVar5),0,2);
  *(ulong *)(this + 8) =
       CONCAT44((int)(float)(int)((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fVar4),
                (int)(float)(int)((float)*(undefined8 *)(param_1 + 8) * (float)uVar3));
  iVar1 = 0;
  if ((uVar7 & 1) == 0) {
    iVar1 = (int)fVar5;
  }
  iVar2 = 0;
  if ((uVar7 & 0x100000000) == 0) {
    iVar2 = (int)fVar6;
  }
  *(int *)this = iVar1;
  *(int *)(this + 4) = iVar2;
  return;
}


