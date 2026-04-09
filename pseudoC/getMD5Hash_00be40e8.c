// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMD5Hash
// Entry Point: 00be40e8
// Size: 284 bytes
// Signature: undefined __cdecl getMD5Hash(uchar * param_1, uint param_2, uchar * param_3)


/* MD5Hash::getMD5Hash(unsigned char const*, unsigned int, unsigned char*) */

void MD5Hash::getMD5Hash(uchar *param_1,uint param_2,uchar *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined **local_118 [2];
  undefined auStack_108 [72];
  ulong local_c0;
  ulong uStack_b8;
  undefined *local_b0;
  undefined auStack_a8 [72];
  ulong local_60;
  ulong uStack_58;
  undefined *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,16u,CryptoPP::Weak1::MD5,0u,false>
  ::IteratedHashWithStaticTransform();
  local_118[0] = &PTR__IteratedHashWithStaticTransform_00febe88;
                    /* try { // try from 00be4134 to 00be416b has its CatchHandler @ 00be4204 */
  CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::Update
            ((IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *)local_118,param_1,
             (ulong)param_2);
  uVar2 = (*(code *)local_118[0][9])(local_118);
  (*(code *)local_118[0][0x10])(local_118,param_3,uVar2);
  if (uStack_58 <= local_60) {
    local_60 = uStack_58;
  }
  if (local_50 == auStack_a8) {
    for (; local_60 != 0; local_60 = local_60 - 1) {
      *(undefined4 *)(local_50 + local_60 * 4 + -4) = 0;
    }
  }
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  if (local_b0 == auStack_108) {
    for (; local_c0 != 0; local_c0 = local_c0 - 1) {
      *(undefined4 *)(local_b0 + local_c0 * 4 + -4) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


