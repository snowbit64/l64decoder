// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileStatFor
// Entry Point: 00ed4ed0
// Size: 1536 bytes
// Signature: undefined __thiscall compileStatFor(Compiler * this, AstStatFor * param_1)


/* Luau::Compiler::compileStatFor(Luau::AstStatFor*) */

void __thiscall Luau::Compiler::compileStatFor(Compiler *this,AstStatFor *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  void *__dest;
  uchar uVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  void *__src;
  size_t __n;
  uint uVar22;
  
  uVar7 = *(undefined4 *)(this + 0x178);
  if ((1 < *(int *)(this + 8)) && (*(long *)(this + 0xe0) != 0)) {
    uVar15 = *(ulong *)(param_1 + 0x30);
    uVar13 = *(ulong *)(this + 0xe8);
    if (uVar13 != uVar15) {
      lVar5 = *(long *)(this + 0xd0);
      uVar16 = 0;
      uVar17 = uVar15 >> 4 ^ uVar15 >> 9;
      uVar14 = *(long *)(this + 0xd8) - 1;
      do {
        uVar17 = uVar17 & uVar14;
        uVar18 = *(ulong *)(lVar5 + uVar17 * 0x18);
        if (uVar18 == uVar15) {
          if ((*(int *)(lVar5 + uVar17 * 0x18 + 8) != 0) &&
             (uVar15 = *(ulong *)(param_1 + 0x28), uVar13 != uVar15)) {
            uVar16 = 0;
            uVar17 = uVar15 >> 4 ^ uVar15 >> 9;
            goto LAB_00ed53ac;
          }
          break;
        }
        uVar16 = uVar16 + 1;
        uVar17 = uVar16 + uVar17;
      } while (uVar18 != uVar13 && uVar16 < uVar14 || uVar18 != uVar13 && uVar16 == uVar14);
    }
  }
  goto LAB_00ed4f64;
  while( true ) {
    uVar16 = uVar16 + 1;
    uVar17 = uVar16 + uVar17;
    if ((uVar18 == uVar13 || uVar14 <= uVar16) && (uVar18 == uVar13 || uVar16 != uVar14)) break;
LAB_00ed53ac:
    uVar17 = uVar17 & uVar14;
    uVar18 = *(ulong *)(lVar5 + uVar17 * 0x18);
    if (uVar18 == uVar15) {
      if (*(int *)(lVar5 + uVar17 * 0x18 + 8) != 0) {
        uVar15 = *(ulong *)(param_1 + 0x38);
        if (uVar15 == 0) goto LAB_00ed5444;
        if (uVar13 != uVar15) {
          uVar16 = 0;
          uVar17 = uVar15 >> 4 ^ uVar15 >> 9;
          goto LAB_00ed5408;
        }
      }
      break;
    }
  }
  goto LAB_00ed4f64;
LAB_00ed5444:
                    /* try { // try from 00ed545c to 00ed5467 has its CatchHandler @ 00ed54d0 */
  uVar13 = tryCompileUnrolledFor
                     (this,param_1,FInt::LuauCompileLoopUnrollThreshold,
                      FInt::LuauCompileLoopUnrollThresholdMaxBoost);
  if ((uVar13 & 1) != 0) goto LAB_00ed535c;
  goto LAB_00ed4f64;
  while( true ) {
    uVar16 = uVar16 + 1;
    uVar17 = uVar16 + uVar17;
    if ((uVar18 == uVar13 || uVar14 <= uVar16) && (uVar18 == uVar13 || uVar16 != uVar14)) break;
LAB_00ed5408:
    uVar17 = uVar17 & uVar14;
    uVar18 = *(ulong *)(lVar5 + uVar17 * 0x18);
    if (uVar18 == uVar15) {
      if (*(int *)(lVar5 + uVar17 * 0x18 + 8) != 0) goto LAB_00ed5444;
      break;
    }
  }
LAB_00ed4f64:
  puVar21 = *(ulong **)(this + 0x1d8);
  lVar5 = *(long *)(this + 0x1b8);
  lVar6 = *(long *)(this + 0x1c0);
  uVar13 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
  if (puVar21 < *(ulong **)(this + 0x1e0)) {
    *puVar21 = uVar13;
    puVar21[1] = 0;
    *(ulong **)(this + 0x1d8) = puVar21 + 2;
  }
  else {
    __src = *(void **)(this + 0x1d0);
    __n = (long)puVar21 - (long)__src;
    uVar15 = ((long)__n >> 4) + 1;
    if (uVar15 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ed54a8 to 00ed54b7 has its CatchHandler @ 00ed54e0 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar16 = (long)*(ulong **)(this + 0x1e0) - (long)__src;
    uVar17 = (long)uVar16 >> 3;
    if (uVar15 <= uVar17) {
      uVar15 = uVar17;
    }
    if (0x7fffffffffffffef < uVar16) {
      uVar15 = 0xfffffffffffffff;
    }
    if (uVar15 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* try { // try from 00ed4fd8 to 00ed4fdb has its CatchHandler @ 00ed54e0 */
    __dest = operator_new(uVar15 << 4);
    puVar21 = (ulong *)((long)__dest + ((long)__n >> 4) * 0x10);
    *puVar21 = uVar13;
    puVar21[1] = 0;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x1d0) = __dest;
    *(ulong **)(this + 0x1d8) = puVar21 + 2;
    *(void **)(this + 0x1e0) = (void *)((long)__dest + uVar15 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  uVar8 = *(uint *)(this + 0x178);
  uVar1 = uVar8 + 3;
  if (0xff < uVar1) {
                    /* try { // try from 00ed5474 to 00ed5487 has its CatchHandler @ 00ed54dc */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",3
                        ,0xff);
  }
  uVar2 = (uVar8 & 0xff) + 2;
  *(uint *)(this + 0x178) = uVar1;
  uVar3 = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar3 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar3;
  uVar22 = uVar2;
  if (*(long *)(this + 0xb8) != 0) {
    uVar15 = *(ulong *)(param_1 + 0x20);
    if (uVar15 != *(ulong *)(this + 0xc0)) {
      uVar16 = 0;
      uVar17 = uVar15 >> 4 ^ uVar15 >> 9;
      do {
        uVar17 = uVar17 & *(long *)(this + 0xb0) - 1U;
        uVar14 = *(ulong *)(*(long *)(this + 0xa8) + uVar17 * 0x18);
        if (uVar14 == uVar15) {
          if (*(char *)(*(long *)(this + 0xa8) + uVar17 * 0x18 + 0x10) != '\0') {
            uVar22 = uVar8 + 4;
            if (0xff < uVar22) {
                    /* try { // try from 00ed54bc to 00ed54cf has its CatchHandler @ 00ed54d4 */
                    /* WARNING: Subroutine does not return */
              CompileError::raise((Location *)(param_1 + 0xc),
                                  "Out of registers when trying to allocate %d registers: exceeded limit %d"
                                  ,1,0xff);
            }
            *(uint *)(this + 0x178) = uVar22;
            if (uVar22 <= uVar3) {
              uVar22 = uVar3;
            }
            *(uint *)(this + 0x17c) = uVar22;
            uVar22 = uVar1;
          }
          break;
        }
        if (uVar14 == *(ulong *)(this + 0xc0)) break;
        uVar16 = uVar16 + 1;
        uVar17 = uVar16 + uVar17;
      } while (uVar16 <= *(long *)(this + 0xb0) - 1U);
    }
  }
                    /* try { // try from 00ed50e0 to 00ed5137 has its CatchHandler @ 00ed54ec */
  compileExpr(this,*(AstExpr **)(param_1 + 0x28),(uchar)uVar2,true);
  uVar10 = (uchar)uVar8;
  compileExpr(this,*(AstExpr **)(param_1 + 0x30),uVar10,true);
  if (*(AstExpr **)(param_1 + 0x38) == (AstExpr *)0x0) {
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,4,uVar10 + '\x01','\x01','\0');
  }
  else {
    compileExpr(this,*(AstExpr **)(param_1 + 0x38),uVar10 + '\x01',true);
  }
                    /* try { // try from 00ed513c to 00ed5157 has its CatchHandler @ 00ed54e8 */
  uVar15 = BytecodeBuilder::emitLabel();
  BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x38,uVar10,0);
                    /* try { // try from 00ed515c to 00ed529f has its CatchHandler @ 00ed54f0 */
  uVar16 = BytecodeBuilder::emitLabel();
  if (uVar2 != (uVar22 & 0xff)) {
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,6,(uchar)uVar22,(uchar)uVar2,'\0');
  }
  pushLocal(this,*(AstLocal **)(param_1 + 0x20),(uchar)uVar22);
  compileStat(this,*(AstStat **)(param_1 + 0x40));
  uVar17 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
  if ((uVar13 < uVar17) && (*(long *)(this + 0x68) != 0)) {
    bVar9 = false;
    uVar14 = uVar13;
    bVar11 = 0xff;
LAB_00ed51d4:
    do {
      uVar18 = *(ulong *)(*(long *)(this + 0x188) + uVar14 * 8);
      if (uVar18 != *(ulong *)(this + 0x70)) {
        uVar19 = 0;
        uVar20 = uVar18 >> 4 ^ uVar18 >> 9;
        do {
          uVar20 = uVar20 & *(long *)(this + 0x60) - 1U;
          puVar21 = (ulong *)(*(long *)(this + 0x58) + uVar20 * 0x10);
          if (*puVar21 == uVar18) goto LAB_00ed521c;
          if (*puVar21 == *(ulong *)(this + 0x70)) break;
          uVar19 = uVar19 + 1;
          uVar20 = uVar19 + uVar20;
        } while (uVar19 <= *(long *)(this + 0x60) - 1U);
      }
      puVar21 = (ulong *)0x0;
LAB_00ed521c:
      puVar4 = (ulong *)0x0;
      if (puVar21 != (ulong *)0x0) {
        puVar4 = puVar21 + 1;
      }
      if (*(byte *)((long)puVar4 + 2) == 0) {
        uVar14 = uVar14 + 1;
        if (uVar14 == uVar17) {
          bVar12 = bVar11;
          if (!bVar9) goto LAB_00ed5278;
          break;
        }
        goto LAB_00ed51d4;
      }
      uVar14 = uVar14 + 1;
      bVar12 = *(byte *)puVar4;
      if (bVar11 <= *(byte *)puVar4) {
        bVar12 = bVar11;
      }
      bVar9 = true;
      bVar11 = bVar12;
    } while (uVar14 != uVar17);
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0xb,bVar12,'\0','\0');
  }
