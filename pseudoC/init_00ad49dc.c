// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00ad49dc
// Size: 416 bytes
// Signature: undefined __thiscall init(VulkanRenderWindow * this, RenderWindowDesc * param_1)


/* VulkanRenderWindow::init(RenderWindowDesc&) */

void __thiscall VulkanRenderWindow::init(VulkanRenderWindow *this,RenderWindowDesc *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined auStack_e8 [48];
  byte local_b8;
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
  iVar5 = (*vkGetPhysicalDeviceSurfaceCapabilitiesKHR)
                    (*(undefined8 *)(*(long *)(this + 0xb8) + 0x20),*(undefined8 *)(this + 0xc0),
                     auStack_e8);
  if (iVar5 != 0) {
    pcVar7 = (char *)LogManager::getInstance();
    LogManager::errorf(pcVar7,"Error: failed to query vulkan surface capabilities.\n");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  this[0xb0] = (VulkanRenderWindow)(local_b8 >> 1 & 1);
  this[0x54] = *(VulkanRenderWindow *)(param_1 + 4);
  this[0x55] = *(VulkanRenderWindow *)(param_1 + 0x28);
  createSwapChain();
  bVar4 = (*(uint *)(this + 0x7c) & 10) != 0;
  lVar1 = 0x10;
  if (bVar4) {
    lVar1 = 0x18;
  }
  lVar2 = 0x18;
  if (bVar4) {
    lVar2 = 0x10;
  }
  local_60 = 0x500000000;
  local_58 = (**(code **)(*(long *)this + lVar1))(this);
  local_54 = (**(code **)(*(long *)this + lVar2))(this);
  local_40 = 0x100;
  uStack_48 = 0x100000001;
  local_50 = 0x100000001;
  local_3e = 0;
  local_3a = 0;
  puVar6 = (undefined8 *)
           VulkanResourceAllocator::createTexture
                     (*(VulkanResourceAllocator **)(*(long *)(this + 0xb8) + 0x370),
                      (TextureDesc *)&local_60,0,false);
  local_a8 = 0;
  local_a0 = 0;
  *(undefined8 **)(this + 0x58) = puVar6;
  local_b0[0] = 0xf;
  local_98 = *puVar6;
  local_90 = 0x2500000001;
  local_88 = 0;
  uStack_80 = 0;
  uStack_70 = 0xffffffff;
  local_78 = 1;
  local_68 = 0xffffffff;
  (*vkCreateImageView)(*(undefined8 *)(*(long *)(this + 0xb8) + 0x18),local_b0,0,this + 0x60);
  this[0x68] = (VulkanRenderWindow)0x0;
  this[8] = (VulkanRenderWindow)0x1;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


