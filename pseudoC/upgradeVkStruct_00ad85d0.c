// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upgradeVkStruct
// Entry Point: 00ad85d0
// Size: 36 bytes
// Signature: undefined __thiscall upgradeVkStruct(VulkanUtil * this, VkAttachmentDescription * param_1)


/* VulkanUtil::upgradeVkStruct(VkAttachmentDescription const&) */

void __thiscall VulkanUtil::upgradeVkStruct(VulkanUtil *this,VkAttachmentDescription *param_1)

{
  undefined4 uVar1;
  undefined4 *in_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)this;
  uVar5 = *(undefined8 *)(this + 0x18);
  uVar4 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(in_x8 + 2) = 0;
  *in_x8 = 0x3b9c73c8;
  uVar1 = *(undefined4 *)(this + 0x20);
  *(undefined8 *)(in_x8 + 6) = uVar3;
  *(undefined8 *)(in_x8 + 4) = uVar2;
  *(undefined8 *)(in_x8 + 10) = uVar5;
  *(undefined8 *)(in_x8 + 8) = uVar4;
  in_x8[0xc] = uVar1;
  return;
}


