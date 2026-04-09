// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upgradeVkStruct
// Entry Point: 00ad8614
// Size: 68 bytes
// Signature: undefined __thiscall upgradeVkStruct(VulkanUtil * this, VkSubpassDescription * param_1, VkAttachmentDescription2 * param_2, VkAttachmentReference2 * param_3, VkAttachmentReference2 * param_4, VkAttachmentReference2 * param_5, VkAttachmentReference2 * param_6, uint * param_7)


/* VulkanUtil::upgradeVkStruct(VkSubpassDescription const&, VkAttachmentDescription2*,
   VkAttachmentReference2*, VkAttachmentReference2*, VkAttachmentReference2*,
   VkAttachmentReference2*, unsigned int const*) */

void __thiscall
VulkanUtil::upgradeVkStruct
          (VulkanUtil *this,VkSubpassDescription *param_1,VkAttachmentDescription2 *param_2,
          VkAttachmentReference2 *param_3,VkAttachmentReference2 *param_4,
          VkAttachmentReference2 *param_5,VkAttachmentReference2 *param_6,uint *param_7)

{
  undefined4 uVar1;
  undefined4 *in_x8;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(this + 0x18);
  uVar2 = *(undefined8 *)this;
  *(VkAttachmentReference2 **)(in_x8 + 0xe) = param_3;
  *(VkAttachmentReference2 **)(in_x8 + 0x10) = param_5;
  in_x8[10] = uVar1;
  uVar1 = *(undefined4 *)(this + 0x38);
  *(VkAttachmentReference2 **)(in_x8 + 8) = param_4;
  *(undefined8 *)(in_x8 + 4) = uVar2;
  in_x8[0x12] = uVar1;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined8 *)(in_x8 + 2) = 0;
  *(VkAttachmentReference2 **)(in_x8 + 0x14) = param_6;
  *(VkAttachmentDescription2 **)(in_x8 + 0xc) = param_2;
  *in_x8 = 0x3b9c73ca;
  in_x8[6] = 0;
  in_x8[7] = uVar1;
  return;
}


