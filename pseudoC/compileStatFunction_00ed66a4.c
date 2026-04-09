// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileStatFunction
// Entry Point: 00ed66a4
// Size: 436 bytes
// Signature: undefined __thiscall compileStatFunction(Compiler * this, AstStatFunction * param_1)


/* Luau::Compiler::compileStatFunction(Luau::AstStatFunction*) */

void __thiscall Luau::Compiler::compileStatFunction(Compiler *this,AstStatFunction *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uchar uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  LValue aLStack_70 [40];
  Compiler *local_48;
  int local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  for (lVar5 = *(long *)(param_1 + 0x20);
      (iVar2 = *(int *)(lVar5 + 8), lVar5 == 0 || (iVar2 != AstRtti<Luau::AstExprLocal>::value));
      lVar5 = *(long *)(lVar5 + 0x20)) {
    if ((iVar2 != AstRtti<Luau::AstExprGroup>::value) &&
       (iVar2 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed6774;
  }
  if (*(long *)(this + 0x68) != 0) {
    uVar6 = *(ulong *)(lVar5 + 0x20);
    uVar7 = *(ulong *)(this + 0x70);
    if (uVar6 != uVar7) {
      uVar8 = 0;
      uVar10 = uVar6 >> 4 ^ uVar6 >> 9;
      uVar9 = *(long *)(this + 0x60) - 1;
      goto LAB_00ed674c;
    }
  }
  goto LAB_00ed6774;
  while( true ) {
    uVar8 = uVar8 + 1;
    uVar10 = uVar8 + uVar10;
    if ((uVar11 == uVar7 || uVar9 <= uVar8) && (uVar11 == uVar7 || uVar8 != uVar9)) break;
LAB_00ed674c:
    uVar10 = uVar10 & uVar9;
    uVar11 = *(ulong *)(*(long *)(this + 0x58) + uVar10 * 0x10);
    if (uVar11 == uVar6) {
      lVar5 = *(long *)(this + 0x58) + uVar10 * 0x10;
      if (*(char *)(lVar5 + 9) != '\0') {
        compileExpr(this,*(AstExpr **)(param_1 + 0x28),*(uchar *)(lVar5 + 8),false);
        if (*(long *)(lVar3 + 0x28) == local_38) {
          return;
        }
        goto LAB_00ed683c;
      }
      break;
    }
  }
LAB_00ed6774:
  local_40 = *(int *)(this + 0x178);
  uVar1 = local_40 + 1;
  local_48 = this;
  if (0xff < uVar1) {
                    /* try { // try from 00ed6844 to 00ed6857 has its CatchHandler @ 00ed6868 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar1 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar1;
  uVar4 = (uchar)local_40;
                    /* try { // try from 00ed67a4 to 00ed67b3 has its CatchHandler @ 00ed6868 */
  compileExpr(this,*(AstExpr **)(param_1 + 0x28),uVar4,true);
                    /* try { // try from 00ed67b8 to 00ed67db has its CatchHandler @ 00ed6858 */
  compileLValue((AstExpr *)this,*(RegScope **)(param_1 + 0x20));
  compileLValueUse(this,aLStack_70,uVar4,true);
  *(int *)(local_48 + 0x178) = local_40;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_00ed683c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


