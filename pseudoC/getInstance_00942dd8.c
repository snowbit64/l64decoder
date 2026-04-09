// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00942dd8
// Size: 64 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* I3DStreamingManager::getInstance() */

I3DStreamingManager * I3DStreamingManager::getInstance(void)

{
  I3DStreamingManager *this;
  
  if (s_pI3DStreamingManager == (I3DStreamingManager *)0x0) {
    this = (I3DStreamingManager *)operator_new(0xe8);
                    /* try { // try from 00942e00 to 00942e03 has its CatchHandler @ 00942e18 */
    I3DStreamingManager(this);
    s_pI3DStreamingManager = this;
  }
  return s_pI3DStreamingManager;
}


