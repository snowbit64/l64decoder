// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileStat
// Entry Point: 00ed1854
// Size: 1788 bytes
// Signature: undefined __thiscall compileStat(Compiler * this, AstStat * param_1)


/* Luau::Compiler::compileStat(Luau::AstStat*) */

void __thiscall Luau::Compiler::compileStat(Compiler *this,AstStat *param_1)

{
  ulong *puVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  uchar uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  void *__dest;
  AstExprCall *pAVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  void *__src;
  size_t __n;
  ulong uVar19;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (0 < *(int *)(this + 0xc)) {
    BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(param_1 + 0xc) + 1);
  }
  if (((0 < *(int *)(this + 0x10)) && (*(int *)(param_1 + 8) != AstRtti<Luau::AstStatBlock>::value))
     && (*(int *)(param_1 + 8) != AstRtti<Luau::AstStatTypeAlias>::value)) {
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x45,'\0','\0','\0');
  }
  iVar3 = *(int *)(param_1 + 8);
  if ((param_1 == (AstStat *)0x0) || (iVar3 != AstRtti<Luau::AstStatBlock>::value)) {
    if ((param_1 == (AstStat *)0x0) || (iVar3 != AstRtti<Luau::AstStatIf>::value)) {
      if ((param_1 == (AstStat *)0x0) || (iVar3 != AstRtti<Luau::AstStatWhile>::value)) {
        if ((param_1 == (AstStat *)0x0) || (iVar3 != AstRtti<Luau::AstStatRepeat>::value)) {
          if (iVar3 == AstRtti<Luau::AstStatBreak>::value) {
            uVar18 = *(ulong *)(*(long *)(this + 0x1d8) + -0x10);
            uVar19 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
            if ((uVar18 < uVar19) && (*(long *)(this + 0x68) != 0)) {
              bVar5 = false;
              bVar10 = 0xff;
LAB_00ed1b18:
              do {
                uVar14 = *(ulong *)(*(long *)(this + 0x188) + uVar18 * 8);
                if (uVar14 != *(ulong *)(this + 0x70)) {
                  uVar13 = 0;
                  uVar15 = uVar14 >> 4 ^ uVar14 >> 9;
                  do {
                    uVar15 = uVar15 & *(long *)(this + 0x60) - 1U;
                    puVar17 = (ulong *)(*(long *)(this + 0x58) + uVar15 * 0x10);
                    if (*puVar17 == uVar14) goto LAB_00ed1b60;
                    if (*puVar17 == *(ulong *)(this + 0x70)) break;
                    uVar13 = uVar13 + 1;
                    uVar15 = uVar13 + uVar15;
                  } while (uVar13 <= *(long *)(this + 0x60) - 1U);
                }
                puVar17 = (ulong *)0x0;
LAB_00ed1b60:
                puVar1 = (ulong *)0x0;
                if (puVar17 != (ulong *)0x0) {
                  puVar1 = puVar17 + 1;
                }
                if (*(byte *)((long)puVar1 + 2) != 0) {
                  uVar18 = uVar18 + 1;
                  bVar11 = *(byte *)puVar1;
                  if (bVar10 <= *(byte *)puVar1) {
                    bVar11 = bVar10;
                  }
                  bVar5 = true;
                  bVar10 = bVar11;
                  if (uVar18 == uVar19) goto LAB_00ed1c68;
                  goto LAB_00ed1b18;
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 != uVar19);
              bVar11 = bVar10;
              if (bVar5) {
LAB_00ed1c68:
                BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0xb,bVar11,'\0','\0');
              }
            }
            uVar8 = BytecodeBuilder::emitLabel();
            BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x17,'\0',0);
            puVar2 = *(undefined4 **)(this + 0x1c0);
            if (puVar2 < *(undefined4 **)(this + 0x1c8)) {
              *puVar2 = 0;
              *(undefined8 *)(puVar2 + 2) = uVar8;
              *(undefined4 **)(this + 0x1c0) = puVar2 + 4;
            }
            else {
              __src = *(void **)(this + 0x1b8);
              __n = (long)puVar2 - (long)__src;
              uVar18 = ((long)__n >> 4) + 1;
              if (uVar18 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar19 = (long)*(undefined4 **)(this + 0x1c8) - (long)__src;
              uVar14 = (long)uVar19 >> 3;
              if (uVar18 <= uVar14) {
                uVar18 = uVar14;
              }
              if (0x7fffffffffffffef < uVar19) {
                uVar18 = 0xfffffffffffffff;
              }
              if (uVar18 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              __dest = operator_new(uVar18 * 0x10);
              puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 4) * 0x10);
              *puVar2 = 0;
              *(undefined8 *)(puVar2 + 2) = uVar8;
              if (0 < (long)__n) {
                memcpy(__dest,__src,__n);
              }
              *(void **)(this + 0x1b8) = __dest;
              *(undefined4 **)(this + 0x1c0) = puVar2 + 4;
              *(void **)(this + 0x1c8) = (void *)((long)__dest + uVar18 * 0x10);
              if (__src != (void *)0x0) {
                operator_delete(__src);
              }
            }
          }
          else if ((param_1 == (AstStat *)0x0) || (iVar3 != AstRtti<Luau::AstStatContinue>::value))
          {
            if ((param_1 == (AstStat *)0x0) || (iVar3 != AstRtti<Luau::AstStatReturn>::value)) {
              if ((param_1 == (AstStat *)0x0) || (iVar3 != AstRtti<Luau::AstStatExpr>::value)) {
                if ((param_1 == (AstStat *)0x0) || (iVar3 != AstRtti<Luau::AstStatLocal>::value)) {
                  if ((param_1 == (AstStat *)0x0) || (iVar3 != AstRtti<Luau::AstStatFor>::value)) {
                    if ((param_1 == (AstStat *)0x0) || (iVar3 != AstRtti<Luau::AstStatForIn>::value)
                       ) {
                      if ((param_1 == (AstStat *)0x0) ||
                         (iVar3 != AstRtti<Luau::AstStatAssign>::value)) {
                        if ((param_1 == (AstStat *)0x0) ||
                           (iVar3 != AstRtti<Luau::AstStatCompoundAssign>::value)) {
                          if ((param_1 == (AstStat *)0x0) ||
                             (iVar3 != AstRtti<Luau::AstStatFunction>::value)) {
                            if ((param_1 != (AstStat *)0x0) &&
                               (iVar3 == AstRtti<Luau::AstStatLocalFunction>::value)) {
                              uVar6 = allocReg(this,(AstNode *)param_1,1);
                              pushLocal(this,*(AstLocal **)(param_1 + 0x20),uVar6);
                              compileExprFunction(this,*(AstExprFunction **)(param_1 + 0x28),uVar6);
                              lVar12 = DenseHashMap<Luau::AstLocal*,Luau::Compiler::Local,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
                                       ::operator[]((
                                                  DenseHashMap<Luau::AstLocal*,Luau::Compiler::Local,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
                                                  *)(this + 0x58),(AstLocal **)(param_1 + 0x20));
                              uVar7 = BytecodeBuilder::getDebugPC();
                              *(undefined4 *)(lVar12 + 4) = uVar7;
                            }
                          }
                          else {
                            compileStatFunction(this,(AstStatFunction *)param_1);
                          }
                        }
                        else {
                          compileStatCompoundAssign(this,(AstStatCompoundAssign *)param_1);
                        }
                      }
                      else {
                        compileStatAssign(this,(AstStatAssign *)param_1);
                      }
                    }
                    else {
                      compileStatForIn(this,(AstStatForIn *)param_1);
                    }
                  }
                  else {
                    compileStatFor(this,(AstStatFor *)param_1);
                  }
                }
                else {
                  compileStatLocal(this,(AstStatLocal *)param_1);
                }
              }
              else {
                pAVar9 = *(AstExprCall **)(param_1 + 0x20);
                if ((*(int *)(pAVar9 + 8) == AstRtti<Luau::AstExprCall>::value) &&
                   (pAVar9 != (AstExprCall *)0x0)) {
                  compileExprCall(this,pAVar9,(uchar)*(undefined4 *)(this + 0x178),'\0',false,false)
                  ;
                }
                else {
                  local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(this + 0x178));
                  local_68 = this;
                    /* try { // try from 00ed1dec to 00ed1df7 has its CatchHandler @ 00ed1f50 */
                  compileExprAuto((AstExpr *)this,(RegScope *)pAVar9);
                  *(undefined4 *)(local_68 + 0x178) = (undefined4)local_60;
                }
              }
            }
            else if ((*(int *)(this + 8) < 2) ||
                    (*(long *)(this + 0x1e8) == *(long *)(this + 0x1f0))) {
              compileStatReturn(this,(AstStatReturn *)param_1);
            }
            else {
              compileInlineReturn(this,(AstStatReturn *)param_1,false);
            }
          }
          else {
            lVar12 = *(long *)(this + 0x1d8);
            if (*(AstExpr **)(lVar12 + -8) != (AstExpr *)0x0) {
              validateContinueUntil(this,param_1,*(AstExpr **)(lVar12 + -8));
              lVar12 = *(long *)(this + 0x1d8);
            }
            closeLocals(this,*(ulong *)(lVar12 + -0x10));
            uVar8 = BytecodeBuilder::emitLabel();
            BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x17,'\0',0);
            local_68 = (Compiler *)CONCAT44(local_68._4_4_,1);
            local_60 = uVar8;
            FUN_00ed35ec(this + 0x1b8,&local_68);
          }
        }
        else {
          compileStatRepeat(this,(AstStatRepeat *)param_1);
        }
      }
      else {
        compileStatWhile(this,(AstStatWhile *)param_1);
      }
    }
    else {
      compileStatIf(this,(AstStatIf *)param_1);
    }
  }
  else {
    uVar7 = *(undefined4 *)(this + 0x178);
    uVar18 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar19 = 0;
      do {
                    /* try { // try from 00ed1928 to 00ed192f has its CatchHandler @ 00ed1f68 */
        compileStat(this,*(AstStat **)(*(long *)(param_1 + 0x20) + uVar19 * 8));
        uVar19 = uVar19 + 1;
      } while (uVar19 < *(ulong *)(param_1 + 0x28));
      uVar19 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
      if ((uVar18 < uVar19) && (*(long *)(this + 0x68) != 0)) {
        bVar5 = false;
        uVar14 = uVar18;
        bVar10 = 0xff;
LAB_00ed1974:
        do {
          uVar13 = *(ulong *)(*(long *)(this + 0x188) + uVar14 * 8);
          if (uVar13 != *(ulong *)(this + 0x70)) {
            uVar15 = 0;
            uVar16 = uVar13 >> 4 ^ uVar13 >> 9;
            do {
              uVar16 = uVar16 & *(long *)(this + 0x60) - 1U;
              puVar17 = (ulong *)(*(long *)(this + 0x58) + uVar16 * 0x10);
              if (*puVar17 == uVar13) goto LAB_00ed19bc;
              if (*puVar17 == *(ulong *)(this + 0x70)) break;
              uVar15 = uVar15 + 1;
              uVar16 = uVar15 + uVar16;
            } while (uVar15 <= *(long *)(this + 0x60) - 1U);
          }
          puVar17 = (ulong *)0x0;
LAB_00ed19bc:
          puVar1 = (ulong *)0x0;
          if (puVar17 != (ulong *)0x0) {
            puVar1 = puVar17 + 1;
          }
          if (*(byte *)((long)puVar1 + 2) != 0) {
            uVar14 = uVar14 + 1;
            bVar11 = *(byte *)puVar1;
            if (bVar10 <= *(byte *)puVar1) {
              bVar11 = bVar10;
            }
            bVar5 = true;
            bVar10 = bVar11;
            if (uVar14 == uVar19) goto LAB_00ed1a7c;
            goto LAB_00ed1974;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar19);
        bVar11 = bVar10;
        if (bVar5) {
LAB_00ed1a7c:
                    /* try { // try from 00ed1a80 to 00ed1a9b has its CatchHandler @ 00ed1f60 */
          BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0xb,bVar11,'\0','\0');
        }
      }
    }
    popLocals(this,uVar18);
    *(undefined4 *)(this + 0x178) = uVar7;
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


