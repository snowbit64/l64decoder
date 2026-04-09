// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprFunction
// Entry Point: 00ed6870
// Size: 1624 bytes
// Signature: undefined __thiscall compileExprFunction(Compiler * this, AstExprFunction * param_1, uchar param_2)


/* Luau::Compiler::compileExprFunction(Luau::AstExprFunction*, unsigned char) */

void __thiscall
Luau::Compiler::compileExprFunction(Compiler *this,AstExprFunction *param_1,uchar param_2)

{
  void **ppvVar1;
  long *plVar2;
  AstExprFunction **ppAVar3;
  AstLocal **ppAVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined uVar7;
  byte bVar8;
  short sVar9;
  uint uVar10;
  void *pvVar11;
  AstLocal *pAVar12;
  int *piVar13;
  AstLocal *pAVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  AstExprFunction **ppAVar20;
  AstLocal *pAVar21;
  AstLocal **ppAVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  void *pvVar25;
  long lVar26;
  size_t sVar27;
  
  if ((*(long *)(this + 0x40) != 0) && (*(AstExprFunction **)(this + 0x48) != param_1)) {
    uVar16 = 0;
    uVar19 = (ulong)param_1 >> 4 ^ (ulong)param_1 >> 9;
    do {
      uVar19 = uVar19 & *(long *)(this + 0x38) - 1U;
      ppAVar20 = (AstExprFunction **)(*(long *)(this + 0x30) + uVar19 * 0x38);
      if (*ppAVar20 == param_1) goto LAB_00ed68f8;
      if (*ppAVar20 == *(AstExprFunction **)(this + 0x48)) break;
      uVar16 = uVar16 + 1;
      uVar19 = uVar16 + uVar19;
    } while (uVar16 <= *(long *)(this + 0x38) - 1U);
  }
  ppAVar20 = (AstExprFunction **)0x0;
LAB_00ed68f8:
  ppAVar3 = (AstExprFunction **)0x0;
  if (ppAVar20 != (AstExprFunction **)0x0) {
    ppAVar3 = ppAVar20 + 1;
  }
  uVar5 = *(undefined4 *)(this + 0x178);
                    /* try { // try from 00ed6914 to 00ed694f has its CatchHandler @ 00ed6ee8 */
  sVar9 = BytecodeBuilder::addChildFunction(*(BytecodeBuilder **)this,*(uint *)ppAVar3);
  if (sVar9 < 0) {
                    /* try { // try from 00ed6e88 to 00ed6e93 has its CatchHandler @ 00ed6ee8 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Exceeded closure limit; simplify the code to compile");
  }
  pvVar25 = *(void **)(this + 0x200);
  uVar16 = (long)ppAVar3[2] - (long)ppAVar3[1];
  *(void **)(this + 0x208) = pvVar25;
  if ((ulong)(*(long *)(this + 0x210) - (long)pvVar25 >> 3) < (ulong)((long)uVar16 >> 3)) {
    if ((long)uVar16 < 0) {
                    /* try { // try from 00ed6eb0 to 00ed6ebb has its CatchHandler @ 00ed6ee8 */
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar11 = operator_new(uVar16);
    *(void **)(this + 0x200) = pvVar11;
    *(void **)(this + 0x208) = pvVar11;
    *(void **)(this + 0x210) = (void *)((long)pvVar11 + ((long)uVar16 >> 3) * 8);
    if (pvVar25 != (void *)0x0) {
      operator_delete(pvVar25);
    }
  }
  ppAVar22 = (AstLocal **)ppAVar3[1];
  ppAVar4 = (AstLocal **)ppAVar3[2];
  if (ppAVar22 != ppAVar4) {
    ppvVar1 = (void **)(this + 0x200);
LAB_00ed69a4:
    pAVar12 = *ppAVar22;
    if ((*(long *)(this + 0x68) != 0) && (pAVar14 = *(AstLocal **)(this + 0x70), pAVar14 != pAVar12)
       ) {
      uVar16 = 0;
      uVar17 = (ulong)pAVar12 >> 4 ^ (ulong)pAVar12 >> 9;
      uVar18 = *(long *)(this + 0x60) - 1;
      uVar19 = uVar17;
      do {
        uVar19 = uVar19 & uVar18;
        pAVar21 = *(AstLocal **)(*(long *)(this + 0x58) + uVar19 * 0x10);
        if (pAVar21 == pAVar12) {
          lVar26 = *(long *)(this + 0x58) + uVar19 * 0x10;
          if (*(char *)(lVar26 + 9) != '\0') {
            if ((*(long *)(this + 0xb8) == 0) || (pAVar12 == *(AstLocal **)(this + 0xc0)))
            goto LAB_00ed6b84;
            uVar16 = 0;
            goto LAB_00ed6b58;
          }
          break;
        }
        uVar16 = uVar16 + 1;
        uVar19 = uVar16 + uVar19;
      } while (pAVar21 != pAVar14 && uVar16 < uVar18 || pAVar21 != pAVar14 && uVar16 == uVar18);
    }
    if ((*(long *)(this + 0x108) != 0) &&
       (pAVar14 = *(AstLocal **)(this + 0x110), pAVar12 != pAVar14)) {
      uVar16 = 0;
      uVar19 = (ulong)pAVar12 >> 4 ^ (ulong)pAVar12 >> 9;
      uVar17 = *(long *)(this + 0x100) - 1;
      do {
        uVar19 = uVar19 & uVar17;
        pAVar21 = *(AstLocal **)(*(long *)(this + 0xf8) + uVar19 * 0x18);
        if (pAVar21 == pAVar12) {
          piVar13 = (int *)(*(long *)(this + 0xf8) + uVar19 * 0x18 + 8);
          if (*piVar13 != 0) {
            uVar6 = *(uint *)(this + 0x178);
            uVar10 = uVar6 + 1;
            if (0xff < uVar10) {
                    /* try { // try from 00ed6e6c to 00ed6e7f has its CatchHandler @ 00ed6edc */
                    /* WARNING: Subroutine does not return */
              CompileError::raise((Location *)(param_1 + 0xc),
                                  "Out of registers when trying to allocate %d registers: exceeded limit %d"
                                  ,1,0xff);
            }
            *(uint *)(this + 0x178) = uVar10;
            if (uVar10 <= *(uint *)(this + 0x17c)) {
              uVar10 = *(uint *)(this + 0x17c);
            }
            *(uint *)(this + 0x17c) = uVar10;
                    /* try { // try from 00ed6c68 to 00ed6c77 has its CatchHandler @ 00ed6ee0 */
            compileExprConstant(this,(AstExpr *)param_1,(Constant *)piVar13,(uchar)uVar6);
            puVar15 = *(ulong **)(this + 0x208);
            if (puVar15 < *(ulong **)(this + 0x210)) {
              *puVar15 = (ulong)(uVar6 & 0xff) << 0x20;
              goto LAB_00ed6a78;
            }
            pvVar25 = *ppvVar1;
            sVar27 = (long)puVar15 - (long)pvVar25;
            lVar26 = (long)sVar27 >> 3;
            uVar16 = lVar26 + 1;
            if (uVar16 >> 0x3d != 0) {
                    /* try { // try from 00ed6e9c to 00ed6ea3 has its CatchHandler @ 00ed6ed4 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar19 = (long)*(ulong **)(this + 0x210) - (long)pvVar25;
            uVar17 = (long)uVar19 >> 2;
            if (uVar16 <= uVar17) {
              uVar16 = uVar17;
            }
            if (0x7ffffffffffffff7 < uVar19) {
              uVar16 = 0x1fffffffffffffff;
            }
            if (uVar16 == 0) {
              pvVar11 = (void *)0x0;
              plVar2 = (long *)(lVar26 * 8);
              *plVar2 = (ulong)(uVar6 & 0xff) << 0x20;
            }
            else {
              if (uVar16 >> 0x3d != 0) {
                    /* try { // try from 00ed6ebc to 00ed6ec7 has its CatchHandler @ 00ed6ed4 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00ed6ce4 to 00ed6ce7 has its CatchHandler @ 00ed6ecc */
              pvVar11 = operator_new(uVar16 << 3);
              plVar2 = (long *)((long)pvVar11 + lVar26 * 8);
              *plVar2 = (ulong)(uVar6 & 0xff) << 0x20;
            }
            if (0 < (long)sVar27) {
              memcpy(pvVar11,pvVar25,sVar27);
            }
            *(long **)(this + 0x208) = plVar2 + 1;
            *(void **)(this + 0x200) = pvVar11;
            *(void **)(this + 0x210) = (void *)((long)pvVar11 + uVar16 * 8);
            goto joined_r0x00ed6d28;
          }
          break;
        }
        uVar16 = uVar16 + 1;
        uVar19 = uVar16 + uVar19;
      } while (pAVar21 != pAVar14 && uVar16 < uVar17 || pAVar21 != pAVar14 && uVar16 == uVar17);
    }
                    /* try { // try from 00ed6a4c to 00ed6a53 has its CatchHandler @ 00ed6ef4 */
    uVar10 = getUpval(this,pAVar12);
    puVar15 = *(ulong **)(this + 0x208);
    if (*(ulong **)(this + 0x210) <= puVar15) {
      pvVar25 = *ppvVar1;
      sVar27 = (long)puVar15 - (long)pvVar25;
      uVar16 = ((long)sVar27 >> 3) + 1;
      if (uVar16 >> 0x3d != 0) {
                    /* try { // try from 00ed6e50 to 00ed6e63 has its CatchHandler @ 00ed6ef0 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar19 = (long)*(ulong **)(this + 0x210) - (long)pvVar25;
      uVar17 = (long)uVar19 >> 2;
      if (uVar16 <= uVar17) {
        uVar16 = uVar17;
      }
      if (0x7ffffffffffffff7 < uVar19) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 == 0) {
        pvVar11 = (void *)0x0;
      }
      else {
        if (uVar16 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00ed6acc to 00ed6acf has its CatchHandler @ 00ed6eec */
        pvVar11 = operator_new(uVar16 << 3);
      }
      puVar15 = (ulong *)((long)pvVar11 + ((long)sVar27 >> 3) * 8);
      *puVar15 = (ulong)(uVar10 & 0xff) << 0x20 | 2;
      if (0 < (long)sVar27) {
        memcpy(pvVar11,pvVar25,sVar27);
      }
      *(void **)(this + 0x200) = pvVar11;
      *(ulong **)(this + 0x208) = puVar15 + 1;
      *(void **)(this + 0x210) = (void *)((long)pvVar11 + uVar16 * 8);
joined_r0x00ed6d28:
      if (pvVar25 == (void *)0x0) goto LAB_00ed6998;
      goto LAB_00ed6b24;
    }
    *puVar15 = (ulong)(uVar10 & 0xff) << 0x20 | 2;
LAB_00ed6a78:
    *(ulong **)(this + 0x208) = puVar15 + 1;
    goto LAB_00ed6998;
  }
LAB_00ed6d80:
                    /* try { // try from 00ed6d90 to 00ed6d9b has its CatchHandler @ 00ed6ee4 */
  if ((0 < *(int *)(this + 8)) &&
     (bVar8 = shouldShareClosure(this,param_1), (bVar8 & this[0x181] == (Compiler)0x0) == 1)) {
                    /* try { // try from 00ed6dbc to 00ed6dbf has its CatchHandler @ 00ed6ec8 */
    uVar10 = BytecodeBuilder::addConstantClosure(*(BytecodeBuilder **)this,*(uint *)ppAVar3);
    if (uVar10 < 0x8000) {
                    /* try { // try from 00ed6dd0 to 00ed6df3 has its CatchHandler @ 00ed6ee4 */
      BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x40,param_2,(short)uVar10);
      goto LAB_00ed6df4;
    }
  }
  BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x13,param_2,sVar9);
