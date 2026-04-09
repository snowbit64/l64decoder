// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00abfad8
// Size: 612 bytes
// Signature: undefined __thiscall __append(vector<VulkanMemoryAllocator::MemoryTypeInfo,std::__ndk1::allocator<VulkanMemoryAllocator::MemoryTypeInfo>> * this, ulong param_1)


/* std::__ndk1::vector<VulkanMemoryAllocator::MemoryTypeInfo,
   std::__ndk1::allocator<VulkanMemoryAllocator::MemoryTypeInfo> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<VulkanMemoryAllocator::MemoryTypeInfo,std::__ndk1::allocator<VulkanMemoryAllocator::MemoryTypeInfo>>
::__append(vector<VulkanMemoryAllocator::MemoryTypeInfo,std::__ndk1::allocator<VulkanMemoryAllocator::MemoryTypeInfo>>
           *this,ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  void *__s;
  void *pvVar10;
  size_t sVar11;
  void *pvVar12;
  
  __s = *(void **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)__s >> 3) * 0x6db6db6db6db6db7) < param_1) {
    pvVar12 = *(void **)this;
    lVar8 = (long)__s - (long)pvVar12 >> 3;
    uVar1 = lVar8 * 0x6db6db6db6db6db7 + param_1;
    if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = *(long *)(this + 0x10) - (long)pvVar12 >> 3;
    uVar9 = lVar6 * -0x2492492492492492;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x249249249249248 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
      uVar1 = 0x492492492492492;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar5 = operator_new(uVar1 * 0x38);
    }
    pvVar10 = (void *)((long)pvVar5 + lVar8 * 8);
    pvVar5 = (void *)((long)pvVar5 + uVar1 * 0x38);
    sVar11 = ((param_1 * 0x38 - 0x38) / 0x38) * 0x38 + 0x38;
    memset(pvVar10,0,sVar11);
    lVar8 = (long)pvVar10 + sVar11;
    if (__s == pvVar12) {
      *(void **)this = pvVar10;
      *(long *)(this + 8) = lVar8;
      *(void **)(this + 0x10) = pvVar5;
    }
    else {
      lVar6 = 0;
      do {
        lVar7 = lVar6 + -0x38;
        uVar4 = *(undefined4 *)((long)__s + lVar6 + -0x38);
        *(undefined8 *)((long)pvVar10 + lVar6 + -0x28) = 0;
        *(undefined8 *)((long)pvVar10 + lVar6 + -0x20) = 0;
        uVar2 = *(undefined8 *)((long)__s + lVar6 + -0x30);
        uVar3 = *(undefined8 *)((long)__s + lVar6 + -0x28);
        *(undefined4 *)((long)pvVar10 + lVar6 + -0x38) = uVar4;
        *(undefined8 *)((long)pvVar10 + lVar6 + -0x30) = uVar2;
        *(undefined8 *)((long)pvVar10 + lVar6 + -0x28) = uVar3;
        *(undefined8 *)((long)pvVar10 + lVar6 + -0x20) = *(undefined8 *)((long)__s + lVar6 + -0x20);
        *(undefined8 *)((long)__s + lVar6 + -0x30) = 0;
        *(undefined8 *)((long)__s + lVar6 + -0x28) = 0;
        *(undefined8 *)((long)__s + lVar6 + -0x20) = 0;
        *(undefined8 *)((long)pvVar10 + lVar6 + -0x10) = 0;
        *(undefined8 *)((long)pvVar10 + lVar6 + -8) = 0;
        uVar2 = *(undefined8 *)((long)__s + lVar6 + -0x10);
        *(undefined8 *)((long)pvVar10 + lVar6 + -0x18) = *(undefined8 *)((long)__s + lVar6 + -0x18);
        *(undefined8 *)((long)pvVar10 + lVar6 + -0x10) = uVar2;
        *(undefined8 *)((long)pvVar10 + lVar6 + -8) = *(undefined8 *)((long)__s + lVar6 + -8);
        *(undefined8 *)((long)__s + lVar6 + -0x18) = 0;
        *(undefined8 *)((long)__s + lVar6 + -0x10) = 0;
        *(undefined8 *)((long)__s + lVar6 + -8) = 0;
        lVar6 = lVar7;
      } while ((void *)((long)__s + lVar7) != pvVar12);
      *(void **)(this + 0x10) = pvVar5;
      __s = *(void **)this;
      pvVar12 = *(void **)(this + 8);
      *(long *)this = (long)pvVar10 + lVar7;
      *(long *)(this + 8) = lVar8;
      while (pvVar5 = pvVar12, pvVar5 != __s) {
        pvVar12 = *(void **)((long)pvVar5 + -0x18);
        if (pvVar12 != (void *)0x0) {
          *(void **)((long)pvVar5 + -0x10) = pvVar12;
          operator_delete(pvVar12);
        }
        pvVar10 = *(void **)((long)pvVar5 + -0x30);
        pvVar12 = (void *)((long)pvVar5 + -0x38);
        if (pvVar10 != (void *)0x0) {
          *(void **)((long)pvVar5 + -0x28) = pvVar10;
          operator_delete(pvVar10);
        }
      }
    }
    if (__s != (void *)0x0) {
      operator_delete(__s);
      return;
    }
  }
  else {
    if (param_1 != 0) {
      sVar11 = ((param_1 * 0x38 - 0x38) / 0x38) * 0x38 + 0x38;
      memset(__s,0,sVar11);
      __s = (void *)((long)__s + sVar11);
    }
    *(void **)(this + 8) = __s;
  }
  return;
}


