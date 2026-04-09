// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetThisPointer<CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>>
// Entry Point: 00cc6e28
// Size: 276 bytes
// Signature: bool __thiscall GetThisPointer<CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>>(NameValuePairs * this, DL_PrivateKey * * param_1)


/* bool CryptoPP::NameValuePairs::GetThisPointer<CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>
   >(CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>*&) const */

bool __thiscall
CryptoPP::NameValuePairs::GetThisPointer<CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>>
          (NameValuePairs *this,DL_PrivateKey **param_1)

{
  void *pvVar1;
  long lVar2;
  byte bVar3;
  ulong *puVar4;
  byte local_68;
  undefined8 local_67;
  undefined4 local_5f;
  undefined local_5b;
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_68 = 0x18;
  local_5f = 0x3a726574;
  local_67._0_1_ = 'T';
  local_67._1_1_ = 'h';
  local_67._2_1_ = 'i';
  local_67._3_1_ = 's';
  local_67._4_1_ = 'P';
  local_67._5_1_ = 'o';
  local_67._6_1_ = 'i';
  local_67._7_1_ = 'n';
  local_5b = 0;
                    /* try { // try from 00cc6e78 to 00cc6e87 has its CatchHandler @ 00cc6f6c */
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
                    /* try { // try from 00cc6ec0 to 00cc6ed3 has its CatchHandler @ 00cc6f3c */
  bVar3 = (**(code **)(*(long *)this + 0x10))
                    (this,pvVar1,&DL_PrivateKey<CryptoPP::EC2NPoint>*::typeinfo,param_1);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_68 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) != local_38) {
LAB_00cc6f38:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    operator_delete(local_58);
    if (*(long *)(lVar2 + 0x28) != local_38) goto LAB_00cc6f38;
  }
  return (bool)(bVar3 & 1);
}


