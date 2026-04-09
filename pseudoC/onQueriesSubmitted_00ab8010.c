// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onQueriesSubmitted
// Entry Point: 00ab8010
// Size: 24 bytes
// Signature: undefined onQueriesSubmitted(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanRenderDevice::onQueriesSubmitted() */

void VulkanRenderDevice::onQueriesSubmitted(void)

{
  long in_x0;
  
  *(ulong *)(in_x0 + ((ulong)*(uint *)(in_x0 + 0x3b4) & 1) * 0x30 + 0x580) =
       (ulong)*(uint *)(in_x0 + 0x3b4);
  return;
}


