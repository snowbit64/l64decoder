// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: refreshWindowSize
// Entry Point: 00ad9918
// Size: 256 bytes
// Signature: undefined refreshWindowSize(void)


/* WARNING: Removing unreachable block (ram,0x00ad9978) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidVulkanRenderWindow::refreshWindowSize() */

void AndroidVulkanRenderWindow::refreshWindowSize(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined auStack_70 [8];
  uint local_68;
  uint uStack_64;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(in_x0 + 0xc0) == 0) ||
     (iVar2 = (*vkGetPhysicalDeviceSurfaceCapabilitiesKHR)
                        (*(undefined8 *)(*(long *)(in_x0 + 0xb8) + 0x20),*(long *)(in_x0 + 0xc0),
                         auStack_70), iVar2 != 0)) {
    local_68 = *(uint *)(in_x0 + 0xe4);
    uVar6 = *(uint *)(in_x0 + 0xe8);
    uVar4 = uVar6;
LAB_00ad9998:
    if (uVar4 == uVar6) goto LAB_00ad99f0;
  }
  else {
    uVar4 = uStack_64;
    if (local_68 <= uStack_64) {
      uVar4 = local_68;
      local_68 = uStack_64;
    }
    uVar6 = *(uint *)(in_x0 + 0xe8);
    if (local_68 == *(uint *)(in_x0 + 0xe4)) goto LAB_00ad9998;
  }
  lVar5 = *(long *)(in_x0 + 200);
  *(uint *)(in_x0 + 0xe4) = local_68;
  *(uint *)(in_x0 + 0xe8) = uVar4;
  *(uint *)(in_x0 + 0xec) = local_68;
  *(uint *)(in_x0 + 0xf0) = uVar4;
  *(uint *)(in_x0 + 0xfc) = local_68;
  *(uint *)(in_x0 + 0x100) = uVar4;
  if (*(long *)(in_x0 + 0xd0) != lVar5) {
    uVar7 = 0;
    while( true ) {
      plVar3 = *(long **)(lVar5 + uVar7 * 8);
      (**(code **)(*plVar3 + 0x18))(plVar3,0,0,local_68,uVar4);
      lVar5 = *(long *)(in_x0 + 200);
      uVar7 = (ulong)((int)uVar7 + 1);
      if ((ulong)(*(long *)(in_x0 + 0xd0) - lVar5 >> 3) <= uVar7) break;
      local_68 = *(uint *)(in_x0 + 0xe4);
      uVar4 = *(uint *)(in_x0 + 0xe8);
    }
  }
LAB_00ad99f0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


