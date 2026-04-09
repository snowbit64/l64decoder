// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deinitRecordingDevice
// Entry Point: 00e37114
// Size: 64 bytes
// Signature: undefined __thiscall deinitRecordingDevice(Soloud * this, uint param_1)


/* SoLoud::Soloud::deinitRecordingDevice(unsigned int) */

void __thiscall SoLoud::Soloud::deinitRecordingDevice(Soloud *this,uint param_1)

{
  Soloud *pSVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(this + 0x2820);
  if (*(uint *)(this + 0x2820) != 0) {
    pSVar1 = this + 0x23a0;
    do {
      if (*(uint *)(pSVar1 + 8) == param_1) {
        if (*(code **)(this + 0x28) == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00e3714c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(this + 0x28))(this,pSVar1);
        return;
      }
      pSVar1 = pSVar1 + 0x90;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


