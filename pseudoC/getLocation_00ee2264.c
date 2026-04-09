// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLocation
// Entry Point: 00ee2264
// Size: 68 bytes
// Signature: undefined __cdecl getLocation(AstTypeList * param_1)


/* Luau::getLocation(Luau::AstTypeList const&) */

undefined  [16] Luau::getLocation(AstTypeList *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar1 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(**(long **)param_1 + 0xc);
    uVar1 = *(undefined8 *)((*(long **)param_1)[*(long *)(param_1 + 8) + -1] + 0x14);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x14);
  }
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = uVar2;
  return auVar4;
}


