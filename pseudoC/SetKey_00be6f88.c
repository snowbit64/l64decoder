// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetKey
// Entry Point: 00be6f88
// Size: 940 bytes
// Signature: undefined __thiscall SetKey(AuthenticatedEncryption * this, uchar * param_1, uint param_2, bool param_3, char * param_4)


/* AuthenticatedEncryption::SetKey(unsigned char const*, unsigned int, bool, char const*) */

undefined8 __thiscall
AuthenticatedEncryption::SetKey
          (AuthenticatedEncryption *this,uchar *param_1,uint param_2,bool param_3,char *param_4)

{
  SecBlock *pSVar1;
  SecBlock *pSVar2;
  SecBlock *pSVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  size_t sVar7;
  undefined8 uVar8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0 [3];
  undefined4 local_184;
  undefined **local_180;
  undefined **local_178;
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> aSStack_170 [8];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  AuthenticatedEncryption local_150;
  undefined **local_148;
  undefined8 local_140;
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
  aSStack_138 [96];
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
  aSStack_d8 [104];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  this[1] = (AuthenticatedEncryption)0x1;
  *this = (AuthenticatedEncryption)param_3;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x400) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  sVar7 = strlen(param_4);
  CryptoPP::SimpleKeyingInterface::SetKey
            ((SimpleKeyingInterface *)(this + 8),(uchar *)param_4,sVar7,
             (NameValuePairs *)&DAT_0211f5e0);
  CryptoPP::HMAC_Base::Update
            ((HMAC_Base *)(SimpleKeyingInterface *)(this + 8),param_1,(ulong)param_2);
  local_180 = &PTR__SimpleKeyingInterface_00fef588;
  CryptoPP::Algorithm::Algorithm((Algorithm *)&local_178,true);
  local_160 = 0;
  uStack_158 = 0;
  local_150 = (AuthenticatedEncryption)0x0;
  local_168 = 0xffffffffffffffff;
  local_180 = &PTR__HMAC_00fec030;
  local_178 = &PTR__HMAC_00fec100;
                    /* try { // try from 00be7070 to 00be7073 has its CatchHandler @ 00be7334 */
  CryptoPP::
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  ::IteratedHashWithStaticTransform();
  pcVar4 = "OpenProcessToken";
  pcVar6 = "Advapi32.dll";
  if (!param_3) {
    pcVar4 = "Advapi32.dll";
    pcVar6 = "OpenProcessToken";
  }
  pSVar1 = (SecBlock *)(this + 0x18);
  local_148 = &PTR__IteratedHashWithStaticTransform_01010888;
                    /* try { // try from 00be70ac to 00be7133 has its CatchHandler @ 00be7348 */
  CryptoPP::SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::Assign
            (aSStack_170,pSVar1);
  local_150 = this[0x38];
  local_140 = *(undefined8 *)(this + 0x48);
  pSVar2 = (SecBlock *)(this + 0x50);
  CryptoPP::
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
  ::Assign(aSStack_138,pSVar2);
  pSVar3 = (SecBlock *)(this + 0xb0);
  CryptoPP::
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
  ::Assign(aSStack_d8,pSVar3);
  uVar8 = __strlen_chk(pcVar6,0x11);
  (*(code *)local_178[5])(&local_178,pcVar6,uVar8);
  (*(code *)local_178[7])(&local_178,local_1a0);
  local_1a8 = 0;
  local_1b0 = 0;
                    /* try { // try from 00be7140 to 00be71d7 has its CatchHandler @ 00be734c */
  CryptoPP::SimpleKeyingInterface::SetKeyWithIV
            ((SimpleKeyingInterface *)(this + 0x118),(uchar *)local_1a0,0x10,(uchar *)&local_1b0,0xc
            );
  CryptoPP::SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::Assign
            (aSStack_170,pSVar1);
  local_150 = this[0x38];
  local_140 = *(undefined8 *)(this + 0x48);
  CryptoPP::
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
  ::Assign(aSStack_138,pSVar2);
  CryptoPP::
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
  ::Assign(aSStack_d8,pSVar3);
  uVar8 = __strlen_chk(pcVar4,0x11);
  (*(code *)local_178[5])(&local_178,pcVar4,uVar8);
  (*(code *)local_178[7])(&local_178,local_1a0);
  CryptoPP::SimpleKeyingInterface::SetKeyWithIV
            ((SimpleKeyingInterface *)(this + 600),(uchar *)local_1a0,0x10,(uchar *)&local_1b0,0xc);
  pcVar4 = "KERNEL32.DLL";
  pcVar6 = "RichEd20.Dll";
  if (!param_3) {
    pcVar4 = "RichEd20.Dll";
    pcVar6 = "KERNEL32.DLL";
  }
                    /* try { // try from 00be71f8 to 00be72df has its CatchHandler @ 00be7350 */
  CryptoPP::SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::Assign
            (aSStack_170,pSVar1);
  local_150 = this[0x38];
  local_140 = *(undefined8 *)(this + 0x48);
  CryptoPP::
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
  ::Assign(aSStack_138,pSVar2);
  CryptoPP::
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
  ::Assign(aSStack_d8,pSVar3);
  uVar8 = __strlen_chk(pcVar6,0xd);
  (*(code *)local_178[5])(&local_178,pcVar6,uVar8);
  (*(code *)local_178[7])(&local_178,local_1a0);
  *(undefined8 *)(this + 0x398) = local_1a0[0];
  *(undefined4 *)(this + 0x3a8) = local_184;
  CryptoPP::SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::Assign
            (aSStack_170,pSVar1);
  local_150 = this[0x38];
  local_140 = *(undefined8 *)(this + 0x48);
  CryptoPP::
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,false>>
  ::Assign(aSStack_138,pSVar2);
  CryptoPP::
  SecBlock<unsigned_int,CryptoPP::FixedSizeAllocatorWithCleanup<unsigned_int,16ul,CryptoPP::NullAllocator<unsigned_int>,true>>
  ::Assign(aSStack_d8,pSVar3);
  uVar8 = __strlen_chk(pcVar4,0xd);
  (*(code *)local_178[5])(&local_178,pcVar4,uVar8);
  (*(code *)local_178[7])(&local_178,local_1a0);
  *(undefined8 *)(this + 0x3a0) = local_1a0[0];
  *(undefined4 *)(this + 0x3ac) = local_184;
  CryptoPP::HMAC<CryptoPP::SHA256>::~HMAC((HMAC<CryptoPP::SHA256> *)&local_180);
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


