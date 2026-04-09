// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprFastcallN
// Entry Point: 00edcf0c
// Size: 1252 bytes
// Signature: undefined __thiscall compileExprFastcallN(Compiler * this, AstExprCall * param_1, uchar param_2, uchar param_3, bool param_4, bool param_5, uchar param_6, int param_7, int param_8)


/* Luau::Compiler::compileExprFastcallN(Luau::AstExprCall*, unsigned char, unsigned char, bool,
   bool, unsigned char, int, int) */

void __thiscall
Luau::Compiler::compileExprFastcallN
          (Compiler *this,AstExprCall *param_1,uchar param_2,uchar param_3,bool param_4,bool param_5
          ,uchar param_6,int param_7,int param_8)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  AstExpr *pAVar6;
  uchar uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  AstExpr *pAVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  LuauOpcode LVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  LuauOpcode local_a4;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  uVar17 = (ulong)param_6;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(param_1 + 0x30);
  if (lVar8 == 1) {
    bVar4 = false;
    local_a4 = 0x49;
    LVar16 = local_a4;
  }
  else {
    if (param_8 < 0) {
      if (*(long *)(this + 0xe0) != 0) {
        uVar19 = *(ulong *)(*(long *)(param_1 + 0x28) + 8);
        if (*(ulong *)(this + 0xe8) != uVar19) {
          uVar9 = 0;
          uVar15 = uVar19 >> 4 ^ uVar19 >> 9;
          do {
            uVar15 = uVar15 & *(long *)(this + 0xd8) - 1U;
            uVar10 = *(ulong *)(*(long *)(this + 0xd0) + uVar15 * 0x18);
            if (uVar10 == uVar19) {
              local_a4 = 0x4a;
              if (*(int *)(*(long *)(this + 0xd0) + uVar15 * 0x18 + 8) != 0) {
                local_a4 = 0x4b;
              }
              bVar4 = local_a4 == 0x4b;
              LVar16 = local_a4;
              if (lVar8 != 0) goto LAB_00edd040;
              goto LAB_00edd3c0;
            }
            if (uVar10 == *(ulong *)(this + 0xe8)) break;
            uVar9 = uVar9 + 1;
            uVar15 = uVar9 + uVar15;
          } while (uVar9 <= *(long *)(this + 0xd8) - 1U);
        }
      }
      local_a4 = 0x4a;
      LVar16 = 0x4a;
      bVar4 = false;
    }
    else {
      local_a4 = 0x4b;
      LVar16 = 0x4b;
      bVar4 = true;
    }
    if (lVar8 == 0) {
LAB_00edd3c0:
      local_70 = 0;
      local_78 = 0;
      uVar18 = 0;
      goto LAB_00edd194;
    }
  }
LAB_00edd040:
  local_a4 = LVar16;
  local_70 = 0;
  local_78 = 0;
  uVar19 = 0;
