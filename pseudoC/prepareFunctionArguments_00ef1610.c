// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareFunctionArguments
// Entry Point: 00ef1610
// Size: 448 bytes
// Signature: undefined __cdecl prepareFunctionArguments(Location * param_1, bool param_2, TempVector * param_3)


/* Luau::Parser::prepareFunctionArguments(Luau::Location const&, bool,
   Luau::TempVector<Luau::Parser::Binding> const&) */

void Luau::Parser::prepareFunctionArguments(Location *param_1,bool param_2,TempVector *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long **in_x3;
  undefined8 *in_x8;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  AstLocal *local_80;
  long *local_78;
  long local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (((ulong)param_3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uStack_68 = ((undefined8 *)(ulong)param_2)[1];
    local_70 = *(undefined8 *)(ulong)param_2;
    local_78 = *(long **)(param_1 + 0xc0);
    local_60 = 0;
    uVar4 = pushLocal((Parser *)param_1,(Binding *)&local_78);
  }
  local_78 = (long *)(param_1 + 0x220);
  uStack_68 = 0;
  local_70 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220) >> 3;
  if (in_x3[2] != (long *)0x0) {
    plVar12 = (long *)0x0;
    do {
                    /* try { // try from 00ef16ac to 00ef16c3 has its CatchHandler @ 00ef17d4 */
      local_80 = (AstLocal *)
                 pushLocal((Parser *)param_1,
                           (Binding *)(**in_x3 + ((long)plVar12 + (long)in_x3[1]) * 0x20));
      TempVector<Luau::AstLocal*>::push_back((TempVector<Luau::AstLocal*> *)&local_78,&local_80);
      uVar11 = uStack_68;
      lVar1 = local_70;
      plVar12 = (long *)((long)plVar12 + 1);
    } while (plVar12 < in_x3[2]);
    if (uStack_68 != 0) {
      lVar13 = *local_78;
                    /* try { // try from 00ef16ec to 00ef16ef has its CatchHandler @ 00ef17d0 */
      uVar5 = Allocator::allocate(*(Allocator **)(param_1 + 0x80),uStack_68 << 3);
      if ((uVar11 < 4) ||
         ((uVar5 < lVar13 + (uVar11 + lVar1) * 8 &&
          ((ulong)(lVar13 + lVar1 * 8) < uVar5 + uVar11 * 8)))) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar11 & 0xfffffffffffffffc;
        puVar7 = (undefined8 *)(uVar5 + 0x10);
        puVar9 = (undefined8 *)(lVar13 + lVar1 * 8 + 0x10);
        uVar10 = uVar6;
        do {
          puVar3 = puVar9 + -1;
          uVar14 = puVar9[-2];
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar10 = uVar10 - 4;
          puVar7[-1] = *puVar3;
          puVar7[-2] = uVar14;
          puVar7[1] = uVar16;
          *puVar7 = uVar15;
          puVar7 = puVar7 + 4;
        } while (uVar10 != 0);
        if (uVar11 == uVar6) goto LAB_00ef1748;
      }
      lVar8 = uVar11 - uVar6;
      puVar7 = (undefined8 *)(uVar5 + uVar6 * 8);
      puVar9 = (undefined8 *)(lVar13 + (uVar6 + lVar1) * 8);
      do {
        lVar8 = lVar8 + -1;
        *puVar7 = *puVar9;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (lVar8 != 0);
      goto LAB_00ef1748;
    }
  }
  uVar5 = 0;
  uVar11 = uStack_68;
LAB_00ef1748:
  *in_x8 = uVar4;
  in_x8[1] = uVar5;
  in_x8[2] = uVar11;
  lVar1 = *local_78 + local_70 * 8;
  if (lVar1 != local_78[1]) {
    local_78[1] = lVar1;
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


