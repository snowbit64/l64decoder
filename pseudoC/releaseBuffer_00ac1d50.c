// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseBuffer
// Entry Point: 00ac1d50
// Size: 176 bytes
// Signature: undefined __thiscall releaseBuffer(VulkanResourceAllocator * this, Buffer * param_1, FenceStatus * param_2)


/* VulkanResourceAllocator::releaseBuffer(VulkanResourceAllocator::Buffer*,
   VulkanResourceAllocator::FenceStatus*) */

void __thiscall
VulkanResourceAllocator::releaseBuffer
          (VulkanResourceAllocator *this,Buffer *param_1,FenceStatus *param_2)

{
  ulong uVar1;
  long lVar2;
  FenceStatus **ppFVar3;
  long lVar4;
  ulong uVar5;
  FenceStatus *pFVar6;
  ulong uVar7;
  
  Mutex::enterCriticalSection();
  lVar2 = *(long *)(this + 0x950);
  lVar4 = *(long *)(this + 0x958) - lVar2 >> 3;
  uVar7 = lVar4 * -0x3333333333333333;
  uVar5 = (ulong)((int)uVar7 + 1);
  uVar1 = uVar5 + lVar4 * 0x3333333333333333;
  if (uVar5 < uVar7 || uVar1 == 0) {
    if (uVar5 < uVar7) {
      *(ulong *)(this + 0x958) = lVar2 + uVar5 * 0x28;
    }
  }
  else {
                    /* try { // try from 00ac1da8 to 00ac1daf has its CatchHandler @ 00ac1e00 */
    std::__ndk1::
    vector<VulkanResourceAllocator::ReleasedBuffer,std::__ndk1::allocator<VulkanResourceAllocator::ReleasedBuffer>>
    ::__append((vector<VulkanResourceAllocator::ReleasedBuffer,std::__ndk1::allocator<VulkanResourceAllocator::ReleasedBuffer>>
                *)(this + 0x950),uVar1);
    lVar2 = *(long *)(this + 0x950);
  }
  ppFVar3 = (FenceStatus **)(lVar2 + (uVar7 & 0xffffffff) * 0x28);
  pFVar6 = *(FenceStatus **)param_2;
  *ppFVar3 = param_2;
  ppFVar3[1] = pFVar6;
  ppFVar3[2] = (FenceStatus *)0x0;
  ppFVar3[4] = (FenceStatus *)param_1;
                    /* try { // try from 00ac1de4 to 00ac1deb has its CatchHandler @ 00ac1e18 */
  Mutex::leaveCriticalSection();
  return;
}


