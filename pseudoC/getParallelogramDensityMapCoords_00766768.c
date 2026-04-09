// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getParallelogramDensityMapCoords
// Entry Point: 00766768
// Size: 296 bytes
// Signature: undefined __thiscall getParallelogramDensityMapCoords(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::getParallelogramDensityMapCoords(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::getParallelogramDensityMapCoords
          (DensityMapModifierLua *this,MethodInvocation *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  plVar7 = *(long **)this;
  fVar8 = *(float *)(this + 8);
  uVar1 = (**(code **)(*plVar7 + 0x48))(plVar7);
  fVar9 = *(float *)(this + 0xc);
  uVar2 = (**(code **)(*plVar7 + 0x50))(plVar7);
  plVar7 = *(long **)this;
  fVar10 = *(float *)(this + 0x10);
  uVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
  fVar11 = *(float *)(this + 0x14);
  uVar4 = (**(code **)(*plVar7 + 0x50))(plVar7);
  plVar7 = *(long **)this;
  fVar12 = *(float *)(this + 0x18);
  uVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
  fVar13 = *(float *)(this + 0x1c);
  uVar6 = (**(code **)(*plVar7 + 0x50))(plVar7);
  *(float *)(param_1 + 0x100) = fVar8 * (float)(uVar1 & 0xffffffff);
  *(float *)(param_1 + 0x110) = fVar9 * (float)(uVar2 & 0xffffffff);
  *(float *)(param_1 + 0x120) = fVar10 * (float)(uVar3 & 0xffffffff);
  *(float *)(param_1 + 0x130) = fVar11 * (float)(uVar4 & 0xffffffff);
  *(float *)(param_1 + 0x140) = fVar12 * (float)(uVar5 & 0xffffffff);
  *(undefined4 *)(param_1 + 0x108) = 4;
  *(undefined4 *)(param_1 + 0x118) = 4;
  *(undefined4 *)(param_1 + 0x128) = 4;
  *(undefined4 *)(param_1 + 0x138) = 4;
  *(undefined4 *)(param_1 + 0x148) = 4;
  *(float *)(param_1 + 0x150) = fVar13 * (float)(uVar6 & 0xffffffff);
  *(undefined4 *)(param_1 + 0x158) = 4;
  return;
}


