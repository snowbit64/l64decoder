// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyTexture
// Entry Point: 00acce38
// Size: 148 bytes
// Signature: undefined __thiscall copyTexture(VulkanCommandBuffer * this, ImageCopyData * param_1)


/* VulkanCommandBuffer::copyTexture(VulkanCommandBuffer::ImageCopyData const&) */

void __thiscall VulkanCommandBuffer::copyTexture(VulkanCommandBuffer *this,ImageCopyData *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  plVar1 = *(long **)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
  uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  (**(code **)(*(long *)this + 0x128))(this,plVar1,0,0,0,0,uVar3,uVar4,uVar2,0,0,0,0);
  return;
}


