// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupRenderTexture
// Entry Point: 00ad53cc
// Size: 300 bytes
// Signature: undefined setupRenderTexture(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanRenderWindow::setupRenderTexture() */

void VulkanRenderWindow::setupRenderTexture(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long *in_x0;
  undefined8 *puVar5;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 local_40;
  undefined4 local_3e;
  undefined local_3a;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar4 = (*(uint *)((long)in_x0 + 0x7c) & 10) != 0;
  lVar1 = 0x10;
  if (bVar4) {
    lVar1 = 0x18;
  }
  lVar2 = 0x18;
  if (bVar4) {
    lVar2 = 0x10;
  }
  local_60 = 0x500000000;
  local_58 = (**(code **)(*in_x0 + lVar1))();
  local_54 = (**(code **)(*in_x0 + lVar2))();
  local_40 = 0x100;
  uStack_48 = 0x100000001;
  local_50 = 0x100000001;
  local_3e = 0;
  local_3a = 0;
  puVar5 = (undefined8 *)
           VulkanResourceAllocator::createTexture
                     (*(VulkanResourceAllocator **)(in_x0[0x17] + 0x370),(TextureDesc *)&local_60,0,
                      false);
  local_a8 = 0;
  local_a0 = 0;
  local_b0[0] = 0xf;
  in_x0[0xb] = (long)puVar5;
  local_98 = *puVar5;
  local_68 = 0xffffffff;
  local_90 = 0x2500000001;
  local_88 = 0;
  uStack_80 = 0;
  uStack_70 = 0xffffffff;
  local_78 = 1;
  (*vkCreateImageView)(*(undefined8 *)(in_x0[0x17] + 0x18),local_b0,0,in_x0 + 0xc);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


