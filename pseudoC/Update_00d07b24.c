// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Update
// Entry Point: 00d07b24
// Size: 632 bytes
// Signature: undefined __thiscall Update(IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> * this, uchar * param_1, ulong param_2)


/* CryptoPP::IteratedHashBase<unsigned int, CryptoPP::HashTransformation>::Update(unsigned char
   const*, unsigned long) */

void __thiscall
CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::Update
          (IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *this,uchar *param_1,
          ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  uchar *__dest;
  HashInputTooLong *this_00;
  uint uVar5;
  ulong __n;
  ulong __n_00;
  ulong uVar6;
  basic_string abStack_70 [6];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_2 != 0) {
    uVar1 = *(uint *)(this + 8);
    uVar3 = *(uint *)(this + 0xc);
    *(uint *)(this + 8) = uVar1 + (uint)param_2;
    uVar5 = uVar3;
    if (CARRY4(uVar1,(uint)param_2)) {
      uVar5 = uVar3 + 1;
      *(uint *)(this + 0xc) = uVar5;
    }
    uVar5 = uVar5 + (int)(param_2 >> 0x20);
    *(uint *)(this + 0xc) = uVar5;
    if (uVar5 < uVar3) {
      this_00 = (HashInputTooLong *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d07d64 to 00d07d6f has its CatchHandler @ 00d07dc0 */
      (**(code **)(*(long *)this + 0x18))(abStack_70,this);
                    /* try { // try from 00d07d74 to 00d07d9b has its CatchHandler @ 00d07d9c */
      HashInputTooLong::HashInputTooLong(this_00,abStack_70);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&HashInputTooLong::typeinfo,Exception::~Exception);
    }
    uVar3 = (**(code **)(*(long *)this + 0x50))(this);
    __n = (ulong)uVar3;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar3 - 1;
    }
    uVar5 = uVar5 & uVar1;
    uVar6 = (ulong)uVar5;
    __dest = (uchar *)(**(code **)(*(long *)this + 0xc0))(this);
    if (uVar5 == 0) {
      uVar6 = param_2;
      if (__n <= param_2) {
LAB_00d07c48:
        if (param_1 == __dest) {
          uVar4 = (**(code **)(*(long *)this + 0x50))(this);
          (**(code **)(*(long *)this + 0xb8))(this,__dest,uVar4);
          if (*(long *)(lVar2 + 0x28) == local_58) {
            return;
          }
          goto LAB_00d07d4c;
        }
        param_2 = uVar6;
        if (((ulong)param_1 & 3) == 0) {
          param_2 = (**(code **)(*(long *)this + 0xb8))(this,param_1,uVar6);
          param_1 = param_1 + (uVar6 - param_2);
        }
        else {
          do {
            if (param_1 != (uchar *)0x0) {
              memcpy(__dest,param_1,__n);
            }
            uVar4 = (**(code **)(*(long *)this + 0x50))(this);
            (**(code **)(*(long *)this + 0xb8))(this,__dest,uVar4);
            param_1 = param_1 + __n;
            param_2 = param_2 - __n;
          } while (__n <= param_2);
        }
      }
LAB_00d07c7c:
      if ((param_1 == (uchar *)0x0) || (param_1 == __dest)) goto LAB_00d07c98;
    }
    else {
      if (__n <= uVar6 + param_2) {
        if (param_1 == (uchar *)0x0) {
          __n_00 = (ulong)(uVar3 - uVar5);
        }
        else {
          __n_00 = (ulong)(uVar3 - uVar5);
          memcpy(__dest + uVar6,param_1,__n_00);
        }
        uVar4 = (**(code **)(*(long *)this + 0x50))(this);
        (**(code **)(*(long *)this + 0xb8))(this,__dest,uVar4);
        param_1 = param_1 + __n_00;
        param_2 = param_2 - __n_00;
        uVar6 = param_2;
        if (__n <= param_2) goto LAB_00d07c48;
        goto LAB_00d07c7c;
      }
      if (param_1 == (uchar *)0x0) goto LAB_00d07c98;
      __dest = __dest + uVar6;
    }
    memcpy(__dest,param_1,param_2);
  }
LAB_00d07c98:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_00d07d4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


