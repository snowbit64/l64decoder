// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clear
// Entry Point: 00bb08b0
// Size: 164 bytes
// Signature: undefined clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,
   Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>::clear() */

void btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
     ::clear(void)

{
  long in_x0;
  
  if ((*(void **)(in_x0 + 0x10) != (void *)0x0) && (*(char *)(in_x0 + 0x18) != '\0')) {
    btAlignedFreeInternal(*(void **)(in_x0 + 0x10));
  }
  *(undefined8 *)(in_x0 + 0x10) = 0;
  *(undefined4 *)(in_x0 + 4) = 0;
  *(undefined4 *)(in_x0 + 8) = 0;
  *(undefined *)(in_x0 + 0x18) = 1;
  if ((*(void **)(in_x0 + 0x30) != (void *)0x0) && (*(char *)(in_x0 + 0x38) != '\0')) {
    btAlignedFreeInternal(*(void **)(in_x0 + 0x30));
  }
  *(undefined *)(in_x0 + 0x38) = 1;
  *(undefined8 *)(in_x0 + 0x30) = 0;
  *(undefined4 *)(in_x0 + 0x24) = 0;
  *(undefined4 *)(in_x0 + 0x28) = 0;
  if ((*(void **)(in_x0 + 0x50) != (void *)0x0) && (*(char *)(in_x0 + 0x58) != '\0')) {
    btAlignedFreeInternal(*(void **)(in_x0 + 0x50));
  }
  *(undefined8 *)(in_x0 + 0x50) = 0;
  *(undefined4 *)(in_x0 + 0x44) = 0;
  *(undefined4 *)(in_x0 + 0x48) = 0;
  *(undefined *)(in_x0 + 0x58) = 1;
  if ((*(void **)(in_x0 + 0x70) != (void *)0x0) && (*(char *)(in_x0 + 0x78) != '\0')) {
    btAlignedFreeInternal(*(void **)(in_x0 + 0x70));
  }
  *(undefined *)(in_x0 + 0x78) = 1;
  *(undefined8 *)(in_x0 + 0x70) = 0;
  *(undefined4 *)(in_x0 + 100) = 0;
  *(undefined4 *)(in_x0 + 0x68) = 0;
  return;
}


