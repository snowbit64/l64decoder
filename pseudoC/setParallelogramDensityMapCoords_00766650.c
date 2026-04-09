// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setParallelogramDensityMapCoords
// Entry Point: 00766650
// Size: 280 bytes
// Signature: undefined __thiscall setParallelogramDensityMapCoords(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::setParallelogramDensityMapCoords(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::setParallelogramDensityMapCoords
          (DensityMapModifierLua *this,MethodInvocation *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 0x20);
  fVar6 = *(float *)(param_1 + 0x30);
  fVar5 = *(float *)(param_1 + 0x40);
  fVar4 = *(float *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x60) == 0) {
    fVar7 = fVar7 - fVar9;
    fVar6 = fVar6 - fVar8;
    fVar5 = fVar5 - fVar9;
    fVar4 = fVar4 - fVar8;
  }
  plVar3 = *(long **)this;
  uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
  lVar2 = *plVar3;
  *(float *)(this + 8) = fVar9 / (float)(uVar1 & 0xffffffff);
  uVar1 = (**(code **)(lVar2 + 0x50))(plVar3);
  plVar3 = *(long **)this;
  lVar2 = *plVar3;
  *(float *)(this + 0xc) = fVar8 / (float)(uVar1 & 0xffffffff);
  uVar1 = (**(code **)(lVar2 + 0x48))(plVar3);
  lVar2 = *plVar3;
  *(float *)(this + 0x10) = fVar7 / (float)(uVar1 & 0xffffffff);
  uVar1 = (**(code **)(lVar2 + 0x50))(plVar3);
  plVar3 = *(long **)this;
  lVar2 = *plVar3;
  *(float *)(this + 0x14) = fVar6 / (float)(uVar1 & 0xffffffff);
  uVar1 = (**(code **)(lVar2 + 0x48))(plVar3);
  lVar2 = *plVar3;
  *(float *)(this + 0x18) = fVar5 / (float)(uVar1 & 0xffffffff);
  uVar1 = (**(code **)(lVar2 + 0x50))(plVar3);
  *(float *)(this + 0x1c) = fVar4 / (float)(uVar1 & 0xffffffff);
  return;
}


