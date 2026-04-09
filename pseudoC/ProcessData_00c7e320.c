// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessData
// Entry Point: 00c7e320
// Size: 664 bytes
// Signature: undefined __thiscall ProcessData(CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>> * this, uchar * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::ProcessData(unsigned char*, unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::
CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>>
::ProcessData(CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>>
              *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uchar *puVar9;
  ulong uVar10;
  long lVar11;
  
  plVar5 = (long *)(**(code **)(*(long *)this + 0x88))();
  uVar6 = (**(code **)(*plVar5 + 0x18))();
  uVar6 = uVar6 & 0xffffffff;
  lVar7 = (**(code **)(*plVar5 + 0x20))(plVar5);
  uVar10 = *(ulong *)(this + 0x10);
  if (uVar10 != 0) {
    uVar8 = param_3;
    if (uVar10 <= param_3) {
      uVar8 = uVar10;
    }
    (**(code **)(*(long *)this + 0xc0))(this,param_1,lVar7 + (uVar6 - uVar10),param_2,uVar8);
    param_3 = param_3 - uVar8;
    param_2 = param_2 + uVar8;
    param_1 = param_1 + uVar8;
    *(ulong *)(this + 0x10) = *(long *)(this + 0x10) - uVar8;
  }
  uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
  uVar10 = (ulong)uVar4;
  if (uVar4 == 0) {
LAB_00c7e40c:
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar8 = (ulong)param_1 / uVar10;
    }
    bVar2 = param_1 == (uchar *)(uVar8 * uVar10);
  }
  else {
    uVar1 = uVar4 - 1;
    if (uVar1 == 0) {
      bVar2 = true;
    }
    else {
      if ((uVar4 & uVar1) != 0) goto LAB_00c7e40c;
      bVar2 = (uVar1 & (uint)param_1) == 0;
    }
  }
  uVar8 = (**(code **)(*plVar5 + 0x30))(plVar5);
  if ((((uVar8 & 1) == 0) || (param_3 < uVar6)) || (!bVar2)) {
    if (uVar6 <= param_3) {
      lVar11 = 0;
      do {
        (**(code **)(*plVar5 + 0x28))(plVar5);
        (**(code **)(*(long *)this + 0xc0))(this,param_1 + lVar11,lVar7,param_2 + lVar11,uVar6);
        param_3 = param_3 - uVar6;
        lVar11 = lVar11 + uVar6;
      } while (uVar6 <= param_3);
      param_1 = param_1 + lVar11;
      param_2 = param_2 + lVar11;
    }
    goto joined_r0x00c7e4a8;
  }
  if (uVar4 == 0) {
LAB_00c7e528:
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar8 = (ulong)param_2 / uVar10;
    }
    bVar3 = param_2 == (uchar *)(uVar8 * uVar10);
  }
  else {
    uVar1 = uVar4 - 1;
    if (uVar1 == 0) {
      bVar3 = true;
    }
    else {
      if ((uVar4 & uVar1) != 0) goto LAB_00c7e528;
      bVar3 = (uVar1 & (uint)param_2) == 0;
    }
  }
  uVar4 = (**(code **)(*(long *)(this + 8) + 0x80))();
  puVar9 = param_2;
  if (!(bool)(bVar2 & bVar3)) {
    memcpy(param_1,param_2,param_3);
    puVar9 = param_1;
  }
  uVar10 = 0;
  if (uVar6 != 0) {
    uVar10 = param_3 / uVar6;
  }
  (**(code **)(*plVar5 + 0x38))(plVar5,param_1,puVar9,~uVar4 & 1,uVar10);
  lVar11 = uVar10 * uVar6;
  param_3 = param_3 - lVar11;
  param_2 = param_2 + lVar11;
  param_1 = param_1 + lVar11;
joined_r0x00c7e4a8:
  if (param_3 != 0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
    (**(code **)(*(long *)this + 0xc0))(this,param_1,lVar7,param_2,param_3);
    *(ulong *)(this + 0x10) = uVar6 - param_3;
  }
  return;
}


