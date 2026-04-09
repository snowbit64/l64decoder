// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RGBVideoFrame
// Entry Point: 00c737e4
// Size: 324 bytes
// Signature: undefined __thiscall RGBVideoFrame(RGBVideoFrame * this, uint param_1, uint param_2, uint param_3, uint param_4, th_img_plane * param_5)


/* TheoraVideoDecoder::RGBVideoFrame::RGBVideoFrame(unsigned int, unsigned int, unsigned int,
   unsigned int, th_img_plane const (&) [3]) */

void __thiscall
TheoraVideoDecoder::RGBVideoFrame::RGBVideoFrame
          (RGBVideoFrame *this,uint param_1,uint param_2,uint param_3,uint param_4,
          th_img_plane *param_5)

{
  uint uVar1;
  void *__dest;
  ulong __n;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  __n = (ulong)(param_3 >> 1);
  __dest = operator_new__((ulong)(((param_3 >> 1) * param_4 & 0xfffffffe) + param_4 * param_3));
  *(void **)this = __dest;
  if (param_4 != 0) {
    uVar4 = *(uint *)(param_5 + 8);
    pvVar2 = (void *)(*(long *)(param_5 + 0x10) + (ulong)(uVar4 * param_2) + (ulong)param_1);
    uVar3 = param_4;
    do {
      memcpy(__dest,pvVar2,(ulong)param_3);
      pvVar2 = (void *)((long)pvVar2 + (ulong)uVar4);
      __dest = (void *)((long)__dest + (ulong)param_3);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if (1 < param_4) {
      uVar1 = *(uint *)(param_5 + 0x20);
      uVar3 = param_4 >> 1;
      uVar4 = uVar3;
      if (uVar3 < 2) {
        uVar4 = 1;
      }
      pvVar2 = (void *)(*(long *)(param_5 + 0x28) + (ulong)((param_2 >> 1) * uVar1) +
                       (ulong)(param_1 >> 1));
      do {
        memcpy(__dest,pvVar2,__n);
        pvVar2 = (void *)((long)pvVar2 + (ulong)uVar1);
        __dest = (void *)((long)__dest + __n);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      if (1 < param_4) {
        uVar4 = *(uint *)(param_5 + 0x38);
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        pvVar2 = (void *)(*(long *)(param_5 + 0x40) + (ulong)((param_2 >> 1) * uVar4) +
                         (ulong)(param_1 >> 1));
        do {
          memcpy(__dest,pvVar2,__n);
          pvVar2 = (void *)((long)pvVar2 + (ulong)uVar4);
          __dest = (void *)((long)__dest + __n);
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
  }
  return;
}


