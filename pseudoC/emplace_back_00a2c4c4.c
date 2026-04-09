// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emplace_back<>
// Entry Point: 00a2c4c4
// Size: 312 bytes
// Signature: void emplace_back<>(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__ndk1::vector<RenderQueueItemSortKey, std::__ndk1::allocator<RenderQueueItemSortKey>
   >::emplace_back<>() */

void std::__ndk1::vector<RenderQueueItemSortKey,std::__ndk1::allocator<RenderQueueItemSortKey>>::
     emplace_back<>(void)

{
  ulong uVar1;
  void **in_x0;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  
  puVar4 = (undefined8 *)in_x0[1];
  if (puVar4 < in_x0[2]) {
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    in_x0[1] = puVar4 + 5;
  }
  else {
    __src = *in_x0;
    __n = (long)puVar4 - (long)__src;
    uVar1 = ((long)__n >> 3) * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = (long)in_x0[2] - (long)__src >> 3;
    uVar5 = lVar3 * -0x6666666666666666;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
      uVar1 = 0x666666666666666;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x28);
    }
    puVar4 = (undefined8 *)((long)pvVar2 + ((long)__n >> 3) * 8);
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = *in_x0;
    }
    *in_x0 = (void *)((long)puVar4 - __n);
    in_x0[1] = puVar4 + 5;
    in_x0[2] = (void *)((long)pvVar2 + uVar1 * 0x28);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


