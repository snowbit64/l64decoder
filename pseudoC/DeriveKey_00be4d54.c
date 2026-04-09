// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeriveKey
// Entry Point: 00be4d54
// Size: 828 bytes
// Signature: undefined __thiscall DeriveKey(PKCS5_PBKDF2_HMAC<CryptoPP::SHA256> * this, uchar * param_1, ulong param_2, uchar param_3, uchar * param_4, ulong param_5, uchar * param_6, ulong param_7, uint param_8, double param_9)


/* CryptoPP::PKCS5_PBKDF2_HMAC<CryptoPP::SHA256>::DeriveKey(unsigned char*, unsigned long, unsigned
   char, unsigned char const*, unsigned long, unsigned char const*, unsigned long, unsigned int,
   double) const */

uint __thiscall
CryptoPP::PKCS5_PBKDF2_HMAC<CryptoPP::SHA256>::DeriveKey
          (PKCS5_PBKDF2_HMAC<CryptoPP::SHA256> *this,uchar *param_1,ulong param_2,uchar param_3,
          uchar *param_4,ulong param_5,uchar *param_6,ulong param_7,uint param_8,double param_9)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  uchar *__src;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  uchar local_1d4 [4];
  undefined **local_1d0;
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1a8;
  ulong uStack_1a0;
  uchar *local_198;
  undefined **local_190;
  undefined **local_188 [2];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined local_160;
  undefined **local_158;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  KeyDerivationFunction::ThrowIfInvalidDerivedLength((KeyDerivationFunction *)this,param_2);
  if (param_8 == 0) {
    param_8 = 1;
  }
  local_190 = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)local_188,true);
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_178 = 0xffffffffffffffff;
  local_190 = &PTR__HMAC_00fec030;
  local_188[0] = &PTR__HMAC_00fec100;
                    /* try { // try from 00be4dfc to 00be4e03 has its CatchHandler @ 00be50a4 */
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  local_158 = &PTR__IteratedHashWithStaticTransform_01010888;
                    /* try { // try from 00be4e28 to 00be4e37 has its CatchHandler @ 00be5094 */
  (*(code *)local_190[7])(&local_190,param_4,param_5,&DAT_0211f5e0);
                    /* try { // try from 00be4e40 to 00be4e6f has its CatchHandler @ 00be50b8 */
  plVar5 = (long *)(*(code *)local_190[0x15])(&local_190);
  uVar3 = (**(code **)(*plVar5 + 0x48))();
  uVar6 = (ulong)uVar3;
  local_1a8 = 0xffffffffffffffff;
  uStack_1a0 = uVar6;
  if (uVar3 == 0) {
    __src = (uchar *)0x0;
  }
  else {
    __src = (uchar *)UnalignedAllocate(uVar6);
  }
  local_1c8 = 0;
  local_1c4 = 0;
  local_1d0 = &PTR_GetCurrentTimerValue_0100c810;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_198 = __src;
  if (param_2 != 0) {
    iVar7 = 1;
    do {
                    /* try { // try from 00be4ecc to 00be4edb has its CatchHandler @ 00be50c4 */
      HMAC_Base::Update((HMAC_Base *)&local_190,param_6,param_7);
      local_1d4[0] = (uchar)((uint)iVar7 >> 0x18);
                    /* try { // try from 00be4ee4 to 00be4f37 has its CatchHandler @ 00be50cc */
      HMAC_Base::Update((HMAC_Base *)&local_190,local_1d4,1);
      local_1d4[0] = (uchar)((uint)iVar7 >> 0x10);
      HMAC_Base::Update((HMAC_Base *)&local_190,local_1d4,1);
      local_1d4[0] = (uchar)((uint)iVar7 >> 8);
      HMAC_Base::Update((HMAC_Base *)&local_190,local_1d4,1);
      local_1d4[0] = (uchar)iVar7;
      HMAC_Base::Update((HMAC_Base *)&local_190,local_1d4,1);
                    /* try { // try from 00be4f40 to 00be4f5f has its CatchHandler @ 00be50c8 */
      uVar4 = (*(code *)local_188[0][9])(local_188);
      (*(code *)local_188[0][0x10])(local_188,__src,uVar4);
      __n = uVar6;
      if (param_2 <= uVar6) {
        __n = param_2;
      }
      memcpy(param_1,__src,__n);
      if (param_9 != 0.0) {
                    /* try { // try from 00be4f80 to 00be4f87 has its CatchHandler @ 00be50c0 */
        TimerBase::StartTimer();
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = ((param_2 + uVar6) - 1) / uVar6;
        }
        param_9 = param_9 / (double)(unkuint9)uVar1;
      }
      uVar8 = 1;
      if (1 < param_8) goto LAB_00be4fc8;
      while (param_9 != 0.0) {
                    /* try { // try from 00be4fb8 to 00be5003 has its CatchHandler @ 00be50d0 */
        if (((uVar8 & 0x7f) == 0) &&
           (dVar9 = (double)TimerBase::ElapsedTimeAsDouble(), param_9 <= dVar9)) {
          param_9 = 0.0;
          param_8 = uVar8;
          break;
        }
LAB_00be4fc8:
        do {
          (*(code *)local_188[0][5])(local_188,__src,uVar6);
          (*(code *)local_188[0][7])(local_188,__src);
          xorbuf(param_1,__src,__n);
          uVar8 = uVar8 + 1;
        } while (uVar8 < param_8);
      }
      param_1 = param_1 + __n;
      param_2 = param_2 - __n;
      iVar7 = iVar7 + 1;
    } while (param_2 != 0);
  }
  if (uVar3 != 0) {
    do {
      uVar1 = uVar6 - 1;
      __src[uVar6 - 1] = '\0';
      uVar6 = uVar1;
    } while (uVar1 != 0);
  }
                    /* try { // try from 00be5040 to 00be5047 has its CatchHandler @ 00be5090 */
  UnalignedDeallocate(__src);
  HMAC<CryptoPP::SHA256>::~HMAC((HMAC<CryptoPP::SHA256> *)&local_190);
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return param_8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


