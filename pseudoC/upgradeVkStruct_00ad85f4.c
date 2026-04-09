// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upgradeVkStruct
// Entry Point: 00ad85f4
// Size: 32 bytes
// Signature: undefined __thiscall upgradeVkStruct(VulkanUtil * this, VkAttachmentReference * param_1)


/* VulkanUtil::upgradeVkStruct(VkAttachmentReference const&) */

void __thiscall VulkanUtil::upgradeVkStruct(VulkanUtil *this,VkAttachmentReference *param_1)

{
  undefined4 *in_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)this;
  in_x8[6] = 0;
  *(undefined8 *)(in_x8 + 2) = 0;
  *(undefined8 *)(in_x8 + 4) = uVar1;
  *in_x8 = 0x3b9c73c9;
  return;
}


