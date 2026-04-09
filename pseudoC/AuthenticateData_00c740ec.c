// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AuthenticateData
// Entry Point: 00c740ec
// Size: 264 bytes
// Signature: undefined __thiscall AuthenticateData(AuthenticatedSymmetricCipherBase * this, uchar * param_1, ulong param_2)


/* CryptoPP::AuthenticatedSymmetricCipherBase::AuthenticateData(unsigned char const*, unsigned long)
    */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipherBase::AuthenticateData
          (AuthenticatedSymmetricCipherBase *this,uchar *param_1,ulong param_2)

{
  void *__dest;
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong __n;
  void *__dest_00;
  ulong uVar4;
  
  if (param_1 == (uchar *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  uVar3 = (**(code **)(*(long *)this + 0x100))();
  __dest_00 = *(void **)(this + 0x30);
  uVar4 = (ulong)uVar3;
  if (__dest_00 != (void *)0x0) {
    uVar1 = *(uint *)(this + 0x50);
    if (uVar1 != 0) {
      __dest = (void *)((long)__dest_00 + (ulong)uVar1);
      if (uVar1 + param_2 < uVar4) {
        memcpy(__dest,param_1,param_2);
        __n = (ulong)(uint)(*(int *)(this + 0x50) + (int)param_2);
        goto LAB_00c741dc;
      }
      memcpy(__dest,param_1,(ulong)(uVar3 - uVar1));
      (**(code **)(*(long *)this + 0x118))(this,__dest_00,uVar4);
      iVar2 = *(int *)(this + 0x50);
      *(undefined4 *)(this + 0x50) = 0;
      param_1 = param_1 + (uVar3 - iVar2);
      param_2 = param_2 - (uVar3 - iVar2);
    }
  }
  __n = param_2;
  if (uVar4 <= param_2) {
    __n = (**(code **)(*(long *)this + 0x118))(this,param_1,param_2);
    param_1 = param_1 + (param_2 - __n);
  }
  if ((__dest_00 != (void *)0x0) && (__n != 0)) {
    memcpy(__dest_00,param_1,__n);
  }
LAB_00c741dc:
  *(int *)(this + 0x50) = (int)__n;
  return;
}


