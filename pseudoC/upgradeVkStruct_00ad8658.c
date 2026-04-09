// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upgradeVkStruct
// Entry Point: 00ad8658
// Size: 68 bytes
// Signature: undefined __thiscall upgradeVkStruct(VulkanUtil * this, VkRenderPassCreateInfo * param_1, VkAttachmentDescription2 * param_2, VkSubpassDescription2 * param_3, VkSubpassDependency2 * param_4)


/* VulkanUtil::upgradeVkStruct(VkRenderPassCreateInfo const&, VkAttachmentDescription2*,
   VkSubpassDescription2*, VkSubpassDependency2*) */

void __thiscall
VulkanUtil::upgradeVkStruct
          (VulkanUtil *this,VkRenderPassCreateInfo *param_1,VkAttachmentDescription2 *param_2,
          VkSubpassDescription2 *param_3,VkSubpassDependency2 *param_4)

{
  undefined4 uVar1;
  undefined4 *in_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(this + 0x30);
  uVar3 = *(undefined8 *)(this + 0x10);
  *(VkRenderPassCreateInfo **)(in_x8 + 6) = param_1;
  in_x8[0xc] = uVar1;
  uVar2 = *(undefined8 *)(this + 8);
  in_x8[0x10] = 0;
  *(undefined8 *)(in_x8 + 0x12) = 0;
  *(undefined8 *)(in_x8 + 2) = uVar2;
  uVar1 = *(undefined4 *)(this + 0x20);
  *(undefined8 *)(in_x8 + 4) = uVar3;
  *(VkSubpassDescription2 **)(in_x8 + 0xe) = param_3;
  *(VkAttachmentDescription2 **)(in_x8 + 10) = param_2;
  *in_x8 = 0x3b9c73cc;
  in_x8[8] = uVar1;
  return;
}


