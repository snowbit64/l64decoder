// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeReusableBuffers
// Entry Point: 00ac9810
// Size: 436 bytes
// Signature: undefined initializeReusableBuffers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::initializeReusableBuffers() */

void VulkanCommandBuffer::initializeReusableBuffers(void)

{
  long lVar1;
  long in_x0;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined auStack_d0 [24];
  undefined8 local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  puVar5 = (undefined8 *)(in_x0 + 0xe8);
  *(undefined8 *)(in_x0 + 0x1c8) = 0;
  *(undefined8 *)(in_x0 + 0x1c0) = 0;
  *(undefined8 *)(in_x0 + 0x1d8) = 0;
  *(undefined8 *)(in_x0 + 0x1d0) = 0;
  *(undefined8 *)(in_x0 + 0x1a8) = 0;
  *(undefined8 *)(in_x0 + 0x1a0) = 0;
  *(undefined8 *)(in_x0 + 0x1b8) = 0;
  *(undefined8 *)(in_x0 + 0x1b0) = 0;
  *(undefined8 *)(in_x0 + 0x188) = 0;
  *(undefined8 *)(in_x0 + 0x180) = 0;
  *(undefined8 *)(in_x0 + 0x198) = 0;
  *(undefined8 *)(in_x0 + 400) = 0;
  *(undefined8 *)(in_x0 + 0x168) = 0;
  *(undefined8 *)(in_x0 + 0x160) = 0;
  *(undefined8 *)(in_x0 + 0x178) = 0;
  *(undefined8 *)(in_x0 + 0x170) = 0;
  *(undefined8 *)(in_x0 + 0x148) = 0;
  *(undefined8 *)(in_x0 + 0x140) = 0;
  *(undefined8 *)(in_x0 + 0x158) = 0;
  *(undefined8 *)(in_x0 + 0x150) = 0;
  *(undefined8 *)(in_x0 + 0x128) = 0;
  *(undefined8 *)(in_x0 + 0x120) = 0;
  *(undefined8 *)(in_x0 + 0x138) = 0;
  *(undefined8 *)(in_x0 + 0x130) = 0;
  do {
    uVar3 = (uint)uVar4;
    if (uVar3 < 4) {
      switch(uVar4 & 0xffffffff) {
      case 0:
        uVar2 = *(undefined4 *)(*(long *)(in_x0 + 0x98) + 0x2a0);
        goto LAB_00ac9980;
      case 1:
        uVar3 = 1;
        uVar2 = *(undefined4 *)(*(long *)(in_x0 + 0x98) + 0x2a8);
        local_90 = 0x20;
        break;
      case 2:
        uVar2 = 1;
        local_90 = 0x80;
        break;
      case 3:
        uVar2 = 1;
        uVar3 = 3;
        local_90 = 0x40;
      }
    }
    else {
      uVar2 = 1;
LAB_00ac9980:
      uVar3 = 0;
      local_90 = 0x10;
    }
    local_98 = 0x100;
    local_8c = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_b0[0] = 0xc;
    local_a8 = 0;
    local_a0 = 0;
    (*vkCreateBuffer)(*(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18),local_b0,0,&local_b8);
    (*vkGetBufferMemoryRequirements)
              (*(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18),local_b8,auStack_d0);
    *puVar5 = 0x100000001;
    *(undefined4 *)(puVar5 + -1) = uVar2;
    *(uint *)((long)puVar5 + -4) = uVar3;
    (*vkDestroyBuffer)(*(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18),local_b8,0);
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 2;
    if (uVar4 == 4) {
      if (*(long *)(lVar1 + 0x28) == local_78) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


