// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstExprLocal*)
// Entry Point: 00edf1a4
// Size: 160 bytes
// Signature: undefined AstExprLocal*)(void)


/* Luau::Compiler::resolveAssignConflicts(Luau::AstStat*,
   std::__ndk1::vector<Luau::Compiler::Assignment,
   std::__ndk1::allocator<Luau::Compiler::Assignment> >&, Luau::AstArray<Luau::AstExpr*>
   const&)::Visitor::visit(Luau::AstExprLocal*) */

undefined8
Luau::Compiler::resolveAssignConflicts(Luau::AstStat*,std::__ndk1::vector<Luau::Compiler::
Assignment,std::__ndk1::allocator<Luau::Compiler::Assignment>>&,Luau::AstArray<Luau::
AstExpr*>const&)::Visitor::visit(Luau::AstExprLocal__(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(param_1 + 8);
  if (*(long *)(lVar5 + 0x68) != 0) {
    uVar2 = *(ulong *)(param_2 + 0x20);
    uVar3 = *(ulong *)(lVar5 + 0x70);
    if (uVar3 != uVar2) {
      uVar4 = 0;
      uVar7 = uVar2 >> 4 ^ uVar2 >> 9;
      uVar6 = *(long *)(lVar5 + 0x60) - 1;
      do {
        uVar7 = uVar7 & uVar6;
        uVar8 = *(ulong *)(*(long *)(lVar5 + 0x58) + uVar7 * 0x10);
        if (uVar8 == uVar2) {
          lVar5 = *(long *)(lVar5 + 0x58) + uVar7 * 0x10;
          if (*(char *)(lVar5 + 9) == '\0') {
            return 1;
          }
          bVar1 = *(byte *)(lVar5 + 8);
          uVar2 = 1L << ((ulong)bVar1 & 0x3f);
          param_1 = param_1 + (ulong)(bVar1 >> 6) * 8;
          if ((uVar2 & *(ulong *)(param_1 + 0x30)) == 0) {
            return 1;
          }
          *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | uVar2;
          return 1;
        }
        uVar4 = uVar4 + 1;
        uVar7 = uVar4 + uVar7;
      } while (uVar8 != uVar3 && uVar4 < uVar6 || uVar8 != uVar3 && uVar4 == uVar6);
    }
  }
  return 1;
}


