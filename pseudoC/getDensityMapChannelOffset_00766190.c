// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityMapChannelOffset
// Entry Point: 00766190
// Size: 20 bytes
// Signature: undefined __thiscall getDensityMapChannelOffset(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::getDensityMapChannelOffset(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::getDensityMapChannelOffset
          (DensityMapModifierLua *this,MethodInvocation *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  return;
}


