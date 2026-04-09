// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignIntToInteger
// Entry Point: 00d0444c
// Size: 452 bytes
// Signature: undefined __cdecl AssignIntToInteger(type_info * param_1, void * param_2, void * param_3)


/* CryptoPP::AssignIntToInteger(std::type_info const&, void*, void const*) */

void CryptoPP::AssignIntToInteger(type_info *param_1,void *param_2,void *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  undefined4 *local_58;
  uint local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pcVar4 = *(char **)(param_1 + 8);
  if (pcVar4 == "N8CryptoPP7IntegerE") {
                    /* WARNING: Load size is inaccurate */
    iVar2 = *param_3;
    uVar5 = (ulong)iVar2;
    DataMemoryBarrier(2,3);
    if ((DAT_02120808 & 1) == 0) {
      DAT_02120978 = Baseline_MultiplyTop2;
      DAT_02120980 = Baseline_MultiplyTop4;
      DAT_021208a0 = Baseline_Multiply2;
      DAT_021208a8 = Baseline_Multiply4;
      DAT_021208b0 = Baseline_Multiply8;
      DAT_02120930 = Baseline_MultiplyBottom2;
      DAT_02120938 = Baseline_MultiplyBottom4;
      DAT_02120940 = Baseline_MultiplyBottom8;
      DAT_021208e8 = Baseline_Square2;
      DAT_021208f0 = Baseline_Square4;
      DAT_021208f8 = Baseline_Square8;
      DAT_02120988 = Baseline_MultiplyTop8;
      DAT_021208c0 = Baseline_Multiply16;
      DAT_02120950 = Baseline_MultiplyBottom16;
      DAT_02120908 = Baseline_Square16;
      DAT_02120998 = Baseline_MultiplyTop16;
      DAT_02120808 = 1;
      DataMemoryBarrier(2,3);
    }
    uStack_60 = 2;
    local_68 = 0x3fffffffffffffff;
    local_78[0] = &PTR__Integer_0100c890;
    local_58 = (undefined4 *)UnalignedAllocate(8);
    local_50 = (uint)(uVar5 >> 0x1f) & 1;
    uVar1 = -uVar5;
    if (-1 < iVar2) {
      uVar1 = uVar5;
    }
    *local_58 = (int)uVar1;
    local_58[1] = (int)(uVar1 >> 0x20);
                    /* try { // try from 00d045a0 to 00d045ab has its CatchHandler @ 00d04614 */
    Integer::operator=((Integer *)param_2,(Integer *)local_78);
    uVar5 = local_68;
    if (uStack_60 <= local_68) {
      uVar5 = uStack_60;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      local_58[uVar5 - 1] = 0;
    }
    local_78[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d045d8 to 00d045db has its CatchHandler @ 00d04610 */
    UnalignedDeallocate(local_58);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar4 == "N8CryptoPP7IntegerE");
  }
  return;
}


