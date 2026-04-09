// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSettings
// Entry Point: 008b7e44
// Size: 44 bytes
// Signature: undefined __thiscall getSettings(BandDistortion * this, BandDistortionSettings * param_1)


/* BandDistortion::getSettings(BandDistortionSettings&) const */

void __thiscall BandDistortion::getSettings(BandDistortion *this,BandDistortionSettings *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x90);
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x58);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 0x14);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x20);
  return;
}