LAB_00ed6df4:
  puVar24 = *(undefined4 **)(this + 0x208);
  for (puVar23 = *(undefined4 **)(this + 0x200); puVar23 != puVar24; puVar23 = puVar23 + 2) {
                    /* try { // try from 00ed6e10 to 00ed6e1b has its CatchHandler @ 00ed6ef8 */
    BytecodeBuilder::emitABC
              (*(BytecodeBuilder **)this,0x46,(uchar)*puVar23,*(uchar *)(puVar23 + 1),'\0');
  }
  *(undefined4 *)(this + 0x178) = uVar5;
  return;
  while( true ) {
    uVar16 = uVar16 + 1;
    uVar17 = uVar16 + uVar17;
    if (*(long *)(this + 0xb0) - 1U < uVar16) break;
LAB_00ed6b58:
    uVar17 = uVar17 & *(long *)(this + 0xb0) - 1U;
    pAVar14 = *(AstLocal **)(*(long *)(this + 0xa8) + uVar17 * 0x18);
    if (pAVar14 == pAVar12) {
      uVar10 = *(byte *)(*(long *)(this + 0xa8) + uVar17 * 0x18 + 0x10) ^ 1;
      goto LAB_00ed6b88;
    }
    if (pAVar14 == *(AstLocal **)(this + 0xc0)) break;
  }