LAB_00ed5278:
  popLocals(this,uVar13);
  if (0 < *(int *)(this + 0xc)) {
    BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(param_1 + 0xc) + 1);
  }
                    /* try { // try from 00ed52a4 to 00ed52a7 has its CatchHandler @ 00ed54d8 */
  uVar13 = BytecodeBuilder::emitLabel();
                    /* try { // try from 00ed52b0 to 00ed52cb has its CatchHandler @ 00ed54e4 */
  uVar17 = BytecodeBuilder::emitLabel();
  BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x39,uVar10,0);
                    /* try { // try from 00ed52d0 to 00ed533b has its CatchHandler @ 00ed54f4 */
  uVar14 = BytecodeBuilder::emitLabel();
  uVar15 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,uVar15,uVar14);
  if ((uVar15 & 1) == 0) {
                    /* try { // try from 00ed548c to 00ed54a7 has its CatchHandler @ 00ed54f4 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Exceeded jump distance limit; simplify the code to compile");
  }
  uVar15 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,uVar17,uVar16);
  if ((uVar15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Exceeded jump distance limit; simplify the code to compile");
  }
  uVar15 = lVar6 - lVar5 >> 4;
  patchLoopJumps(this,(AstNode *)param_1,uVar15,uVar14,uVar13);
  uVar13 = *(long *)(this + 0x1c0) - *(long *)(this + 0x1b8) >> 4;
  if (uVar15 < uVar13 || uVar15 - uVar13 == 0) {
    if (uVar15 < uVar13) {
      *(ulong *)(this + 0x1c0) = *(long *)(this + 0x1b8) + uVar15 * 0x10;
    }
  }
  else {
    std::__ndk1::vector<Luau::Compiler::LoopJump,std::__ndk1::allocator<Luau::Compiler::LoopJump>>::
    __append((vector<Luau::Compiler::LoopJump,std::__ndk1::allocator<Luau::Compiler::LoopJump>> *)
             (this + 0x1b8),uVar15 - uVar13);
  }
  *(long *)(this + 0x1d8) = *(long *)(this + 0x1d8) + -0x10;
LAB_00ed535c:
  *(undefined4 *)(this + 0x178) = uVar7;
  return;
}


