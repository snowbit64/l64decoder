// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPendingRenderOverlay
// Entry Point: 007b5a34
// Size: 280 bytes
// Signature: undefined __thiscall addPendingRenderOverlay(TextureOverlayRenderer * this, RenderOverlay * param_1)


/* TextureOverlayRenderer::addPendingRenderOverlay(RenderOverlay*) */

void __thiscall
TextureOverlayRenderer::addPendingRenderOverlay(TextureOverlayRenderer *this,RenderOverlay *param_1)

{
  ulong uVar1;
  void *__dest;
  RenderOverlay **ppRVar2;
  RenderOverlay **ppRVar3;
  void *__src;
  ulong __n;
  
  if (param_1[0xeb] == (RenderOverlay)0x0) {
    ppRVar2 = *(RenderOverlay ***)(this + 0x500);
    ppRVar3 = *(RenderOverlay ***)(this + 0x508);
    param_1[0xeb] = (RenderOverlay)0x1;
    if (ppRVar2 == ppRVar3) {
      __src = *(void **)(this + 0x4f8);
      __n = (long)ppRVar2 - (long)__src;
      uVar1 = ((long)__n >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 2)) {
        uVar1 = (long)__n >> 2;
      }
      if (0x7ffffffffffffff7 < __n) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar1 << 3);
      }
      ppRVar2 = (RenderOverlay **)((long)__dest + ((long)__n >> 3) * 8);
      *ppRVar2 = param_1;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 0x4f8) = __dest;
      *(RenderOverlay ***)(this + 0x500) = ppRVar2 + 1;
      *(void **)(this + 0x508) = (void *)((long)__dest + uVar1 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      *ppRVar2 = param_1;
      *(RenderOverlay ***)(this + 0x500) = ppRVar2 + 1;
    }
  }
  return;
}


