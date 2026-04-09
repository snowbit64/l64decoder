// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ed1298
// Size: 140 bytes
// Signature: undefined __thiscall visit(FenvVisitor * this, AstExprGlobal * param_1)


/* Luau::Compiler::FenvVisitor::visit(Luau::AstExprGlobal*) */

undefined8 __thiscall Luau::Compiler::FenvVisitor::visit(FenvVisitor *this,AstExprGlobal *param_1)

{
  int iVar1;
  char *__s1;
  
  __s1 = *(char **)(param_1 + 0x20);
  if (__s1 != (char *)0x0) {
    iVar1 = strcmp(__s1,"getfenv");
    if (iVar1 == 0) {
      **(undefined **)(this + 8) = 1;
      iVar1 = strcmp(__s1,"setfenv");
    }
    else {
      iVar1 = strcmp(__s1,"setfenv");
    }
    if (iVar1 == 0) {
      **(undefined **)(this + 0x10) = 1;
      return 0;
    }
  }
  return 0;
}


