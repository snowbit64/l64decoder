// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessAnswer
// Entry Point: 00beb130
// Size: 812 bytes
// Signature: undefined __thiscall ProcessAnswer(KeyAgreementInitiator * this, uchar * param_1, int param_2, uchar * param_3, uint param_4)


/* KeyAgreementInitiator::ProcessAnswer(unsigned char const*, int, unsigned char*, unsigned int) */

uint __thiscall
KeyAgreementInitiator::ProcessAnswer
          (KeyAgreementInitiator *this,uchar *param_1,int param_2,uchar *param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uchar *puVar6;
  undefined8 uVar7;
  long *this_00;
  ulong uVar8;
  uchar auStack_198 [32];
  undefined **local_178;
  undefined **local_170 [2];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined local_148;
  undefined **local_140;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this_00 = (long *)(this + 8);
  plVar4 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
  iVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4,1);
  if (iVar2 + 0x1f == param_2) {
    uVar8 = *(ulong *)(this + 0x1b8);
    plVar4 = (long *)(**(code **)(*(long *)(this + 8) + 0x88))(this_00);
    (**(code **)(*plVar4 + 0xa0))();
    uVar5 = CryptoPP::Integer::ByteCount();
    if (uVar8 == (uVar5 & 0xffffffff)) {
      plVar4 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
      iVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4,0);
      uVar3 = 0;
      if (param_4 != iVar2 * 2) goto LAB_00beb3f0;
      plVar4 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
      uVar5 = (**(code **)(*plVar4 + 0xc0))(plVar4,1);
      uVar5 = uVar5 & 0xffffffff;
      puVar6 = (uchar *)CryptoPP::UnalignedAllocate(uVar5);
      *puVar6 = '\x04';
                    /* try { // try from 00beb240 to 00beb257 has its CatchHandler @ 00beb488 */
      plVar4 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
      iVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4,1);
      memcpy(puVar6 + 1,param_1,(ulong)(iVar2 - 1));
                    /* try { // try from 00beb270 to 00beb2bf has its CatchHandler @ 00beb488 */
      uVar8 = CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::Agree
                        ((DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint> *)this_00,param_3,
                         *(uchar **)(this + 0x1c0),puVar6,true);
      if ((uVar8 & 1) == 0) {
LAB_00beb424:
        uVar3 = 0;
      }
      else {
        plVar4 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
        uVar8 = (**(code **)(*plVar4 + 0xc0))(plVar4,0);
        uVar8 = CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::Agree
                          ((DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint> *)this_00,
                           param_3 + (uVar8 & 0xffffffff),*(uchar **)(this + 0x1c0),
                           *(uchar **)(this + 0x1a0),true);
        if ((uVar8 & 1) == 0) goto LAB_00beb424;
        local_178 = &PTR__SimpleKeyingInterface_00fef588;
                    /* try { // try from 00beb2dc to 00beb2e3 has its CatchHandler @ 00beb46c */
        CryptoPP::Algorithm::Algorithm((Algorithm *)local_170,true);
        local_158 = 0;
        uStack_150 = 0;
        local_148 = 0;
        local_160 = 0xffffffffffffffff;
        local_178 = &PTR__HMAC_00fec030;
        local_170[0] = &PTR__HMAC_00fec100;
                    /* try { // try from 00beb30c to 00beb30f has its CatchHandler @ 00beb45c */
        CryptoPP::
        IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
        ::IteratedHashWithStaticTransform();
        local_140 = &PTR__IteratedHashWithStaticTransform_01010888;
                    /* try { // try from 00beb320 to 00beb35f has its CatchHandler @ 00beb470 */
        uVar8 = __strlen_chk("GetTextMetrics",0xf);
        CryptoPP::SimpleKeyingInterface::SetKey
                  ((SimpleKeyingInterface *)&local_178,(uchar *)"GetTextMetrics",uVar8,
                   (NameValuePairs *)&DAT_0211f5e0);
        CryptoPP::HMAC_Base::Update((HMAC_Base *)&local_178,param_3,(ulong)param_4);
                    /* try { // try from 00beb360 to 00beb3db has its CatchHandler @ 00beb478 */
        uVar7 = __strlen_chk("shfolder.dll",0xd);
        (*(code *)local_170[0][5])(local_170,"shfolder.dll",uVar7);
        (*(code *)local_170[0][7])(local_170,auStack_198);
        plVar4 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
        uVar8 = (**(code **)(*plVar4 + 0xc0))(plVar4,1);
        uVar3 = CryptoPP::VerifyBufsEqual(auStack_198,param_1 + ((uVar8 & 0xffffffff) - 1),0x20);
        CryptoPP::HMAC<CryptoPP::SHA256>::~HMAC((HMAC<CryptoPP::SHA256> *)&local_178);
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar6[uVar5 - 1] = '\0';
      }
                    /* try { // try from 00beb44c to 00beb453 has its CatchHandler @ 00beb474 */
      CryptoPP::UnalignedDeallocate(puVar6);
      goto LAB_00beb3f0;
    }
  }
  uVar3 = 0;
LAB_00beb3f0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


