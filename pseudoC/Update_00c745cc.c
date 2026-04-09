// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Update
// Entry Point: 00c745cc
// Size: 300 bytes
// Signature: undefined __thiscall Update(AuthenticatedSymmetricCipherBase * this, uchar * param_1, ulong param_2)


/* CryptoPP::AuthenticatedSymmetricCipherBase::Update(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipherBase::Update
          (AuthenticatedSymmetricCipherBase *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  BadState *this_00;
  long *plVar2;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    switch(*(undefined4 *)(this + 0x54)) {
    case 0:
    case 1:
      this_00 = (BadState *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c746ac to 00c746b7 has its CatchHandler @ 00c74720 */
      (**(code **)(*(long *)this + 0xb0))(abStack_50,this);
                    /* try { // try from 00c746bc to 00c746f3 has its CatchHandler @ 00c746f8 */
      AuthenticatedSymmetricCipher::BadState::BadState
                (this_00,abStack_50,"Update","setting key and IV");
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&AuthenticatedSymmetricCipher::BadState::typeinfo,Exception::~Exception);
    case 2:
      AuthenticateData(this,param_1,param_2);
      plVar2 = (long *)(this + 0x38);
      break;
    case 3:
    case 4:
      (**(code **)(*(long *)this + 0x128))(this);
      *(undefined8 *)(this + 0x50) = 0x500000000;
    case 5:
      AuthenticateData(this,param_1,param_2);
      plVar2 = (long *)(this + 0x48);
      break;
    default:
      goto switchD_00c7461c_caseD_6;
    }
    *plVar2 = *plVar2 + param_2;
  }
switchD_00c7461c_caseD_6:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


