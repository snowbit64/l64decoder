// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDrawMergedShadowLightSource
// Entry Point: 00a55880
// Size: 16 bytes
// Signature: undefined __thiscall debugDrawMergedShadowLightSource(LightSource * this, DeferredDebugRenderer * param_1)


/* LightSource::debugDrawMergedShadowLightSource(DeferredDebugRenderer*) const */

void __thiscall
LightSource::debugDrawMergedShadowLightSource(LightSource *this,DeferredDebugRenderer *param_1)

{
  if (*(MergedShadowGroup **)(this + 0x158) != (MergedShadowGroup *)0x0) {
    MergedShadowGroup::debugDrawMergedShadowLightSource
              (*(MergedShadowGroup **)(this + 0x158),param_1);
    return;
  }
  return;
}


