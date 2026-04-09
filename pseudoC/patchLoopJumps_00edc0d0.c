// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: patchLoopJumps
// Entry Point: 00edc0d0
// Size: 192 bytes
// Signature: undefined __thiscall patchLoopJumps(Compiler * this, AstNode * param_1, ulong param_2, ulong param_3, ulong param_4)


/* Luau::Compiler::patchLoopJumps(Luau::AstNode*, unsigned long, unsigned long, unsigned long) */

void __thiscall
Luau::Compiler::patchLoopJumps
          (Compiler *this,AstNode *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(this + 0x1b8);
  if (param_2 < (ulong)(*(long *)(this + 0x1c0) - lVar2 >> 4)) {
    lVar3 = param_2 << 4;
    do {
      if (*(int *)(lVar2 + lVar3) == 1) {
        uVar1 = BytecodeBuilder::patchJumpD
                          (*(BytecodeBuilder **)this,*(ulong *)(lVar2 + lVar3 + 8),param_4);
joined_r0x00edc124:
        if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          CompileError::raise((Location *)(param_1 + 0xc),
                              "Exceeded jump distance limit; simplify the code to compile");
        }
      }
      else if (*(int *)(lVar2 + lVar3) == 0) {
        uVar1 = BytecodeBuilder::patchJumpD
                          (*(BytecodeBuilder **)this,*(ulong *)(lVar2 + lVar3 + 8),param_3);
        goto joined_r0x00edc124;
      }
      lVar2 = *(long *)(this + 0x1b8);
      param_2 = param_2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (param_2 < (ulong)(*(long *)(this + 0x1c0) - lVar2 >> 4));
  }
  return;
}


