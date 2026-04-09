// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLayoutDetails
// Entry Point: 00ab0858
// Size: 156 bytes
// Signature: undefined __cdecl getLayoutDetails(LAYOUT param_1, uint param_2, VkImageLayout * param_3, uint * param_4, uint * param_5)


/* VulkanTextureObject::getLayoutDetails(VulkanTextureObject::LAYOUT, unsigned int, VkImageLayout&,
   unsigned int&, unsigned int&) */

void VulkanTextureObject::getLayoutDetails
               (LAYOUT param_1,uint param_2,VkImageLayout *param_3,uint *param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = (ulong)param_1 * 0x10;
  uVar2 = *(uint *)(s_layoutInfo + lVar1 + 4);
  uVar3 = *(uint *)(s_layoutInfo + lVar1 + 8);
  *(undefined4 *)param_3 = *(undefined4 *)(s_layoutInfo + lVar1);
  *param_4 = uVar2;
  *param_5 = uVar3;
  if ((param_2 >> 1 & 1) == 0) {
    *param_4 = *param_4 & 0xfffffff7;
  }
  if ((param_2 >> 2 & 1) == 0) {
    *param_4 = *param_4 & 0xffffff7f;
  }
  if ((param_2 >> 3 & 1) == 0) {
    *param_4 = *param_4 & 0xfffff7ff;
  }
  if ((param_2 & 1) == 0) {
    *param_4 = *param_4 & 0xfffff9ff;
    *param_5 = *param_5 & 0xfffff87f;
  }
  if ((param_2 & 0xe) == 0) {
    *param_5 = *param_5 & 0xffffff9f;
    return;
  }
  return;
}


