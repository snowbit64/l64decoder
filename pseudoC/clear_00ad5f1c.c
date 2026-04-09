// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clear
// Entry Point: 00ad5f1c
// Size: 304 bytes
// Signature: undefined clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::__deque_base<VulkanRenderWindow::ReleasedSwapChain,
   std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain> >::clear() */

void std::__ndk1::
     __deque_base<VulkanRenderWindow::ReleasedSwapChain,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain>>
     ::clear(void)

{
  long in_x0;
  void *pvVar1;
  void **ppvVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  void **ppvVar5;
  
  ppvVar2 = *(void ***)(in_x0 + 8);
  ppvVar5 = *(void ***)(in_x0 + 0x10);
  if (ppvVar5 != ppvVar2) {
    uVar6 = *(ulong *)(in_x0 + 0x20);
    uVar4 = *(long *)(in_x0 + 0x28) + uVar6;
    pvVar8 = (void *)((long)ppvVar2[uVar6 / 0x66] + (uVar6 % 0x66) * 0x28);
    pvVar7 = (void *)((long)ppvVar2[uVar4 / 0x66] + (uVar4 % 0x66) * 0x28);
    if (pvVar8 != pvVar7) {
      ppvVar2 = ppvVar2 + uVar6 / 0x66;
      do {
        pvVar1 = *(void **)((long)pvVar8 + 0x10);
        if (pvVar1 != (void *)0x0) {
          *(void **)((long)pvVar8 + 0x18) = pvVar1;
          operator_delete(pvVar1);
        }
        pvVar8 = (void *)((long)pvVar8 + 0x28);
        if ((long)pvVar8 - (long)*ppvVar2 == 0xff0) {
          ppvVar2 = ppvVar2 + 1;
          pvVar8 = *ppvVar2;
        }
      } while (pvVar8 != pvVar7);
      ppvVar2 = *(void ***)(in_x0 + 8);
      ppvVar5 = *(void ***)(in_x0 + 0x10);
    }
  }
  *(undefined8 *)(in_x0 + 0x28) = 0;
  uVar4 = (long)ppvVar5 - (long)ppvVar2;
  while (0x10 < uVar4) {
    operator_delete(*ppvVar2);
    ppvVar2 = (void **)(*(long *)(in_x0 + 8) + 8);
    *(void ***)(in_x0 + 8) = ppvVar2;
    uVar4 = *(long *)(in_x0 + 0x10) - (long)ppvVar2;
  }
  if (uVar4 >> 3 == 1) {
    uVar3 = 0x33;
  }
  else {
    if (uVar4 >> 3 != 2) {
      return;
    }
    uVar3 = 0x66;
  }
  *(undefined8 *)(in_x0 + 0x20) = uVar3;
  return;
}


