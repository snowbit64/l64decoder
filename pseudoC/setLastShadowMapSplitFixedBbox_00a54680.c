// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLastShadowMapSplitFixedBbox
// Entry Point: 00a54680
// Size: 48 bytes
// Signature: undefined __thiscall setLastShadowMapSplitFixedBbox(LightSource * this, Vector3 * param_1, Vector3 * param_2)


/* LightSource::setLastShadowMapSplitFixedBbox(Vector3 const&, Vector3 const&) */

void __thiscall
LightSource::setLastShadowMapSplitFixedBbox(LightSource *this,Vector3 *param_1,Vector3 *param_2)

{
  undefined8 uVar1;
  
  this[0x1f0] = (LightSource)0x1;
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x1fc) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 500) = uVar1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x208) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0x200) = uVar1;
  return;
}


