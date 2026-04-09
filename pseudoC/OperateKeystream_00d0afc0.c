// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OperateKeystream
// Entry Point: 00d0afc0
// Size: 216 bytes
// Signature: undefined __thiscall OperateKeystream(CTR_ModePolicy * this, KeystreamOperation param_1, uchar * param_2, uchar * param_3, ulong param_4)


/* CryptoPP::CTR_ModePolicy::OperateKeystream(CryptoPP::KeystreamOperation, unsigned char*, unsigned
   char const*, unsigned long) */

void __thiscall
CryptoPP::CTR_ModePolicy::OperateKeystream
          (CTR_ModePolicy *this,KeystreamOperation param_1,uchar *param_2,uchar *param_3,
          ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *(ulong *)(this + 0x28) & 0xffffffff;
  uVar2 = 0;
  if (param_3 != (uchar *)0x0) {
    uVar2 = uVar6;
  }
  if (param_4 != 0) {
    uVar7 = (ulong)((int)*(ulong *)(this + 0x28) - 1);
    do {
      bVar3 = *(byte *)(*(long *)(this + 0x58) + uVar7);
      uVar4 = 0x100 - (ulong)bVar3;
      if (param_4 <= uVar4) {
        uVar4 = param_4;
      }
      lVar5 = uVar4 * uVar6;
      (**(code **)(*(long *)(*(long *)(this + 0x10) + 8) + 0x58))
                ((long *)(*(long *)(this + 0x10) + 8),*(long *)(this + 0x58),param_3,param_2,lVar5,
                 0x11);
      uVar1 = (uint)bVar3 + (int)uVar4;
      *(char *)(*(long *)(this + 0x58) + uVar7) = (char)uVar1;
      if ((uVar1 & 0xff) == 0) {
        (**(code **)(*(long *)this + 0xb8))(this);
      }
      param_3 = param_3 + uVar4 * uVar2;
      param_2 = param_2 + lVar5;
      param_4 = param_4 - uVar4;
    } while (param_4 != 0);
  }
  return;
}


