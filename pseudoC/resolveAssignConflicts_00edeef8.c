// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolveAssignConflicts
// Entry Point: 00edeef8
// Size: 680 bytes
// Signature: undefined __thiscall resolveAssignConflicts(Compiler * this, AstStat * param_1, vector * param_2, AstArray * param_3)


/* Luau::Compiler::resolveAssignConflicts(Luau::AstStat*,
   std::__ndk1::vector<Luau::Compiler::Assignment,
   std::__ndk1::allocator<Luau::Compiler::Assignment> >&, Luau::AstArray<Luau::AstExpr*> const&) */

void __thiscall
Luau::Compiler::resolveAssignConflicts
          (Compiler *this,AstStat *param_1,vector *param_2,AstArray *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  undefined **local_b8;
  Compiler *pCStack_b0;
  ulong local_a8 [4];
  ulong local_88 [4];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_b8 = &PTR__AstVisitor_01014f80;
  local_68 = *(long *)(lVar5 + 0x28);
  piVar9 = *(int **)param_2;
  piVar7 = *(int **)(param_2 + 8);
  local_a8[1] = 0;
  local_a8[0] = 0;
  local_a8[3] = 0;
  local_a8[2] = 0;
  local_88[1] = 0;
  local_88[0] = 0;
  local_88[3] = 0;
  local_88[2] = 0;
  pCStack_b0 = this;
  if (piVar7 == piVar9) {
    uVar10 = 0;
    if (*(long *)(param_3 + 8) == 0) goto LAB_00edf00c;
LAB_00edf028:
    do {
      puVar6 = *(undefined8 **)(*(long *)param_3 + uVar10 * 8);
      (**(code **)*puVar6)(puVar6,&local_b8);
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ulong *)(param_3 + 8));
    piVar9 = *(int **)param_2;
    piVar7 = *(int **)(param_2 + 8);
    piVar11 = piVar9;
    if (piVar9 == piVar7) goto LAB_00edf16c;
  }
  else {
    lVar12 = 0;
    uVar13 = 0;
    do {
      if (uVar13 < *(ulong *)(param_3 + 8)) {
        puVar6 = *(undefined8 **)(*(long *)param_3 + uVar13 * 8);
        (**(code **)*puVar6)(puVar6,&local_b8);
      }
      if (*(int *)((long)piVar9 + lVar12) == 0) {
        bVar4 = *(byte *)((long)piVar9 + lVar12 + 4);
        uVar10 = (ulong)(bVar4 >> 3) & 0x18;
        *(ulong *)((long)local_88 + uVar10) =
             1L << ((ulong)bVar4 & 0x3f) | *(ulong *)((long)local_88 + uVar10);
      }
      piVar9 = *(int **)param_2;
      piVar7 = *(int **)(param_2 + 8);
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x30;
      uVar10 = ((long)piVar7 - (long)piVar9 >> 4) * -0x5555555555555555;
    } while (uVar13 < uVar10);
    if (uVar10 < *(ulong *)(param_3 + 8)) goto LAB_00edf028;
LAB_00edf00c:
    piVar11 = piVar9;
    if (piVar9 == piVar7) goto LAB_00edf16c;
  }
  do {
    iVar3 = *piVar9;
    if (iVar3 - 3U < 3) {
      bVar4 = *(byte *)(piVar9 + 1) >> 6;
      uVar10 = 1L << ((ulong)*(byte *)(piVar9 + 1) & 0x3f);
      if ((uVar10 & local_88[bVar4]) != 0) {
        local_a8[bVar4] = local_a8[bVar4] | uVar10;
      }
      if (iVar3 == 5) {
        bVar4 = *(byte *)((long)piVar9 + 6) >> 6;
        uVar10 = 1L << ((ulong)*(byte *)((long)piVar9 + 6) & 0x3f);
        if ((uVar10 & local_88[bVar4]) != 0) {
          local_a8[bVar4] = local_a8[bVar4] | uVar10;
        }
      }
    }
    piVar9 = piVar9 + 0xc;
  } while (piVar9 != piVar7);
  if (piVar11 != piVar7) {
    uVar8 = *(uint *)(this + 0x178);
    do {
      if ((*piVar11 == 0) &&
         ((*(ulong *)((long)local_a8 + ((ulong)(*(byte *)(piVar11 + 1) >> 3) & 0x18)) >>
           ((ulong)*(byte *)(piVar11 + 1) & 0x3f) & 1) != 0)) {
        uVar1 = uVar8 + 1;
        if (0xff < uVar1) {
                    /* WARNING: Subroutine does not return */
          CompileError::raise((Location *)(param_1 + 0xc),
                              "Out of registers when trying to allocate %d registers: exceeded limit %d"
                              ,1,0xff);
        }
        *(uint *)(this + 0x178) = uVar1;
        uVar2 = uVar1;
        if (uVar1 <= *(uint *)(this + 0x17c)) {
          uVar2 = *(uint *)(this + 0x17c);
        }
        *(uint *)(this + 0x17c) = uVar2;
        *(char *)(piVar11 + 10) = (char)uVar8;
        uVar8 = uVar1;
      }
      piVar11 = piVar11 + 0xc;
    } while (piVar11 != piVar7);
  }
LAB_00edf16c:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


