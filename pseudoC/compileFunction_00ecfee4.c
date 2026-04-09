// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileFunction
// Entry Point: 00ecfee4
// Size: 1376 bytes
// Signature: undefined __thiscall compileFunction(Compiler * this, AstExprFunction * param_1)


/* Luau::Compiler::compileFunction(Luau::AstExprFunction*) */

undefined4 __thiscall Luau::Compiler::compileFunction(Compiler *this,AstExprFunction *param_1)

{
  AstLocal **ppAVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  bool bVar8;
  AstLocal **ppAVar9;
  undefined4 uVar10;
  type tVar11;
  undefined8 uVar12;
  AstExprFunction *pAVar13;
  AstExprFunction **this_00;
  uchar uVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined8 *puVar23;
  long lVar24;
  AstExprFunction **ppAVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined **local_90;
  Compiler *pCStack_88;
  undefined8 local_80;
  AstLocal **local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  lVar24 = *(long *)(param_1 + 0x40);
  uVar14 = (uchar)*(undefined4 *)(param_1 + 0x50);
  uVar6 = *(undefined4 *)(this + 0x178);
  if (lVar24 != 0) {
    uVar14 = uVar14 + '\x01';
  }
                    /* try { // try from 00ecff38 to 00ecff7f has its CatchHandler @ 00ed0454 */
  uVar10 = BytecodeBuilder::beginFunction(*(BytecodeBuilder **)this,uVar14,(bool)param_1[0x78]);
  if (0 < *(int *)(this + 0xc)) {
    BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(param_1 + 0xc) + 1);
  }
  if (param_1[0x78] != (AstExprFunction)0x0) {
    BytecodeBuilder::emitABC
              (*(BytecodeBuilder **)this,0x41,(char)*(undefined4 *)(param_1 + 0x50) + (lVar24 != 0),
               '\0','\0');
  }
  lVar19 = *(long *)(param_1 + 0x50);
  iVar18 = *(int *)(this + 0x178);
  uVar17 = (uint)lVar19;
  if (lVar24 != 0) {
    uVar17 = uVar17 + 1;
  }
  uVar2 = uVar17 + iVar18;
  if (0xff < uVar2) {
                    /* try { // try from 00ed0430 to 00ed043f has its CatchHandler @ 00ed0450 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",
                        (ulong)uVar17,0xff);
  }
  *(uint *)(this + 0x178) = uVar2;
  if (uVar2 <= *(uint *)(this + 0x17c)) {
    uVar2 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar2;
  uVar14 = (uchar)iVar18;
  if (*(AstLocal **)(param_1 + 0x40) != (AstLocal *)0x0) {
                    /* try { // try from 00ecffbc to 00ecffc7 has its CatchHandler @ 00ed0450 */
    pushLocal(this,*(AstLocal **)(param_1 + 0x40),uVar14);
    lVar19 = *(long *)(param_1 + 0x50);
  }
  if (lVar19 != 0) {
    uVar26 = 0;
    do {
                    /* try { // try from 00ecffe4 to 00ecffeb has its CatchHandler @ 00ed0484 */
      pushLocal(this,*(AstLocal **)(*(long *)(param_1 + 0x48) + uVar26 * 8),
                uVar14 + (lVar24 != 0) + (char)uVar26);
      uVar26 = uVar26 + 1;
    } while (uVar26 < *(ulong *)(param_1 + 0x50));
  }
  puVar23 = *(undefined8 **)(param_1 + 0x98);
  if (puVar23[5] != 0) {
    uVar26 = 0;
    do {
                    /* try { // try from 00ed0014 to 00ed001b has its CatchHandler @ 00ed0480 */
      compileStat(this,*(AstStat **)(puVar23[4] + uVar26 * 8));
      uVar26 = uVar26 + 1;
    } while (uVar26 < (ulong)puVar23[5]);
  }
                    /* try { // try from 00ed002c to 00ed0147 has its CatchHandler @ 00ed0458 */
  uVar26 = allPathsEndWithReturn(this,(AstStat *)puVar23);
  if ((uVar26 & 1) == 0) {
    if (0 < *(int *)(this + 0xc)) {
      BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)((long)puVar23 + 0x14) + 1);
    }
    uVar26 = *(long *)(this + 400) - *(long *)(this + 0x188);
    if ((7 < uVar26) && (*(long *)(this + 0x68) != 0)) {
      bVar8 = false;
      lVar24 = 0;
      lVar19 = (long)uVar26 >> 3;
      bVar15 = 0xff;
LAB_00ed008c:
      do {
        uVar26 = *(ulong *)(*(long *)(this + 0x188) + lVar24 * 8);
        if (uVar26 != *(ulong *)(this + 0x70)) {
          uVar20 = 0;
          uVar21 = uVar26 >> 4 ^ uVar26 >> 9;
          do {
            uVar21 = uVar21 & *(long *)(this + 0x60) - 1U;
            puVar22 = (ulong *)(*(long *)(this + 0x58) + uVar21 * 0x10);
            if (*puVar22 == uVar26) goto LAB_00ed00d4;
            if (*puVar22 == *(ulong *)(this + 0x70)) break;
            uVar20 = uVar20 + 1;
            uVar21 = uVar20 + uVar21;
          } while (uVar20 <= *(long *)(this + 0x60) - 1U);
        }
        puVar22 = (ulong *)0x0;
LAB_00ed00d4:
        puVar3 = (ulong *)0x0;
        if (puVar22 != (ulong *)0x0) {
          puVar3 = puVar22 + 1;
        }
        if (*(byte *)((long)puVar3 + 2) != 0) {
          lVar24 = lVar24 + 1;
          bVar16 = *(byte *)puVar3;
          if (bVar15 <= *(byte *)puVar3) {
            bVar16 = bVar15;
          }
          bVar8 = true;
          bVar15 = bVar16;
          if (lVar24 == lVar19) goto LAB_00ed011c;
          goto LAB_00ed008c;
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 != lVar19);
      bVar16 = bVar15;
      if (bVar8) {
LAB_00ed011c:
        BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0xb,bVar16,'\0','\0');
      }
    }
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x16,'\0','\x01','\0');
  }
  if ((0 < *(int *)(this + 8)) && (1 < *(int *)(this + 0xc))) {
    local_78 = (AstLocal **)0x0;
    uStack_70 = 0;
    local_80 = (AstLocal **)0x0;
    local_90 = &PTR__ConstUpvalueVisitor_01015178;
    pCStack_88 = this;
                    /* try { // try from 00ed0184 to 00ed018b has its CatchHandler @ 00ed0448 */
    (**(code **)**(undefined8 **)(param_1 + 0x98))(*(undefined8 **)(param_1 + 0x98),&local_90);
    ppAVar9 = local_78;
    for (ppAVar1 = local_80; ppAVar1 != ppAVar9; ppAVar1 = ppAVar1 + 1) {
                    /* try { // try from 00ed019c to 00ed01a3 has its CatchHandler @ 00ed045c */
      getUpval(this,*ppAVar1);
    }
    local_90 = &PTR__ConstUpvalueVisitor_01015178;
    if (local_80 != (AstLocal **)0x0) {
      local_78 = local_80;
      operator_delete(local_80);
    }
  }
                    /* try { // try from 00ed01d8 to 00ed020f has its CatchHandler @ 00ed0458 */
  BytecodeBuilder::setDebugFunctionLineDefined
            (*(BytecodeBuilder **)this,*(int *)(param_1 + 0xc) + 1);
  iVar18 = *(int *)(this + 0xc);
  if (0 < iVar18) {
    lVar24 = *(long *)(param_1 + 0xa8);
    if (lVar24 != 0) {
      uVar27 = *(undefined8 *)this;
      uVar12 = __strlen_chk(lVar24,0xffffffffffffffff);
      BytecodeBuilder::setDebugFunctionName(uVar27,lVar24,uVar12);
      iVar18 = *(int *)(this + 0xc);
    }
    if (1 < iVar18) {
      puVar5 = *(undefined8 **)(this + 0x1a8);
      for (puVar4 = *(undefined8 **)(this + 0x1a0); puVar4 != puVar5; puVar4 = puVar4 + 1) {
        uVar27 = *(undefined8 *)this;
        uVar28 = *(undefined8 *)*puVar4;
                    /* try { // try from 00ed0234 to 00ed024f has its CatchHandler @ 00ed047c */
        uVar12 = __strlen_chk(uVar28,0xffffffffffffffff);
        BytecodeBuilder::pushDebugUpval(uVar27,uVar28,uVar12);
      }
    }
  }
  if (0 < *(int *)(this + 8)) {
                    /* try { // try from 00ed026c to 00ed029b has its CatchHandler @ 00ed0458 */
    BytecodeBuilder::foldJumps();
  }
  BytecodeBuilder::expandJumps();
  popLocals(this,0);
  BytecodeBuilder::endFunction
            (*(BytecodeBuilder **)this,(uchar)*(undefined4 *)(this + 0x17c),
             (uchar)((ulong)(*(long *)(this + 0x1a8) - *(long *)(this + 0x1a0)) >> 3));
  lVar24 = *(long *)(this + 0x38);
  if ((ulong)(lVar24 * 3) >> 2 <= *(ulong *)(this + 0x40)) {
                    /* try { // try from 00ed02b0 to 00ed03af has its CatchHandler @ 00ed044c */
    detail::
    DenseHashTable<Luau::AstExprFunction*,std::__ndk1::pair<Luau::AstExprFunction*,Luau::Compiler::Function>,std::__ndk1::pair<Luau::AstExprFunction*const,Luau::Compiler::Function>,Luau::detail::ItemInterfaceMap<Luau::AstExprFunction*,Luau::Compiler::Function>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprFunction*>>
    ::rehash();
    lVar24 = *(long *)(this + 0x38);
  }
  uVar26 = ((ulong)param_1 >> 4 ^ (ulong)param_1 >> 9) & lVar24 - 1U;
  ppAVar25 = (AstExprFunction **)(*(long *)(this + 0x30) + uVar26 * 0x38);
  if (*ppAVar25 == *(AstExprFunction **)(this + 0x48)) {
LAB_00ed0334:
    *ppAVar25 = param_1;
    *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
    *(undefined4 *)(ppAVar25 + 1) = uVar10;
  }
  else {
    if (*ppAVar25 != param_1) {
      lVar19 = 1;
      do {
        uVar26 = uVar26 + lVar19 & lVar24 - 1U;
        ppAVar25 = (AstExprFunction **)(*(long *)(this + 0x30) + uVar26 * 0x38);
        if (*ppAVar25 == *(AstExprFunction **)(this + 0x48)) goto LAB_00ed0334;
        lVar19 = lVar19 + 1;
      } while (*ppAVar25 != param_1);
    }
    *(undefined4 *)(ppAVar25 + 1) = uVar10;
  }
  this_00 = ppAVar25 + 2;
  if (this_00 != (AstExprFunction **)(this + 0x1a0)) {
    tVar11 = std::__ndk1::vector<Luau::AstLocal*,std::__ndk1::allocator<Luau::AstLocal*>>::
             assign<Luau::AstLocal**>
                       ((vector<Luau::AstLocal*,std::__ndk1::allocator<Luau::AstLocal*>> *)this_00,
                        *(AstLocal ***)(this + 0x1a0),*(AstLocal ***)(this + 0x1a8));
    this_00 = (AstExprFunction **)(ulong)tVar11;
  }
  if ((((1 < *(int *)(this + 8)) && (param_1[0x78] == (AstExprFunction)0x0)) &&
      (this[0x180] == (Compiler)0x0)) && (this[0x181] == (Compiler)0x0)) {
    *(undefined *)((long)ppAVar25 + 0x34) = 1;
    *(undefined4 *)(ppAVar25 + 6) = *(undefined4 *)(this + 0x17c);
    pAVar13 = (AstExprFunction *)
              Compile::modelCost(*(AstNode **)(param_1 + 0x98),*(AstLocal ***)(param_1 + 0x48),
                                 *(ulong *)(param_1 + 0x50),(DenseHashMap *)(this + 0x148));
    ppAVar25[5] = pAVar13;
    this_00 = (AstExprFunction **)allPathsEndWithReturn(this,*(AstStat **)(param_1 + 0x98));
    if (((ulong)this_00 & 1) != 0) {
      local_80 = (AstLocal **)CONCAT71(local_80._1_7_,1);
      local_90 = &PTR__AstVisitor_01015370;
      pCStack_88 = this;
                    /* try { // try from 00ed03d4 to 00ed03df has its CatchHandler @ 00ed0444 */
      this_00 = (AstExprFunction **)(**(code **)*puVar23)(puVar23,&local_90);
      *(undefined *)((long)ppAVar25 + 0x35) = (undefined)local_80;
    }
  }
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x178) = uVar6;
  *(undefined8 *)(this + 0x1a8) = *(undefined8 *)(this + 0x1a0);
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return uVar10;
}


