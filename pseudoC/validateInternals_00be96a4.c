// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: validateInternals
// Entry Point: 00be96a4
// Size: 316 bytes
// Signature: undefined validateInternals(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* KeyAgreementCommon::validateInternals() */

uint KeyAgreementCommon::validateInternals(void)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uchar *in_x0;
  long *plVar4;
  undefined **local_c0;
  undefined auStack_b8 [32];
  ulong local_98;
  ulong uStack_90;
  undefined *local_88;
  undefined auStack_80 [48];
  ulong local_50;
  ulong uStack_48;
  undefined *local_40;
  long *local_38;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  CryptoPP::RandomPool::RandomPool((RandomPool *)&local_c0);
                    /* try { // try from 00be96cc to 00be970b has its CatchHandler @ 00be97e0 */
  CryptoPP::RandomPool::IncorporateEntropy((RandomPool *)&local_c0,in_x0,8);
  plVar4 = (long *)(**(code **)(*(long *)(in_x0 + 8) + 0x38))(in_x0 + 8);
  plVar4 = (long *)((long)plVar4 + *(long *)(*plVar4 + -0x70));
  uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,&local_c0,3);
  local_c0 = &PTR__RandomPool_0100f6d0;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  if (uStack_48 <= local_50) {
    local_50 = uStack_48;
  }
  if (auStack_80 == local_40) {
    for (; local_50 != 0; local_50 = local_50 - 1) {
      local_40[local_50 - 1] = 0;
    }
  }
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  if (auStack_b8 + ((ulong)(uint)-(int)auStack_b8 & 8) == local_88 && local_98 != 0) {
    do {
      uVar1 = local_98 - 1;
      local_88[local_98 - 1] = 0;
      local_98 = uVar1;
    } while (uVar1 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}


