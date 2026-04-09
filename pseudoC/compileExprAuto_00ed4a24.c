// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprAuto
// Entry Point: 00ed4a24
// Size: 312 bytes
// Signature: undefined __cdecl compileExprAuto(AstExpr * param_1, RegScope * param_2)


/* Luau::Compiler::compileExprAuto(Luau::AstExpr*, Luau::Compiler::RegScope&) */

uint Luau::Compiler::compileExprAuto(AstExpr *param_1,RegScope *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  RegScope *pRVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  iVar8 = *(int *)(param_2 + 8);
  pRVar7 = param_2;
  if (param_2 == (RegScope *)0x0) goto LAB_00ed4a6c;
  while (iVar8 != AstRtti<Luau::AstExprLocal>::value) {
LAB_00ed4a6c:
    do {
      if ((iVar8 != AstRtti<Luau::AstExprGroup>::value) &&
         (iVar8 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed4ae4;
      pRVar7 = *(RegScope **)(pRVar7 + 0x20);
      iVar8 = *(int *)(pRVar7 + 8);
    } while (pRVar7 == (RegScope *)0x0);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar4 = *(ulong *)(pRVar7 + 0x20);
    uVar5 = *(ulong *)(param_1 + 0x70);
    if (uVar4 != uVar5) {
      uVar6 = 0;
      uVar10 = uVar4 >> 4 ^ uVar4 >> 9;
      uVar9 = *(long *)(param_1 + 0x60) - 1;
      do {
        uVar10 = uVar10 & uVar9;
        uVar11 = *(ulong *)(*(long *)(param_1 + 0x58) + uVar10 * 0x10);
        if (uVar11 == uVar4) {
          lVar2 = *(long *)(param_1 + 0x58) + uVar10 * 0x10;
          if (*(char *)(lVar2 + 9) != '\0') {
            return (uint)*(byte *)(lVar2 + 8);
          }
          break;
        }
        uVar6 = uVar6 + 1;
        uVar10 = uVar6 + uVar10;
      } while (uVar11 != uVar5 && uVar6 < uVar9 || uVar11 != uVar5 && uVar6 == uVar9);
    }
  }
LAB_00ed4ae4:
  uVar3 = *(uint *)(param_1 + 0x178);
  uVar1 = uVar3 + 1;
  if (0xff < uVar1) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_2 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(param_1 + 0x178) = uVar1;
  if (uVar1 <= *(uint *)(param_1 + 0x17c)) {
    uVar1 = *(uint *)(param_1 + 0x17c);
  }
  *(uint *)(param_1 + 0x17c) = uVar1;
  compileExpr((Compiler *)param_1,(AstExpr *)param_2,(uchar)uVar3,true);
  return uVar3;
}


