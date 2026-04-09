// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Update
// Entry Point: 00d08594
// Size: 644 bytes
// Signature: undefined __thiscall Update(IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode> * this, uchar * param_1, ulong param_2)


/* CryptoPP::IteratedHashBase<unsigned int, CryptoPP::MessageAuthenticationCode>::Update(unsigned
   char const*, unsigned long) */

void __thiscall
CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode>::Update
          (IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode> *this,uchar *param_1,
          ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  uchar *__dest;
  HashInputTooLong *this_00;
  uint uVar5;
  long *plVar6;
  ulong __n;
  ulong __n_00;
  ulong uVar7;
  basic_string abStack_80 [6];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 != 0) {
    uVar1 = *(uint *)(this + 0x10);
    uVar3 = *(uint *)(this + 0x14);
    *(uint *)(this + 0x10) = uVar1 + (uint)param_2;
    uVar5 = uVar3;
    if (CARRY4(uVar1,(uint)param_2)) {
      uVar5 = uVar3 + 1;
      *(uint *)(this + 0x14) = uVar5;
    }
    uVar5 = uVar5 + (int)(param_2 >> 0x20);
    *(uint *)(this + 0x14) = uVar5;
    if (uVar5 < uVar3) {
      this_00 = (HashInputTooLong *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d087e0 to 00d087eb has its CatchHandler @ 00d0883c */
      (**(code **)(*(long *)(this + 8) + 0x18))(abStack_80,this + 8);
                    /* try { // try from 00d087f0 to 00d08817 has its CatchHandler @ 00d08818 */
      HashInputTooLong::HashInputTooLong(this_00,abStack_80);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&HashInputTooLong::typeinfo,Exception::~Exception);
    }
    plVar6 = (long *)(this + 8);
    uVar3 = (**(code **)(*plVar6 + 0x50))(plVar6);
    __n = (ulong)uVar3;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar3 - 1;
    }
    uVar5 = uVar5 & uVar1;
    uVar7 = (ulong)uVar5;
    __dest = (uchar *)(**(code **)(*(long *)this + 0xd8))(this);
    if (uVar5 == 0) {
      uVar7 = param_2;
      if (__n <= param_2) {
LAB_00d086c0:
        if (param_1 == __dest) {
          uVar4 = (**(code **)(*(long *)(this + 8) + 0x50))(plVar6);
          (**(code **)(*(long *)this + 0xd0))(this,__dest,uVar4);
          if (*(long *)(lVar2 + 0x28) == local_68) {
            return;
          }
          goto LAB_00d087c8;
        }
        param_2 = uVar7;
        if (((ulong)param_1 & 3) == 0) {
          param_2 = (**(code **)(*(long *)this + 0xd0))(this,param_1,uVar7);
          param_1 = param_1 + (uVar7 - param_2);
        }
        else {
          do {
            if (param_1 != (uchar *)0x0) {
              memcpy(__dest,param_1,__n);
            }
            uVar4 = (**(code **)(*(long *)(this + 8) + 0x50))(plVar6);
            (**(code **)(*(long *)this + 0xd0))(this,__dest,uVar4);
            param_1 = param_1 + __n;
            param_2 = param_2 - __n;
          } while (__n <= param_2);
        }
      }
LAB_00d086f4:
      if ((param_1 == (uchar *)0x0) || (param_1 == __dest)) goto LAB_00d08710;
    }
    else {
      if (__n <= uVar7 + param_2) {
        if (param_1 == (uchar *)0x0) {
          __n_00 = (ulong)(uVar3 - uVar5);
        }
        else {
          __n_00 = (ulong)(uVar3 - uVar5);
          memcpy(__dest + uVar7,param_1,__n_00);
        }
        uVar4 = (**(code **)(*(long *)(this + 8) + 0x50))(plVar6);
        (**(code **)(*(long *)this + 0xd0))(this,__dest,uVar4);
        param_1 = param_1 + __n_00;
        param_2 = param_2 - __n_00;
        uVar7 = param_2;
        if (__n <= param_2) goto LAB_00d086c0;
        goto LAB_00d086f4;
      }
      if (param_1 == (uchar *)0x0) goto LAB_00d08710;
      __dest = __dest + uVar7;
    }
    memcpy(__dest,param_1,param_2);
  }
LAB_00d08710:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00d087c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


