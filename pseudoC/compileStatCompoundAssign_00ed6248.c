// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileStatCompoundAssign
// Entry Point: 00ed6248
// Size: 1044 bytes
// Signature: undefined __thiscall compileStatCompoundAssign(Compiler * this, AstStatCompoundAssign * param_1)


/* Luau::Compiler::compileStatCompoundAssign(Luau::AstStatCompoundAssign*) */

void __thiscall
Luau::Compiler::compileStatCompoundAssign(Compiler *this,AstStatCompoundAssign *param_1)

{
  uint uVar1;
  LuauOpcode LVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uchar uVar6;
  uchar uVar7;
  char cVar8;
  AstExpr *pAVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  AstExpr *pAVar15;
  ulong uVar16;
  AstExpr *pAVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  int local_80;
  byte local_7c;
  Compiler *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  local_50 = *(undefined4 *)(this + 0x178);
  local_58 = this;
                    /* try { // try from 00ed6284 to 00ed628f has its CatchHandler @ 00ed666c */
  compileLValue((AstExpr *)this,*(RegScope **)(param_1 + 0x28));
  if (local_80 == 0) {
    uVar19 = (uint)local_7c;
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  else {
    uVar19 = *(uint *)(this + 0x178);
    uVar1 = uVar19 + 1;
    if (0xff < uVar1) {
                    /* try { // try from 00ed6620 to 00ed6633 has its CatchHandler @ 00ed6670 */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0xc),
                          "Out of registers when trying to allocate %d registers: exceeded limit %d"
                          ,1,0xff);
    }
    *(uint *)(this + 0x178) = uVar1;
    if (uVar1 <= *(uint *)(this + 0x17c)) {
      uVar1 = *(uint *)(this + 0x17c);
    }
    *(uint *)(this + 0x17c) = uVar1;
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  uVar6 = (uchar)uVar19;
  if (5 < uVar1) {
    if (uVar1 == 6) {
      uVar18 = *(undefined8 *)(param_1 + 0x30);
                    /* try { // try from 00ed6354 to 00ed635b has its CatchHandler @ 00ed6660 */
      local_98 = (undefined8 *)operator_new(8);
      local_90 = local_98 + 1;
      *local_98 = uVar18;
                    /* try { // try from 00ed6368 to 00ed636f has its CatchHandler @ 00ed665c */
      puStack_88 = local_90;
      unrollConcats((vector *)&local_98);
      iVar4 = *(int *)(this + 0x178);
      uVar19 = (int)((ulong)((long)local_90 - (long)local_98) >> 3) + 1;
      uVar1 = uVar19 + iVar4;
      if (0xff < uVar1) {
                    /* try { // try from 00ed6638 to 00ed6647 has its CatchHandler @ 00ed6668 */
                    /* WARNING: Subroutine does not return */
        CompileError::raise((Location *)(param_1 + 0xc),
                            "Out of registers when trying to allocate %d registers: exceeded limit %d"
                            ,(ulong)uVar19,0xff);
      }
      *(uint *)(this + 0x178) = uVar1;
      if (uVar1 <= *(uint *)(this + 0x17c)) {
        uVar1 = *(uint *)(this + 0x17c);
      }
      *(uint *)(this + 0x17c) = uVar1;
                    /* try { // try from 00ed63a4 to 00ed63b7 has its CatchHandler @ 00ed6668 */
      uVar7 = (uchar)iVar4;
      compileLValueUse(this,(LValue *)&local_80,uVar7,false);
      if (local_90 == local_98) {
        cVar8 = '\0';
      }
      else {
        uVar10 = 0;
        do {
                    /* try { // try from 00ed63d4 to 00ed63df has its CatchHandler @ 00ed667c */
          compileExpr(this,(AstExpr *)local_98[uVar10],uVar7 + '\x01' + (char)uVar10,true);
          uVar10 = uVar10 + 1;
        } while (uVar10 < (ulong)((long)local_90 - (long)local_98 >> 3));
        cVar8 = (char)((ulong)((long)local_90 - (long)local_98) >> 3);
      }
                    /* try { // try from 00ed6468 to 00ed6477 has its CatchHandler @ 00ed6668 */
      BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x31,uVar6,uVar7,cVar8 + uVar7);
      if (local_98 != (undefined8 *)0x0) {
        local_90 = local_98;
        operator_delete(local_98);
      }
    }
    goto LAB_00ed65a0;
  }
  if (local_80 != 0) {
                    /* try { // try from 00ed62cc to 00ed62df has its CatchHandler @ 00ed6670 */
    compileLValueUse(this,(LValue *)&local_80,uVar6,false);
  }
  pAVar17 = *(AstExpr **)(param_1 + 0x30);
  if ((*(long *)(this + 0xe0) != 0) && (pAVar9 = *(AstExpr **)(this + 0xe8), pAVar9 != pAVar17)) {
    lVar3 = *(long *)(this + 0xd0);
    uVar10 = 0;
    uVar12 = (ulong)pAVar17 >> 4 ^ (ulong)pAVar17 >> 9;
    uVar11 = *(long *)(this + 0xd8) - 1;
    do {
      uVar12 = uVar12 & uVar11;
      pAVar15 = *(AstExpr **)(lVar3 + uVar12 * 0x18);
      if (pAVar15 == pAVar17) {
        if (*(int *)(lVar3 + uVar12 * 0x18 + 8) == 3) {
                    /* try { // try from 00ed6424 to 00ed6457 has its CatchHandler @ 00ed6664 */
          uVar19 = BytecodeBuilder::addConstantNumber
                             (*(BytecodeBuilder **)this,*(double *)(lVar3 + uVar12 * 0x18 + 0x10));
          if ((int)uVar19 < 0) {
                    /* try { // try from 00ed664c to 00ed6657 has its CatchHandler @ 00ed6664 */
                    /* WARNING: Subroutine does not return */
            CompileError::raise((Location *)(pAVar17 + 0xc),
                                "Exceeded constant limit; simplify the code to compile");
          }
          if (uVar19 < 0x100) {
            LVar2 = *(uint *)(param_1 + 0x20) + 0x27;
            if (5 < *(uint *)(param_1 + 0x20)) {
              LVar2 = 0;
            }
            BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,LVar2,uVar6,uVar6,(uchar)uVar19);
            goto LAB_00ed65a0;
          }
          pAVar17 = *(AstExpr **)(param_1 + 0x30);
        }
        break;
      }
      uVar10 = uVar10 + 1;
      uVar12 = uVar10 + uVar12;
    } while (pAVar15 != pAVar9 && uVar10 < uVar11 || pAVar15 != pAVar9 && uVar10 == uVar11);
  }
  iVar4 = *(int *)(pAVar17 + 8);
  pAVar9 = pAVar17;
  while ((pAVar9 == (AstExpr *)0x0 || (iVar4 != AstRtti<Luau::AstExprLocal>::value))) {
    if ((iVar4 != AstRtti<Luau::AstExprGroup>::value) &&
       (iVar4 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed6544;
    pAVar9 = *(AstExpr **)(pAVar9 + 0x20);
    iVar4 = *(int *)(pAVar9 + 8);
  }
  if (*(long *)(this + 0x68) != 0) {
    uVar10 = *(ulong *)(pAVar9 + 0x20);
    uVar12 = *(ulong *)(this + 0x70);
    if (uVar10 != uVar12) {
      uVar11 = 0;
      uVar14 = uVar10 >> 4 ^ uVar10 >> 9;
      uVar13 = *(long *)(this + 0x60) - 1;
      goto LAB_00ed651c;
    }
  }
  goto LAB_00ed6544;
  while( true ) {
    uVar11 = uVar11 + 1;
    uVar14 = uVar11 + uVar14;
    if ((uVar16 == uVar12 || uVar13 <= uVar11) && (uVar16 == uVar12 || uVar11 != uVar13)) break;
LAB_00ed651c:
    uVar14 = uVar14 & uVar13;
    uVar16 = *(ulong *)(*(long *)(this + 0x58) + uVar14 * 0x10);
    if (uVar16 == uVar10) {
      lVar3 = *(long *)(this + 0x58) + uVar14 * 0x10;
      if (*(char *)(lVar3 + 9) != '\0') {
        uVar19 = (uint)*(byte *)(lVar3 + 8);
        goto LAB_00ed657c;
      }
      break;
    }
  }
LAB_00ed6544:
  uVar19 = *(uint *)(this + 0x178);
  uVar1 = uVar19 + 1;
  if (0xff < uVar1) {
                    /* try { // try from 00ed6608 to 00ed661b has its CatchHandler @ 00ed6674 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar17 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar1 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar1;
                    /* try { // try from 00ed6568 to 00ed659f has its CatchHandler @ 00ed6674 */
  compileExpr(this,pAVar17,(uchar)uVar19,true);
LAB_00ed657c:
  LVar2 = *(uint *)(param_1 + 0x20) + 0x21;
  if (5 < *(uint *)(param_1 + 0x20)) {
    LVar2 = 0;
  }
  BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,LVar2,uVar6,uVar6,(uchar)uVar19);
LAB_00ed65a0:
  if (local_80 != 0) {
                    /* try { // try from 00ed65a8 to 00ed65bb has its CatchHandler @ 00ed6670 */
    compileLValueUse(this,(LValue *)&local_80,uVar6,true);
  }
  *(undefined4 *)(local_58 + 0x178) = local_50;
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


