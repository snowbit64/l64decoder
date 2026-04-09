// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMergedShadowSettings
// Entry Point: 00a56514
// Size: 12 bytes
// Signature: undefined __thiscall setMergedShadowSettings(MergedShadowGroup * this, MergedShadowSettings * param_1)


/* LightSource::MergedShadowGroup::setMergedShadowSettings(LightSource::MergedShadowSettings const&)
    */

void __thiscall
LightSource::MergedShadowGroup::setMergedShadowSettings
          (MergedShadowGroup *this,MergedShadowSettings *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x28) = uVar1;
  return;
}


