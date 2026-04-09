// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LastPut
// Entry Point: 00cdab68
// Size: 368 bytes
// Signature: undefined __thiscall LastPut(HashVerificationFilter * this, uchar * param_1, ulong param_2)


/* CryptoPP::HashVerificationFilter::LastPut(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::HashVerificationFilter::LastPut(HashVerificationFilter *this,uchar *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  HashVerificationFailed *this_00;
  HashVerificationFilter local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(this + 0x98);
  if ((uVar1 & 1) == 0) {
    if (*(uint *)(this + 0x9c) == param_2) {
      bVar3 = (**(code **)(**(long **)(this + 0x90) + 0x90))
                        (*(long **)(this + 0x90),param_1,param_2);
      uVar1 = *(uint *)(this + 0x98);
      this[0xa0] = (HashVerificationFilter)(bVar3 & 1);
    }
    else {
      this[0xa0] = (HashVerificationFilter)0x0;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
      (**(code **)(*plVar4 + 0x38))(plVar4,param_1,param_2,0,1);
    }
  }
  else {
    bVar3 = (**(code **)(**(long **)(this + 0x90) + 0x90))
                      (*(long **)(this + 0x90),*(undefined8 *)(this + 0xc0),
                       *(undefined4 *)(this + 0x9c));
    this[0xa0] = (HashVerificationFilter)(bVar3 & 1);
  }
  uVar1 = *(uint *)(this + 0x98);
  if ((uVar1 >> 3 & 1) != 0) {
    plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    local_3c[0] = this[0xa0];
    (**(code **)(*plVar4 + 0x38))(plVar4,local_3c,1,0,1);
    uVar1 = *(uint *)(this + 0x98);
  }
  if (((uVar1 >> 4 & 1) != 0) && (this[0xa0] == (HashVerificationFilter)0x0)) {
    this_00 = (HashVerificationFailed *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cdacb8 to 00cdacbb has its CatchHandler @ 00cdacd8 */
    HashVerificationFailed::HashVerificationFailed(this_00);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&HashVerificationFailed::typeinfo,Exception::~Exception);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


