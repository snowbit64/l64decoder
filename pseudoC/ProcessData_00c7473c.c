// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessData
// Entry Point: 00c7473c
// Size: 744 bytes
// Signature: undefined __thiscall ProcessData(AuthenticatedSymmetricCipherBase * this, uchar * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::AuthenticatedSymmetricCipherBase::ProcessData(unsigned char*, unsigned char const*,
   unsigned long) */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipherBase::ProcessData
          (AuthenticatedSymmetricCipherBase *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  BadState *pBVar5;
  InvalidArgument *this_00;
  undefined8 *puVar6;
  int iVar7;
  char acStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar7 = *(int *)(this + 0x54);
  if (iVar7 < 2) {
    *(ulong *)(this + 0x40) = *(long *)(this + 0x40) + param_3;
  }
  else {
    lVar4 = (**(code **)(*(long *)this + 0x88))(this);
    if ((ulong)(lVar4 - *(long *)(this + 0x40)) < param_3) {
      this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c749c8 to 00c749d3 has its CatchHandler @ 00c74a74 */
      (**(code **)(*(long *)this + 0xb0))(acStack_88,this);
                    /* try { // try from 00c749d4 to 00c749e3 has its CatchHandler @ 00c74a5c */
      puVar6 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append(acStack_88);
      local_60 = puVar6[2];
      uStack_68 = puVar6[1];
      local_70 = *puVar6;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
                    /* try { // try from 00c74a00 to 00c74a27 has its CatchHandler @ 00c74a2c */
      InvalidArgument::InvalidArgument(this_00,(basic_string *)&local_70);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    iVar7 = *(int *)(this + 0x54);
    *(ulong *)(this + 0x40) = *(long *)(this + 0x40) + param_3;
  }
  while (iVar7 == 2) {
    (**(code **)(*(long *)this + 0x120))(this);
    *(undefined4 *)(this + 0x50) = 0;
    uVar2 = (**(code **)(*(long *)this + 0xf8))(this);
    uVar3 = (**(code **)(*(long *)(this + 0x10) + 0x80))(this + 0x10);
    iVar7 = 3;
    if (((uVar2 ^ uVar3) & 1) != 0) {
      iVar7 = 4;
    }
    *(int *)(this + 0x54) = iVar7;
  }
  switch(iVar7) {
  case 0:
  case 1:
    pBVar5 = (BadState *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c74908 to 00c74913 has its CatchHandler @ 00c74aac */
    (**(code **)(*(long *)this + 0xb0))(&local_70,this);
                    /* try { // try from 00c74918 to 00c7494f has its CatchHandler @ 00c74a98 */
    AuthenticatedSymmetricCipher::BadState::BadState
              (pBVar5,(basic_string *)&local_70,"ProcessData","setting key and IV");
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pBVar5,&AuthenticatedSymmetricCipher::BadState::typeinfo,Exception::~Exception);
  case 3:
    AuthenticateData(this,param_2,param_3);
    lVar4 = (**(code **)(*(long *)this + 0xf0))(this);
    (**(code **)(*(long *)(lVar4 + 8) + 0x48))((long *)(lVar4 + 8),param_1,param_2,param_3);
    break;
  case 4:
    lVar4 = (**(code **)(*(long *)this + 0xf0))(this);
    (**(code **)(*(long *)(lVar4 + 8) + 0x48))((long *)(lVar4 + 8),param_1,param_2,param_3);
    AuthenticateData(this,param_1,param_3);
    break;
  case 5:
    pBVar5 = (BadState *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c7496c to 00c74977 has its CatchHandler @ 00c74a94 */
    (**(code **)(*(long *)this + 0xb0))(&local_70,this);
                    /* try { // try from 00c7497c to 00c749ab has its CatchHandler @ 00c74a78 */
    AuthenticatedSymmetricCipher::BadState::BadState
              (pBVar5,(basic_string *)&local_70,
               "ProcessData was called after footer input has started");
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pBVar5,&AuthenticatedSymmetricCipher::BadState::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


