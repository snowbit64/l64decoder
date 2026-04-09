// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createComputePipelineState
// Entry Point: 00ad1010
// Size: 392 bytes
// Signature: undefined createComputePipelineState(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::createComputePipelineState() */

void VulkanCommandBuffer::createComputePipelineState(void)

{
  ulong uVar1;
  long lVar2;
  long in_x0;
  void *__dest;
  long lVar3;
  undefined8 *puVar4;
  void *__src;
  ulong __n;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(in_x0 + 0xc0);
  uStack_a0 = *(undefined8 *)(lVar3 + 0x88);
  local_a8 = *(undefined8 *)(lVar3 + 0x80);
  uStack_90 = *(undefined8 *)(lVar3 + 0x98);
  local_98 = *(undefined8 *)(lVar3 + 0x90);
  uStack_80 = *(undefined8 *)(lVar3 + 0xa8);
  local_88 = *(undefined8 *)(lVar3 + 0xa0);
  local_78 = *(undefined8 *)(lVar3 + 0x1e0);
  local_68 = 0;
  uStack_70 = 0;
  local_c0[0] = 0x1d;
  local_b8 = 0;
  local_b0 = 0;
  (*vkCreateComputePipelines)
            (*(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18),0,1,local_c0,0,&local_60);
  puVar4 = *(undefined8 **)(in_x0 + 0x8f0);
  if (puVar4 == *(undefined8 **)(in_x0 + 0x8f8)) {
    __src = *(void **)(in_x0 + 0x8e8);
    __n = (long)puVar4 - (long)__src;
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
    puVar4 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar4 = local_60;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(in_x0 + 0x8e8) = __dest;
    *(undefined8 **)(in_x0 + 0x8f0) = puVar4 + 1;
    *(void **)(in_x0 + 0x8f8) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *puVar4 = local_60;
    *(undefined8 **)(in_x0 + 0x8f0) = puVar4 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60);
}


