// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFence
// Entry Point: 00ac29dc
// Size: 252 bytes
// Signature: undefined __thiscall getFence(VulkanResourceAllocator * this, QUEUE_TYPE param_1)


/* VulkanResourceAllocator::getFence(VulkanUtil::QUEUE_TYPE) */

undefined8 * __thiscall
VulkanResourceAllocator::getFence(VulkanResourceAllocator *this,QUEUE_TYPE param_1)

{
  long lVar1;
  undefined8 *unaff_x21;
  long lVar2;
  long lVar3;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  lVar2 = *(long *)(this + 0xa18);
  lVar3 = *(long *)(this + 0xa20);
  if (lVar2 != lVar3) {
    unaff_x21 = *(undefined8 **)(undefined8 *)(lVar3 + -8);
    *(undefined8 **)(this + 0xa20) = (undefined8 *)(lVar3 + -8);
  }
                    /* try { // try from 00ac2a38 to 00ac2a3f has its CatchHandler @ 00ac2ad8 */
  Mutex::leaveCriticalSection();
  if (lVar2 == lVar3) {
    unaff_x21 = (undefined8 *)operator_new(0x38);
    unaff_x21[6] = 0;
    lVar2 = *(long *)(this + 0x980);
    local_70[0] = 8;
    unaff_x21[1] = 0;
    *unaff_x21 = 0;
    unaff_x21[3] = 0;
    unaff_x21[2] = 0;
    unaff_x21[5] = 0;
    unaff_x21[4] = 0;
    local_68 = 0;
    local_60 = 0;
    (*vkCreateFence)(*(undefined8 *)(lVar2 + 0x18),local_70,0,unaff_x21 + 3);
    *(QUEUE_TYPE *)(unaff_x21 + 4) = param_1;
    *(undefined4 *)((long)unaff_x21 + 0x24) = 0;
    *(undefined *)(unaff_x21 + 5) = 0;
    unaff_x21[6] = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return unaff_x21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


