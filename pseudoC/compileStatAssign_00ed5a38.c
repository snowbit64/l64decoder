// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileStatAssign
// Entry Point: 00ed5a38
// Size: 1944 bytes
// Signature: undefined __thiscall compileStatAssign(Compiler * this, AstStatAssign * param_1)


/* WARNING: Type propagation algorithm not settling */
/* Luau::Compiler::compileStatAssign(Luau::AstStatAssign*) */

void __thiscall Luau::Compiler::compileStatAssign(Compiler *this,AstStatAssign *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  AstExpr *pAVar12;
  uchar uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  AstExpr *pAVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  Compiler *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar25 = *(ulong *)(param_1 + 0x28);
  local_70 = *(undefined4 *)(this + 0x178);
  local_78 = this;
  if (uVar25 == 1) {
    if (*(long *)(param_1 + 0x38) == 1) {
                    /* try { // try from 00ed5a98 to 00ed5aa7 has its CatchHandler @ 00ed61d0 */
      compileLValue((AstExpr *)this,**(RegScope ***)(param_1 + 0x20));
      pAVar12 = **(AstExpr ***)(param_1 + 0x30);
      if (local_a0 == 0) {
                    /* try { // try from 00ed613c to 00ed6147 has its CatchHandler @ 00ed61d0 */
        compileExpr(this,pAVar12,(uchar)uStack_9c,false);
        goto LAB_00ed60fc;
      }
      iVar5 = *(int *)(pAVar12 + 8);
      pAVar18 = pAVar12;
      while ((pAVar18 == (AstExpr *)0x0 || (iVar5 != AstRtti<Luau::AstExprLocal>::value))) {
        if ((iVar5 != AstRtti<Luau::AstExprGroup>::value) &&
           (iVar5 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed5b6c;
        pAVar18 = *(AstExpr **)(pAVar18 + 0x20);
        iVar5 = *(int *)(pAVar18 + 8);
      }
      if (*(long *)(this + 0x68) != 0) {
        uVar25 = *(ulong *)(pAVar18 + 0x20);
        uVar15 = *(ulong *)(this + 0x70);
        if (uVar25 != uVar15) {
          uVar17 = 0;
          uVar20 = uVar25 >> 4 ^ uVar25 >> 9;
          uVar19 = *(long *)(this + 0x60) - 1;
          goto LAB_00ed5b44;
        }
      }
      goto LAB_00ed5b6c;
    }
LAB_00ed5c0c:
    local_a8 = (undefined8 *)0x0;
    local_b0 = (undefined8 *)0x0;
    local_b8 = (undefined8 *)0x0;
    local_b8 = (undefined8 *)operator_new(uVar25 * 0x30);
    local_b0 = local_b8 + uVar25 * 6;
    puVar14 = local_b8;
    do {
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
      *(undefined2 *)(puVar14 + 5) = 0xffff;
      puVar14 = puVar14 + 6;
    } while (puVar14 != local_b0);
    local_a8 = local_b0;
    if (uVar25 != 0) {
      lVar26 = 0;
      uVar25 = 0;
      do {
                    /* try { // try from 00ed5c64 to 00ed5c73 has its CatchHandler @ 00ed6218 */
        compileLValue((AstExpr *)this,*(RegScope **)(*(long *)(param_1 + 0x20) + uVar25 * 8));
        uVar25 = uVar25 + 1;
        puVar14 = (undefined8 *)((long)local_b8 + lVar26);
        lVar26 = lVar26 + 0x30;
        puVar14[1] = uStack_98;
        *puVar14 = CONCAT44(uStack_9c,local_a0);
        puVar14[3] = uStack_88;
        puVar14[2] = uStack_90;
        puVar14[4] = local_80;
      } while (uVar25 < *(ulong *)(param_1 + 0x28));
    }
  }
  else {
    local_b8 = (undefined8 *)0x0;
    local_b0 = (undefined8 *)0x0;
    local_a8 = (undefined8 *)0x0;
    if (uVar25 != 0) {
      if (0x555555555555555 < uVar25) {
                    /* try { // try from 00ed5bfc to 00ed5c17 has its CatchHandler @ 00ed61e4 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      goto LAB_00ed5c0c;
    }
  }
  plVar2 = (long *)(param_1 + 0x30);
                    /* try { // try from 00ed5ca4 to 00ed5cb7 has its CatchHandler @ 00ed61e0 */
  resolveAssignConflicts(this,(AstStat *)param_1,(vector *)&local_b8,(AstArray *)plVar2);
  uVar25 = *(ulong *)(param_1 + 0x28);
  if (uVar25 != 0) {
    lVar27 = 0;
    lVar26 = 1;
    uVar15 = 0;
LAB_00ed5d18:
    puVar14 = local_b8;
    uVar17 = *(ulong *)(param_1 + 0x38);
    if (uVar15 < uVar17) {
      uVar20 = uVar15 + 1;
      pAVar12 = *(AstExpr **)(*plVar2 + uVar15 * 8);
      if ((uVar20 != uVar17) || (uVar25 <= uVar17)) {
        if (*(int *)(local_b8 + uVar15 * 6) == 0) {
          uVar13 = *(uchar *)((long)local_b8 + uVar15 * 0x30 + 4);
          if (*(uchar *)(local_b8 + uVar15 * 6 + 5) != 0xff) {
            uVar13 = *(uchar *)(local_b8 + uVar15 * 6 + 5);
          }
          *(uchar *)((long)local_b8 + uVar15 * 0x30 + 0x29) = uVar13;
                    /* try { // try from 00ed5cf4 to 00ed5cff has its CatchHandler @ 00ed61fc */
          compileExpr(this,pAVar12,uVar13,false);
          goto LAB_00ed5d00;
        }
        iVar5 = *(int *)(pAVar12 + 8);
        pAVar18 = pAVar12;
        while ((pAVar18 == (AstExpr *)0x0 || (iVar5 != AstRtti<Luau::AstExprLocal>::value))) {
          if ((iVar5 != AstRtti<Luau::AstExprGroup>::value) &&
             (iVar5 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed5ec0;
          pAVar18 = *(AstExpr **)(pAVar18 + 0x20);
          iVar5 = *(int *)(pAVar18 + 8);
        }
        if (*(long *)(this + 0x68) != 0) {
          uVar25 = *(ulong *)(pAVar18 + 0x20);
          uVar17 = *(ulong *)(this + 0x70);
          if (uVar25 != uVar17) {
            uVar19 = 0;
            uVar22 = uVar25 >> 4 ^ uVar25 >> 9;
            uVar21 = *(long *)(this + 0x60) - 1;
            goto LAB_00ed5e98;
          }
        }
        goto LAB_00ed5ec0;
      }
      iVar5 = *(int *)(this + 0x178);
      uVar24 = ((int)uVar25 - (int)uVar17) + 1;
      uVar4 = uVar24 & 0xff;
      uVar1 = iVar5 + uVar4;
      if (0xff < uVar1) {
                    /* try { // try from 00ed6188 to 00ed619b has its CatchHandler @ 00ed6200 */
                    /* WARNING: Subroutine does not return */
        CompileError::raise((Location *)(param_1 + 0xc),
                            "Out of registers when trying to allocate %d registers: exceeded limit %d"
                            ,(ulong)uVar4,0xff);
      }
      *(uint *)(this + 0x178) = uVar1;
      if (uVar1 <= *(uint *)(this + 0x17c)) {
        uVar1 = *(uint *)(this + 0x17c);
      }
      *(uint *)(this + 0x17c) = uVar1;
      uVar13 = (uchar)iVar5;
                    /* try { // try from 00ed5d70 to 00ed5d7f has its CatchHandler @ 00ed6204 */
      compileExprTempN(this,pAVar12,uVar13,(uchar)uVar24,true);
      uVar17 = *(ulong *)(param_1 + 0x28);
      uVar25 = uVar17 - uVar15;
      if (uVar15 <= uVar17 && uVar25 != 0) {
        if (1 < uVar25) {
          uVar19 = 0;
          uVar15 = uVar15 + (uVar25 & 0xfffffffffffffffe);
          pcVar16 = (char *)((long)local_b8 + lVar26 * 0x30 + 0x29);
          do {
            cVar8 = (char)uVar19 + uVar13;
            uVar19 = uVar19 + 2;
            pcVar16[-0x30] = cVar8;
            *pcVar16 = cVar8 + '\x01';
            pcVar16 = pcVar16 + 0x60;
          } while ((uVar17 + lVar27 & 0xfffffffffffffffe) != uVar19);
          if (uVar25 == (uVar25 & 0xfffffffffffffffe)) goto LAB_00ed5d00;
        }
        pcVar16 = (char *)((long)local_b8 + uVar15 * 0x30 + 0x29);
        do {
          cVar8 = (char)uVar15;
          uVar15 = uVar15 + 1;
          *pcVar16 = (char)lVar27 + cVar8 + uVar13;
          pcVar16 = pcVar16 + 0x30;
        } while (uVar17 != uVar15);
      }
      goto LAB_00ed5d00;
    }
  }
LAB_00ed5f14:
  uVar15 = *(ulong *)(param_1 + 0x38);
  if (uVar25 < uVar15) {
    iVar5 = *(int *)(this + 0x178);
    uVar24 = iVar5 + 1;
LAB_00ed5f40:
    pAVar18 = *(AstExpr **)(*plVar2 + uVar25 * 8);
    iVar6 = *(int *)(pAVar18 + 8);
    pAVar12 = pAVar18;
    while ((pAVar12 == (AstExpr *)0x0 || (iVar6 != AstRtti<Luau::AstExprLocal>::value))) {
      if ((iVar6 != AstRtti<Luau::AstExprGroup>::value) &&
         (iVar6 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed5fe4;
      pAVar12 = *(AstExpr **)(pAVar12 + 0x20);
      iVar6 = *(int *)(pAVar12 + 8);
    }
    if (*(long *)(this + 0x68) != 0) {
      uVar17 = *(ulong *)(pAVar12 + 0x20);
      uVar20 = *(ulong *)(this + 0x70);
      if (uVar17 != uVar20) {
        uVar19 = 0;
        uVar22 = uVar17 >> 4 ^ uVar17 >> 9;
        uVar21 = *(long *)(this + 0x60) - 1;
        goto LAB_00ed5fbc;
      }
    }
    goto LAB_00ed5fe4;
  }
LAB_00ed6038:
  puVar10 = local_b0;
  puVar14 = local_b8;
  if (local_b8 != local_b0) {
    do {
      if (*(int *)puVar14 != 0) {
        if (0 < *(int *)(this + 0xc)) {
          BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(puVar14 + 3) + 1);
        }
                    /* try { // try from 00ed6050 to 00ed608f has its CatchHandler @ 00ed621c */
        compileLValueUse(this,(LValue *)puVar14,*(uchar *)((long)puVar14 + 0x29),true);
      }
      puVar11 = local_b0;
      puVar14 = puVar14 + 6;
      puVar9 = local_b8;
    } while (puVar14 != puVar10);
    for (; puVar9 != puVar11; puVar9 = puVar9 + 6) {
      if (*(int *)puVar9 == 0) {
        if (*(uchar *)((long)puVar9 + 0x29) != *(uchar *)((long)puVar9 + 4)) {
                    /* try { // try from 00ed60cc to 00ed60d7 has its CatchHandler @ 00ed61f4 */
          BytecodeBuilder::emitABC
                    (*(BytecodeBuilder **)this,6,*(uchar *)((long)puVar9 + 4),
                     *(uchar *)((long)puVar9 + 0x29),'\0');
        }
      }
    }
  }
  if (local_b8 != (undefined8 *)0x0) {
    local_b0 = local_b8;
    operator_delete(local_b8);
  }
LAB_00ed60fc:
  *(undefined4 *)(local_78 + 0x178) = local_70;
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while( true ) {
    uVar17 = uVar17 + 1;
    uVar20 = uVar17 + uVar20;
    if ((uVar22 == uVar15 || uVar19 <= uVar17) && (uVar22 == uVar15 || uVar17 != uVar19)) break;
LAB_00ed5b44:
    uVar20 = uVar20 & uVar19;
    uVar22 = *(ulong *)(*(long *)(this + 0x58) + uVar20 * 0x10);
    if (uVar22 == uVar25) {
      lVar26 = *(long *)(this + 0x58) + uVar20 * 0x10;
      if (*(char *)(lVar26 + 9) != '\0') {
        uVar24 = (uint)*(byte *)(lVar26 + 8);
        iVar5 = *(int *)(this + 0xc);
        goto joined_r0x00ed6164;
      }
      break;
    }
  }
LAB_00ed5b6c:
  uVar24 = *(uint *)(this + 0x178);
  uVar1 = uVar24 + 1;
  if (0xff < uVar1) {
                    /* try { // try from 00ed61b8 to 00ed61cb has its CatchHandler @ 00ed61d8 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar12 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar1 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar1;
                    /* try { // try from 00ed5b90 to 00ed5bd7 has its CatchHandler @ 00ed61d8 */
  compileExpr(this,pAVar12,(uchar)uVar24,true);
  iVar5 = *(int *)(this + 0xc);
joined_r0x00ed6164:
  if (0 < iVar5) {
    BytecodeBuilder::setDebugLine
              (*(BytecodeBuilder **)this,*(int *)(**(long **)(param_1 + 0x20) + 0xc) + 1);
  }
  compileLValueUse(this,(LValue *)&local_a0,(uchar)uVar24,true);
  goto LAB_00ed60fc;
  while( true ) {
    uVar19 = uVar19 + 1;
    uVar22 = uVar19 + uVar22;
    if ((uVar23 == uVar17 || uVar21 <= uVar19) && (uVar23 == uVar17 || uVar19 != uVar21)) break;
LAB_00ed5e98:
    uVar22 = uVar22 & uVar21;
    uVar23 = *(ulong *)(*(long *)(this + 0x58) + uVar22 * 0x10);
    if (uVar23 == uVar25) {
      lVar3 = *(long *)(this + 0x58) + uVar22 * 0x10;
      if (*(char *)(lVar3 + 9) != '\0') {
        uVar24 = (uint)*(byte *)(lVar3 + 8);
        goto LAB_00ed5ef4;
      }
      break;
    }
  }
LAB_00ed5ec0:
  uVar24 = *(uint *)(this + 0x178);
  uVar1 = uVar24 + 1;
  if (0xff < uVar1) {
                    /* try { // try from 00ed61a0 to 00ed61b3 has its CatchHandler @ 00ed61f8 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar12 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar1 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar1;
                    /* try { // try from 00ed5ee4 to 00ed5ef3 has its CatchHandler @ 00ed61fc */
  compileExpr(this,pAVar12,(uchar)uVar24,true);
LAB_00ed5ef4:
  *(char *)((long)puVar14 + uVar15 * 0x30 + 0x29) = (char)uVar24;
LAB_00ed5d00:
  uVar25 = *(ulong *)(param_1 + 0x28);
  lVar27 = lVar27 + -1;
  lVar26 = lVar26 + 1;
  uVar15 = uVar20;
  if (uVar25 <= uVar20) goto LAB_00ed5f14;
  goto LAB_00ed5d18;
  while( true ) {
    uVar19 = uVar19 + 1;
    uVar22 = uVar19 + uVar22;
    if ((uVar23 == uVar20 || uVar21 <= uVar19) && (uVar23 == uVar20 || uVar19 != uVar21)) break;
LAB_00ed5fbc:
    uVar22 = uVar22 & uVar21;
    uVar23 = *(ulong *)(*(long *)(this + 0x58) + uVar22 * 0x10);
    if (uVar23 == uVar17) {
      if (*(char *)(*(long *)(this + 0x58) + uVar22 * 0x10 + 9) != '\0') goto LAB_00ed6014;
      break;
    }
  }
LAB_00ed5fe4:
  if (0xff < uVar24) {
                    /* try { // try from 00ed6170 to 00ed6183 has its CatchHandler @ 00ed6208 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar18 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar24;
  uVar1 = uVar24;
  if (uVar24 <= *(uint *)(this + 0x17c)) {
    uVar1 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar1;
                    /* try { // try from 00ed6000 to 00ed600f has its CatchHandler @ 00ed620c */
  compileExpr(this,pAVar18,(uchar)iVar5,true);
  uVar15 = *(ulong *)(param_1 + 0x38);
LAB_00ed6014:
  uVar25 = uVar25 + 1;
  *(int *)(this + 0x178) = iVar5;
  if (uVar15 <= uVar25) goto LAB_00ed6038;
  goto LAB_00ed5f40;
}


