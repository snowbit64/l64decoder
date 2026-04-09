// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DiscardBytes
// Entry Point: 00c793e4
// Size: 156 bytes
// Signature: undefined __thiscall DiscardBytes(RandomNumberGenerator * this, ulong param_1)


/* CryptoPP::RandomNumberGenerator::DiscardBytes(unsigned long) */

void __thiscall
CryptoPP::RandomNumberGenerator::DiscardBytes(RandomNumberGenerator *this,ulong param_1)

{
  int iVar1;
  
  if (((DAT_0211f5e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0211f5e8), iVar1 != 0)) {
    DAT_0211f600 = &PTR__BufferedTransformation_00ff03d8;
    DAT_0211f608 = &PTR__BitBucket_00ff0568;
    __cxa_guard_release(&DAT_0211f5e8);
  }
                    /* WARNING: Could not recover jumptable at 0x00c7942c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x58))(this,&DAT_0211f600,&DEFAULT_CHANNEL,param_1);
  return;
}


