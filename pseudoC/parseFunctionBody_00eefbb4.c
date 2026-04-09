// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseFunctionBody
// Entry Point: 00eefbb4
// Size: 1312 bytes
// Signature: undefined __thiscall parseFunctionBody(Parser * this, bool param_1, Lexeme * param_2, AstName * param_3, Name * param_4)


/* Luau::Parser::parseFunctionBody(bool, Luau::Lexeme const&, Luau::AstName const&,
   Luau::Parser::Name const*) */

undefined  [16] __thiscall
Luau::Parser::parseFunctionBody
          (Parser *this,bool param_1,Lexeme *param_2,AstName *param_3,Name *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  void *__dest;
  AstStatBlock *pAVar6;
  int *piVar7;
  int iVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  AstTypePack *pAVar12;
  undefined8 uVar13;
  bool bVar14;
  ulong uVar15;
  long lVar16;
  void *__src;
  size_t __n;
  long lVar17;
  undefined auVar18 [16];
  undefined8 local_198;
  uint local_17c;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  AstLocal *local_168;
  AstArray aAStack_160 [16];
  undefined8 local_150;
  undefined8 uStack_148;
  long *local_138;
  long local_130;
  undefined8 uStack_128;
  int local_120;
  ulong local_11c;
  AstArray aAStack_110 [16];
  AstArray aAStack_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  AstTypePack *pAStack_c8;
  undefined8 local_c0;
  ulong local_b0;
  AstTypePack *pAStack_a8;
  undefined8 local_a0;
  undefined local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  uStack_e8 = *(undefined8 *)(param_2 + 0xc);
  local_f0 = *(undefined8 *)(param_2 + 4);
  parseGenericTypeList(SUB81(this,0));
  iVar3 = *(int *)(this + 0x28);
  uVar15 = *(ulong *)(this + 0x2c);
  local_120 = iVar3;
  local_11c = uVar15;
  if (iVar3 == 0x28) {
LAB_00eefc5c:
    nextLexeme();
  }
  else {
    expectAndConsumeFail(this,0x28,"function");
    Lexer::lookahead();
    if (local_e0 == 0x28) {
      nextLexeme();
      goto LAB_00eefc5c;
    }
  }
  local_138 = (long *)(this + 0x208);
  local_150 = 0;
  uStack_148 = 0;
  local_130 = *(long *)(this + 0x210) - *(long *)(this + 0x208) >> 5;
  uStack_128 = 0;
  if (*(int *)(this + 0x28) == 0x29) {
    local_17c = 0;
    pAVar12 = (AstTypePack *)0x0;
    iVar8 = 0x29;
  }
  else {
                    /* try { // try from 00eefcb4 to 00eefcc7 has its CatchHandler @ 00ef00d4 */
    parseBindingList((TempVector *)this,SUB81(&local_138,0));
    uStack_148 = CONCAT44(local_d0,uStack_d4);
    local_150 = CONCAT44(uStack_d8,uStack_dc);
    local_17c = local_e0 & 0xff;
    iVar8 = *(int *)(this + 0x28);
    pAVar12 = pAStack_c8;
  }
  local_90 = local_90 & 0xffffffffffffff00;
  local_80 = 0;
  if ((iVar3 == 0x28) && (local_80 = 0, iVar8 == 0x29)) {
    uStack_88 = *(undefined8 *)(this + 0x34);
    local_80 = 1;
    local_90 = uVar15;
  }
  if (iVar8 == 0x29) {
                    /* try { // try from 00eefd10 to 00eefd3f has its CatchHandler @ 00ef00e8 */
    nextLexeme();
  }
  else {
    piVar7 = &local_120;
    expectMatchAndConsumeFail(this,0x29,(MatchLexeme *)piVar7,(char *)0x0);
    expectMatchAndConsumeRecover(this,')',(MatchLexeme *)piVar7,true);
  }
  if (*this == (Parser)0x0) {
LAB_00eefe50:
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_98 = 0;
    if (param_4 != (Name *)0x0) goto LAB_00eefe60;
LAB_00eefddc:
    local_198 = 0;
    puVar9 = *(ulong **)(this + 0xf8);
    puVar10 = *(ulong **)(this + 0x100);
    lVar17 = *(long *)(this + 0x130);
    lVar16 = *(long *)(this + 0x138);
    if (puVar10 <= puVar9) goto LAB_00eefdf0;
LAB_00eefe90:
    *puVar9 = (ulong)local_17c;
    *(ulong **)(this + 0xf8) = puVar9 + 1;
  }
  else {
    if (*(int *)(this + 0x28) != 0x3a) {
      if (*(int *)(this + 0x28) != 0x107) goto LAB_00eefe50;
                    /* try { // try from 00eefd60 to 00eefdb3 has its CatchHandler @ 00ef00e4 */
      report((Location *)this,(char *)(this + 0x2c),
             "Function return type annotations are written after \':\' instead of \'->\'");
    }
    nextLexeme();
    uVar4 = *(undefined4 *)(this + 0xbc);
    parseReturnTypeAnnotation();
    if (*(int *)(this + 0x28) == 0x2c) {
      report((Location *)this,(char *)(this + 0x2c),
             "Expected a statement, got \',\'; did you forget to wrap the list of return types in parentheses?"
            );
      nextLexeme();
    }
    *(undefined4 *)(this + 0xbc) = uVar4;
    local_b0 = CONCAT44(uStack_cc,local_d0);
    local_98 = 1;
    pAStack_a8 = pAStack_c8;
    local_a0 = local_c0;
    if (param_4 == (Name *)0x0) goto LAB_00eefddc;
LAB_00eefe60:
    uStack_d8 = (undefined4)*(undefined8 *)(param_4 + 8);
    uStack_d4 = (undefined4)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
    local_e0 = (uint)*(undefined8 *)param_4;
    uStack_dc = (undefined4)((ulong)*(undefined8 *)param_4 >> 0x20);
    local_d0 = (undefined4)*(undefined8 *)(param_4 + 0x10);
    uStack_cc = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x10) >> 0x20);
    pAStack_c8 = (AstTypePack *)0x0;
                    /* try { // try from 00eefe70 to 00eefe7b has its CatchHandler @ 00ef00d8 */
    local_198 = pushLocal(this,(Binding *)&local_e0);
    puVar9 = *(ulong **)(this + 0xf8);
    puVar10 = *(ulong **)(this + 0x100);
    lVar17 = *(long *)(this + 0x130);
    lVar16 = *(long *)(this + 0x138);
    if (puVar9 < puVar10) goto LAB_00eefe90;
