// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBuffer
// Entry Point: 00aaf158
// Size: 36 bytes
// Signature: undefined getBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanTextureObject::getBuffer() */

undefined8 VulkanTextureObject::getBuffer(void)

{
  undefined8 *puVar1;
  long in_x0;
  long lVar2;
  
  lVar2 = *(long *)(in_x0 + 0x10);
  puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x68) + 8);
  if (*(char *)(lVar2 + 0x60) != '\0') {
    puVar1 = (undefined8 *)(lVar2 + 0x70);
  }
  return *puVar1;
}


