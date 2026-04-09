// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lock
// Entry Point: 00ad3ec8
// Size: 28 bytes
// Signature: undefined __thiscall lock(VulkanBufferResource * this, VulkanCommandBuffer * param_1, uint param_2, uint param_3, LOCK_OPTION param_4)


/* VulkanBufferResource::lock(VulkanCommandBuffer*, unsigned int, unsigned int,
   IResource::LOCK_OPTION) */

undefined8 __thiscall
VulkanBufferResource::lock
          (VulkanBufferResource *this,VulkanCommandBuffer *param_1,uint param_2,uint param_3,
          LOCK_OPTION param_4)

{
  undefined8 uVar1;
  
  if ((param_4 < 5) && (param_4 != 2)) {
    uVar1 = lockWrite(this,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}


