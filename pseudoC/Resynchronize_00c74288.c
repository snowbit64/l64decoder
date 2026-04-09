// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Resynchronize
// Entry Point: 00c74288
// Size: 244 bytes
// Signature: undefined __thiscall Resynchronize(AuthenticatedSymmetricCipherBase * this, uchar * param_1, int param_2)


/* CryptoPP::AuthenticatedSymmetricCipherBase::Resynchronize(unsigned char const*, int) */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipherBase::Resynchronize
          (AuthenticatedSymmetricCipherBase *this,uchar *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  BadState *this_00;
  basic_string abStack_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x54) < 1) {
    this_00 = (BadState *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c74330 to 00c7433b has its CatchHandler @ 00c743a4 */
    (**(code **)(*(long *)this + 0xb0))(abStack_50,this);
                    /* try { // try from 00c74340 to 00c74377 has its CatchHandler @ 00c7437c */
    AuthenticatedSymmetricCipher::BadState::BadState
              (this_00,abStack_50,"Resynchronize","key is set");
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&AuthenticatedSymmetricCipher::BadState::typeinfo,Exception::~Exception);
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0x100000000;
  uVar2 = SimpleKeyingInterface::ThrowIfInvalidIVLength((SimpleKeyingInterface *)this,param_2);
  (**(code **)(*(long *)this + 0x110))(this,param_1,uVar2);
  *(undefined4 *)(this + 0x54) = 2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


