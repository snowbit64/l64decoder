// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeriveKey
// Entry Point: 00be5288
// Size: 448 bytes
// Signature: undefined __thiscall DeriveKey(PKCS5_PBKDF2_HMAC<CryptoPP::SHA256> * this, uchar * param_1, ulong param_2, uchar * param_3, ulong param_4, NameValuePairs * param_5)


/* CryptoPP::PKCS5_PBKDF2_HMAC<CryptoPP::SHA256>::DeriveKey(unsigned char*, unsigned long, unsigned
   char const*, unsigned long, CryptoPP::NameValuePairs const&) const */

undefined8 __thiscall
CryptoPP::PKCS5_PBKDF2_HMAC<CryptoPP::SHA256>::DeriveKey
          (PKCS5_PBKDF2_HMAC<CryptoPP::SHA256> *this,uchar *param_1,ulong param_2,uchar *param_3,
          ulong param_4,NameValuePairs *param_5)

{
  uchar **ppuVar1;
  ulong *puVar2;
  uint uVar3;
  uchar uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint local_a8 [2];
  uchar *local_a0;
  ulong auStack_98 [2];
  ulong local_88;
  ulong local_80;
  uchar *local_78;
  double local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar6 = (**(code **)(*(long *)param_5 + 0x10))(param_5,"Purpose",&int::typeinfo,local_a8);
  uVar4 = (uchar)local_a8[0];
  uVar7 = (**(code **)(*(long *)param_5 + 0x10))(param_5,"Iterations",&int::typeinfo,local_a8);
  uVar3 = local_a8[0];
  local_70 = 0.0;
  (**(code **)(*(long *)param_5 + 0x10))(param_5,"TimeInSeconds",&double::typeinfo,&local_70);
  local_80 = 0;
  local_78 = (uchar *)0x0;
  local_a0 = (uchar *)0x0;
  auStack_98[0] = 0;
  local_88 = 0xffffffffffffffff;
  local_a8[0] = local_a8[0] & 0xffffff00;
                    /* try { // try from 00be5368 to 00be53df has its CatchHandler @ 00be544c */
  (**(code **)(*(long *)param_5 + 0x10))
            (param_5,&DAT_004d9d2f,&ConstByteArrayParameter::typeinfo,local_a8);
  if ((uVar7 & 1) == 0) {
    uVar3 = 1;
  }
  if ((uVar6 & 1) == 0) {
    uVar4 = '\0';
  }
  ppuVar1 = &local_a0;
  if ((char)local_a8[0] != '\0') {
    ppuVar1 = &local_78;
  }
  puVar2 = auStack_98;
  if ((char)local_a8[0] != '\0') {
    puVar2 = &local_80;
  }
  uVar8 = DeriveKey(this,param_1,param_2,uVar4,param_3,param_4,*ppuVar1,*puVar2,uVar3,local_70);
  uVar6 = local_88;
  if (local_80 <= local_88) {
    uVar6 = local_80;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    local_78[uVar6 - 1] = '\0';
  }
                    /* try { // try from 00be540c to 00be540f has its CatchHandler @ 00be5448 */
  UnalignedDeallocate(local_78);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


