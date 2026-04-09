// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprInterpString
// Entry Point: 00eda628
// Size: 1368 bytes
// Signature: undefined __cdecl compileExprInterpString(AstExprInterpString * param_1, uchar param_2, bool param_3)


/* Luau::Compiler::compileExprInterpString(Luau::AstExprInterpString*, unsigned char, bool) */

void Luau::Compiler::compileExprInterpString
               (AstExprInterpString *param_1,uchar param_2,bool param_3)

{
  undefined (**ppauVar1) [16];
  char **ppcVar2;
  uint uVar3;
  char *__s;
  char *__n;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  undefined auVar8 [16];
  ulong uVar9;
  uchar uVar10;
  uint uVar11;
  void *pvVar12;
  void *__dest;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  AstExpr *pAVar16;
  uchar uVar17;
  undefined (**ppauVar18) [16];
  void **ppvVar19;
  undefined (*pauVar20) [16];
  undefined (*pauVar21) [16];
  undefined (*pauVar22) [16];
  undefined (*pauVar23) [16];
  undefined8 *puVar24;
  undefined (*pauVar25) [16];
  long lVar26;
  BytecodeBuilder *this;
  char **ppcVar27;
  void *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  uVar15 = (ulong)param_2;
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if (*(long *)(uVar15 + 0x28) != 0) {
    ppauVar18 = *(undefined (***) [16])(uVar15 + 0x20);
    ppauVar1 = ppauVar18 + *(long *)(uVar15 + 0x28) * 2;
    do {
      pauVar20 = ppauVar18[1];
      if (pauVar20 != (undefined (*) [16])0x0) {
        pauVar21 = *ppauVar18;
        pauVar23 = pauVar21;
        if ((undefined (*) [16])0x7 < pauVar20) {
          if (pauVar20 < (undefined (*) [16])0x10) {
            pauVar22 = (undefined (*) [16])0x0;
          }
          else {
            pauVar22 = (undefined (*) [16])((ulong)pauVar20 & 0xfffffffffffffff0);
            pauVar23 = pauVar22;
            pauVar25 = pauVar21;
            do {
              pauVar23 = pauVar23 + -1;
              auVar8[8] = 0x25;
              auVar8._0_8_ = 0x2525252525252525;
              auVar8[9] = 0x25;
              auVar8[10] = 0x25;
              auVar8[11] = 0x25;
              auVar8[12] = 0x25;
              auVar8[13] = 0x25;
              auVar8[14] = 0x25;
              auVar8[15] = 0x25;
              NEON_cmeq(*pauVar25,auVar8,1);
              pauVar25 = pauVar25 + 1;
            } while (pauVar23 != (undefined (*) [16])0x0);
            if (pauVar20 == pauVar22) goto LAB_00eda68c;
            if (((uint)pauVar20 >> 3 & 1) == 0) {
              pauVar23 = (undefined (*) [16])(*pauVar22 + (long)*pauVar21);
              goto LAB_00eda84c;
            }
          }
          pauVar25 = (undefined (*) [16])((ulong)pauVar20 & 0xfffffffffffffff8);
          lVar26 = (long)pauVar22 - (long)pauVar25;
          puVar24 = (undefined8 *)(*pauVar22 + (long)*pauVar21);
          do {
            lVar26 = lVar26 + 8;
            NEON_cmeq(*puVar24,0x2525252525252525,1);
            puVar24 = puVar24 + 1;
          } while (lVar26 != 0);
          pauVar23 = (undefined (*) [16])(*pauVar25 + (long)*pauVar21);
          if (pauVar20 == pauVar25) goto LAB_00eda68c;
        }
LAB_00eda84c:
        do {
          pauVar23 = (undefined (*) [16])(*pauVar23 + 1);
        } while (pauVar23 != (undefined (*) [16])(*pauVar20 + (long)*pauVar21));
      }
LAB_00eda68c:
      ppauVar18 = ppauVar18 + 2;
    } while (ppauVar18 != ppauVar1);
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = (void *)0x0;
                    /* try { // try from 00eda870 to 00eda877 has its CatchHandler @ 00edab9c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)&local_80);
  lVar26 = *(long *)(uVar15 + 0x28);
  if (lVar26 != 0) {
    ppcVar27 = *(char ***)(uVar15 + 0x20);
    ppcVar2 = ppcVar27 + lVar26 * 2;
    do {
      __s = *ppcVar27;
      __n = ppcVar27[1];
      pvVar12 = memchr(__s,0x25,(size_t)__n);
      if (pvVar12 == (void *)0x0) {
                    /* try { // try from 00eda8f4 to 00eda917 has its CatchHandler @ 00edabc0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_80,(ulong)__s);
      }
      else {
        for (; __n != (char *)0x0; __n = __n + -1) {
          cVar6 = *__s;
                    /* try { // try from 00eda8d0 to 00eda8ef has its CatchHandler @ 00edac08 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((char)&local_80);
          if (cVar6 == '%') {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back((char)&local_80);
          }
          __s = __s + 1;
        }
      }
      lVar26 = lVar26 + -1;
      if (lVar26 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_80);
      }
      ppcVar27 = ppcVar27 + 2;
    } while (ppcVar27 != ppcVar2);
  }
  uVar9 = local_80;
  uVar13 = local_80 >> 1 & 0x7f;
  if ((local_80 & 1) != 0) {
    uVar13 = local_78;
  }
                    /* try { // try from 00eda930 to 00eda937 has its CatchHandler @ 00edab8c */
  __dest = operator_new__(uVar13);
  pvVar12 = (void *)((ulong)&local_80 | 1);
  if ((uVar9 & 1) != 0) {
    pvVar12 = local_70;
  }
  local_88 = __dest;
  memcpy(__dest,pvVar12,uVar13);
  ppvVar19 = *(void ***)(param_1 + 0x220);
  if (ppvVar19 < *(void ***)(param_1 + 0x228)) {
    local_88 = (void *)0x0;
    *ppvVar19 = __dest;
    *(void ***)(param_1 + 0x220) = ppvVar19 + 1;
  }
  else {
                    /* try { // try from 00eda980 to 00eda987 has its CatchHandler @ 00edab80 */
    std::__ndk1::
    vector<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>
    ::__emplace_back_slow_path<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>
              ((vector<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>
                *)(param_1 + 0x218),(unique_ptr *)&local_88);
  }
                    /* try { // try from 00eda98c to 00eda997 has its CatchHandler @ 00edabac */
  uVar13 = BytecodeBuilder::addConstantString(*(undefined8 *)param_1,__dest,uVar13);
  if ((int)(uint)uVar13 < 0) {
                    /* try { // try from 00edab4c to 00edab57 has its CatchHandler @ 00edabac */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(uVar15 + 0xc),
                        "Exceeded constant limit; simplify the code to compile");
  }
  iVar4 = *(int *)(param_1 + 0x178);
  uVar3 = *(int *)(uVar15 + 0x38) + 2U & 0xff;
  uVar11 = uVar3 + iVar4;
  if (0xff < uVar11) {
                    /* try { // try from 00edab5c to 00edab6b has its CatchHandler @ 00edabb4 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(uVar15 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",
                        (ulong)uVar3,0xff);
  }
  *(uint *)(param_1 + 0x178) = uVar11;
  if (uVar11 <= *(uint *)(param_1 + 0x17c)) {
    uVar11 = *(uint *)(param_1 + 0x17c);
  }
  *(uint *)(param_1 + 0x17c) = uVar11;
  uVar17 = (uchar)iVar4;
  if ((uVar13 & 0xffffffff) >> 0xf == 0) {
                    /* try { // try from 00eda9dc to 00edaa0b has its CatchHandler @ 00edabb4 */
    BytecodeBuilder::emitAD(*(BytecodeBuilder **)param_1,5,uVar17,(short)(uVar13 & 0xffffffff));
  }
  else {
    BytecodeBuilder::emitAD(*(BytecodeBuilder **)param_1,0x42,uVar17,0);
    BytecodeBuilder::emitAux(*(BytecodeBuilder **)param_1,(uint)uVar13);
  }
  if (*(long *)(uVar15 + 0x38) != 0) {
    uVar13 = 0;
    uVar5 = *(undefined4 *)(param_1 + 0x178);
    do {
      uVar11 = iVar4 + 2 + (int)uVar13;
      pAVar16 = *(AstExpr **)(*(long *)(uVar15 + 0x30) + uVar13 * 8);
      *(uint *)(param_1 + 0x178) = (uVar11 & 0xff) + 1;
                    /* try { // try from 00edaa38 to 00edaa43 has its CatchHandler @ 00edabd0 */
      compileExpr((Compiler *)param_1,pAVar16,(uchar)uVar11,true);
      *(undefined4 *)(param_1 + 0x178) = uVar5;
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(ulong *)(uVar15 + 0x38));
  }
                    /* try { // try from 00edaa58 to 00edaa67 has its CatchHandler @ 00edab88 */
  uVar14 = __strlen_chk("format",7);
                    /* try { // try from 00edaa78 to 00edaaf3 has its CatchHandler @ 00edabb8 */
  uVar11 = BytecodeBuilder::addConstantString(*(undefined8 *)param_1,"format",uVar14);
  if ((int)uVar11 < 0) {
                    /* try { // try from 00edab70 to 00edab7b has its CatchHandler @ 00edabb8 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(uVar15 + 0xc),
                        "Exceeded constant limit; simplify the code to compile");
  }
  this = *(BytecodeBuilder **)param_1;
  uVar10 = BytecodeBuilder::getStringHash((BytecodeBuilder *)"format",uVar14);
  BytecodeBuilder::emitABC(this,0x14,uVar17,uVar17,uVar10);
  BytecodeBuilder::emitAux(*(BytecodeBuilder **)param_1,uVar11);
  BytecodeBuilder::emitABC
            (*(BytecodeBuilder **)param_1,0x15,uVar17,*(char *)(uVar15 + 0x38) + '\x02','\x02');
  BytecodeBuilder::emitABC(*(BytecodeBuilder **)param_1,6,param_3,uVar17,'\0');
  pvVar12 = local_88;
  *(int *)(param_1 + 0x178) = iVar4;
  local_88 = (void *)0x0;
  if (pvVar12 != (void *)0x0) {
    operator_delete__(pvVar12);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


