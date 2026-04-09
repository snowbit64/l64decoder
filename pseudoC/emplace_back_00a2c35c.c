// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emplace_back<>
// Entry Point: 00a2c35c
// Size: 360 bytes
// Signature: void emplace_back<>(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__ndk1::vector<RenderQueueItem, std::__ndk1::allocator<RenderQueueItem>
   >::emplace_back<>() */

void std::__ndk1::vector<RenderQueueItem,std::__ndk1::allocator<RenderQueueItem>>::emplace_back<>
               (void)

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
    puVar4[0x1b] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x17] = 0;
    puVar4[0x16] = 0;
    puVar4[0x19] = 0;
    puVar4[0x18] = 0;
    puVar4[0x13] = 0;
    puVar4[0x12] = 0;
    puVar4[0x15] = 0;
    puVar4[0x14] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    in_x0[1] = puVar4 + 0x1e;
  }
  else {
    __src = *in_x0;
    __n = (long)puVar4 - (long)__src;
    uVar1 = ((long)__n >> 4) * -0x1111111111111111 + 1;
    if (0x111111111111111 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = (long)in_x0[2] - (long)__src >> 4;
    uVar5 = lVar3 * -0x2222222222222222;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x88888888888887 < (ulong)(lVar3 * -0x1111111111111111)) {
      uVar1 = 0x111111111111111;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x111111111111111 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0xf0);
    }
    puVar4 = (undefined8 *)((long)pvVar2 + ((long)__n >> 4) * 0x10);
    puVar4[0x1b] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x17] = 0;
    puVar4[0x16] = 0;
    puVar4[0x19] = 0;
    puVar4[0x18] = 0;
    puVar4[0x13] = 0;
    puVar4[0x12] = 0;
    puVar4[0x15] = 0;
    puVar4[0x14] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = *in_x0;
    }
    *in_x0 = (void *)((long)puVar4 - __n);
    in_x0[1] = puVar4 + 0x1e;
    in_x0[2] = (void *)((long)pvVar2 + uVar1 * 0xf0);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


