// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mergeLightShadows
// Entry Point: 00a56224
// Size: 256 bytes
// Signature: undefined __thiscall mergeLightShadows(LightSource * this, LightSource * * param_1, uint param_2)


/* LightSource::mergeLightShadows(LightSource**, unsigned int) */

void __thiscall LightSource::mergeLightShadows(LightSource *this,LightSource **param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 *this_00;
  LightSource *pLVar2;
  MergedShadowGroup *this_01;
  MergedShadowGroup *this_02;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (param_2 != 0) {
    uVar3 = (ulong)param_2;
    do {
      pLVar2 = *param_1;
      this_02 = *(MergedShadowGroup **)(this + 0x158);
      this_01 = *(MergedShadowGroup **)(pLVar2 + 0x158);
      if (((ulong)this_02 | (ulong)this_01) == 0) {
        this_00 = (undefined8 *)operator_new(0x1b0);
        this_00[1] = 0;
        this_00[2] = 0;
        *this_00 = 0;
        *(undefined *)(this_00 + 3) = 1;
        this_00[4] = 0;
                    /* try { // try from 00a562a8 to 00a562ab has its CatchHandler @ 00a56324 */
        Frustum::Frustum((Frustum *)(this_00 + 0x18));
                    /* try { // try from 00a562ac to 00a562c3 has its CatchHandler @ 00a56328 */
        MergedShadowGroup::addLight((MergedShadowGroup *)this_00,this);
        MergedShadowGroup::addLight((MergedShadowGroup *)this_00,pLVar2);
        uVar4 = *(undefined8 *)(this + 0x1ac);
        *(undefined8 **)(this + 0x158) = this_00;
        uVar5 = *(undefined4 *)(this + 0x1b4);
        *(undefined8 **)(pLVar2 + 0x158) = this_00;
        uVar1 = *(undefined4 *)(this + 0x1b8);
        this_00[5] = uVar4;
        *(undefined4 *)(this_00 + 6) = uVar5;
        *(undefined4 *)((long)this_00 + 0x34) = uVar1;
      }
      else if ((this_02 == (MergedShadowGroup *)0x0) || (this_01 != (MergedShadowGroup *)0x0)) {
        if ((this_02 == (MergedShadowGroup *)0x0) && (this_01 != (MergedShadowGroup *)0x0)) {
          MergedShadowGroup::addLight(this_01,this);
          *(MergedShadowGroup **)(this + 0x158) = this_01;
        }
      }
      else {
        MergedShadowGroup::addLight(this_02,pLVar2);
        *(MergedShadowGroup **)(pLVar2 + 0x158) = this_02;
      }
      param_1 = param_1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}


