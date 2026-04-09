// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TheBitBucket
// Entry Point: 00c77288
// Size: 116 bytes
// Signature: undefined TheBitBucket(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::TheBitBucket() */

undefined8 * CryptoPP::TheBitBucket(void)

{
  int iVar1;
  
  if (((DAT_0211f5e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0211f5e8), iVar1 != 0)) {
    DAT_0211f600 = &PTR__BufferedTransformation_00ff03d8;
    DAT_0211f608 = &PTR__BitBucket_00ff0568;
    __cxa_guard_release(&DAT_0211f5e8);
    return &DAT_0211f600;
  }
  return &DAT_0211f600;
}


