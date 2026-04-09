// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_back_slow_path<VulkanResourceAllocator::Texture*&,VulkanResourceAllocator::FenceStatus*&,unsigned_long_long&,VulkanResourceAllocator::FenceStatus*&,unsigned_long_long&>
// Entry Point: 00ac38d8
// Size: 380 bytes
// Signature: void __thiscall __emplace_back_slow_path<VulkanResourceAllocator::Texture*&,VulkanResourceAllocator::FenceStatus*&,unsigned_long_long&,VulkanResourceAllocator::FenceStatus*&,unsigned_long_long&>(vector<VulkanResourceAllocator::ReleasedTexture,std::__ndk1::allocator<VulkanResourceAllocator::ReleasedTexture>> * this, Texture * * param_1, FenceStatus * * param_2, ulonglong * param_3, FenceStatus * * param_4, ulonglong * param_5)


/* void std::__ndk1::vector<VulkanResourceAllocator::ReleasedTexture,
   std::__ndk1::allocator<VulkanResourceAllocator::ReleasedTexture>
   >::__emplace_back_slow_path<VulkanResourceAllocator::Texture*&,
   VulkanResourceAllocator::FenceStatus*&, unsigned long long&,
   VulkanResourceAllocator::FenceStatus*&, unsigned long long&>(VulkanResourceAllocator::Texture*&,
   VulkanResourceAllocator::FenceStatus*&, unsigned long long&,
   VulkanResourceAllocator::FenceStatus*&, unsigned long long&) */

void __thiscall
std::__ndk1::
vector<VulkanResourceAllocator::ReleasedTexture,std::__ndk1::allocator<VulkanResourceAllocator::ReleasedTexture>>
::
__emplace_back_slow_path<VulkanResourceAllocator::Texture*&,VulkanResourceAllocator::FenceStatus*&,unsigned_long_long&,VulkanResourceAllocator::FenceStatus*&,unsigned_long_long&>
          (vector<VulkanResourceAllocator::ReleasedTexture,std::__ndk1::allocator<VulkanResourceAllocator::ReleasedTexture>>
           *this,Texture **param_1,FenceStatus **param_2,ulonglong *param_3,FenceStatus **param_4,
          ulonglong *param_5)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  FenceStatus **ppFVar4;
  ulonglong uVar5;
  long lVar6;
  ulong uVar7;
  FenceStatus *pFVar8;
  ulonglong uVar9;
  FenceStatus *pFVar10;
  void *__src;
  size_t __n;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  lVar3 = (long)__n >> 3;
  uVar1 = lVar3 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - (long)__src >> 3;
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
  pFVar8 = *param_2;
  ppFVar4 = (FenceStatus **)((long)pvVar2 + lVar3 * 8);
  uVar9 = *param_3;
  pFVar10 = *param_4;
  uVar5 = *param_5;
  ppFVar4[4] = (FenceStatus *)*param_1;
  if (pFVar8 != (FenceStatus *)0x0) {
    *ppFVar4 = pFVar8;
    *(FenceStatus **)((long)pvVar2 + lVar3 * 8 + 0x10) = pFVar10;
    *(ulonglong *)((long)pvVar2 + lVar3 * 8 + 0x18) = uVar5;
    uVar5 = uVar9;
  }
  *(ulonglong *)((long)pvVar2 + lVar3 * 8 + 8) = uVar5;
  if (0 < (long)__n) {
    memcpy((void *)((long)ppFVar4 - __n),__src,__n);
    __src = *(void **)this;
  }
  *(void **)this = (void *)((long)ppFVar4 - __n);
  *(FenceStatus ***)(this + 8) = ppFVar4 + 5;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 0x28);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}


