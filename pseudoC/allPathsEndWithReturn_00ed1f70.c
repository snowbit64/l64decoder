// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allPathsEndWithReturn
// Entry Point: 00ed1f70
// Size: 216 bytes
// Signature: undefined __thiscall allPathsEndWithReturn(Compiler * this, AstStat * param_1)


/* Luau::Compiler::allPathsEndWithReturn(Luau::AstStat*) */

undefined8 __thiscall Luau::Compiler::allPathsEndWithReturn(Compiler *this,AstStat *param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = AstRtti<Luau::AstStatBlock>::value;
  while( true ) {
    for (; (iVar1 = *(int *)(param_1 + 8), param_1 != (AstStat *)0x0 && (iVar1 == iVar3));
        param_1 = *(AstStat **)(*(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28) * 8 + -8)) {
      if (*(long *)(param_1 + 0x28) == 0) {
        return 0;
      }
    }
    if (iVar1 == AstRtti<Luau::AstStatReturn>::value) {
      return 1;
    }
    if (param_1 == (AstStat *)0x0) break;
    if (iVar1 != AstRtti<Luau::AstStatIf>::value) {
      return 0;
    }
    if (*(AstStat **)(param_1 + 0x30) == (AstStat *)0x0) {
      return 0;
    }
    uVar2 = allPathsEndWithReturn(this,*(AstStat **)(param_1 + 0x28));
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    param_1 = *(AstStat **)(param_1 + 0x30);
    iVar3 = AstRtti<Luau::AstStatBlock>::value;
  }
  return 0;
}


