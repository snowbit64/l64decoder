// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCommandPool
// Entry Point: 00ac2498
// Size: 316 bytes
// Signature: undefined __thiscall getCommandPool(VulkanResourceAllocator * this, QUEUE_TYPE param_1)


/* VulkanResourceAllocator::getCommandPool(VulkanUtil::QUEUE_TYPE) */

undefined8 * __thiscall
VulkanResourceAllocator::getCommandPool(VulkanResourceAllocator *this,QUEUE_TYPE param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *unaff_x22;
  long lVar4;
  long lVar5;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)param_1;
  Mutex::enterCriticalSection();
  lVar4 = *(long *)(this + uVar3 * 0x18 + 0x988);
  lVar5 = *(long *)(this + uVar3 * 0x18 + 0x990);
  if (lVar4 != lVar5) {
    unaff_x22 = *(undefined8 **)(undefined8 *)(lVar5 + -8);
    *(undefined8 **)(this + uVar3 * 0x18 + 0x990) = (undefined8 *)(lVar5 + -8);
  }
                    /* try { // try from 00ac2500 to 00ac2507 has its CatchHandler @ 00ac25d4 */
  Mutex::leaveCriticalSection();
  if (lVar4 == lVar5) {
    unaff_x22 = (undefined8 *)operator_new(0x40);
    *(undefined4 *)(unaff_x22 + 1) = 0;
    unaff_x22[6] = 0;
    unaff_x22[4] = 0;
    unaff_x22[5] = 0;
    lVar4 = *(long *)(this + 0x980);
    local_70[0] = 0x27;
    local_68 = 0;
    *unaff_x22 = &PTR__CommandPool_00fe6480;
    uVar2 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined4 *)(unaff_x22 + 7) = 0;
    local_60 = 2;
    unaff_x22[2] = uVar2;
    local_5c = *(undefined4 *)(lVar4 + uVar3 * 4 + 0x458);
    (*vkCreateCommandPool)(uVar2,local_70,0,unaff_x22 + 3);
    if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_00ac25d0;
  }
  else if (*(long *)(lVar1 + 0x28) != local_58) {
LAB_00ac25d0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x22;
}


