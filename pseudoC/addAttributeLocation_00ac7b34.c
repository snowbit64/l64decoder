// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAttributeLocation
// Entry Point: 00ac7b34
// Size: 256 bytes
// Signature: undefined __thiscall addAttributeLocation(VulkanShaderSerializer * this, uint param_1)


/* VulkanShaderSerializer::addAttributeLocation(unsigned int) */

void __thiscall
VulkanShaderSerializer::addAttributeLocation(VulkanShaderSerializer *this,uint param_1)

{
  ulong uVar1;
  uint *puVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  puVar2 = *(uint **)(this + 0x28);
  if (puVar2 == *(uint **)(this + 0x30)) {
    __src = *(void **)(this + 0x20);
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
    puVar2 = (uint *)((long)__dest + ((long)__n >> 2) * 4);
    *puVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x20) = __dest;
    *(uint **)(this + 0x28) = puVar2 + 1;
    *(void **)(this + 0x30) = (void *)((long)__dest + uVar1 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *puVar2 = param_1;
    *(uint **)(this + 0x28) = puVar2 + 1;
  }
  return;
}


