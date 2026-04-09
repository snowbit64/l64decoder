// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SieveSingle
// Entry Point: 00d13b44
// Size: 552 bytes
// Signature: undefined __cdecl SieveSingle(vector * param_1, ushort param_2, Integer * param_3, Integer * param_4, ushort param_5)


/* CryptoPP::PrimeSieve::SieveSingle(std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >&,
   unsigned short, CryptoPP::Integer const&, CryptoPP::Integer const&, unsigned short) */

void CryptoPP::PrimeSieve::SieveSingle
               (vector *param_1,ushort param_2,Integer *param_3,Integer *param_4,ushort param_5)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **local_128 [2];
  ulong local_118;
  ulong uStack_110;
  void *local_108;
  undefined **local_f8 [2];
  ulong local_e8;
  ulong uStack_e0;
  void *local_d8;
  undefined **local_c8;
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_5 != 0) {
    uVar9 = (ulong)param_2;
    uVar10 = *(ulong *)(param_1 + 8);
    iVar4 = Integer::Modulo(param_3,(uint)param_2);
    uVar5 = ((uint)param_2 - iVar4) * (uint)param_5;
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = uVar5 / param_2;
    }
    uVar8 = (ulong)(uVar5 - uVar2 * param_2);
    uVar5 = Integer::WordCount();
    if (uVar5 < 2) {
      Integer::Integer((Integer *)local_f8,uVar8);
                    /* try { // try from 00d13bd0 to 00d13bdf has its CatchHandler @ 00d13dac */
      Integer::Times(param_4);
                    /* try { // try from 00d13be0 to 00d13bef has its CatchHandler @ 00d13d9c */
      Integer::Plus(param_3);
                    /* try { // try from 00d13bf4 to 00d13bff has its CatchHandler @ 00d13d8c */
      Integer::Integer((Integer *)local_128,uVar9);
                    /* try { // try from 00d13c00 to 00d13c0b has its CatchHandler @ 00d13d7c */
      iVar4 = Integer::Compare((Integer *)local_98,(Integer *)local_128);
      if (uStack_110 <= local_118) {
        local_118 = uStack_110;
      }
      local_128[0] = &PTR__Integer_0100c890;
      for (; local_118 != 0; local_118 = local_118 - 1) {
        *(undefined4 *)((long)local_108 + local_118 * 4 + -4) = 0;
      }
                    /* try { // try from 00d13c48 to 00d13c4b has its CatchHandler @ 00d13d78 */
      UnalignedDeallocate(local_108);
      local_98[0] = &PTR__Integer_0100c890;
      if (uStack_80 <= local_88) {
        local_88 = uStack_80;
      }
      for (; local_88 != 0; local_88 = local_88 - 1) {
        *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
      }
                    /* try { // try from 00d13c7c to 00d13c7f has its CatchHandler @ 00d13d74 */
      UnalignedDeallocate(local_78);
      local_c8 = &PTR__Integer_0100c890;
      if (uStack_b0 <= local_b8) {
        local_b8 = uStack_b0;
      }
      for (; local_b8 != 0; local_b8 = local_b8 - 1) {
        *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d13cb0 to 00d13cb3 has its CatchHandler @ 00d13d70 */
      UnalignedDeallocate(local_a8);
      local_f8[0] = &PTR__Integer_0100c890;
      if (uStack_e0 <= local_e8) {
        local_e8 = uStack_e0;
      }
      for (; local_e8 != 0; local_e8 = local_e8 - 1) {
        *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d13ce4 to 00d13ce7 has its CatchHandler @ 00d13d6c */
      UnalignedDeallocate(local_d8);
      uVar1 = uVar9;
      if (iVar4 != 0) {
        uVar1 = 0;
      }
      uVar8 = uVar1 + uVar8;
    }
    if (uVar8 < uVar10) {
      lVar6 = *(long *)param_1;
      do {
        uVar1 = uVar8 & 0x3f;
        uVar7 = uVar8 >> 3 & 0x1ffffffffffffff8;
        uVar8 = uVar8 + uVar9;
        *(ulong *)(lVar6 + uVar7) = *(ulong *)(lVar6 + uVar7) | 1L << uVar1;
      } while (uVar8 < uVar10);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


