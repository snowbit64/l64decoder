// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLastShadowMapSplitFixedBbox
// Entry Point: 00a5519c
// Size: 40 bytes
// Signature: undefined __thiscall getLastShadowMapSplitFixedBbox(LightSource * this, Vector3 * param_1, Vector3 * param_2)


/* LightSource::getLastShadowMapSplitFixedBbox(Vector3&, Vector3&) const */

void __thiscall
LightSource::getLastShadowMapSplitFixedBbox(LightSource *this,Vector3 *param_1,Vector3 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 500);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x1fc);
  *(undefined8 *)param_1 = uVar1;
  uVar1 = *(undefined8 *)(this + 0x200);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x208);
  *(undefined8 *)param_2 = uVar1;
  return;
}


