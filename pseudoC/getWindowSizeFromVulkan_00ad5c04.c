// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWindowSizeFromVulkan
// Entry Point: 00ad5c04
// Size: 120 bytes
// Signature: undefined __thiscall getWindowSizeFromVulkan(VulkanRenderWindow * this, uint * param_1, uint * param_2)


/* VulkanRenderWindow::getWindowSizeFromVulkan(unsigned int&, unsigned int&) */

void __thiscall
VulkanRenderWindow::getWindowSizeFromVulkan(VulkanRenderWindow *this,uint *param_1,uint *param_2)

{
  long lVar1;
  undefined auStack_70 [8];
  uint local_68;
  uint uStack_64;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (*vkGetPhysicalDeviceSurfaceCapabilitiesKHR)
            (*(undefined8 *)(*(long *)(this + 0xb8) + 0x20),*(undefined8 *)(this + 0xc0),auStack_70)
  ;
  *param_1 = local_68;
  *param_2 = uStack_64;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


