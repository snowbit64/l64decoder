// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: refreshRecordingDevices
// Entry Point: 00e37154
// Size: 16 bytes
// Signature: undefined refreshRecordingDevices(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::refreshRecordingDevices() */

void SoLoud::Soloud::refreshRecordingDevices(void)

{
  long in_x0;
  
  if (*(code **)(in_x0 + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e3715c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x0 + 0x38))();
    return;
  }
  return;
}


