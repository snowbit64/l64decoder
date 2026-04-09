// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprTable
// Entry Point: 00ed932c
// Size: 2132 bytes
// Signature: undefined __thiscall compileExprTable(Compiler * this, AstExprTable * param_1, uchar param_2, bool param_3)


/* Luau::Compiler::compileExprTable(Luau::AstExprTable*, unsigned char, bool) */

void __thiscall
Luau::Compiler::compileExprTable(Compiler *this,AstExprTable *param_1,uchar param_2,bool param_3)

{
  AstExpr *pAVar1;
  undefined4 uVar2;
  int iVar3;
  uchar uVar4;
  uchar uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint uVar13;
  AstExpr *pAVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  AstExprTable *pAVar20;
  undefined4 *puVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  uint local_11c;
  Compiler *local_108;
  undefined4 local_100;
  int aiStack_f8 [32];
  uint local_78;
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  uVar10 = *(ulong *)(param_1 + 0x28);
  if (uVar10 == 0) {
    lVar7 = *(long *)(this + 0x128);
    if ((ulong)(lVar7 * 3) >> 2 <= *(ulong *)(this + 0x130)) {
      detail::
      DenseHashTable<Luau::AstExprTable*,std::__ndk1::pair<Luau::AstExprTable*,Luau::Compile::TableShape>,std::__ndk1::pair<Luau::AstExprTable*const,Luau::Compile::TableShape>,Luau::detail::ItemInterfaceMap<Luau::AstExprTable*,Luau::Compile::TableShape>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprTable*>>
      ::rehash();
      lVar7 = *(long *)(this + 0x128);
    }
    lVar18 = *(long *)(this + 0x120);
    uVar10 = lVar7 - 1U & ((ulong)param_1 >> 4 ^ (ulong)param_1 >> 9);
    pAVar20 = *(AstExprTable **)(lVar18 + uVar10 * 0x10);
    if (pAVar20 != *(AstExprTable **)(this + 0x138)) {
      lVar17 = 1;
      do {
        if (pAVar20 == param_1) goto LAB_00ed940c;
        uVar10 = uVar10 + lVar17;
        lVar17 = lVar17 + 1;
        uVar10 = uVar10 & lVar7 - 1U;
        pAVar20 = *(AstExprTable **)(lVar18 + uVar10 * 0x10);
      } while (pAVar20 != *(AstExprTable **)(this + 0x138));
    }
    *(AstExprTable **)(lVar18 + uVar10 * 0x10) = param_1;
    *(long *)(this + 0x130) = *(long *)(this + 0x130) + 1;
LAB_00ed940c:
    lVar18 = lVar18 + uVar10 * 0x10;
    uVar27 = *(uint *)(lVar18 + 8);
    uVar26 = *(uint *)(lVar18 + 0xc);
    uVar32 = 0xffffffff;
    do {
      uVar15 = uVar32;
      uVar32 = uVar15 + 1;
    } while ((uint)(1 << (ulong)(uVar32 & 0x1f)) < uVar26);
    uVar5 = '\0';
    if (uVar26 != 0) {
      uVar5 = (char)uVar15 + '\x02';
    }
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x35,param_2,uVar5,'\0');
    BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar27);
    lVar9 = *(long *)(lVar9 + 0x28);
    goto LAB_00ed9ac4;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if (uVar10 < 8) {
    uVar27 = 0;
    uVar26 = 0;
    uVar16 = 0;
    uVar32 = 0;
LAB_00ed9528:
    lVar18 = uVar10 - uVar16;
    piVar22 = (int *)(lVar7 + uVar16 * 0x18);
    do {
      if (*piVar22 == 0) {
        uVar32 = uVar32 + 1;
      }
      else {
        uVar27 = uVar27 + 1;
      }
      if (*piVar22 == 1) {
        uVar26 = uVar26 + 1;
      }
      lVar18 = lVar18 + -1;
      piVar22 = piVar22 + 6;
    } while (lVar18 != 0);
  }
  else {
    uVar16 = uVar10 & 0xfffffffffffffff8;
    puVar11 = (undefined4 *)(lVar7 + 0x60);
    iVar3 = 0;
    iVar28 = 0;
    iVar29 = 0;
    iVar30 = 0;
    iVar31 = 0;
    iVar33 = 0;
    iVar34 = 0;
    iVar35 = 0;
    iVar36 = 0;
    iVar37 = 0;
    iVar38 = 0;
    iVar39 = 0;
    iVar40 = 0;
    iVar41 = 0;
    iVar42 = 0;
    iVar43 = 0;
    iVar44 = 0;
    iVar45 = 0;
    iVar46 = 0;
    iVar47 = 0;
    iVar48 = 0;
    iVar49 = 0;
    iVar50 = 0;
    iVar51 = 0;
    uVar8 = uVar16;
    do {
      auVar55._0_4_ = *puVar11;
      uVar8 = uVar8 - 8;
      auVar55._4_4_ = puVar11[6];
      auVar55._8_4_ = puVar11[0xc];
      auVar53._4_4_ = puVar11[-0x12];
      auVar53._0_4_ = puVar11[-0x18];
      auVar55._12_4_ = puVar11[0x12];
      puVar21 = puVar11 + -6;
      auVar53._8_4_ = puVar11[-0xc];
      puVar11 = puVar11 + 0x30;
      auVar54 = NEON_cmeq(auVar55,0,2);
      auVar53._12_4_ = *puVar21;
      auVar56 = NEON_cmtst(auVar55,auVar55,4);
      auVar52._8_4_ = 1;
      auVar52._0_8_ = 0x100000001;
      auVar52._12_4_ = 1;
      auVar52 = NEON_cmeq(auVar55,auVar52,4);
      iVar48 = iVar48 - auVar54._0_4_;
      iVar49 = iVar49 - auVar54._4_4_;
      iVar50 = iVar50 - auVar54._8_4_;
      iVar51 = iVar51 - auVar54._12_4_;
      auVar55 = NEON_cmeq(auVar53,0,2);
      iVar31 = iVar31 - auVar56._0_4_;
      iVar33 = iVar33 - auVar56._4_4_;
      iVar34 = iVar34 - auVar56._8_4_;
      iVar35 = iVar35 - auVar56._12_4_;
      auVar56 = NEON_cmtst(auVar53,auVar53,4);
      auVar54._8_4_ = 1;
      auVar54._0_8_ = 0x100000001;
      auVar54._12_4_ = 1;
      auVar54 = NEON_cmeq(auVar53,auVar54,4);
      iVar44 = iVar44 - auVar55._0_4_;
      iVar45 = iVar45 - auVar55._4_4_;
      iVar46 = iVar46 - auVar55._8_4_;
      iVar47 = iVar47 - auVar55._12_4_;
      iVar40 = iVar40 - auVar52._0_4_;
      iVar41 = iVar41 - auVar52._4_4_;
      iVar42 = iVar42 - auVar52._8_4_;
      iVar43 = iVar43 - auVar52._12_4_;
      iVar3 = iVar3 - auVar56._0_4_;
      iVar28 = iVar28 - auVar56._4_4_;
      iVar29 = iVar29 - auVar56._8_4_;
      iVar30 = iVar30 - auVar56._12_4_;
      iVar36 = iVar36 - auVar54._0_4_;
      iVar37 = iVar37 - auVar54._4_4_;
      iVar38 = iVar38 - auVar54._8_4_;
      iVar39 = iVar39 - auVar54._12_4_;
    } while (uVar8 != 0);
    uVar32 = iVar48 + iVar44 + iVar49 + iVar45 + iVar50 + iVar46 + iVar51 + iVar47;
    uVar26 = iVar40 + iVar36 + iVar41 + iVar37 + iVar42 + iVar38 + iVar43 + iVar39;
    uVar27 = iVar31 + iVar3 + iVar33 + iVar28 + iVar34 + iVar29 + iVar35 + iVar30;
    if (uVar10 != uVar16) goto LAB_00ed9528;
  }
  if (uVar32 == 0 && uVar27 != 0) {
    uVar8 = *(ulong *)(this + 0xe0);
    if (uVar8 != 0) {
      lVar18 = *(long *)(this + 0xd0);
      uVar8 = 0;
      uVar12 = 0;
      uVar16 = uVar10;
      if (uVar10 < 2) {
        uVar16 = 1;
      }
      do {
        uVar23 = *(ulong *)(lVar7 + uVar12 * 0x18 + 8);
        if (uVar23 != *(ulong *)(this + 0xe8)) {
          uVar19 = 0;
          uVar24 = uVar23 >> 4 ^ uVar23 >> 9;
          do {
            uVar24 = uVar24 & *(long *)(this + 0xd8) - 1U;
            uVar6 = *(ulong *)(lVar18 + uVar24 * 0x18);
            if (uVar6 == uVar23) {
              if (*(int *)(lVar18 + uVar24 * 0x18 + 8) == 3) {
                uVar8 = (ulong)((int)uVar8 +
                               (uint)(*(double *)(lVar18 + uVar24 * 0x18 + 0x10) ==
                                     (double)(ulong)((int)uVar8 + 1)));
              }
              break;
            }
            if (uVar6 == *(ulong *)(this + 0xe8)) break;
            uVar19 = uVar19 + 1;
            uVar24 = uVar19 + uVar24;
          } while (uVar19 <= *(long *)(this + 0xd8) - 1U);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar16);
    }
    uVar15 = (uint)uVar8;
    uVar13 = uVar26;
    if (uVar27 != uVar15 + uVar26) {
      uVar15 = 0;
      uVar13 = uVar27;
    }
  }
  else {
    uVar15 = 0;
    uVar13 = uVar27;
  }
  uVar27 = 0xffffffff;
  do {
    uVar25 = uVar27;
    uVar27 = uVar25 + 1;
  } while ((uint)(1 << (ulong)(uVar27 & 0x1f)) < uVar13);
  uVar27 = *(uint *)(this + 0x178);
  uVar5 = '\0';
  if (uVar13 != 0) {
    uVar5 = (char)uVar25 + '\x02';
  }
  uVar25 = (uint)param_2;
  if (!param_3) {
    uVar25 = uVar27 + 1;
    if (0xff < uVar25) {
                    /* try { // try from 00ed9b58 to 00ed9b6b has its CatchHandler @ 00ed9b80 */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0xc),
                          "Out of registers when trying to allocate %d registers: exceeded limit %d"
                          ,1,0xff);
    }
    *(uint *)(this + 0x178) = uVar25;
    if (uVar25 <= *(uint *)(this + 0x17c)) {
      uVar25 = *(uint *)(this + 0x17c);
    }
    *(uint *)(this + 0x17c) = uVar25;
    uVar25 = uVar27;
  }
  uVar4 = (uchar)uVar25;
  if ((((uVar32 | uVar15) == 0) && (uVar26 - 1 < 0x20)) && (uVar13 == uVar26)) {
    uVar10 = 1;
    lVar18 = 8;
    local_78 = 0;
    while( true ) {
      lVar7 = *(long *)(lVar7 + lVar18);
      if (*(int *)(lVar7 + 8) != AstRtti<Luau::AstExprConstantString>::value) {
        lVar7 = 0;
      }
                    /* try { // try from 00ed96e8 to 00ed96eb has its CatchHandler @ 00ed9ba0 */
      iVar3 = BytecodeBuilder::addConstantString
                        (*(undefined8 *)this,*(undefined8 *)(lVar7 + 0x20),
                         *(undefined8 *)(lVar7 + 0x28));
      if (iVar3 < 0) {
                    /* try { // try from 00ed9b30 to 00ed9b3b has its CatchHandler @ 00ed9ba4 */
                    /* WARNING: Subroutine does not return */
        CompileError::raise((Location *)(lVar7 + 0xc),
                            "Exceeded constant limit; simplify the code to compile");
      }
      uVar8 = (ulong)local_78;
      uVar16 = *(ulong *)(param_1 + 0x28);
      local_78 = local_78 + 1;
      aiStack_f8[uVar8] = (int)(short)iVar3;
      if (uVar16 <= uVar10) break;
      lVar7 = *(long *)(param_1 + 0x20);
      uVar10 = uVar10 + 1;
      lVar18 = lVar18 + 0x18;
    }
                    /* try { // try from 00ed9744 to 00ed976b has its CatchHandler @ 00ed9b94 */
    uVar10 = BytecodeBuilder::addConstantTable(*(BytecodeBuilder **)this,(TableShape *)aiStack_f8);
    if ((int)uVar10 < 0) {
                    /* try { // try from 00ed9b70 to 00ed9b7b has its CatchHandler @ 00ed9b94 */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0xc),
                          "Exceeded constant limit; simplify the code to compile");
    }
    if ((uVar10 & 0xffffffff) >> 0xf == 0) {
      BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x36,uVar4,(short)(uVar10 & 0xffffffff));
    }
    else {
                    /* try { // try from 00ed9af0 to 00ed9b0f has its CatchHandler @ 00ed9b94 */
      BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x35,uVar4,uVar5,'\0');
      BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,0);
    }
  }
  else {
    if ((lVar7 == 0) || (*(int *)(lVar7 + (uVar10 - 1) * 0x18) != 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = -(uint)(*(int *)(*(long *)(lVar7 + (uVar10 - 1) * 0x18 + 0x10) + 8) ==
                     AstRtti<Luau::AstExprVarargs>::value);
    }
                    /* try { // try from 00ed9798 to 00ed97bb has its CatchHandler @ 00ed9b9c */
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x35,uVar4,uVar5,'\0');
    BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar15 + uVar32 + iVar3);
  }
  iVar3 = *(int *)(this + 0x178);
  if (0xf < uVar32) {
    uVar32 = 0x10;
  }
  uVar26 = iVar3 + uVar32;
  if (0xff < uVar26) {
                    /* try { // try from 00ed9b40 to 00ed9b53 has its CatchHandler @ 00ed9b98 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",
                        (ulong)uVar32,0xff);
  }
  *(uint *)(this + 0x178) = uVar26;
  if (uVar26 <= *(uint *)(this + 0x17c)) {
    uVar26 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar26;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar10 = 0;
    uVar26 = 0;
    uVar15 = 1;
    local_11c = 0;
LAB_00ed9804:
    do {
      lVar7 = *(long *)(param_1 + 0x20) + uVar10 * 0x18;
      pAVar14 = *(AstExpr **)(lVar7 + 8);
      pAVar1 = *(AstExpr **)(lVar7 + 0x10);
      if (0 < *(int *)(this + 0xc)) {
                    /* try { // try from 00ed982c to 00ed9887 has its CatchHandler @ 00ed9bc0 */
        BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(pAVar1 + 0xc) + 1);
      }
      if (1 < *(int *)(this + 0x10)) {
        BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x45,'\0','\0','\0');
      }
      if (uVar26 == 0) {
LAB_00ed988c:
        if (pAVar14 == (AstExpr *)0x0) {
          uVar13 = 0;
          goto LAB_00ed99f0;
        }
        local_100 = *(undefined4 *)(this + 0x178);
                    /* try { // try from 00ed989c to 00ed98b3 has its CatchHandler @ 00ed9bac */
        local_108 = this;
        compileLValueIndex(this,uVar4,pAVar14,(RegScope *)&local_108);
        iVar28 = *(int *)(pAVar1 + 8);
        pAVar14 = pAVar1;
        while ((pAVar14 == (AstExpr *)0x0 || (iVar28 != AstRtti<Luau::AstExprLocal>::value))) {
          if ((iVar28 != AstRtti<Luau::AstExprGroup>::value) &&
             (iVar28 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed9968;
          pAVar14 = *(AstExpr **)(pAVar14 + 0x20);
          iVar28 = *(int *)(pAVar14 + 8);
        }
        if (*(long *)(this + 0x68) != 0) {
          uVar8 = *(ulong *)(pAVar14 + 0x20);
          uVar16 = *(ulong *)(this + 0x70);
          if (uVar8 != uVar16) {
            uVar12 = 0;
            uVar23 = uVar8 >> 4 ^ uVar8 >> 9;
            uVar19 = *(long *)(this + 0x60) - 1;
            goto LAB_00ed9940;
          }
        }
        goto LAB_00ed9968;
      }
      uVar13 = uVar26;
      if (pAVar14 != (AstExpr *)0x0 || uVar26 == uVar32) {
        BytecodeBuilder::emitABC
                  (*(BytecodeBuilder **)this,0x37,uVar4,(uchar)iVar3,(char)uVar26 + '\x01');
        BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar15);
        uVar15 = uVar26 + uVar15;
        goto LAB_00ed988c;
      }
LAB_00ed99f0:
      uVar10 = uVar10 + 1;
      uVar5 = (uchar)(uVar13 + iVar3);
      if (uVar10 == *(ulong *)(param_1 + 0x28)) goto LAB_00ed9a04;
      uVar2 = *(undefined4 *)(this + 0x178);
      *(uint *)(this + 0x178) = (uVar13 + iVar3 & 0xff) + 1;
                    /* try { // try from 00ed9a38 to 00ed9a47 has its CatchHandler @ 00ed9b88 */
      compileExpr(this,pAVar1,uVar5,true);
      *(undefined4 *)(this + 0x178) = uVar2;
      uVar26 = uVar13 + 1;
    } while (uVar10 < *(ulong *)(param_1 + 0x28));
    goto LAB_00ed9a5c;
  }
  goto LAB_00ed9a8c;
