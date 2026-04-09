// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: modelCost
// Entry Point: 00eff2ac
// Size: 392 bytes
// Signature: undefined __cdecl modelCost(AstNode * param_1, AstLocal * * param_2, ulong param_3, DenseHashMap * param_4)


/* Luau::Compile::modelCost(Luau::AstNode*, Luau::AstLocal* const*, unsigned long,
   Luau::DenseHashMap<Luau::AstExprCall*, int, Luau::DenseHashPointer,
   std::__ndk1::equal_to<Luau::AstExprCall*> > const&) */

undefined8
Luau::Compile::modelCost(AstNode *param_1,AstLocal **param_2,ulong param_3,DenseHashMap *param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  AstLocal *pAVar5;
  AstLocal **ppAVar6;
  long lVar7;
  AstLocal *pAVar8;
  ulong uVar9;
  undefined **local_a0;
  DenseHashMap *pDStack_98;
  void *local_90;
  long lStack_88;
  ulong local_80;
  AstLocal *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_a0 = &PTR__CostVisitor_01016978;
  lStack_88 = 0;
  local_90 = (void *)0x0;
  local_78 = (AstLocal *)0x0;
  local_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  pDStack_98 = param_4;
  if (param_3 != 0) {
    uVar4 = param_3 - 1;
    uVar9 = 0;
    if (5 < uVar4) {
      uVar4 = 6;
    }
    do {
                    /* try { // try from 00eff330 to 00eff337 has its CatchHandler @ 00eff438 */
      detail::
      DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,unsigned_long>,std::__ndk1::pair<Luau::AstLocal*const,unsigned_long>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,unsigned_long>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
      ::rehash();
      do {
        pAVar5 = param_2[uVar9];
        uVar3 = ((ulong)pAVar5 >> 4 ^ (ulong)pAVar5 >> 9) & lStack_88 - 1U;
        ppAVar6 = (AstLocal **)((long)local_90 + uVar3 * 0x10);
        pAVar8 = *ppAVar6;
        if (pAVar8 != local_78) {
          lVar7 = 1;
          do {
            if (pAVar8 == pAVar5) goto LAB_00eff3a0;
            uVar3 = uVar3 + lVar7;
            lVar7 = lVar7 + 1;
            uVar3 = uVar3 & lStack_88 - 1U;
            ppAVar6 = (AstLocal **)((long)local_90 + uVar3 * 0x10);
            pAVar8 = *ppAVar6;
          } while (pAVar8 != local_78);
        }
        *ppAVar6 = pAVar5;
        local_80 = local_80 + 1;
LAB_00eff3a0:
        *(long *)((long)local_90 + uVar3 * 0x10 + 8) = 0xffL << (uVar9 * 8 + 8 & 0x3f);
        if (uVar9 == uVar4) goto LAB_00eff3d4;
        uVar9 = uVar9 + 1;
      } while (local_80 < (ulong)(lStack_88 * 3) >> 2);
    } while( true );
  }
LAB_00eff3d4:
                    /* try { // try from 00eff3dc to 00eff3e7 has its CatchHandler @ 00eff434 */
  (***(code ***)param_1)(param_1,&local_a0);
  uVar2 = local_68;
  local_a0 = &PTR__CostVisitor_01016978;
  if (local_90 != (void *)0x0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


