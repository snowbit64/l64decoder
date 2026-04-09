// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeMessageRepresentative
// Entry Point: 00ceabdc
// Size: 316 bytes
// Signature: undefined __cdecl ComputeMessageRepresentative(RandomNumberGenerator * param_1, uchar * param_2, ulong param_3, HashTransformation * param_4, pair param_5, bool param_6, uchar * param_7, ulong param_8, undefined8 param_9)


/* CryptoPP::DL_SignatureMessageEncodingMethod_DSA::ComputeMessageRepresentative(CryptoPP::RandomNumberGenerator&,
   unsigned char const*, unsigned long, CryptoPP::HashTransformation&, std::__ndk1::pair<unsigned
   char const*, unsigned int>, bool, unsigned char*, unsigned long) const */

void CryptoPP::DL_SignatureMessageEncodingMethod_DSA::ComputeMessageRepresentative
               (RandomNumberGenerator *param_1,uchar *param_2,ulong param_3,
               HashTransformation *param_4,pair param_5,bool param_6,uchar *param_7,ulong param_8,
               uchar *param_9)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong in_stack_00000008;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  plVar3 = (long *)(ulong)param_5;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = in_stack_00000008 + 7 >> 3;
  uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
  uVar4 = uVar2 & 0xffffffff;
  __n = 0;
  if (uVar4 <= uVar5) {
    __n = uVar5 - uVar4;
  }
  if (uVar4 > uVar5 || uVar5 - uVar4 == 0) {
    uVar4 = uVar5;
  }
  memset(param_9,0,__n);
  (**(code **)(*plVar3 + 0x80))(plVar3,param_9 + __n,uVar4);
  if (in_stack_00000008 < (uVar2 & 0xffffffff) << 3) {
    Integer::Integer((Integer *)local_98,param_9,uVar5,0,1);
                    /* try { // try from 00ceac8c to 00ceaca7 has its CatchHandler @ 00cead1c */
    Integer::operator>>=
              ((Integer *)local_98,(in_stack_00000008 + 7 & 0xfffffffffffffff8) - in_stack_00000008)
    ;
    Integer::Encode((Integer *)local_98,param_9,uVar5,0);
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    local_98[0] = &PTR__Integer_0100c890;
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00ceace0 to 00ceace3 has its CatchHandler @ 00cead18 */
    UnalignedDeallocate(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


