// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getParallelogramUVCoords
// Entry Point: 007668d0
// Size: 68 bytes
// Signature: undefined __thiscall getParallelogramUVCoords(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::getParallelogramUVCoords(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::getParallelogramUVCoords
          (DensityMapModifierLua *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 0x10);
  uVar3 = *(undefined4 *)(this + 0x14);
  uVar4 = *(undefined4 *)(this + 0x18);
  uVar5 = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 4;
  *(undefined4 *)(param_1 + 0x118) = 4;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 0x128) = 4;
  *(undefined4 *)(param_1 + 0x130) = uVar3;
  *(undefined4 *)(param_1 + 0x138) = 4;
  *(undefined4 *)(param_1 + 0x140) = uVar4;
  *(undefined4 *)(param_1 + 0x148) = 4;
  *(undefined4 *)(param_1 + 0x150) = uVar5;
  *(undefined4 *)(param_1 + 0x158) = 4;
  return;
}


