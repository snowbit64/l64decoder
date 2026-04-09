// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getThYuv
// Entry Point: 00c72f70
// Size: 68 bytes
// Signature: undefined __thiscall getThYuv(RGBVideoFrame * this, uint param_1, uint param_2, th_img_plane * param_3)


/* TheoraVideoDecoder::RGBVideoFrame::getThYuv(unsigned int, unsigned int, th_img_plane (&) [3]) */

void __thiscall
TheoraVideoDecoder::RGBVideoFrame::getThYuv
          (RGBVideoFrame *this,uint param_1,uint param_2,th_img_plane *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = param_1 >> 1;
  lVar3 = *(long *)this;
  uVar1 = param_2 >> 1;
  *(uint *)(param_3 + 8) = param_1;
  *(long *)(param_3 + 0x10) = lVar3;
  lVar3 = lVar3 + (ulong)(param_2 * param_1);
  *(uint *)param_3 = param_1;
  *(uint *)(param_3 + 4) = param_2;
  *(uint *)(param_3 + 0x1c) = uVar1;
  *(uint *)(param_3 + 0x20) = uVar2;
  *(uint *)(param_3 + 0x18) = uVar2;
  *(uint *)(param_3 + 0x34) = uVar1;
  *(uint *)(param_3 + 0x38) = uVar2;
  *(long *)(param_3 + 0x28) = lVar3;
  *(ulong *)(param_3 + 0x40) = lVar3 + (ulong)(uVar1 * uVar2);
  *(uint *)(param_3 + 0x30) = uVar2;
  return;
}


