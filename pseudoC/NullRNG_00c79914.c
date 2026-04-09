// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullRNG
// Entry Point: 00c79914
// Size: 128 bytes
// Signature: undefined NullRNG(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::NullRNG() */

undefined8 * CryptoPP::NullRNG(void)

{
  int iVar1;
  
  if (((DAT_0211f5f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0211f5f8), iVar1 != 0)) {
                    /* try { // try from 00c79954 to 00c79967 has its CatchHandler @ 00c79994 */
    Algorithm::Algorithm((Algorithm *)&DAT_0211f5f0,true);
    DAT_0211f5f0 = &PTR__Clonable_00ff0630;
    __cxa_guard_release(&DAT_0211f5f8);
    return &DAT_0211f5f0;
  }
  return &DAT_0211f5f0;
}


