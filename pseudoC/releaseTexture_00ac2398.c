// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseTexture
// Entry Point: 00ac2398
// Size: 228 bytes
// Signature: undefined __thiscall releaseTexture(VulkanResourceAllocator * this, Texture * param_1, FenceStatus * param_2, ulonglong param_3, FenceStatus * param_4, ulonglong param_5)


/* VulkanResourceAllocator::releaseTexture(VulkanResourceAllocator::Texture*,
   VulkanResourceAllocator::FenceStatus*, unsigned long long, VulkanResourceAllocator::FenceStatus*,
   unsigned long long) */

void __thiscall
VulkanResourceAllocator::releaseTexture
          (VulkanResourceAllocator *this,Texture *param_1,FenceStatus *param_2,ulonglong param_3,
          FenceStatus *param_4,ulonglong param_5)

{
  long lVar1;
  FenceStatus **ppFVar2;
  ulonglong local_80;
  FenceStatus *pFStack_78;
  ulonglong local_70;
  FenceStatus *pFStack_68;
  Texture *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_80 = param_5;
  pFStack_78 = param_4;
  local_70 = param_3;
  pFStack_68 = param_2;
  local_60 = param_1;
  Mutex::enterCriticalSection();
  ppFVar2 = *(FenceStatus ***)(this + 0x970);
  if (ppFVar2 < *(FenceStatus ***)(this + 0x978)) {
    ppFVar2[4] = (FenceStatus *)param_1;
    if (param_2 != (FenceStatus *)0x0) {
      *ppFVar2 = param_2;
      ppFVar2[2] = param_4;
      ppFVar2[3] = (FenceStatus *)param_5;
      param_5 = param_3;
    }
    ppFVar2[1] = (FenceStatus *)param_5;
    *(FenceStatus ***)(this + 0x970) = ppFVar2 + 5;
  }
  else {
                    /* try { // try from 00ac2418 to 00ac242f has its CatchHandler @ 00ac247c */
    std::__ndk1::
    vector<VulkanResourceAllocator::ReleasedTexture,std::__ndk1::allocator<VulkanResourceAllocator::ReleasedTexture>>
    ::
    __emplace_back_slow_path<VulkanResourceAllocator::Texture*&,VulkanResourceAllocator::FenceStatus*&,unsigned_long_long&,VulkanResourceAllocator::FenceStatus*&,unsigned_long_long&>
              ((vector<VulkanResourceAllocator::ReleasedTexture,std::__ndk1::allocator<VulkanResourceAllocator::ReleasedTexture>>
                *)(this + 0x968),&local_60,&pFStack_68,&local_70,&pFStack_78,&local_80);
  }
                    /* try { // try from 00ac2444 to 00ac244b has its CatchHandler @ 00ac2494 */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


