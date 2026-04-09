// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LastPut
// Entry Point: 00cdc4c8
// Size: 380 bytes
// Signature: undefined __thiscall LastPut(SignatureVerificationFilter * this, uchar * param_1, ulong param_2)


/* CryptoPP::SignatureVerificationFilter::LastPut(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::SignatureVerificationFilter::LastPut
          (SignatureVerificationFilter *this,uchar *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  SignatureVerificationFailed *this_00;
  SignatureVerificationFilter local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(this + 0x90);
  if (((byte)this[0xa0] & 1) == 0) {
    (**(code **)(*plVar4 + 0x58))(plVar4,*(undefined8 *)(this + 0x98),param_1,param_2);
    bVar3 = (**(code **)(**(long **)(this + 0x90) + 0x68))
                      (*(long **)(this + 0x90),*(undefined8 *)(this + 0x98));
    this[200] = (SignatureVerificationFilter)(bVar3 & 1);
    if (((byte)this[0xa0] >> 2 & 1) == 0) {
      uVar1 = *(uint *)(this + 0xa0);
    }
    else {
      plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
      (**(code **)(*plVar4 + 0x38))(plVar4,param_1,param_2,0,1);
      uVar1 = *(uint *)(this + 0xa0);
    }
  }
  else {
    (**(code **)(*plVar4 + 0x58))
              (plVar4,*(undefined8 *)(this + 0x98),*(undefined8 *)(this + 0xc0),
               *(undefined8 *)(this + 0xb8));
    bVar3 = (**(code **)(**(long **)(this + 0x90) + 0x68))
                      (*(long **)(this + 0x90),*(undefined8 *)(this + 0x98));
    this[200] = (SignatureVerificationFilter)(bVar3 & 1);
    uVar1 = *(uint *)(this + 0xa0);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    local_3c[0] = this[200];
    (**(code **)(*plVar4 + 0x38))(plVar4,local_3c,1,0,1);
    uVar1 = *(uint *)(this + 0xa0);
  }
  if (((uVar1 >> 4 & 1) != 0) && (this[200] == (SignatureVerificationFilter)0x0)) {
    this_00 = (SignatureVerificationFailed *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cdc624 to 00cdc627 has its CatchHandler @ 00cdc644 */
    SignatureVerificationFailed::SignatureVerificationFailed(this_00);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&SignatureVerificationFailed::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


