// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocReg
// Entry Point: 00ed1680
// Size: 76 bytes
// Signature: undefined __thiscall allocReg(Compiler * this, AstNode * param_1, uint param_2)


/* Luau::Compiler::allocReg(Luau::AstNode*, unsigned int) */

void __thiscall Luau::Compiler::allocReg(Compiler *this,AstNode *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x178) + param_2;
  if (uVar1 < 0x100) {
    *(uint *)(this + 0x178) = uVar1;
    if (uVar1 <= *(uint *)(this + 0x17c)) {
      uVar1 = *(uint *)(this + 0x17c);
    }
    *(uint *)(this + 0x17c) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  CompileError::raise((Location *)(param_1 + 0xc),
                      "Out of registers when trying to allocate %d registers: exceeded limit %d",
                      (ulong)param_2,0xff);
}


