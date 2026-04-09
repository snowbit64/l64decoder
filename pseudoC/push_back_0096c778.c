// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 0096c778
// Size: 300 bytes
// Signature: undefined __thiscall push_back(SmallVector<TextureStreamingManager::Stats::TextureAndFeedback,5u> * this, TextureAndFeedback * param_1)


/* SmallVector<TextureStreamingManager::Stats::TextureAndFeedback,
   5u>::push_back(TextureStreamingManager::Stats::TextureAndFeedback const&) */

void __thiscall
SmallVector<TextureStreamingManager::Stats::TextureAndFeedback,5u>::push_back
          (SmallVector<TextureStreamingManager::Stats::TextureAndFeedback,5u> *this,
          TextureAndFeedback *param_1)

{
  void *__dest;
  uint uVar1;
  void *__src;
  size_t __n;
  SmallVector<TextureStreamingManager::Stats::TextureAndFeedback,5u> *pSVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)this;
  if (uVar1 < 5) {
    memcpy(this + (ulong)uVar1 * 0x108 + 4,param_1,0x108);
    goto LAB_0096c884;
  }
  if (uVar1 == 5) {
    __src = *(void **)(this + 0x530);
    if ((ulong)((*(long *)(this + 0x540) - (long)__src >> 3) * 0xf83e0f83e0f83e1) < 6) {
      __n = *(long *)(this + 0x538) - (long)__src;
      __dest = operator_new(0x630);
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 0x530) = __dest;
      *(size_t *)(this + 0x538) = (long)__dest + __n;
      *(long *)(this + 0x540) = (long)__dest + 0x630;
      if ((__src != (void *)0x0) && (operator_delete(__src), *(int *)this == 0)) goto LAB_0096c874;
    }
    uVar3 = 0;
    pSVar2 = this + 4;
    do {
      FUN_0096cab8(this + 0x530,pSVar2);
      uVar3 = uVar3 + 1;
      pSVar2 = pSVar2 + 0x108;
    } while (uVar3 < *(uint *)this);
  }
LAB_0096c874:
  FUN_0096cab8(this + 0x530,param_1);
  uVar1 = *(uint *)this;
LAB_0096c884:
  *(uint *)this = uVar1 + 1;
  return;
}