LAB_00eefdf0:
    __src = *(void **)(this + 0xf0);
    __n = (long)puVar9 - (long)__src;
    uVar15 = ((long)__n >> 3) + 1;
    if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ef00c0 to 00ef00cf has its CatchHandler @ 00ef00e0 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar11 = (long)puVar10 - (long)__src >> 2;
    if (uVar15 <= uVar11) {
      uVar15 = uVar11;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)puVar10 - (long)__src)) {
      uVar15 = 0x1fffffffffffffff;
    }
    if (uVar15 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00eefe44 to 00eefe47 has its CatchHandler @ 00ef00e0 */
      __dest = operator_new(uVar15 << 3);
    }
    puVar9 = (ulong *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar9 = (ulong)local_17c;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xf0) = __dest;
    *(ulong **)(this + 0xf8) = puVar9 + 1;
    *(void **)(this + 0x100) = (void *)((long)__dest + uVar15 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
                    /* try { // try from 00eefef4 to 00eeff13 has its CatchHandler @ 00ef00dc */
  prepareFunctionArguments
            ((Location *)this,(bool)((char)&stack0xffffffffffffffa0 + 'p'),
             (TempVector *)(ulong)(param_1 & 1));
  lVar1 = *(long *)(this + 0x130);
  lVar2 = *(long *)(this + 0x138);
                    /* try { // try from 00eeff18 to 00eeff4f has its CatchHandler @ 00ef00f4 */
  pAVar6 = (AstStatBlock *)parseBlockNoScope();
  restoreLocals(this,(uint)((ulong)(lVar2 - lVar1) >> 3));
  *(long *)(this + 0xf8) = *(long *)(this + 0xf8) + -8;
  restoreLocals(this,(uint)((ulong)(lVar16 - lVar17) >> 3));
  uVar13 = *(undefined8 *)(this + 0x34);
  local_178 = *(undefined4 *)param_2;
  uStack_174 = (uint)*(undefined8 *)(param_2 + 4);
  iStack_170 = (int)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  if (*(int *)(this + 0x28) == 0x124) {
    if (((*(uint *)(this + 0x2c) != uStack_174) && (*(int *)(this + 0x30) != iStack_170)) &&
       (*(uint *)(this + 0xe4) < uStack_174)) {
      *(undefined8 *)(this + 0xe0) = *(undefined8 *)param_2;
      *(int *)(this + 0xe8) = iStack_170;
    }
                    /* try { // try from 00eeffb0 to 00eefff7 has its CatchHandler @ 00ef00f0 */
    nextLexeme();
  }
  else {
    expectMatchEndAndConsumeFail(this,0x124,(MatchLexeme *)&local_178);
    Lexer::lookahead();
    if (local_e0 != 0x124) {
      bVar14 = false;
      goto LAB_00ef0004;
    }
    nextLexeme();
    nextLexeme();
  }
  bVar14 = true;
LAB_00ef0004:
  lVar17 = *(long *)(this + 0xf0);
  lVar16 = *(long *)(this + 0xf8);
  local_e0 = (uint)local_f0;
  uStack_dc = (undefined4)((ulong)local_f0 >> 0x20);
  uStack_d8 = (undefined4)uVar13;
  uStack_d4 = (undefined4)((ulong)uVar13 >> 0x20);
                    /* try { // try from 00ef0014 to 00ef006f has its CatchHandler @ 00ef00ec */
  auVar18._0_8_ = (AstExprFunction *)Allocator::allocate(*(Allocator **)(this + 0x80),200);
  AstExprFunction::AstExprFunction
            (auVar18._0_8_,(Location *)&local_e0,aAStack_110,aAStack_100,local_168,aAStack_160,
             local_17c != 0,(Location *)&local_150,pAVar6,lVar16 - lVar17 >> 3,param_3,
             (optional *)&local_b0,pAVar12,bVar14,(optional *)&local_90);
  lVar17 = *local_138 + local_130 * 0x20;
  if (lVar17 != local_138[1]) {
    local_138[1] = lVar17;
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    auVar18._8_8_ = local_198;
    return auVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


