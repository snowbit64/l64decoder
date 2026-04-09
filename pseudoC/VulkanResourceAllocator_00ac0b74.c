// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanResourceAllocator
// Entry Point: 00ac0b74
// Size: 1408 bytes
// Signature: undefined __thiscall ~VulkanResourceAllocator(VulkanResourceAllocator * this)


/* VulkanResourceAllocator::~VulkanResourceAllocator() */

void __thiscall VulkanResourceAllocator::~VulkanResourceAllocator(VulkanResourceAllocator *this)

{
  long *plVar1;
  void *pvVar2;
  Allocation *pAVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  void **ppvVar8;
  
  lVar4 = *(long *)(this + 0xa00);
  *(undefined ***)this = &PTR__VulkanResourceAllocator_00fe6450;
  if (*(long *)(this + 0xa08) != lVar4) {
    uVar7 = 0;
    do {
                    /* try { // try from 00ac0bfc to 00ac0c03 has its CatchHandler @ 00ac1110 */
      (*vkDestroyDescriptorPool)
                (*(undefined8 *)(*(long *)(this + 0x980) + 0x18),
                 *(undefined8 *)(*(long *)(lVar4 + uVar7 * 0x28 + 0x20) + 0x10),0);
      lVar4 = *(long *)(this + 0xa00);
      plVar1 = *(long **)(lVar4 + uVar7 * 0x28 + 0x20);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar4 = *(long *)(this + 0xa00);
      }
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar5 = (*(long *)(this + 0xa08) - lVar4 >> 3) * -0x3333333333333333;
    } while (uVar7 <= uVar5 && uVar5 - uVar7 != 0);
  }
  lVar4 = *(long *)(this + 0x988);
  if (*(long *)(this + 0x990) != lVar4) {
    uVar7 = 0;
    do {
                    /* try { // try from 00ac0c74 to 00ac0c7b has its CatchHandler @ 00ac110c */
      (*vkDestroyCommandPool)
                (*(undefined8 *)(*(long *)(this + 0x980) + 0x18),
                 *(undefined8 *)(*(long *)(lVar4 + uVar7 * 8) + 0x18),0);
      lVar4 = *(long *)(this + 0x988);
      plVar1 = *(long **)(lVar4 + uVar7 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar4 = *(long *)(this + 0x988);
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(*(long *)(this + 0x990) - lVar4 >> 3));
  }
  lVar4 = *(long *)(this + 0x9b8);
  if (*(long *)(this + 0x9c0) != lVar4) {
    uVar7 = 0;
    do {
                    /* try { // try from 00ac0cf4 to 00ac0cfb has its CatchHandler @ 00ac1108 */
      (*vkDestroyCommandPool)
                (*(undefined8 *)(*(long *)(this + 0x980) + 0x18),
                 *(undefined8 *)(*(long *)(lVar4 + uVar7 * 0x28 + 0x20) + 0x18),0);
      lVar4 = *(long *)(this + 0x9b8);
      plVar1 = *(long **)(lVar4 + uVar7 * 0x28 + 0x20);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar4 = *(long *)(this + 0x9b8);
      }
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar5 = (*(long *)(this + 0x9c0) - lVar4 >> 3) * -0x3333333333333333;
    } while (uVar7 <= uVar5 && uVar5 - uVar7 != 0);
  }
  lVar4 = *(long *)(this + 0x9a0);
  if (*(long *)(this + 0x9a8) != lVar4) {
    uVar7 = 0;
    do {
                    /* try { // try from 00ac0d64 to 00ac0d6b has its CatchHandler @ 00ac1104 */
      (*vkDestroyCommandPool)
                (*(undefined8 *)(*(long *)(this + 0x980) + 0x18),
                 *(undefined8 *)(*(long *)(lVar4 + uVar7 * 8) + 0x18),0);
      lVar4 = *(long *)(this + 0x9a0);
      plVar1 = *(long **)(lVar4 + uVar7 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar4 = *(long *)(this + 0x9a0);
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(*(long *)(this + 0x9a8) - lVar4 >> 3));
  }
  lVar4 = *(long *)(this + 0x9d0);
  if (*(long *)(this + 0x9d8) != lVar4) {
    uVar7 = 0;
    do {
                    /* try { // try from 00ac0de4 to 00ac0deb has its CatchHandler @ 00ac1100 */
      (*vkDestroyCommandPool)
                (*(undefined8 *)(*(long *)(this + 0x980) + 0x18),
                 *(undefined8 *)(*(long *)(lVar4 + uVar7 * 0x28 + 0x20) + 0x18),0);
      lVar4 = *(long *)(this + 0x9d0);
      plVar1 = *(long **)(lVar4 + uVar7 * 0x28 + 0x20);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar4 = *(long *)(this + 0x9d0);
      }
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar5 = (*(long *)(this + 0x9d8) - lVar4 >> 3) * -0x3333333333333333;
    } while (uVar7 <= uVar5 && uVar5 - uVar7 != 0);
  }
  lVar4 = *(long *)(this + 0xa18);
  if (*(long *)(this + 0xa20) != lVar4) {
    uVar7 = 0;
    do {
      ppvVar8 = *(void ***)(lVar4 + uVar7 * 8);
                    /* try { // try from 00ac0e68 to 00ac0e6f has its CatchHandler @ 00ac10fc */
      (*vkDestroyFence)(*(undefined8 *)(*(long *)(this + 0x980) + 0x18),ppvVar8[3],0);
      pvVar2 = *ppvVar8;
      if (pvVar2 != (void *)0x0) {
        ppvVar8[1] = pvVar2;
        operator_delete(pvVar2);
      }
      operator_delete(ppvVar8);
      uVar7 = (ulong)((int)uVar7 + 1);
      lVar4 = *(long *)(this + 0xa18);
    } while (uVar7 < (ulong)(*(long *)(this + 0xa20) - lVar4 >> 3));
  }
  lVar4 = *(long *)(this + 0xa30);
  if (*(long *)(this + 0xa38) != lVar4) {
    uVar7 = 0;
    do {
      ppvVar8 = *(void ***)(lVar4 + uVar7 * 8);
                    /* try { // try from 00ac0ed0 to 00ac0ed7 has its CatchHandler @ 00ac10f8 */
      (*vkDestroyFence)(*(undefined8 *)(*(long *)(this + 0x980) + 0x18),ppvVar8[3],0);
      pvVar2 = *ppvVar8;
      if (pvVar2 != (void *)0x0) {
        ppvVar8[1] = pvVar2;
        operator_delete(pvVar2);
      }
      operator_delete(ppvVar8);
      uVar7 = (ulong)((int)uVar7 + 1);
      lVar4 = *(long *)(this + 0xa30);
    } while (uVar7 < (ulong)(*(long *)(this + 0xa38) - lVar4 >> 3));
  }
  lVar4 = *(long *)(this + 0xa50);
  lVar6 = *(long *)(this + 0xa48);
  if (lVar4 != lVar6) {
    uVar7 = 0;
    do {
      pvVar2 = *(void **)(lVar6 + uVar7 * 8);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        lVar4 = *(long *)(this + 0xa50);
        lVar6 = *(long *)(this + 0xa48);
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(lVar4 - lVar6 >> 3));
  }
                    /* try { // try from 00ac0f2c to 00ac0f37 has its CatchHandler @ 00ac10f4 */
  garbageCollect(this,true);
  lVar4 = *(long *)(this + 0x968);
  if ((int)((ulong)(*(long *)(this + 0x970) - lVar4) >> 3) * -0x33333333 != 0) {
    uVar7 = 0;
    lVar6 = 0x20;
    do {
      plVar1 = *(long **)(lVar4 + lVar6);
      lVar4 = *plVar1;
      if (lVar4 != 0) {
                    /* try { // try from 00ac0fa8 to 00ac0fc3 has its CatchHandler @ 00ac1114 */
        (*vkDestroyImage)(*(undefined8 *)(*(long *)(this + 0x980) + 0x18),lVar4,0);
      }
      pAVar3 = (Allocation *)plVar1[2];
      if (pAVar3 != (Allocation *)0x0) {
        VulkanMemoryAllocator::freeImageMemory
                  (*(VulkanMemoryAllocator **)(*(long *)(this + 0x980) + 0x378),pAVar3);
      }
      uVar7 = uVar7 + 1;
      lVar4 = *(long *)(this + 0x968);
      lVar6 = lVar6 + 0x28;
    } while (uVar7 < (uint)((int)((ulong)(*(long *)(this + 0x970) - lVar4) >> 3) * -0x33333333));
  }
  Mutex::~Mutex((Mutex *)(this + 0xad8));
  pvVar2 = *(void **)(this + 0xa60);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xa68) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xa48);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xa50) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xa30);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xa38) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xa18);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xa20) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xa00);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xa08) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x9e8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x9f0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x9d0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x9d8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x9b8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x9c0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x9a0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x9a8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x988);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x990) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x968);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x970) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x950);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x958) = pvVar2;
    operator_delete(pvVar2);
  }
  lVar4 = 0x480;
  do {
    pvVar2 = *(void **)(this + lVar4 + 0x470);
    if (pvVar2 != (void *)0x0) {
      *(void **)(this + lVar4 + 0x478) = pvVar2;
      operator_delete(pvVar2);
    }
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != 0);
  lVar4 = 0x480;
  do {
    pvVar2 = *(void **)(this + lVar4 + -0x10);
    if (pvVar2 != (void *)0x0) {
      *(void **)(this + lVar4 + -8) = pvVar2;
      operator_delete(pvVar2);
    }
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != 0);
  return;
}


