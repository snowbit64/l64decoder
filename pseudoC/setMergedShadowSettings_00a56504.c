// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMergedShadowSettings
// Entry Point: 00a56504
// Size: 16 bytes
// Signature: undefined __thiscall setMergedShadowSettings(LightSource * this, MergedShadowSettings * param_1)


/* LightSource::setMergedShadowSettings(LightSource::MergedShadowSettings const&) */

void __thiscall
LightSource::setMergedShadowSettings(LightSource *this,MergedShadowSettings *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + 0x158);
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  return;
}


