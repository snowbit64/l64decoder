// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lock
// Entry Point: 00aaa868
// Size: 8 bytes
// Signature: undefined __cdecl lock(ICommandBuffer * param_1, uint param_2, uint param_3, LOCK_OPTION param_4)


/* NullStagingBuffer::lock(ICommandBuffer*, unsigned int, unsigned int, IResource::LOCK_OPTION) */

undefined  [16]
NullStagingBuffer::lock(ICommandBuffer *param_1,uint param_2,uint param_3,LOCK_OPTION param_4)

{
  return ZEXT416(param_2) << 0x40;
}


