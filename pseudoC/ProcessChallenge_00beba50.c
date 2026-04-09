// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessChallenge
// Entry Point: 00beba50
// Size: 780 bytes
// Signature: undefined __thiscall ProcessChallenge(KeyAgreementResponder * this, SecureRandomGenerator * param_1, uchar * param_2, int param_3, uchar * param_4, int param_5, uchar * param_6, uint param_7)


/* KeyAgreementResponder::ProcessChallenge(SecureRandomGenerator*, unsigned char const*, int,
   unsigned char*, int, unsigned char*, unsigned int) */

undefined4 __thiscall
KeyAgreementResponder::ProcessChallenge
          (KeyAgreementResponder *this,SecureRandomGenerator *param_1,uchar *param_2,int param_3,
          uchar *param_4,int param_5,uchar *param_6,uint param_7)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  uchar *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *this_00;
  long lVar8;
  undefined4 uVar9;
  SimpleKeyingInterface aSStack_178 [8];
  long local_170 [33];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 != (SecureRandomGenerator *)0x0) {
    this_00 = (long *)(this + 8);
    plVar3 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
    iVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3,1);
    if (iVar2 + -1 == param_3) {
      plVar3 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
      iVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3,1);
      if (iVar2 + 0x1f == param_5) {
        plVar3 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
        iVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3,0);
        uVar9 = 0;
        if (param_7 != iVar2 * 2) goto LAB_00bebcf0;
        plVar3 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
        uVar4 = (**(code **)(*plVar3 + 0xc0))(plVar3,1);
        uVar4 = uVar4 & 0xffffffff;
        puVar5 = (uchar *)CryptoPP::UnalignedAllocate(uVar4);
        *puVar5 = '\x04';
                    /* try { // try from 00bebb6c to 00bebb83 has its CatchHandler @ 00bebd78 */
        plVar3 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
        iVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3,1);
        memcpy(puVar5 + 1,param_2,(ulong)(iVar2 - 1));
                    /* try { // try from 00bebb9c to 00bebc13 has its CatchHandler @ 00bebd78 */
        uVar6 = CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::Agree
                          ((DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint> *)this_00,param_6,
                           *(uchar **)(this + 0x1e0),puVar5,true);
        if ((uVar6 & 1) == 0) {
LAB_00bebd24:
          uVar9 = 0;
        }
        else {
          plVar3 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
          uVar6 = (**(code **)(*plVar3 + 0xc0))(plVar3,0);
          uVar6 = CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::Agree
                            ((DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint> *)this_00,
                             param_6 + (uVar6 & 0xffffffff),*(uchar **)(this + 0x1a0),puVar5,true);
          if ((uVar6 & 1) == 0) goto LAB_00bebd24;
          lVar8 = *(long *)(this + 0x200);
          plVar3 = (long *)(**(code **)(*(long *)(this + 8) + 0x88))(this_00);
          iVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3,1);
          memcpy(param_4,(void *)(lVar8 + 1),(ulong)(iVar2 - 1));
                    /* try { // try from 00bebc24 to 00bebc2b has its CatchHandler @ 00bebd5c */
          CryptoPP::HMAC<CryptoPP::SHA256>::HMAC();
                    /* try { // try from 00bebc2c to 00bebc6f has its CatchHandler @ 00bebd60 */
          uVar6 = __strlen_chk("GetTextMetrics",0xf);
          CryptoPP::SimpleKeyingInterface::SetKey
                    (aSStack_178,(uchar *)"GetTextMetrics",uVar6,(NameValuePairs *)&DAT_0211f5e0);
          CryptoPP::HMAC_Base::Update((HMAC_Base *)aSStack_178,param_6,(ulong)param_7);
                    /* try { // try from 00bebc78 to 00bebcdb has its CatchHandler @ 00bebd68 */
          plVar3 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
          uVar6 = (**(code **)(*plVar3 + 0xc0))(plVar3,1);
          uVar7 = __strlen_chk("shfolder.dll",0xd);
          (**(code **)(local_170[0] + 0x28))(local_170,"shfolder.dll",uVar7);
          (**(code **)(local_170[0] + 0x38))(local_170,param_4 + ((uVar6 & 0xffffffff) - 1));
          CryptoPP::HMAC<CryptoPP::SHA256>::~HMAC((HMAC<CryptoPP::SHA256> *)aSStack_178);
          uVar9 = 1;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          puVar5[uVar4 - 1] = '\0';
        }
                    /* try { // try from 00bebd4c to 00bebd53 has its CatchHandler @ 00bebd64 */
        CryptoPP::UnalignedDeallocate(puVar5);
        goto LAB_00bebcf0;
      }
    }
  }
  uVar9 = 0;
LAB_00bebcf0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


