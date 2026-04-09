// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUsedMemory
// Entry Point: 00aad944
// Size: 76 bytes
// Signature: undefined getUsedMemory(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanTextureObject::getUsedMemory() */

int VulkanTextureObject::getUsedMemory(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_x0;
  
  iVar2 = *(int *)(in_x0 + 0x40);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  iVar1 = 6;
  if (*(int *)(in_x0 + 0x18) != 2) {
    iVar1 = *(int *)(in_x0 + 0x34);
  }
  iVar3 = PixelFormatUtil::getMemorySize
                    (*(uint *)(in_x0 + 0x28),*(uint *)(in_x0 + 0x2c),*(uint *)(in_x0 + 0x30),
                     *(PIXEL_FORMAT *)(in_x0 + 0x1c));
  return iVar1 * iVar2 * iVar3;
}