LAB_00edd088:
  pAVar6 = *(AstExpr **)(*(long *)(param_1 + 0x28) + uVar19 * 8);
  if ((bool)(bVar4 ^ 1U | uVar19 == 0)) {
    iVar5 = *(int *)(pAVar6 + 8);
    pAVar11 = pAVar6;
    while ((pAVar11 == (AstExpr *)0x0 || (iVar5 != AstRtti<Luau::AstExprLocal>::value))) {
      if ((iVar5 != AstRtti<Luau::AstExprGroup>::value) &&
         (iVar5 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00edd154;
      pAVar11 = *(AstExpr **)(pAVar11 + 0x20);
      iVar5 = *(int *)(pAVar11 + 8);
    }
    if (*(long *)(this + 0x68) != 0) {
      uVar9 = *(ulong *)(pAVar11 + 0x20);
      uVar15 = *(ulong *)(this + 0x70);
      if (uVar9 != uVar15) {
        uVar10 = 0;
        uVar13 = uVar9 >> 4 ^ uVar9 >> 9;
        uVar12 = *(long *)(this + 0x60) - 1;
        goto LAB_00edd12c;
      }
    }
    goto LAB_00edd154;
  }
  iVar5 = getConstantIndex(this,pAVar6);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Exceeded constant limit; simplify the code to compile");
  }
  *(int *)((long)&local_78 + uVar19 * 4) = iVar5;
  goto LAB_00edd078;
  while( true ) {
    uVar10 = uVar10 + 1;
    uVar13 = uVar10 + uVar13;
    if ((uVar14 == uVar15 || uVar12 <= uVar10) && (uVar14 == uVar15 || uVar10 != uVar12)) break;
LAB_00edd12c:
    uVar13 = uVar13 & uVar12;
    uVar14 = *(ulong *)(*(long *)(this + 0x58) + uVar13 * 0x10);
    if (uVar14 == uVar9) {
      lVar8 = *(long *)(this + 0x58) + uVar13 * 0x10;
      if (*(char *)(lVar8 + 9) != '\0') {
        *(uint *)((long)&local_78 + uVar19 * 4) = (uint)*(byte *)(lVar8 + 8);
        goto LAB_00edd078;
      }
      break;
    }
  }
LAB_00edd154:
  uVar2 = *(undefined4 *)(this + 0x178);
  uVar18 = (int)uVar19 + (uint)param_6 + 1;
  uVar1 = uVar18 & 0xff;
  *(uint *)((long)&local_78 + uVar19 * 4) = uVar1;
  *(uint *)(this + 0x178) = uVar1 + 1;
                    /* try { // try from 00edd170 to 00edd17b has its CatchHandler @ 00edd3f0 */
  compileExpr(this,pAVar6,(uchar)uVar18,true);
  *(undefined4 *)(this + 0x178) = uVar2;
LAB_00edd078:
  uVar19 = uVar19 + 1;
  if (*(ulong *)(param_1 + 0x30) <= uVar19) goto LAB_00edd184;
  goto LAB_00edd088;
LAB_00edd184:
  uVar18 = (uint)local_78;
LAB_00edd194:
  uVar19 = BytecodeBuilder::emitLabel();
  BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,local_a4,(uchar)param_7,(uchar)uVar18,'\0');
  if (local_a4 != 0x49) {
    if (param_8 < 0) {
      param_8 = local_78._4_4_;
    }
    BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,param_8);
  }
  uVar9 = *(ulong *)(param_1 + 0x30);
  if (uVar9 != 0) {
    if (!bVar4) {
      uVar15 = 1;
      uVar10 = uVar17 + 1;
      if (uVar10 == uVar18) goto LAB_00edd2c0;
      do {
        BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,6,(uchar)uVar10,(uchar)uVar18,'\0');
        uVar9 = *(ulong *)(param_1 + 0x30);
LAB_00edd2c0:
        do {
          if (uVar9 <= uVar15) goto LAB_00edd2c8;
          uVar18 = *(uint *)((long)&local_78 + uVar15 * 4);
          uVar15 = uVar15 + 1;
          uVar10 = uVar17 + uVar15;
        } while (uVar10 == uVar18);
      } while( true );
    }
    if (uVar17 + 1 != (ulong)uVar18) {
      BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,6,(uchar)(uVar17 + 1),(uchar)uVar18,'\0');
      uVar9 = *(ulong *)(param_1 + 0x30);
    }
    if (1 < uVar9) {
      uVar17 = 1;
      do {
        while( true ) {
          uVar18 = *(uint *)((long)&local_78 + uVar17 * 4);
          uVar7 = param_6 + '\x01' + (char)uVar17;
          if (0x7fff < (int)uVar18) break;
          BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,5,uVar7,(short)uVar18);
          uVar17 = uVar17 + 1;
          if (*(ulong *)(param_1 + 0x30) <= uVar17) goto LAB_00edd2c8;
        }
        BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x42,uVar7,0);
        BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar18);
        uVar17 = uVar17 + 1;
      } while (uVar17 < *(ulong *)(param_1 + 0x30));
    }
  }
LAB_00edd2c8:
  compileExpr(this,*(AstExpr **)(param_1 + 0x20),param_6,true);
  uVar17 = BytecodeBuilder::emitLabel();
  uVar17 = BytecodeBuilder::patchSkipC(*(BytecodeBuilder **)this,uVar19,uVar17);
  if ((uVar17 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(*(long *)(param_1 + 0x20) + 0xc),
                        "Exceeded jump distance limit; simplify the code to compile");
  }
  uVar7 = '\0';
  if (!param_5) {
    uVar7 = param_3 + '\x01';
  }
  BytecodeBuilder::emitABC
            (*(BytecodeBuilder **)this,0x15,param_6,(char)param_1[0x30] + '\x01',uVar7);
  if ((!param_4) && (param_3 != '\0')) {
    uVar17 = 0;
    do {
      BytecodeBuilder::emitABC
                (*(BytecodeBuilder **)this,6,(char)uVar17 + param_2,(char)uVar17 + param_6,'\0');
      uVar17 = uVar17 + 1;
    } while (param_3 != uVar17);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


