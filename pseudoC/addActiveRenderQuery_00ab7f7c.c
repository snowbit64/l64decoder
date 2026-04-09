// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addActiveRenderQuery
// Entry Point: 00ab7f7c
// Size: 148 bytes
// Signature: undefined __thiscall addActiveRenderQuery(VulkanRenderDevice * this, VulkanRenderQuery * param_1, QUERY_TYPE param_2, uint * param_3, uint * param_4)


/* VulkanRenderDevice::addActiveRenderQuery(VulkanRenderQuery*, VulkanRenderDevice::QUERY_TYPE,
   unsigned int&, unsigned int&) */

bool __thiscall
VulkanRenderDevice::addActiveRenderQuery
          (VulkanRenderDevice *this,VulkanRenderQuery *param_1,QUERY_TYPE param_2,uint *param_3,
          uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(this + 0x3b4) & 1;
  uVar1 = FUN_00f27700(1,this + (ulong)param_2 * 0x30 + uVar2 * 0x30 + 0x560);
  if (uVar1 < 0x100) {
    *param_3 = uVar1;
    *param_4 = (uint)uVar2;
    *(VulkanRenderQuery **)
     (*(long *)(this + (ulong)param_2 * 0x30 + uVar2 * 0x30 + 0x568) + (ulong)uVar1 * 8) = param_1;
  }
  return uVar1 < 0x100;
}


