// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createMemoryBarrier
// Entry Point: 00ad45a4
// Size: 92 bytes
// Signature: undefined __cdecl createMemoryBarrier(BUFFER_TYPE param_1, BUFFER_LAYOUT param_2, BUFFER_LAYOUT param_3, VkMemoryBarrier * param_4)


/* VulkanBufferResource::createMemoryBarrier(VulkanResourceAllocator::BUFFER_TYPE,
   VulkanBufferResource::BUFFER_LAYOUT, VulkanBufferResource::BUFFER_LAYOUT, VkMemoryBarrier&) */

void VulkanBufferResource::createMemoryBarrier
               (BUFFER_TYPE param_1,BUFFER_LAYOUT param_2,BUFFER_LAYOUT param_3,
               VkMemoryBarrier *param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = *(char *)((long)&s_bufferLayoutIsReadOnly + (ulong)param_2);
  *(undefined4 *)param_4 = 0x2e;
  *(undefined8 *)(param_4 + 8) = 0;
  if (cVar2 == '\0') {
    uVar3 = *(undefined4 *)(s_bufferLayoutInfo + (ulong)param_1 * 0x28 + (ulong)param_2 * 8 + 4);
  }
  else {
    uVar3 = 0;
  }
  uVar1 = *(undefined4 *)(s_bufferLayoutInfo + (ulong)param_1 * 0x28 + (ulong)param_3 * 8 + 4);
  *(undefined4 *)(param_4 + 0x10) = uVar3;
  *(undefined4 *)(param_4 + 0x14) = uVar1;
  return;
}


