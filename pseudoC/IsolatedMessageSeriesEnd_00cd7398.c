// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedMessageSeriesEnd
// Entry Point: 00cd7398
// Size: 32 bytes
// Signature: undefined __cdecl IsolatedMessageSeriesEnd(bool param_1)


/* CryptoPP::MeterFilter::IsolatedMessageSeriesEnd(bool) */

undefined8 CryptoPP::MeterFilter::IsolatedMessageSeriesEnd(bool param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  *(undefined8 *)(uVar1 + 0x30) = 0;
  *(undefined4 *)(uVar1 + 0x40) = 0;
  *(int *)(uVar1 + 0x48) = *(int *)(uVar1 + 0x48) + 1;
  return 0;
}


