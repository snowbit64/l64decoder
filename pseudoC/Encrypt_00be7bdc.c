// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Encrypt
// Entry Point: 00be7bdc
// Size: 656 bytes
// Signature: undefined __thiscall Encrypt(AuthenticatedEncryption * this, uchar * param_1, uint param_2, uint * param_3)


/* AuthenticatedEncryption::Encrypt(unsigned char*, unsigned int, unsigned int&) */

bool __thiscall
AuthenticatedEncryption::Encrypt
          (AuthenticatedEncryption *this,uchar *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 *this_00;
  undefined **local_220;
  undefined **ppuStack_218;
  undefined **local_190;
  undefined **local_148;
  undefined **ppuStack_140;
  long *local_130;
  undefined **local_118;
  ulong local_108;
  ulong uStack_100;
  void *local_f8;
  byte local_d8;
  void *local_c8;
  byte local_c0;
  void *local_b0;
  undefined **local_a8;
  undefined **ppuStack_a0;
  uchar *local_90;
  ulong uStack_88;
  ulong local_80;
  undefined4 local_74;
  long local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar4 = *param_3;
  uVar1 = uVar4 + 0xf;
  if (param_2 < uVar1) {
    bVar8 = false;
  }
  else {
    local_74 = *(undefined4 *)(this + 0x3ac);
    lVar2 = *(long *)(this + 0x398) + 1;
    *(long *)(this + 0x398) = lVar2;
    local_70 = lVar2;
    CryptoPP::AuthenticatedSymmetricCipherBase::Resynchronize
              ((AuthenticatedSymmetricCipherBase *)(this + 0x118),(uchar *)&local_74,-1);
    CryptoPP::Algorithm::Algorithm((Algorithm *)&local_a8,false);
    local_80 = 0;
    local_a8 = &PTR__BufferedTransformation_01007ee0;
    ppuStack_a0 = &PTR__ArraySink_01008070;
    local_90 = param_1;
    uStack_88 = (ulong)param_2;
    this_00 = (undefined8 *)operator_new(0x28);
                    /* try { // try from 00be7c94 to 00be7c9b has its CatchHandler @ 00be7e70 */
    CryptoPP::Algorithm::Algorithm((Algorithm *)this_00,false);
    this_00[3] = &local_a8;
    *(undefined4 *)(this_00 + 4) = 3;
    *this_00 = &PTR__BufferedTransformation_01007ae8;
    this_00[1] = &PTR__Redirector_01007c78;
    CryptoPP::AuthenticatedEncryptionFilter::AuthenticatedEncryptionFilter
              ((AuthenticatedEncryptionFilter *)&local_220,
               (AuthenticatedSymmetricCipher *)(AuthenticatedSymmetricCipherBase *)(this + 0x118),
               (BufferedTransformation *)this_00,false,0xc,
               (basic_string *)&CryptoPP::DEFAULT_CHANNEL,5);
                    /* try { // try from 00be7cec to 00be7d1f has its CatchHandler @ 00be7e84 */
    (*(code *)local_220[7])(&local_220,param_1,*param_3,0,1);
    (*(code *)local_220[7])(&local_220,0,0,0xffffffff,1);
    uVar7 = local_80;
    uVar5 = *param_3;
    local_220 = &PTR__AuthenticatedEncryptionFilter_01006c80;
    ppuStack_218 = &PTR__AuthenticatedEncryptionFilter_01006e90;
    local_190 = &PTR__AuthenticatedEncryptionFilter_01006ec0;
    local_148 = &PTR__HashFilter_01006830;
    bVar8 = local_80 == uVar5 + 0xc;
    ppuStack_140 = &PTR__HashFilter_010069d8;
    local_118 = &PTR__HashFilter_01006a08;
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if (uStack_100 <= local_108) {
      local_108 = uStack_100;
    }
    local_118 = &PTR__FilterPutSpaceHelper_00feccd8;
    for (; local_108 != 0; local_108 = local_108 - 1) {
      *(undefined *)((long)local_f8 + (local_108 - 1)) = 0;
    }
                    /* try { // try from 00be7dc4 to 00be7dc7 has its CatchHandler @ 00be7e6c */
    CryptoPP::UnalignedDeallocate(local_f8);
    local_148 = &PTR__Filter_01005f60;
    ppuStack_140 = &PTR__Filter_01006108;
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 8))();
    }
    CryptoPP::StreamTransformationFilter::~StreamTransformationFilter
              ((StreamTransformationFilter *)&local_220);
    if (uVar7 == uVar5 + 0xc) {
      puVar3 = (uint *)(param_1 + uVar4);
      uVar4 = (*puVar3 ^ (uint)lVar2) & 0xffffff ^ 0x7dca7d;
      *(char *)(puVar3 + 3) = (char)uVar4;
      *(char *)((long)puVar3 + 0xd) = (char)(uVar4 >> 8);
      *(char *)((long)puVar3 + 0xe) = (char)(uVar4 >> 0x10);
      *param_3 = uVar1;
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


