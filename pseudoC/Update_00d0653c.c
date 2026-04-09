// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Update
// Entry Point: 00d0653c
// Size: 612 bytes
// Signature: undefined __thiscall Update(IteratedHashBase<unsigned_long,CryptoPP::HashTransformation> * this, uchar * param_1, ulong param_2)


/* CryptoPP::IteratedHashBase<unsigned long, CryptoPP::HashTransformation>::Update(unsigned char
   const*, unsigned long) */

void __thiscall
CryptoPP::IteratedHashBase<unsigned_long,CryptoPP::HashTransformation>::Update
          (IteratedHashBase<unsigned_long,CryptoPP::HashTransformation> *this,uchar *param_1,
          ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  uchar *__dest;
  HashInputTooLong *this_00;
  ulong uVar5;
  ulong __n;
  ulong uVar6;
  basic_string abStack_70 [6];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_2 != 0) {
    uVar6 = *(ulong *)(this + 8);
    uVar5 = *(ulong *)(this + 0x10);
    *(ulong *)(this + 8) = uVar6 + param_2;
    if ((CARRY8(uVar6,param_2)) && (*(ulong *)(this + 0x10) = uVar5 + 1, 0xfffffffffffffffe < uVar5)
       ) {
      this_00 = (HashInputTooLong *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d06768 to 00d06773 has its CatchHandler @ 00d067c4 */
      (**(code **)(*(long *)this + 0x18))(abStack_70,this);
                    /* try { // try from 00d06778 to 00d0679f has its CatchHandler @ 00d067a0 */
      HashInputTooLong::HashInputTooLong(this_00,abStack_70);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&HashInputTooLong::typeinfo,Exception::~Exception);
    }
    uVar3 = (**(code **)(*(long *)this + 0x50))(this);
    uVar5 = (ulong)uVar3;
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar3 - 1;
    }
    uVar1 = uVar1 & (uint)uVar6;
    uVar6 = (ulong)uVar1;
    __dest = (uchar *)(**(code **)(*(long *)this + 0xc0))(this);
    if (uVar1 == 0) {
      uVar6 = param_2;
      if (uVar5 <= param_2) {
LAB_00d0664c:
        if (param_1 == __dest) {
          uVar4 = (**(code **)(*(long *)this + 0x50))(this);
          (**(code **)(*(long *)this + 0xb8))(this,__dest,uVar4);
          if (*(long *)(lVar2 + 0x28) == local_58) {
            return;
          }
          goto LAB_00d06750;
        }
        param_2 = uVar6;
        if (((ulong)param_1 & 7) == 0) {
          param_2 = (**(code **)(*(long *)this + 0xb8))(this,param_1,uVar6);
          param_1 = param_1 + (uVar6 - param_2);
        }
        else {
          do {
            if (param_1 != (uchar *)0x0) {
              memcpy(__dest,param_1,uVar5);
            }
            uVar4 = (**(code **)(*(long *)this + 0x50))(this);
            (**(code **)(*(long *)this + 0xb8))(this,__dest,uVar4);
            param_1 = param_1 + uVar5;
            param_2 = param_2 - uVar5;
          } while (uVar5 <= param_2);
        }
      }
LAB_00d06680:
      if ((param_1 == (uchar *)0x0) || (param_1 == __dest)) goto LAB_00d0669c;
    }
    else {
      if (uVar5 <= uVar6 + param_2) {
        if (param_1 == (uchar *)0x0) {
          __n = (ulong)(uVar3 - uVar1);
        }
        else {
          __n = (ulong)(uVar3 - uVar1);
          memcpy(__dest + uVar6,param_1,__n);
        }
        uVar4 = (**(code **)(*(long *)this + 0x50))(this);
        (**(code **)(*(long *)this + 0xb8))(this,__dest,uVar4);
        param_1 = param_1 + __n;
        param_2 = param_2 - __n;
        uVar6 = param_2;
        if (uVar5 <= param_2) goto LAB_00d0664c;
        goto LAB_00d06680;
      }
      if (param_1 == (uchar *)0x0) goto LAB_00d0669c;
      __dest = __dest + uVar6;
    }
    memcpy(__dest,param_1,param_2);
  }
LAB_00d0669c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_00d06750:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


