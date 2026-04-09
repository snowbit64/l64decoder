// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00ad32fc
// Size: 364 bytes
// Signature: undefined __thiscall __append(vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>> * this, ulong param_1)


/* std::__ndk1::vector<VulkanCommandBuffer::DescriptorSetElementInfo,
   std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo> >::__append(unsigned long)
    */

void __thiscall
std::__ndk1::
vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
::__append(vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *__src;
  size_t __n;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  
  puVar4 = *(undefined4 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar4 >> 3) * -0x3333333333333333) < param_1) {
    lVar3 = (long)puVar4 - *(long *)this >> 3;
    uVar1 = lVar3 * -0x3333333333333333 + param_1;
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar7 = lVar6 * -0x6666666666666666;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
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
    puVar5 = (undefined4 *)((long)pvVar2 + lVar3 * 8);
    puVar4 = puVar5;
    do {
      *puVar4 = 0;
      *(undefined *)(puVar4 + 9) = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined8 *)(puVar4 + 4) = 0;
      puVar4 = puVar4 + 10;
    } while (puVar4 != puVar5 + param_1 * 10);
    __src = *(void **)this;
    __n = *(long *)(this + 8) - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar5 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar5 - __n);
    *(undefined4 **)(this + 8) = puVar5 + param_1 * 10;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 0x28);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    puVar5 = puVar4;
    if (param_1 != 0) {
      puVar5 = puVar4 + param_1 * 10;
      do {
        *puVar4 = 0;
        *(undefined *)(puVar4 + 9) = 0;
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined8 *)(puVar4 + 4) = 0;
        puVar4 = puVar4 + 10;
      } while (puVar4 != puVar5);
    }
    *(undefined4 **)(this + 8) = puVar5;
  }
  return;
}