LAB_00ed6b84:
  uVar10 = 1;
LAB_00ed6b88:
  puVar15 = *(ulong **)(this + 0x208);
  uVar10 = ~uVar10;
  uVar7 = *(undefined *)(lVar26 + 8);
  if (puVar15 < *(ulong **)(this + 0x210)) {
    *puVar15 = (ulong)(CONCAT14(uVar7,uVar10) & 0xff00000001);
    *(ulong **)(this + 0x208) = puVar15 + 1;
  }
  else {
    pvVar25 = *ppvVar1;
    sVar27 = (long)puVar15 - (long)pvVar25;
    lVar26 = (long)sVar27 >> 3;
    uVar16 = lVar26 + 1;
    if (uVar16 >> 0x3d != 0) {
                    /* try { // try from 00ed6e94 to 00ed6e9b has its CatchHandler @ 00ed6ed8 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar19 = (long)*(ulong **)(this + 0x210) - (long)pvVar25;
    uVar17 = (long)uVar19 >> 2;
    if (uVar16 <= uVar17) {
      uVar16 = uVar17;
    }
    if (0x7ffffffffffffff7 < uVar19) {
      uVar16 = 0x1fffffffffffffff;
    }
    if (uVar16 == 0) {
      pvVar11 = (void *)0x0;
      puVar15 = (ulong *)(lVar26 * 8);
      *puVar15 = (ulong)(CONCAT14(uVar7,uVar10) & 0xff00000001);
    }
    else {
      if (uVar16 >> 0x3d != 0) {
                    /* try { // try from 00ed6ea4 to 00ed6eaf has its CatchHandler @ 00ed6ed8 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00ed6bf0 to 00ed6bf3 has its CatchHandler @ 00ed6ed0 */
      pvVar11 = operator_new(uVar16 << 3);
      puVar15 = (ulong *)((long)pvVar11 + lVar26 * 8);
      *puVar15 = (ulong)(CONCAT14(uVar7,uVar10) & 0xff00000001);
    }
    if (0 < (long)sVar27) {
      memcpy(pvVar11,pvVar25,sVar27);
    }
    *(void **)(this + 0x200) = pvVar11;
    *(ulong **)(this + 0x208) = puVar15 + 1;
    *(void **)(this + 0x210) = (void *)((long)pvVar11 + uVar16 * 8);
    if (pvVar25 != (void *)0x0) {
LAB_00ed6b24:
      operator_delete(pvVar25);
    }
  }
LAB_00ed6998:
  ppAVar22 = ppAVar22 + 1;
  if (ppAVar22 == ppAVar4) goto LAB_00ed6d80;
  goto LAB_00ed69a4;
}


