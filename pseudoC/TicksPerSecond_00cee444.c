// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TicksPerSecond
// Entry Point: 00cee444
// Size: 112 bytes
// Signature: undefined TicksPerSecond(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ThreadUserTimer::TicksPerSecond() */

long CryptoPP::ThreadUserTimer::TicksPerSecond(void)

{
  int iVar1;
  
  if (((DAT_02120800 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02120800), iVar1 != 0)) {
                    /* try { // try from 00cee484 to 00cee48b has its CatchHandler @ 00cee4b4 */
    DAT_021207f8 = sysconf(6);
    __cxa_guard_release(&DAT_02120800);
    return DAT_021207f8;
  }
  return DAT_021207f8;
}


