// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upgradeVkStruct
// Entry Point: 00ad869c
// Size: 44 bytes
// Signature: undefined __thiscall upgradeVkStruct(VulkanUtil * this, VkSubpassDependency * param_1)


/* VulkanUtil::upgradeVkStruct(VkSubpassDependency const&) */

void __thiscall VulkanUtil::upgradeVkStruct(VulkanUtil *this,VkSubpassDependency *param_1)

{
  undefined4 uVar1;
  undefined4 *in_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar4 = *(undefined8 *)(this + 8);
  uVar3 = *(undefined8 *)this;
  uVar1 = *(undefined4 *)(this + 0x18);
  *(undefined8 *)(in_x8 + 2) = 0;
  *(undefined8 *)(in_x8 + 8) = uVar2;
  *in_x8 = 0x3b9c73cb;
  *(undefined8 *)(in_x8 + 6) = uVar4;
  *(undefined8 *)(in_x8 + 4) = uVar3;
  in_x8[10] = uVar1;
  in_x8[0xb] = 0;
  return;
}


