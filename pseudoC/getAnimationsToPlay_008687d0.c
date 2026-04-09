// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAnimationsToPlay
// Entry Point: 008687d0
// Size: 348 bytes
// Signature: undefined __thiscall getAnimationsToPlay(ConditionalAnimationItem * this, vector * param_1)


/* ConditionalAnimationItem::getAnimationsToPlay(std::__ndk1::vector<ConditionalAnimationTracks::Track,
   std::__ndk1::allocator<ConditionalAnimationTracks::Track> >&) const */

void __thiscall
ConditionalAnimationItem::getAnimationsToPlay(ConditionalAnimationItem *this,vector *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *__dest;
  void *__src;
  ulong __n;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((this[0xc] != (ConditionalAnimationItem)0x0) || (*(float *)(this + 0x30) <= 0.0)) {
    if (this[0xc] != (ConditionalAnimationItem)0x0) {
      ConditionalAnimationBlending::getAnimationsToPlay
                ((ConditionalAnimationBlending *)(this + 0x70),*(int *)(this + 8),param_1);
    }
  }
  else {
    ConditionalAnimationTracks::Track::Track((Track *)&local_60,*(int *)(this + 8),-1);
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 == *(undefined8 **)(param_1 + 0x10)) {
      __src = *(void **)param_1;
      __n = (long)puVar2 - (long)__src;
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
      puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
      *puVar2 = local_60;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)param_1 = __dest;
      *(undefined8 **)(param_1 + 8) = puVar2 + 1;
      *(void **)(param_1 + 0x10) = (void *)((long)__dest + uVar1 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *puVar2 = local_60;
      *(undefined8 **)(param_1 + 8) = puVar2 + 1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


