// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fenceThread
// Entry Point: 00ac9b94
// Size: 40 bytes
// Signature: undefined __cdecl fenceThread(void * param_1, bool * param_2)


/* VulkanCommandBuffer::fenceThread(void*, bool volatile&) */

undefined8 VulkanCommandBuffer::fenceThread(void *param_1,bool *param_2)

{
                    /* WARNING: Load size is inaccurate */
  fenceThreadMain(*param_1,*(QUEUE_TYPE *)((long)param_1 + 8),param_2);
  return 0;
}


