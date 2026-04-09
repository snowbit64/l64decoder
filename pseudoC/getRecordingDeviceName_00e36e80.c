// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRecordingDeviceName
// Entry Point: 00e36e80
// Size: 76 bytes
// Signature: undefined __cdecl getRecordingDeviceName(uint param_1, char * param_2)


/* SoLoud::Soloud::getRecordingDeviceName(unsigned int, char*) const */

bool SoLoud::Soloud::getRecordingDeviceName(uint param_1,char *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((ulong)param_1 + 0x2820);
  if ((uint)param_2 < uVar1) {
    FUN_00e36ecc();
  }
  return (uint)param_2 < uVar1;
}


