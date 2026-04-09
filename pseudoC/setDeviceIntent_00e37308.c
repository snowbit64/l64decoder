// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDeviceIntent
// Entry Point: 00e37308
// Size: 16 bytes
// Signature: undefined __cdecl setDeviceIntent(uint param_1)


/* SoLoud::Soloud::setDeviceIntent(unsigned int) */

void SoLoud::Soloud::setDeviceIntent(uint param_1)

{
  if (*(code **)((ulong)param_1 + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e37310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((ulong)param_1 + 0x48))();
    return;
  }
  return;
}


