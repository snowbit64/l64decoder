// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAnimationsToPlay
// Entry Point: 0086a9c0
// Size: 416 bytes
// Signature: undefined __thiscall getAnimationsToPlay(ConditionalAnimationBlending * this, int param_1, vector * param_2)


/* ConditionalAnimationBlending::getAnimationsToPlay(int,
   std::__ndk1::vector<ConditionalAnimationTracks::Track,
   std::__ndk1::allocator<ConditionalAnimationTracks::Track> >&) const */

void __thiscall
ConditionalAnimationBlending::getAnimationsToPlay
          (ConditionalAnimationBlending *this,int param_1,vector *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  void *__src;
  ulong __n;
  long lVar6;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar4 = *(long *)(this + 0x10);
  uVar5 = (*(long *)(this + 0x18) - lVar4 >> 3) * 0xb6db6db7;
  if ((int)uVar5 != 0) {
    lVar6 = 0;
    while( true ) {
      if (0.0 < *(float *)(lVar4 + lVar6 + 0x30)) {
        ConditionalAnimationTracks::Track::Track
                  ((Track *)&local_70,param_1,*(int *)(lVar4 + lVar6 + 0x28));
        puVar2 = *(undefined8 **)(param_2 + 8);
        if (puVar2 == *(undefined8 **)(param_2 + 0x10)) {
          __src = *(void **)param_2;
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
          *puVar2 = local_70;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)param_2 = __dest;
          *(undefined8 **)(param_2 + 8) = puVar2 + 1;
          *(void **)(param_2 + 0x10) = (void *)((long)__dest + uVar1 * 8);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *puVar2 = local_70;
          *(undefined8 **)(param_2 + 8) = puVar2 + 1;
        }
      }
      if ((uVar5 & 0xffffffff) * 0x38 + -0x38 == lVar6) break;
      lVar4 = *(long *)(this + 0x10);
      lVar6 = lVar6 + 0x38;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


