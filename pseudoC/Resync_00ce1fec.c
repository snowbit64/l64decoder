// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Resync
// Entry Point: 00ce1fec
// Size: 416 bytes
// Signature: undefined __thiscall Resync(GCM_Base * this, uchar * param_1, ulong param_2)


/* CryptoPP::GCM_Base::Resync(unsigned char const*, unsigned long) */

void __thiscall CryptoPP::GCM_Base::Resync(GCM_Base *this,uchar *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *this_00;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  size_t __n;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  uVar4 = (**(code **)(*(long *)this + 0x150))();
  lVar5 = *(long *)(this + 0x30);
  puVar1 = (undefined8 *)(lVar5 + 0x10);
  if (param_2 == 0xc) {
    uVar7 = *(undefined8 *)param_1;
    *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(param_1 + 8);
    *puVar1 = uVar7;
    *(undefined4 *)(lVar5 + 0x1c) = 0x1000000;
    iVar3 = *(int *)(this + 0x54);
    goto joined_r0x00ce2154;
  }
  *puVar1 = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  if (param_2 < 0x10) {
    __n = param_2;
    if (param_2 != 0) goto LAB_00ce20f4;
  }
  else {
    __n = AuthenticateBlocks(this,param_1,param_2);
    param_1 = param_1 + (param_2 - __n);
    if (__n != 0) {
LAB_00ce20f4:
      memcpy(*(void **)(this + 0x30),param_1,__n);
      memset((void *)(*(long *)(this + 0x30) + __n),0,0x10 - __n);
      AuthenticateBlocks(this,*(uchar **)(this + 0x30),0x10);
    }
  }
  puVar6 = *(undefined8 **)(this + 0x30);
  uVar2 = (param_2 << 3 & 0xff00ff00ff00ff00) >> 8 | (param_2 << 3 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  *puVar6 = 0;
  puVar6[1] = uVar2 >> 0x20 | uVar2 << 0x20;
  AuthenticateBlocks(this,*(uchar **)(this + 0x30),0x10);
  iVar3 = *(int *)(this + 0x54);
joined_r0x00ce2154:
  if (iVar3 < 2) {
    this_00 = (long *)(this + 0x58);
    SimpleKeyingInterface::ThrowIfInvalidIV((SimpleKeyingInterface *)this_00,(uchar *)puVar1);
    *(undefined8 *)(this + 0x68) = uVar4;
    (**(code **)(*(long *)(this + 0x58) + 0x98))(this_00);
    (**(code **)(*(long *)(this + 0x58) + 0x90))(this_00,0);
    iVar3 = (**(code **)(*(long *)(this + 0x58) + 0x40))(this_00);
    if (iVar3 < 4) {
      (**(code **)(*this_00 + 0x60))(this_00,puVar1,0xffffffff);
    }
  }
  else {
    AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
    ::Resynchronize((AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
                     *)(this + 0x58),(uchar *)puVar1,0x10);
  }
  AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
  ::Seek((AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
          *)(this + 0x58),0x10);
  *puVar1 = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  return;
}


