// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginFillGrid
// Entry Point: 00a28470
// Size: 144 bytes
// Signature: undefined __thiscall beginFillGrid(LightListRasterizer * this, RenderController * param_1, Matrix4x4 * param_2, Matrix4x4 * param_3, Vector3 * param_4, bool param_5)


/* LightListRasterizer::beginFillGrid(RenderController*, Matrix4x4 const&, Matrix4x4 const&, Vector3
   const&, bool) */

void __thiscall
LightListRasterizer::beginFillGrid
          (LightListRasterizer *this,RenderController *param_1,Matrix4x4 *param_2,Matrix4x4 *param_3
          ,Vector3 *param_4,bool param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_5) {
    *(LightListRasterizer **)(this + 0x130) = this;
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)param_2;
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(this + 0x170) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(this + 0x168) = uVar4;
    *(undefined8 *)(this + 0x160) = uVar3;
    *(undefined8 *)(this + 0x158) = uVar2;
    *(undefined8 *)(this + 0x140) = uVar6;
    *(undefined8 *)(this + 0x138) = uVar5;
    *(undefined8 *)(this + 0x150) = uVar8;
    *(undefined8 *)(this + 0x148) = uVar7;
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    uVar4 = *(undefined8 *)(param_3 + 0x30);
    uVar6 = *(undefined8 *)(param_3 + 8);
    uVar5 = *(undefined8 *)param_3;
    uVar8 = *(undefined8 *)(param_3 + 0x18);
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(this + 0x1b0) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(this + 0x1a8) = uVar4;
    *(undefined8 *)(this + 0x1a0) = uVar3;
    *(undefined8 *)(this + 0x198) = uVar2;
    *(undefined8 *)(this + 0x180) = uVar6;
    *(undefined8 *)(this + 0x178) = uVar5;
    *(undefined8 *)(this + 400) = uVar8;
    *(undefined8 *)(this + 0x188) = uVar7;
    uVar1 = *(undefined4 *)(param_4 + 8);
    uVar2 = *(undefined8 *)param_4;
    *(RenderController **)(this + 0x1c8) = param_1;
    *(undefined4 *)(this + 0x1c0) = uVar1;
    *(undefined8 *)(this + 0x1b8) = uVar2;
    ThreadPoolTaskManager::issueTask((ThreadPoolTaskManager *)(this + 0x90),(Task *)(this + 0x108));
    return;
  }
  fillGrid(this,param_2,param_3);
  return;
}


