// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteKeystream
// Entry Point: 00be87b0
// Size: 32 bytes
// Signature: undefined __thiscall WriteKeystream(CTR_ModePolicy * this, uchar * param_1, ulong param_2)


/* CryptoPP::CTR_ModePolicy::WriteKeystream(unsigned char*, unsigned long) */

void __thiscall
CryptoPP::CTR_ModePolicy::WriteKeystream(CTR_ModePolicy *this,uchar *param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00be87cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xe0))(this,4,param_1,0,param_2);
  return;
}


