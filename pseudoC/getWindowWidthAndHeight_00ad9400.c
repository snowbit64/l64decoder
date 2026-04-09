// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWindowWidthAndHeight
// Entry Point: 00ad9400
// Size: 176 bytes
// Signature: undefined __thiscall getWindowWidthAndHeight(AndroidVulkanRenderWindow * this, uint * param_1, uint * param_2)


/* AndroidVulkanRenderWindow::getWindowWidthAndHeight(unsigned int&, unsigned int&) */

void __thiscall
AndroidVulkanRenderWindow::getWindowWidthAndHeight
          (AndroidVulkanRenderWindow *this,uint *param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  undefined auStack_70 [8];
  uint local_68;
  uint uStack_64;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0xc0) == 0) ||
     (iVar2 = (*vkGetPhysicalDeviceSurfaceCapabilitiesKHR)
                        (*(undefined8 *)(*(long *)(this + 0xb8) + 0x20),*(long *)(this + 0xc0),
                         auStack_70), iVar2 != 0)) {
    *param_1 = *(uint *)(this + 0xe4);
    uStack_64 = *(uint *)(this + 0xe8);
  }
  else if (uStack_64 < local_68) {
    *param_1 = local_68;
  }
  else {
    *param_1 = uStack_64;
    uStack_64 = local_68;
  }
  *param_2 = uStack_64;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


