// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00c8d118
// Size: 252 bytes
// Signature: undefined __cdecl Initialize(Integer * param_1, Integer * param_2)


/* CryptoPP::DL_GroupParameters_IntegerBased::Initialize(CryptoPP::Integer const&, CryptoPP::Integer
   const&) */

void CryptoPP::DL_GroupParameters_IntegerBased::Initialize(Integer *param_1,Integer *param_2)

{
  long lVar1;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0xa8))();
  ComputeGroupOrder((DL_GroupParameters_IntegerBased *)param_1,param_2);
                    /* try { // try from 00c8d15c to 00c8d16b has its CatchHandler @ 00c8d22c */
  Integer::DividedBy((uint)local_98);
                    /* try { // try from 00c8d170 to 00c8d177 has its CatchHandler @ 00c8d21c */
  Integer::operator=(param_1 + 0x18,(Integer *)local_68);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8d1b4 to 00c8d1b7 has its CatchHandler @ 00c8d218 */
  UnalignedDeallocate(local_48);
  local_98[0] = &PTR__Integer_0100c890;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8d1e8 to 00c8d1eb has its CatchHandler @ 00c8d214 */
  UnalignedDeallocate(local_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


