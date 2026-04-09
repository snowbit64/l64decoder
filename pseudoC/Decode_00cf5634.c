// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Decode
// Entry Point: 00cf5634
// Size: 896 bytes
// Signature: undefined __thiscall Decode(Integer * this, BufferedTransformation * param_1, ulong param_2, Signedness param_3)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::Integer::Decode(CryptoPP::BufferedTransformation&, unsigned long,
   CryptoPP::Integer::Signedness) */

void __thiscall
CryptoPP::Integer::Decode
          (Integer *this,BufferedTransformation *param_1,ulong param_2,Signedness param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  void *__s;
  InvalidArgument *this_00;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  basic_string local_70 [6];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar7 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
  if (uVar7 < param_2) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cf5974 to 00cf5983 has its CatchHandler @ 00cf59dc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_70,"Integer: input length is too small");
                    /* try { // try from 00cf5988 to 00cf59af has its CatchHandler @ 00cf59b4 */
    InvalidArgument::InvalidArgument(this_00,local_70);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  (**(code **)(*(long *)param_1 + 0xb8))(param_1,local_70);
  uVar10 = (uint)(param_3 == 1 && (char)local_70[0]._0_1_ < '\0');
  *(uint *)(this + 0x28) = uVar10;
  if (param_2 == 0) {
LAB_00cf5754:
    param_2 = 0;
    uVar7 = 0;
LAB_00cf5760:
    uVar7 = (ulong)(uint)(&DAT_005443f4)[uVar7];
  }
  else {
    bVar6 = local_70[0]._0_1_ ==
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xff;
    if (uVar10 == 0) {
      bVar6 = local_70[0]._0_1_ ==
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    if (bVar6) {
      do {
        (**(code **)(*(long *)param_1 + 200))(param_1,1);
        (**(code **)(*(long *)param_1 + 0xb8))(param_1,local_70);
        param_2 = param_2 - 1;
        if (param_2 == 0) goto LAB_00cf5754;
        bVar6 = local_70[0]._0_1_ ==
                (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
        if (*(int *)(this + 0x28) != 0) {
          bVar6 = local_70[0]._0_1_ ==
                  (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0xff;
        }
      } while (bVar6);
    }
    uVar8 = param_2 + 3;
    uVar7 = uVar8 >> 2;
    if (uVar8 < 0x24) goto LAB_00cf5760;
    if (uVar8 < 0x44) {
      uVar7 = 0x10;
    }
    else if (uVar8 < 0x84) {
      uVar7 = 0x20;
    }
    else if (uVar8 < 0x104) {
      uVar7 = 0x40;
    }
    else {
      uVar10 = 0;
      uVar8 = 0x40;
      do {
        uVar4 = uVar10 + (uint)uVar8 >> 1;
        uVar1 = uVar4;
        if (uVar7 - 1 >> ((ulong)uVar4 & 0x3f) != 0) {
          uVar1 = (uint)uVar8;
          uVar10 = uVar4;
        }
        uVar8 = (ulong)uVar1;
      } while (1 < uVar1 - uVar10);
      uVar7 = 1L << (uVar8 & 0x3f);
    }
  }
  uVar8 = *(ulong *)(this + 0x18);
  __s = *(void **)(this + 0x20);
  if (uVar8 == uVar7) {
LAB_00cf57ac:
    *(ulong *)(this + 0x18) = uVar7;
    *(void **)(this + 0x20) = __s;
    if (__s != (void *)0x0) {
      memset(__s,0,uVar7 << 2);
    }
    *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
  }
  else {
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)((long)__s + uVar8 * 4 + -4) = 0;
    }
    UnalignedDeallocate(__s);
    AllocatorBase<unsigned_int>::CheckSize(uVar7);
    if (uVar7 != 0) {
      __s = (void *)UnalignedAllocate(uVar7 << 2);
      goto LAB_00cf57ac;
    }
    *(ulong *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
  }
  if (param_2 != 0) {
    uVar10 = (int)param_2 * 8;
    uVar7 = param_2 - 1;
    do {
      uVar10 = uVar10 - 8;
      (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_70);
      uVar8 = uVar7 & 0xfffffffffffffffc;
      uVar7 = uVar7 - 1;
      *(uint *)(*(long *)(this + 0x20) + uVar8) =
           *(uint *)(*(long *)(this + 0x20) + uVar8) |
           (uint)(byte)local_70[0]._0_1_ << (ulong)(uVar10 & 0x18);
    } while (uVar7 != 0xffffffffffffffff);
  }
  if (*(int *)(this + 0x28) == 1) {
    uVar7 = *(ulong *)(this + 0x18);
    piVar2 = *(int **)(this + 0x20);
    if (param_2 < uVar7 * 4) {
      uVar10 = (int)param_2 << 3;
      do {
        uVar8 = param_2 & 0xfffffffffffffffc;
        uVar1 = uVar10 & 0x18;
        param_2 = param_2 + 1;
        uVar10 = uVar10 + 8;
        *(uint *)((long)piVar2 + uVar8) = *(uint *)((long)piVar2 + uVar8) | 0xff << (ulong)uVar1;
      } while (uVar7 * 4 - param_2 != 0);
    }
    iVar3 = *piVar2;
    *piVar2 = iVar3 + -1;
    if ((uVar7 < 2) || (iVar3 != 0)) {
      if (uVar7 == 0) goto LAB_00cf58cc;
    }
    else {
      uVar8 = 1;
      do {
        uVar9 = (ulong)((int)uVar8 + 1);
        iVar3 = piVar2[uVar8];
        piVar2[uVar8] = iVar3 + -1;
        uVar8 = uVar9;
      } while (iVar3 == 0 && uVar9 < uVar7);
    }
    uVar8 = 0;
    do {
      uVar9 = (ulong)((int)uVar8 + 1);
      piVar2[uVar8] = ~piVar2[uVar8];
      uVar8 = uVar9;
    } while (uVar9 < uVar7);
  }
LAB_00cf58cc:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


