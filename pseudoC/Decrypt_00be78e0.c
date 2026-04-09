// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Decrypt
// Entry Point: 00be78e0
// Size: 544 bytes
// Signature: undefined __thiscall Decrypt(AuthenticatedEncryption * this, uchar * param_1, uint * param_2)


/* AuthenticatedEncryption::Decrypt(unsigned char*, unsigned int&) */

void __thiscall
AuthenticatedEncryption::Decrypt(AuthenticatedEncryption *this,uchar *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *this_00;
  ulong uVar6;
  ulonglong uVar7;
  ulong uVar8;
  long local_2e0 [38];
  char local_1b0;
  undefined **local_b0;
  undefined **ppuStack_a8;
  uchar *local_98;
  ulong uStack_90;
  ulong local_88;
  undefined4 local_7c;
  ulonglong local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_2;
  uVar8 = (ulong)(uVar2 - 0xf);
  if (0xe < uVar2) {
    uVar6 = *(ulong *)(this + 0x3a0);
    uVar1 = *(uint *)(param_1 + uVar8) & 0xffffff ^ (uint)*(uint3 *)((long)(param_1 + uVar8) + 0xc)
            ^ 0x7dca7d;
    uVar3 = uVar1 - ((uint)uVar6 & 0xffffff);
    uVar7 = ((uVar6 & 0xffffffffff000000 | (ulong)uVar1) + (ulong)(uVar3 & 0x1000000)) -
            (ulong)(0x800000 - (uVar3 & 0xffffff) & 0x1000000);
    uVar6 = uVar6 - uVar7;
    if (-1 < (int)(uint)uVar6) {
      uVar5 = 0;
      if ((this[1] == (AuthenticatedEncryption)0x0) || (0x3ff < (uint)uVar6)) goto LAB_00be791c;
      if ((*(ulong *)(this + (uVar6 >> 6 & 0x3ffffff) * 8 + 0x3b0) >> (uVar6 & 0x3f) & 1) != 0)
      goto LAB_00be7918;
    }
    local_7c = *(undefined4 *)(this + 0x3a8);
    local_78 = uVar7;
    CryptoPP::AuthenticatedSymmetricCipherBase::Resynchronize
              ((AuthenticatedSymmetricCipherBase *)(this + 600),(uchar *)&local_7c,-1);
    CryptoPP::Algorithm::Algorithm((Algorithm *)&local_b0,false);
    local_88 = 0;
    local_b0 = &PTR__BufferedTransformation_01007ee0;
    ppuStack_a8 = &PTR__ArraySink_01008070;
    local_98 = param_1;
    uStack_90 = uVar8;
    this_00 = (undefined8 *)operator_new(0x28);
                    /* try { // try from 00be7a38 to 00be7a3f has its CatchHandler @ 00be7b00 */
    CryptoPP::Algorithm::Algorithm((Algorithm *)this_00,false);
    this_00[3] = &local_b0;
    *(undefined4 *)(this_00 + 4) = 3;
    *this_00 = &PTR__BufferedTransformation_01007ae8;
    this_00[1] = &PTR__Redirector_01007c78;
    CryptoPP::AuthenticatedDecryptionFilter::AuthenticatedDecryptionFilter
              ((AuthenticatedDecryptionFilter *)local_2e0,
               (AuthenticatedSymmetricCipher *)(AuthenticatedSymmetricCipherBase *)(this + 600),
               (BufferedTransformation *)this_00,0,0xc,5);
                    /* try { // try from 00be7a88 to 00be7abb has its CatchHandler @ 00be7b14 */
    (**(code **)(local_2e0[0] + 0x38))(local_2e0,param_1,uVar2 - 3,0,1);
    (**(code **)(local_2e0[0] + 0x38))(local_2e0,0,0,0xffffffff,1);
    uVar6 = local_88;
    if (local_1b0 == '\0') {
      CryptoPP::AuthenticatedDecryptionFilter::~AuthenticatedDecryptionFilter
                ((AuthenticatedDecryptionFilter *)local_2e0);
    }
    else {
      CryptoPP::AuthenticatedDecryptionFilter::~AuthenticatedDecryptionFilter
                ((AuthenticatedDecryptionFilter *)local_2e0);
      if (uVar6 == uVar8) {
        AcceptIV(this,uVar7);
        uVar5 = 1;
        *param_2 = uVar2 - 0xf;
        goto LAB_00be791c;
      }
    }
  }
LAB_00be7918:
  uVar5 = 0;
LAB_00be791c:
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


