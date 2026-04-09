// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MergedShadowGroup
// Entry Point: 00a56534
// Size: 124 bytes
// Signature: undefined __thiscall MergedShadowGroup(MergedShadowGroup * this, LightSource * param_1, LightSource * param_2)


/* LightSource::MergedShadowGroup::MergedShadowGroup(LightSource*, LightSource*) */

void __thiscall
LightSource::MergedShadowGroup::MergedShadowGroup
          (MergedShadowGroup *this,LightSource *param_1,LightSource *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (MergedShadowGroup)0x1;
  *(undefined8 *)(this + 0x20) = 0;
                    /* try { // try from 00a56568 to 00a5656b has its CatchHandler @ 00a565b0 */
  Frustum::Frustum((Frustum *)(this + 0xc0));
                    /* try { // try from 00a5656c to 00a56583 has its CatchHandler @ 00a565b4 */
  addLight(this,param_1);
  addLight(this,param_2);
  uVar1 = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x1ac);
  uVar2 = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x30) = uVar2;
  return;
}


