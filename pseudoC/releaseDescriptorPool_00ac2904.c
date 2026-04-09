// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseDescriptorPool
// Entry Point: 00ac2904
// Size: 188 bytes
// Signature: undefined __thiscall releaseDescriptorPool(VulkanResourceAllocator * this, DescriptorPool * param_1, FenceStatus * param_2)


/* VulkanResourceAllocator::releaseDescriptorPool(VulkanResourceAllocator::DescriptorPool*,
   VulkanResourceAllocator::FenceStatus*) */

void __thiscall
VulkanResourceAllocator::releaseDescriptorPool
          (VulkanResourceAllocator *this,DescriptorPool *param_1,FenceStatus *param_2)

{
  ulong uVar1;
  long lVar2;
  FenceStatus **ppFVar3;
  long lVar4;
  ulong uVar5;
  FenceStatus *pFVar6;
  ulong uVar7;
  
  Mutex::enterCriticalSection();
  lVar2 = *(long *)(this + 0xa00);
  lVar4 = *(long *)(this + 0xa08) - lVar2 >> 3;
  uVar7 = lVar4 * -0x3333333333333333;
  uVar5 = (ulong)((int)uVar7 + 1);
  uVar1 = uVar5 + lVar4 * 0x3333333333333333;
  if (uVar5 < uVar7 || uVar1 == 0) {
    if (uVar5 < uVar7) {
      *(ulong *)(this + 0xa08) = lVar2 + uVar5 * 0x28;
    }
  }
  else {
                    /* try { // try from 00ac295c to 00ac2963 has its CatchHandler @ 00ac29c0 */
    std::__ndk1::
    vector<VulkanResourceAllocator::ReleasedDescriptorPool,std::__ndk1::allocator<VulkanResourceAllocator::ReleasedDescriptorPool>>
    ::__append((vector<VulkanResourceAllocator::ReleasedDescriptorPool,std::__ndk1::allocator<VulkanResourceAllocator::ReleasedDescriptorPool>>
                *)(this + 0xa00),uVar1);
    lVar2 = *(long *)(this + 0xa00);
  }
  if (param_2 == (FenceStatus *)0x0) {
    pFVar6 = (FenceStatus *)0x0;
  }
  else {
    pFVar6 = *(FenceStatus **)param_2;
  }
  ppFVar3 = (FenceStatus **)(lVar2 + (uVar7 & 0xffffffff) * 0x28);
  *ppFVar3 = param_2;
  ppFVar3[1] = pFVar6;
  ppFVar3[2] = (FenceStatus *)0x0;
  ppFVar3[4] = (FenceStatus *)param_1;
                    /* try { // try from 00ac29a4 to 00ac29ab has its CatchHandler @ 00ac29d8 */
  Mutex::leaveCriticalSection();
  return;
}