LAB_00ed9a04:
                    /* try { // try from 00ed9a04 to 00ed9a13 has its CatchHandler @ 00ed9b84 */
  local_11c = compileExprTempMultRet(this,pAVar1,uVar5);
  uVar26 = uVar13 + 1;
  if (*(ulong *)(param_1 + 0x28) <= uVar10) goto LAB_00ed9a5c;
  goto LAB_00ed9804;
  while( true ) {
    uVar12 = uVar12 + 1;
    uVar23 = uVar12 + uVar23;
    if ((uVar24 == uVar16 || uVar19 <= uVar12) && (uVar24 == uVar16 || uVar12 != uVar19)) break;
LAB_00ed9940:
    uVar23 = uVar23 & uVar19;
    uVar24 = *(ulong *)(*(long *)(this + 0x58) + uVar23 * 0x10);
    if (uVar24 == uVar8) {
      lVar7 = *(long *)(this + 0x58) + uVar23 * 0x10;
      if (*(char *)(lVar7 + 9) != '\0') {
        uVar26 = (uint)*(byte *)(lVar7 + 8);
        goto LAB_00ed99a0;
      }
      break;
    }
  }
LAB_00ed9968:
  uVar26 = *(uint *)(this + 0x178);
  uVar13 = uVar26 + 1;
  if (0xff < uVar13) {
                    /* try { // try from 00ed9b18 to 00ed9b2b has its CatchHandler @ 00ed9ba8 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar1 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar13;
  if (uVar13 <= *(uint *)(this + 0x17c)) {
    uVar13 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar13;
                    /* try { // try from 00ed998c to 00ed99b3 has its CatchHandler @ 00ed9bb0 */
  compileExpr(this,pAVar1,(uchar)uVar26,true);
LAB_00ed99a0:
  compileLValueUse(this,(LValue *)aiStack_f8,(uchar)uVar26,true);
  uVar26 = 0;
  uVar10 = uVar10 + 1;
  *(undefined4 *)(local_108 + 0x178) = local_100;
  if (*(ulong *)(param_1 + 0x28) <= uVar10) goto LAB_00ed9a8c;
  goto LAB_00ed9804;
LAB_00ed9a5c:
  if (uVar13 != 0xffffffff) {
    uVar5 = '\0';
    if ((local_11c & 1) == 0) {
      uVar5 = (char)uVar13 + '\x02';
    }
                    /* try { // try from 00ed9a70 to 00ed9ab3 has its CatchHandler @ 00ed9b90 */
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x37,uVar4,(uchar)iVar3,uVar5);
    BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar15);
  }
LAB_00ed9a8c:
  if ((uVar25 & 0xff) != (uint)param_2) {
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,6,param_2,uVar4,'\0');
  }
  *(uint *)(this + 0x178) = uVar27;
  lVar9 = *(long *)(lVar9 + 0x28);
LAB_00ed9ac4:
  if (lVar9 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


