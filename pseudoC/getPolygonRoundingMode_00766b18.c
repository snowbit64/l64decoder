// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPolygonRoundingMode
// Entry Point: 00766b18
// Size: 20 bytes
// Signature: undefined __thiscall getPolygonRoundingMode(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::getPolygonRoundingMode(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::getPolygonRoundingMode(DensityMapModifierLua *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  return;
}


