// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Update
// Entry Point: 00d0705c
// Size: 624 bytes
// Signature: undefined __thiscall Update(IteratedHashBase<unsigned_long,CryptoPP::MessageAuthenticationCode> * this, uchar * param_1, ulong param_2)


/* CryptoPP::IteratedHashBase<unsigned long, CryptoPP::MessageAuthenticationCode>::Update(unsigned
   char const*, unsigned long) */

void __thiscall
CryptoPP::IteratedHashBase<unsigned_long,CryptoPP::MessageAuthenticationCode>::Update
          (IteratedHashBase<unsigned_long,CryptoPP::MessageAuthenticationCode> *this,uchar *param_1,
          ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  uchar *__dest;
  HashInputTooLong *this_00;
  long *plVar5;
  ulong uVar6;
  ulong __n;
  ulong uVar7;
  basic_string abStack_80 [6];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 != 0) {
    uVar7 = *(ulong *)(this + 0x10);
    uVar6 = *(ulong *)(this + 0x18);
    *(ulong *)(this + 0x10) = uVar7 + param_2;
    if ((CARRY8(uVar7,param_2)) && (*(ulong *)(this + 0x18) = uVar6 + 1, 0xfffffffffffffffe < uVar6)
       ) {
      this_00 = (HashInputTooLong *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d07294 to 00d0729f has its CatchHandler @ 00d072f0 */
      (**(code **)(*(long *)(this + 8) + 0x18))(abStack_80,this + 8);
                    /* try { // try from 00d072a4 to 00d072cb has its CatchHandler @ 00d072cc */
      HashInputTooLong::HashInputTooLong(this_00,abStack_80);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&HashInputTooLong::typeinfo,Exception::~Exception);
    }
    plVar5 = (long *)(this + 8);
    uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
    uVar6 = (ulong)uVar3;
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar3 - 1;
    }
    uVar1 = uVar1 & (uint)uVar7;
    uVar7 = (ulong)uVar1;
    __dest = (uchar *)(**(code **)(*(long *)this + 0xd8))(this);
    if (uVar1 == 0) {
      uVar7 = param_2;
      if (uVar6 <= param_2) {
LAB_00d07174:
        if (param_1 == __dest) {
          uVar4 = (**(code **)(*(long *)(this + 8) + 0x50))(plVar5);
          (**(code **)(*(long *)this + 0xd0))(this,__dest,uVar4);
          if (*(long *)(lVar2 + 0x28) == local_68) {
            return;
          }
          goto LAB_00d0727c;
        }
        param_2 = uVar7;
        if (((ulong)param_1 & 7) == 0) {
          param_2 = (**(code **)(*(long *)this + 0xd0))(this,param_1,uVar7);
          param_1 = param_1 + (uVar7 - param_2);
        }
        else {
          do {
            if (param_1 != (uchar *)0x0) {
              memcpy(__dest,param_1,uVar6);
            }
            uVar4 = (**(code **)(*(long *)(this + 8) + 0x50))(plVar5);
            (**(code **)(*(long *)this + 0xd0))(this,__dest,uVar4);
            param_1 = param_1 + uVar6;
            param_2 = param_2 - uVar6;
          } while (uVar6 <= param_2);
        }
      }
LAB_00d071a8:
      if ((param_1 == (uchar *)0x0) || (param_1 == __dest)) goto LAB_00d071c4;
    }
    else {
      if (uVar6 <= uVar7 + param_2) {
        if (param_1 == (uchar *)0x0) {
          __n = (ulong)(uVar3 - uVar1);
        }
        else {
          __n = (ulong)(uVar3 - uVar1);
          memcpy(__dest + uVar7,param_1,__n);
        }
        uVar4 = (**(code **)(*(long *)(this + 8) + 0x50))(plVar5);
        (**(code **)(*(long *)this + 0xd0))(this,__dest,uVar4);
        param_1 = param_1 + __n;
        param_2 = param_2 - __n;
        uVar7 = param_2;
        if (uVar6 <= param_2) goto LAB_00d07174;
        goto LAB_00d071a8;
      }
      if (param_1 == (uchar *)0x0) goto LAB_00d071c4;
      __dest = __dest + uVar7;
    }
    memcpy(__dest,param_1,param_2);
  }
LAB_00d071c4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00d0727c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


