// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: swapBuffers
// Entry Point: 00ad5510
// Size: 612 bytes
// Signature: undefined swapBuffers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanRenderWindow::swapBuffers() */

void VulkanRenderWindow::swapBuffers(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined4 *puStack_90;
  undefined4 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = (**(code **)(**(long **)(in_x0 + 0xb8) + 0x138))();
  VulkanRenderDevice::submitFrame();
  if (*(char *)(lVar3 + 0xa5a) != '\0') {
    uStack_70 = VulkanCommandBuffer::acquireSemaphoreForPresentation();
    local_a8 = &uStack_70;
    local_78 = *(undefined8 *)(in_x0 + 0x30);
    local_7c = *(undefined4 *)(in_x0 + 0x28);
    local_98 = &local_78;
    puStack_90 = &local_7c;
    local_b0 = 1;
    local_a0 = 1;
    local_88 = &local_80;
    local_80 = 0;
    local_c0[0] = 0x3b9acde9;
    local_b8 = 0;
    iVar2 = (*vkQueuePresentKHR)(*(undefined8 *)(*(long *)(in_x0 + 0xb8) + 0x448),local_c0);
    if (iVar2 == 0x3b9acdeb) {
      *(undefined *)(in_x0 + 0x56) = 0;
    }
  }
  *(undefined4 *)(in_x0 + 0x28) = 0xffffffff;
  if (*(long *)(in_x0 + 0xa8) != 0) {
    uVar5 = *(ulong *)(in_x0 + 0xa0);
    do {
      uVar9 = uVar5 % 0x66;
      lVar10 = *(long *)(*(long *)(in_x0 + 0x88) + (uVar5 / 0x66) * 8);
      lVar3 = *(long *)(in_x0 + 0xb8);
      if (*(uint *)(lVar3 + 0x3b8) < *(uint *)(lVar10 + uVar9 * 0x28)) break;
      lVar7 = lVar10 + uVar9 * 0x28;
      plVar8 = (long *)(lVar7 + 0x10);
      lVar6 = *plVar8;
      plVar11 = (long *)(lVar7 + 0x18);
      if (*plVar11 != lVar6) {
        uVar5 = 0;
        do {
          (*vkDestroyImageView)(*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar6 + uVar5 * 8),0);
          uVar5 = (ulong)((int)uVar5 + 1);
          lVar6 = *plVar8;
          lVar3 = *(long *)(in_x0 + 0xb8);
        } while (uVar5 < (ulong)(*plVar11 - lVar6 >> 3));
      }
      (*vkDestroySwapchainKHR)
                (*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar10 + uVar9 * 0x28 + 8),0);
      uVar5 = *(ulong *)(in_x0 + 0xa0);
      lVar3 = *(long *)(*(long *)(in_x0 + 0x88) + (uVar5 / 0x66) * 8);
      pvVar4 = *(void **)(lVar3 + (uVar5 % 0x66) * 0x28 + 0x10);
      if (pvVar4 != (void *)0x0) {
        *(void **)(lVar3 + (uVar5 % 0x66) * 0x28 + 0x18) = pvVar4;
        operator_delete(pvVar4);
        uVar5 = *(ulong *)(in_x0 + 0xa0);
      }
      uVar5 = uVar5 + 1;
      lVar3 = *(long *)(in_x0 + 0xa8) + -1;
      *(ulong *)(in_x0 + 0xa0) = uVar5;
      *(long *)(in_x0 + 0xa8) = lVar3;
      if (0xcb < uVar5) {
        operator_delete(**(void ***)(in_x0 + 0x88));
        lVar3 = *(long *)(in_x0 + 0xa8);
        uVar5 = *(long *)(in_x0 + 0xa0) - 0x66;
        *(long *)(in_x0 + 0x88) = *(long *)(in_x0 + 0x88) + 8;
        *(ulong *)(in_x0 + 0xa0) = uVar5;
      }
    } while (lVar3 != 0);
  }
  VulkanRenderDevice::onFrameFinished();
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


