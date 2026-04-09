// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNewTypeIndexMode
// Entry Point: 00766cf4
// Size: 40 bytes
// Signature: undefined __thiscall getNewTypeIndexMode(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::getNewTypeIndexMode(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::getNewTypeIndexMode(DensityMapModifierLua *this,MethodInvocation *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x30);
  *(undefined4 *)(param_1 + 0x108) = 1;
  iVar2 = (uint)(iVar1 == 0) << 1;
  if (iVar1 == -1) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0x100) = iVar2;
  return;
}


