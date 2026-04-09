// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileInlineReturn
// Entry Point: 00ed37a0
// Size: 768 bytes
// Signature: undefined __thiscall compileInlineReturn(Compiler * this, AstStatReturn * param_1, bool param_2)


/* Luau::Compiler::compileInlineReturn(Luau::AstStatReturn*, bool) */

void __thiscall
Luau::Compiler::compileInlineReturn(Compiler *this,AstStatReturn *param_1,bool param_2)

{
  void *pvVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  void *__dest;
  byte bVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  void *__src;
  size_t __n;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uchar local_90;
  uchar uStack_8f;
  void *local_88;
  
  lVar5 = tpidr_el0;
  lVar10 = *(long *)(lVar5 + 0x28);
  if (0 < *(int *)(this + 0xc)) {
    BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(param_1 + 0xc) + 1);
  }
  lVar16 = *(long *)(this + 0x1f0);
  uVar4 = *(undefined2 *)(lVar16 + -0x20);
  uVar18 = *(ulong *)(lVar16 + -0x28);
  local_88 = (void *)0x0;
  uVar11 = *(long *)(lVar16 + -0x10) - *(long *)(lVar16 + -0x18);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ed3a88 to 00ed3a8b has its CatchHandler @ 00ed3aa4 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00ed3820 to 00ed3827 has its CatchHandler @ 00ed3aa4 */
    local_88 = operator_new(uVar11);
    __n = *(long *)(lVar16 + -0x10) - (long)*(void **)(lVar16 + -0x18);
    if (0 < (long)__n) {
      memcpy(local_88,*(void **)(lVar16 + -0x18),__n);
    }
  }
  uStack_8f = (uchar)((ushort)uVar4 >> 8);
  local_90 = (uchar)uVar4;
                    /* try { // try from 00ed387c to 00ed395f has its CatchHandler @ 00ed3aa0 */
  compileExprListTemp(this,(AstArray *)(param_1 + 0x20),local_90,uStack_8f,false);
  uVar11 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
  if ((uVar18 < uVar11) && (*(long *)(this + 0x68) != 0)) {
    bVar6 = false;
    bVar8 = 0xff;
LAB_00ed38bc:
    do {
      uVar12 = *(ulong *)(*(long *)(this + 0x188) + uVar18 * 8);
      if (uVar12 != *(ulong *)(this + 0x70)) {
        uVar13 = 0;
        uVar14 = uVar12 >> 4 ^ uVar12 >> 9;
        do {
          uVar14 = uVar14 & *(long *)(this + 0x60) - 1U;
          puVar15 = (ulong *)(*(long *)(this + 0x58) + uVar14 * 0x10);
          if (*puVar15 == uVar12) goto LAB_00ed3904;
          if (*puVar15 == *(ulong *)(this + 0x70)) break;
          uVar13 = uVar13 + 1;
          uVar14 = uVar13 + uVar14;
        } while (uVar13 <= *(long *)(this + 0x60) - 1U);
      }
      puVar15 = (ulong *)0x0;
LAB_00ed3904:
      puVar2 = (ulong *)0x0;
      if (puVar15 != (ulong *)0x0) {
        puVar2 = puVar15 + 1;
      }
      if (*(byte *)((long)puVar2 + 2) == 0) {
        uVar18 = uVar18 + 1;
        if (uVar18 == uVar11) {
          bVar9 = bVar8;
          if (!bVar6) goto LAB_00ed3960;
          break;
        }
        goto LAB_00ed38bc;
      }
      uVar18 = uVar18 + 1;
      bVar9 = *(byte *)puVar2;
      if (bVar8 <= *(byte *)puVar2) {
        bVar9 = bVar8;
      }
      bVar6 = true;
      bVar8 = bVar9;
    } while (uVar18 != uVar11);
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0xb,bVar9,'\0','\0');
  }
LAB_00ed3960:
  if (!param_2) {
                    /* try { // try from 00ed3968 to 00ed39eb has its CatchHandler @ 00ed3abc */
    uVar7 = BytecodeBuilder::emitLabel();
    BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x17,'\0',0);
    lVar16 = *(long *)(this + 0x1f0);
    puVar3 = *(undefined8 **)(lVar16 + -0x10);
    if (puVar3 == *(undefined8 **)(lVar16 + -8)) {
      __src = *(void **)(lVar16 + -0x18);
      uVar11 = (long)puVar3 - (long)__src;
      lVar17 = (long)uVar11 >> 3;
      uVar18 = lVar17 + 1;
      if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ed3a8c to 00ed3a9b has its CatchHandler @ 00ed3abc */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar18 <= (ulong)((long)uVar11 >> 2)) {
        uVar18 = (long)uVar11 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar11) {
        uVar18 = 0x1fffffffffffffff;
      }
      if (uVar18 == 0) {
        __dest = (void *)0x0;
        puVar3 = (undefined8 *)(lVar17 * 8);
        pvVar1 = (void *)0x0;
        *puVar3 = uVar7;
      }
      else {
        if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar18 << 3);
        puVar3 = (undefined8 *)((long)__dest + lVar17 * 8);
        pvVar1 = (void *)((long)__dest + uVar18 * 8);
        *puVar3 = uVar7;
      }
      if (0 < (long)uVar11) {
        memcpy(__dest,__src,uVar11);
      }
      *(void **)(lVar16 + -0x18) = __dest;
      *(undefined8 **)(lVar16 + -0x10) = puVar3 + 1;
      *(void **)(lVar16 + -8) = pvVar1;
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *puVar3 = uVar7;
      *(undefined8 **)(lVar16 + -0x10) = puVar3 + 1;
    }
  }
  if (local_88 != (void *)0x0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar5 + 0x28) == lVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


