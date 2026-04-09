// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryCompileUnrolledFor
// Entry Point: 00ede240
// Size: 992 bytes
// Signature: undefined __thiscall tryCompileUnrolledFor(Compiler * this, AstStatFor * param_1, int param_2, int param_3)


/* Luau::Compiler::tryCompileUnrolledFor(Luau::AstStatFor*, int, int) */

void __thiscall
Luau::Compiler::tryCompileUnrolledFor(Compiler *this,AstStatFor *param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  AstLocal *pAVar11;
  ulong uVar12;
  AstLocal *pAVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  AstLocal *pAVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool local_74 [4];
  AstLocal *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0xe0) != 0) {
    uVar12 = *(ulong *)(param_1 + 0x28);
    dVar20 = 0.0;
    uVar9 = *(ulong *)(this + 0xe8);
    if (uVar9 != uVar12) {
      uVar14 = 0;
      uVar15 = uVar12 >> 4 ^ uVar12 >> 9;
      do {
        uVar15 = uVar15 & *(long *)(this + 0xd8) - 1U;
        uVar16 = *(ulong *)(*(long *)(this + 0xd0) + uVar15 * 0x18);
        if (uVar16 == uVar12) {
          lVar10 = *(long *)(this + 0xd0) + uVar15 * 0x18;
          iVar5 = *(int *)(lVar10 + 8);
          dVar20 = *(double *)(lVar10 + 0x10);
          uVar12 = *(ulong *)(param_1 + 0x30);
          goto joined_r0x00ede364;
        }
        if (uVar16 == uVar9) break;
        uVar14 = uVar14 + 1;
        uVar15 = uVar14 + uVar15;
      } while (uVar14 <= *(long *)(this + 0xd8) - 1U);
    }
    iVar5 = 0;
    uVar12 = *(ulong *)(param_1 + 0x30);
joined_r0x00ede364:
    if (uVar9 == uVar12) {
      uVar12 = *(ulong *)(param_1 + 0x38);
      if (uVar12 != 0) {
        dVar19 = 0.0;
        iVar6 = 0;
        goto joined_r0x00ede37c;
      }
    }
    else {
      dVar19 = 0.0;
      uVar14 = 0;
      uVar15 = uVar12 >> 4 ^ uVar12 >> 9;
      do {
        uVar15 = uVar15 & *(long *)(this + 0xd8) - 1U;
        uVar16 = *(ulong *)(*(long *)(this + 0xd0) + uVar15 * 0x18);
        if (uVar16 == uVar12) {
          lVar10 = *(long *)(this + 0xd0) + uVar15 * 0x18;
          iVar6 = *(int *)(lVar10 + 8);
          dVar19 = *(double *)(lVar10 + 0x10);
          uVar12 = *(ulong *)(param_1 + 0x38);
          goto joined_r0x00ede3d8;
        }
        if (uVar16 == uVar9) break;
        uVar14 = uVar14 + 1;
        uVar15 = uVar14 + uVar15;
      } while (uVar14 <= *(long *)(this + 0xd8) - 1U);
      iVar6 = 0;
      uVar12 = *(ulong *)(param_1 + 0x38);
joined_r0x00ede3d8:
      if (uVar12 == 0) {
        bVar3 = true;
        dVar21 = 1.0;
joined_r0x00ede3e8:
        if ((((iVar5 == 3) && (iVar6 == 3)) && (bVar3)) &&
           (uVar4 = Compile::getTripCount(dVar20,dVar19,dVar21), -1 < (int)uVar4)) {
          if (param_2 < (int)uVar4) {
            BytecodeBuilder::addDebugRemark
                      (*(char **)this,"loop unroll failed: too many iterations (%d)",(ulong)uVar4);
            bVar3 = false;
            if (*(long *)(lVar2 + 0x28) == local_68) {
              return;
            }
          }
          else {
            if (*(long *)(this + 0xb8) == 0) {
              pAVar11 = *(AstLocal **)(param_1 + 0x20);
            }
            else {
              pAVar11 = *(AstLocal **)(param_1 + 0x20);
              pAVar13 = *(AstLocal **)(this + 0xc0);
              if (pAVar11 != pAVar13) {
                uVar9 = 0;
                uVar12 = (ulong)pAVar11 >> 4 ^ (ulong)pAVar11 >> 9;
                uVar14 = *(long *)(this + 0xb0) - 1;
                do {
                  uVar12 = uVar12 & uVar14;
                  pAVar17 = *(AstLocal **)(*(long *)(this + 0xa8) + uVar12 * 0x18);
                  if (pAVar17 == pAVar11) {
                    if (*(char *)(*(long *)(this + 0xa8) + uVar12 * 0x18 + 0x10) != '\0') {
                      pcVar7 = *(char **)this;
                      pcVar8 = "loop unroll failed: mutable loop variable";
                      goto LAB_00ede470;
                    }
                    break;
                  }
                  uVar9 = uVar9 + 1;
                  uVar12 = uVar9 + uVar12;
                } while (pAVar17 != pAVar13 && uVar9 < uVar14 ||
                         pAVar17 != pAVar13 && uVar9 == uVar14);
              }
            }
            local_70 = pAVar11;
            uVar9 = Compile::modelCost(*(AstNode **)(param_1 + 0x40),&local_70,1,
                                       (DenseHashMap *)(this + 0x148));
            local_74[0] = true;
            iVar5 = Compile::computeCost(uVar9,local_74,1);
            uVar1 = iVar5 * uVar4;
            iVar6 = Compile::computeCost(uVar9,(bool *)0x0,0);
            iVar5 = param_3;
            if (uVar1 != 0) {
              iVar5 = 0;
              if (uVar1 != 0) {
                iVar5 = (int)((uVar4 + uVar4 * iVar6) * 100) / (int)uVar1;
              }
              if (param_3 <= iVar5) {
                iVar5 = param_3;
              }
            }
            iVar6 = (iVar5 * param_2) / 100;
            if (iVar6 < (int)uVar1) {
              BytecodeBuilder::addDebugRemark
                        (*(char **)this,(double)iVar5 / 100.0,
                         "loop unroll failed: too expensive (iterations %d, cost %d, profit %.2fx)",
                         (ulong)uVar4,(ulong)uVar1);
            }
            else {
              BytecodeBuilder::addDebugRemark
                        (*(char **)this,(double)iVar5 / 100.0,
                         "loop unroll succeeded (iterations %d, cost %d, profit %.2fx)",(ulong)uVar4
                         ,(ulong)uVar1);
              compileUnrolledFor(this,param_1,uVar4,dVar20,dVar21);
            }
            bVar3 = (int)uVar1 <= iVar6;
            if (*(long *)(lVar2 + 0x28) == local_68) {
              return;
            }
          }
          goto LAB_00ede5fc;
        }
      }
      else {
joined_r0x00ede37c:
        if (uVar9 != uVar12) {
          uVar14 = 0;
          uVar15 = uVar12 >> 4 ^ uVar12 >> 9;
          uVar16 = *(long *)(this + 0xd8) - 1;
          do {
            uVar15 = uVar15 & uVar16;
            uVar18 = *(ulong *)(*(long *)(this + 0xd0) + uVar15 * 0x18);
            if (uVar18 == uVar12) {
              lVar10 = *(long *)(this + 0xd0) + uVar15 * 0x18;
              dVar21 = *(double *)(lVar10 + 0x10);
              bVar3 = *(int *)(lVar10 + 8) == 3;
              goto joined_r0x00ede3e8;
            }
            uVar14 = uVar14 + 1;
            uVar15 = uVar14 + uVar15;
          } while (uVar18 != uVar9 && uVar14 < uVar16 || uVar18 != uVar9 && uVar14 == uVar16);
        }
      }
    }
  }
  pcVar7 = *(char **)this;
  pcVar8 = "loop unroll failed: invalid iteration count";
LAB_00ede470:
  BytecodeBuilder::addDebugRemark(pcVar7,pcVar8);
  bVar3 = false;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00ede5fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


