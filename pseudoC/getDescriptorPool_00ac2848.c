// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDescriptorPool
// Entry Point: 00ac2848
// Size: 184 bytes
// Signature: undefined getDescriptorPool(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanResourceAllocator::getDescriptorPool() */

undefined8 * VulkanResourceAllocator::getDescriptorPool(void)

{
  code *pcVar1;
  long in_x0;
  undefined8 uVar2;
  undefined8 *unaff_x21;
  long lVar3;
  long lVar4;
  
  Mutex::enterCriticalSection();
  lVar3 = *(long *)(in_x0 + 0x9e8);
  lVar4 = *(long *)(in_x0 + 0x9f0);
  if (lVar3 != lVar4) {
    unaff_x21 = *(undefined8 **)(undefined8 *)(lVar4 + -0x10);
    *(undefined8 **)(in_x0 + 0x9f0) = (undefined8 *)(lVar4 + -0x10);
  }
                    /* try { // try from 00ac288c to 00ac2893 has its CatchHandler @ 00ac2900 */
  Mutex::leaveCriticalSection();
  if (lVar3 == lVar4) {
    unaff_x21 = (undefined8 *)operator_new(0x18);
    *(undefined4 *)(unaff_x21 + 1) = 0;
    pcVar1 = vkCreateDescriptorPool;
    uVar2 = *(undefined8 *)(*(long *)(in_x0 + 0x980) + 0x18);
    *unaff_x21 = &PTR__RefCountedPool_00fe64e8;
    (*pcVar1)(uVar2,in_x0 + 0xab0,0,unaff_x21 + 2);
  }
  return unaff_x21;
}


