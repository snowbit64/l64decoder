// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setParallelogramUVCoords
// Entry Point: 00766890
// Size: 64 bytes
// Signature: undefined __thiscall setParallelogramUVCoords(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::setParallelogramUVCoords(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::setParallelogramUVCoords
          (DensityMapModifierLua *this,MethodInvocation *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x20);
  fVar4 = *(float *)(param_1 + 0x30);
  fVar5 = *(float *)(param_1 + 0x40);
  fVar6 = *(float *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x60) == 0) {
    fVar3 = fVar3 - fVar1;
    fVar4 = fVar4 - fVar2;
    fVar5 = fVar5 - fVar1;
    fVar6 = fVar6 - fVar2;
  }
  *(float *)(this + 8) = fVar1;
  *(float *)(this + 0xc) = fVar2;
  *(float *)(this + 0x10) = fVar3;
  *(float *)(this + 0x14) = fVar4;
  *(float *)(this + 0x18) = fVar5;
  *(float *)(this + 0x1c) = fVar6;
  return;
}


