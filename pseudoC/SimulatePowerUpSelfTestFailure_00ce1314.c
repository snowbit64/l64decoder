// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SimulatePowerUpSelfTestFailure
// Entry Point: 00ce1314
// Size: 20 bytes
// Signature: undefined SimulatePowerUpSelfTestFailure(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::SimulatePowerUpSelfTestFailure() */

void CryptoPP::SimulatePowerUpSelfTestFailure(void)

{
  g_powerUpSelfTestStatus = 1;
  return;
}


