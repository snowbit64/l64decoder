// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTimer
// Entry Point: 00881bac
// Size: 276 bytes
// Signature: undefined __thiscall addTimer(BehaviorContext * this, float param_1)


/* BehaviorContext::addTimer(float) */

int __thiscall BehaviorContext::addTimer(BehaviorContext *this,float param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  
  iVar3 = *(int *)(this + 0xe8);
  puVar2 = *(undefined8 **)(this + 0xd8);
  *(int *)(this + 0xe8) = iVar3 + 1;
  if (puVar2 < *(undefined8 **)(this + 0xe0)) {
    *puVar2 = CONCAT44(param_1,iVar3);
    *(undefined8 **)(this + 0xd8) = puVar2 + 1;
  }
  else {
    __src = *(void **)(this + 0xd0);
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar4 = (long)*(undefined8 **)(this + 0xe0) - (long)__src;
    uVar5 = (long)uVar4 >> 2;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar4) {
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
    *puVar2 = CONCAT44(param_1,iVar3);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xd0) = __dest;
    *(undefined8 **)(this + 0xd8) = puVar2 + 1;
    *(void **)(this + 0xe0) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  return iVar3;
}


