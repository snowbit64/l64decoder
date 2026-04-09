// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupCB
// Entry Point: 00a05bdc
// Size: 376 bytes
// Signature: undefined __thiscall setupCB(RenderArgs * this, CB_RenderArgParameters * param_1, PostFxParams * param_2)


/* RenderArgs::setupCB(RenderArgs::CB_RenderArgParameters*, PostFxParams const&) const */

void __thiscall
RenderArgs::setupCB(RenderArgs *this,CB_RenderArgParameters *param_1,PostFxParams *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  
  computeViewProjectionMatrices(this,(float *)param_1,(float *)(param_1 + 0x40));
  ShaderStructLayout::setMatrix4x4((float *)(param_1 + 0x80),(Matrix4x4 *)(this + 0x80));
  ShaderStructLayout::setMatrix3x4((float *)(param_1 + 0xc0),(Matrix4x4 *)(this + 0x40));
  lVar3 = *(long *)(this + 0x3a0);
  *(float *)(param_1 + 0xf0) = *(float *)(lVar3 + 0x110) - *(float *)(this + 0x354);
  *(float *)(param_1 + 0xf4) = *(float *)(lVar3 + 0x114) - *(float *)(this + 0x35c);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(lVar3 + 0x118);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(lVar3 + 0x11c);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar3 + 0x120);
  uVar4 = *(undefined4 *)(lVar3 + 0x124);
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x104) = uVar4;
  LightScatteringUtil::computeRayleighScatteringCoefficients
            (*(float *)(param_2 + 600),(float *)(param_1 + 0x140));
  LightScatteringUtil::computeMieScatteringCoefficients
            (*(float *)(param_2 + 0x25c),(float *)(param_1 + 0x14c));
  uVar4 = *(undefined4 *)(param_2 + 0x260);
  uVar6 = *(undefined8 *)(this + 0x3d8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x250);
  lVar3 = *(long *)(this + 0x3a0);
  *(undefined4 *)(param_1 + 0x1b0) = uVar4;
  uVar6 = NEON_ucvtf(uVar6,4);
  plVar1 = *(long **)(lVar3 + 0x98);
  *(undefined8 *)(param_1 + 0x184) = *(undefined8 *)(this + 0xc0);
  *(undefined8 *)(param_1 + 0x170) = uVar6;
  uVar6 = NEON_rev64(*(undefined8 *)(lVar3 + 0x128),4);
  *(undefined8 *)(param_1 + 0x18c) = uVar6;
  if (plVar1 == (long *)0x0) {
    fVar5 = 0.0;
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x20))();
    lVar3 = **(long **)(*(long *)(this + 0x3a0) + 0x98);
    *(float *)(param_1 + 0x178) = 1.0 / (float)(uVar2 & 0xffffffff);
    uVar2 = (**(code **)(lVar3 + 0x28))();
    fVar5 = 1.0 / (float)(uVar2 & 0xffffffff);
  }
  *(float *)(param_1 + 0x17c) = fVar5;
  lVar3 = *(long *)(this + 0x3a0);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(lVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(lVar3 + 0x14);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar3 + 0x18);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar3 + 0x1c);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar3 + 0x20);
  uVar6 = *(undefined8 *)(this + 0x390);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(this + 0x398);
  *(undefined8 *)(param_1 + 0x160) = uVar6;
  return;
}


