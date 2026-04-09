// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCommandBuffer
// Entry Point: 00ac26c0
// Size: 392 bytes
// Signature: undefined getCommandBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanResourceAllocator::CommandPool::getCommandBuffer() */

void VulkanResourceAllocator::CommandPool::getCommandBuffer(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long in_x0;
  void *__dest;
  void *pvVar5;
  ulong __n;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pvVar5 = *(void **)(in_x0 + 0x20);
  uVar3 = *(uint *)(in_x0 + 0x38);
  if ((ulong)uVar3 < (ulong)(*(long *)(in_x0 + 0x28) - (long)pvVar5 >> 3)) {
    *(uint *)(in_x0 + 0x38) = uVar3 + 1;
    local_60 = *(undefined8 *)((long)pvVar5 + (ulong)uVar3 * 8);
  }
  else {
    local_80[0] = 0x28;
    uStack_70 = *(undefined8 *)(in_x0 + 0x18);
    local_68 = 0x100000000;
    local_78 = 0;
    (*vkAllocateCommandBuffers)(*(undefined8 *)(in_x0 + 0x10),local_80,&local_60);
    puVar2 = *(undefined8 **)(in_x0 + 0x28);
    if (puVar2 == *(undefined8 **)(in_x0 + 0x30)) {
      pvVar5 = *(void **)(in_x0 + 0x20);
      __n = (long)puVar2 - (long)pvVar5;
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
        memcpy(__dest,pvVar5,__n);
      }
      *(void **)(in_x0 + 0x20) = __dest;
      *(undefined8 **)(in_x0 + 0x28) = puVar2 + 1;
      *(void **)(in_x0 + 0x30) = (void *)((long)__dest + uVar1 * 8);
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
    }
    else {
      *puVar2 = local_60;
      *(undefined8 **)(in_x0 + 0x28) = puVar2 + 1;
    }
    *(int *)(in_x0 + 0x38) = *(int *)(in_x0 + 0x38) + 1;
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60);
}


