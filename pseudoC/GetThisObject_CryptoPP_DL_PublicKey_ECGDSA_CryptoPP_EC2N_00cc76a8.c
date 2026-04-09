// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetThisObject<CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>>
// Entry Point: 00cc76a8
// Size: 276 bytes
// Signature: bool __thiscall GetThisObject<CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>>(NameValuePairs * this, DL_PublicKey_ECGDSA * param_1)


/* bool CryptoPP::NameValuePairs::GetThisObject<CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>
   >(CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>&) const */

bool __thiscall
CryptoPP::NameValuePairs::GetThisObject<CryptoPP::DL_PublicKey_ECGDSA<CryptoPP::EC2N>>
          (NameValuePairs *this,DL_PublicKey_ECGDSA *param_1)

{
  void *pvVar1;
  long lVar2;
  byte bVar3;
  ulong *puVar4;
  byte local_68;
  undefined7 local_67;
  undefined4 uStack_60;
  undefined local_5c;
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_68 = 0x16;
  local_67 = 0x6a624f73696854;
  uStack_60 = 0x3a746365;
  local_5c = 0;
                    /* try { // try from 00cc76f8 to 00cc7707 has its CatchHandler @ 00cc77ec */
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_68);
  local_40 = (void *)puVar4[2];
  uStack_48 = puVar4[1];
  local_50 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  pvVar1 = (void *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pvVar1 = local_40;
  }
                    /* try { // try from 00cc7740 to 00cc7753 has its CatchHandler @ 00cc77bc */
  bVar3 = (**(code **)(*(long *)this + 0x10))
                    (this,pvVar1,&DL_PublicKey_ECGDSA<CryptoPP::EC2N>::typeinfo,param_1);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_68 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) != local_38) {
LAB_00cc77b8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    operator_delete(local_58);
    if (*(long *)(lVar2 + 0x28) != local_38) goto LAB_00cc77b8;
  }
  return (bool)(bVar3 & 1);
}


