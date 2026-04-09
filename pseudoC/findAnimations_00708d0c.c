// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findAnimations
// Entry Point: 00708d0c
// Size: 304 bytes
// Signature: undefined __thiscall findAnimations(AnimalAnimationSystemSource * this, uint param_1, vector * param_2)


/* AnimalAnimationSystemSource::findAnimations(unsigned int, std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >&) */

void __thiscall
AnimalAnimationSystemSource::findAnimations
          (AnimalAnimationSystemSource *this,uint param_1,vector *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *__dest;
  void *__src;
  ulong __n;
  ulong uVar3;
  uint *puVar4;
  
  if (*(int *)(this + 0x308) != 0) {
    uVar3 = 0;
    puVar4 = (uint *)(this + 0x348);
    do {
      if (*puVar4 == param_1) {
        puVar2 = *(undefined4 **)(param_2 + 8);
        if (puVar2 == *(undefined4 **)(param_2 + 0x10)) {
          __src = *(void **)param_2;
          __n = (long)puVar2 - (long)__src;
          uVar1 = ((long)__n >> 2) + 1;
          if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar1 <= (ulong)((long)__n >> 1)) {
            uVar1 = (long)__n >> 1;
          }
          if (0x7ffffffffffffffb < __n) {
            uVar1 = 0x3fffffffffffffff;
          }
          if (uVar1 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar1 << 2);
          }
          puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
          *puVar2 = (int)uVar3;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)param_2 = __dest;
          *(undefined4 **)(param_2 + 8) = puVar2 + 1;
          *(void **)(param_2 + 0x10) = (void *)((long)__dest + uVar1 * 4);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *puVar2 = (int)uVar3;
          *(undefined4 **)(param_2 + 8) = puVar2 + 1;
        }
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar3 < *(uint *)(this + 0x308));
  }
  return;
}


