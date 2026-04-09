// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emplace_back<>
// Entry Point: 00a2d834
// Size: 272 bytes
// Signature: void emplace_back<>(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__ndk1::vector<RenderQueueItemAllocator::ShaderBucket,
   std::__ndk1::allocator<RenderQueueItemAllocator::ShaderBucket> >::emplace_back<>() */

void std::__ndk1::
     vector<RenderQueueItemAllocator::ShaderBucket,std::__ndk1::allocator<RenderQueueItemAllocator::ShaderBucket>>
     ::emplace_back<>(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  void **in_x0;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  size_t __n;
  
  puVar2 = (undefined8 *)in_x0[1];
  if (puVar2 < in_x0[2]) {
    *(undefined4 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    in_x0[1] = puVar2 + 4;
  }
  else {
    __src = *in_x0;
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 5) + 1;
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar3 = (long)in_x0[2] - (long)__src;
    uVar4 = (long)uVar3 >> 4;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x7fffffffffffffdf < uVar3) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 5);
    }
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 5) * 0x20);
    *(undefined4 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *in_x0 = __dest;
    in_x0[1] = puVar2 + 4;
    in_x0[2] = (void *)((long)__dest + uVar1 * 0x20);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


