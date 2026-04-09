// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseCommandPool
// Entry Point: 00ac25d8
// Size: 204 bytes
// Signature: undefined __thiscall releaseCommandPool(VulkanResourceAllocator * this, CommandPool * param_1, QUEUE_TYPE param_2, FenceStatus * param_3)


/* VulkanResourceAllocator::releaseCommandPool(VulkanResourceAllocator::CommandPool*,
   VulkanUtil::QUEUE_TYPE, VulkanResourceAllocator::FenceStatus*) */

void __thiscall
VulkanResourceAllocator::releaseCommandPool
          (VulkanResourceAllocator *this,CommandPool *param_1,QUEUE_TYPE param_2,
          FenceStatus *param_3)

{
  ulong uVar1;
  long lVar2;
  FenceStatus **ppFVar3;
  long lVar4;
  ulong uVar5;
  FenceStatus *pFVar6;
  ulong uVar7;
  
  Mutex::enterCriticalSection();
  lVar2 = *(long *)(this + (ulong)param_2 * 0x18 + 0x9b8);
  lVar4 = *(long *)(this + (ulong)param_2 * 0x18 + 0x9c0) - lVar2 >> 3;
  uVar7 = lVar4 * -0x3333333333333333;
  uVar5 = (ulong)((int)uVar7 + 1);
  uVar1 = uVar5 + lVar4 * 0x3333333333333333;
  if (uVar5 < uVar7 || uVar1 == 0) {
    if (uVar5 < uVar7) {
      *(ulong *)(this + (ulong)param_2 * 0x18 + 0x9c0) = lVar2 + uVar5 * 0x28;
    }
  }
  else {
                    /* try { // try from 00ac263c to 00ac2643 has its CatchHandler @ 00ac26a4 */
    std::__ndk1::
    vector<VulkanResourceAllocator::ReleasedCommandPool,std::__ndk1::allocator<VulkanResourceAllocator::ReleasedCommandPool>>
    ::__append((vector<VulkanResourceAllocator::ReleasedCommandPool,std::__ndk1::allocator<VulkanResourceAllocator::ReleasedCommandPool>>
                *)(this + (ulong)param_2 * 0x18 + 0x9b8),uVar1);
    lVar2 = *(long *)(this + (ulong)param_2 * 0x18 + 0x9b8);
  }
  if (param_3 == (FenceStatus *)0x0) {
    pFVar6 = (FenceStatus *)0x0;
  }
  else {
    pFVar6 = *(FenceStatus **)param_3;
  }
  ppFVar3 = (FenceStatus **)(lVar2 + (uVar7 & 0xffffffff) * 0x28);
  *ppFVar3 = param_3;
  ppFVar3[1] = pFVar6;
  ppFVar3[2] = (FenceStatus *)0x0;
  ppFVar3[4] = (FenceStatus *)param_1;
                    /* try { // try from 00ac2688 to 00ac268f has its CatchHandler @ 00ac26bc */
  Mutex::leaveCriticalSection();
  return;
}


