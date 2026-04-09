// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UncheckedSetKey
// Entry Point: 00c7f33c
// Size: 224 bytes
// Signature: undefined __thiscall UncheckedSetKey(CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>> * this, uchar * param_1, uint param_2, NameValuePairs * param_3)


/* CryptoPP::CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::CFB_ModePolicy> >::UncheckedSetKey(unsigned char const*, unsigned int,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::
CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
::UncheckedSetKey(CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
                  *this,uchar *param_1,uint param_2,NameValuePairs *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)(**(code **)(*(long *)this + 0xe8))(this,param_1,param_2);
  (**(code **)(*plVar3 + 0x40))(plVar3,param_3,param_1,param_2);
  iVar2 = (**(code **)(*(long *)this + 0x40))(this);
  if (iVar2 < 4) {
    uVar4 = SimpleKeyingInterface::GetIVAndThrowIfInvalid
                      ((SimpleKeyingInterface *)this,param_3,&local_50);
    (**(code **)(*plVar3 + 0x48))(plVar3,uVar4,local_50);
  }
  uVar5 = (**(code **)(*plVar3 + 0x18))(plVar3);
  *(ulong *)(this + 0x68) = uVar5 & 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


