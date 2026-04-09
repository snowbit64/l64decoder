// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginRenderWindow
// Entry Point: 00accecc
// Size: 564 bytes
// Signature: undefined __thiscall beginRenderWindow(VulkanCommandBuffer * this, LOAD_ACTION param_1, float * param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8)


/* VulkanCommandBuffer::beginRenderWindow(RenderTargetDesc::LOAD_ACTION, float const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
VulkanCommandBuffer::beginRenderWindow
          (VulkanCommandBuffer *this,LOAD_ACTION param_1,float *param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,uint param_7,uint param_8)

{
  VkImageView_T **ppVVar1;
  VkFormat *pVVar2;
  uint *puVar3;
  VkFormat VVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  VulkanRenderWindow *this_00;
  ulong uVar9;
  char *pcVar10;
  VkImageView_T *pVVar11;
  long lVar12;
  float *in_stack_ffffffffffffff70;
  uint in_stack_ffffffffffffff80;
  
  this[0x948] = (VulkanCommandBuffer)0x0;
  if (this[0x460] != (VulkanCommandBuffer)0x0) {
    endRenderPass();
  }
  *(undefined8 *)(this + 0x6a0) = 0;
  *(undefined8 *)(this + 0x688) = *(undefined8 *)(this + 0x680);
  *(undefined8 *)(this + 0x608) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x610) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x880) = 0;
  *(undefined8 *)(this + 0x878) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0x788) = *(undefined8 *)(this + 0x780);
  *(undefined8 *)(this + 0x6c8) = *(undefined8 *)(this + 0x6c0);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0x7c8) = *(undefined8 *)(this + 0x7c0);
  *(undefined8 *)(this + 0x708) = *(undefined8 *)(this + 0x700);
  *(undefined2 *)(this + 0x67c) = 1;
  *(undefined8 *)(this + 0x808) = *(undefined8 *)(this + 0x800);
  *(undefined8 *)(this + 0x698) = 0;
  *(undefined2 *)(this + 0x6bc) = 1;
  *(undefined8 *)(this + 0x6e0) = 0;
  *(undefined8 *)(this + 0x6d8) = 0;
  *(undefined2 *)(this + 0x6fc) = 1;
  *(undefined8 *)(this + 0x890) = 0;
  *(undefined8 *)(this + 0x888) = 0;
  *(undefined8 *)(this + 0x718) = 0;
  *(undefined8 *)(this + 0x720) = 0;
  *(undefined2 *)(this + 0x73c) = 1;
  *(undefined8 *)(this + 0x758) = 0;
  *(undefined8 *)(this + 0x760) = 0;
  *(undefined2 *)(this + 0x77c) = 1;
  *(undefined8 *)(this + 0x7a0) = 0;
  *(undefined8 *)(this + 0x798) = 0;
  *(undefined2 *)(this + 0x7bc) = 1;
  *(undefined8 *)(this + 0x8a8) = 0;
  *(undefined8 *)(this + 0x8a0) = 0;
  *(undefined8 *)(this + 0x7e0) = 0;
  *(undefined8 *)(this + 0x7d8) = 0;
  *(undefined2 *)(this + 0x7fc) = 1;
  *(undefined8 *)(this + 0x818) = 0;
  *(undefined8 *)(this + 0x820) = 0;
  *(undefined2 *)(this + 0x83c) = 1;
  *(undefined8 *)(this + 0x860) = 0;
  *(undefined8 *)(this + 0x858) = 0;
  *(undefined8 *)(this + 0x848) = *(undefined8 *)(this + 0x840);
  lVar12 = **(long **)(this + 0x98);
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x618) = 0;
  *(undefined8 *)(this + 0x5f8) = 0;
  *(undefined4 *)(this + 0x678) = 0;
  *(undefined4 *)(this + 0x6b8) = 0;
  *(undefined4 *)(this + 0x6f8) = 0;
  *(undefined4 *)(this + 0x738) = 0;
  *(undefined8 *)(this + 0x748) = *(undefined8 *)(this + 0x740);
  *(undefined8 *)(this + 0x620) = 0;
  *(undefined8 *)(this + 0x600) = 0;
  *(undefined4 *)(this + 0x778) = 0;
  *(undefined8 *)(this + 0x898) = 0;
  *(undefined4 *)(this + 0x7b8) = 0;
  *(undefined4 *)(this + 0x7f8) = 0;
  *(undefined4 *)(this + 0x838) = 0;
  *(undefined8 *)(this + 0x8b0) = 0;
  *(undefined4 *)(this + 0x458) = 0;
  *(undefined4 *)(this + 0x2e4) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0xaa8) = 0;
  this_00 = (VulkanRenderWindow *)(**(code **)(lVar12 + 0x80))();
  uVar9 = VulkanRenderWindow::acquireImage
                    (this_00,*(VkSemaphore_T **)(*(long *)(this + 0x5f0) + 8),
                     (ImageInfos *)(this + 0xa60));
  if ((uVar9 & 1) == 0) {
    pcVar10 = (char *)LogManager::getInstance();
    LogManager::errorf(pcVar10,"Error: Failed to acquireImage, exiting.\n");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  bVar8 = *(long *)(this + 0xa60) == 0;
  ppVVar1 = (VkImageView_T **)(this + 0xa88);
  if (!bVar8) {
    ppVVar1 = (VkImageView_T **)(this + 0xa68);
  }
  pVVar2 = (VkFormat *)(this + 0xa90);
  if (!bVar8) {
    pVVar2 = (VkFormat *)(this + 0xa70);
  }
  puVar3 = (uint *)(this + 0xa98);
  puVar7 = (uint *)(this + 0xa94);
  if (!bVar8) {
    puVar3 = (uint *)(this + 0xa78);
    puVar7 = (uint *)(this + 0xa74);
  }
  pVVar11 = *ppVVar1;
  VVar4 = *pVVar2;
  uVar5 = *puVar7;
  uVar6 = *puVar3;
  this[0xa58] = (VulkanCommandBuffer)0x1;
  beginRenderWindowInternal
            (this,pVVar11,VVar4,uVar5,uVar6,*(VkSurfaceTransformFlagBitsKHR *)(this + 0xaa0),bVar8,
             param_1,in_stack_ffffffffffffff70,param_3,in_stack_ffffffffffffff80,param_5,param_6,
             param_7,param_8);
  return;
}


