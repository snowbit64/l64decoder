// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 0073074c
// Size: 368 bytes
// Signature: undefined __thiscall __append(deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>> * this, ulong param_1)


/* std::__ndk1::deque<std::__ndk1::pair<unsigned short, unsigned short>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned short, unsigned short> > >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::
deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
::__append(deque<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
           *this,ulong param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  void *__s;
  void **ppvVar9;
  long lVar10;
  void **ppvVar11;
  
  lVar3 = *(long *)(this + 8);
  lVar7 = *(long *)(this + 0x10);
  lVar10 = *(long *)(this + 0x28);
  uVar4 = lVar10 + *(long *)(this + 0x20);
  lVar2 = 0;
  if (lVar7 - lVar3 != 0) {
    lVar2 = (lVar7 - lVar3) * 0x80 + -1;
  }
  if (lVar2 - uVar4 < param_1) {
    __add_back_capacity(this,param_1 - (lVar2 - uVar4));
    lVar10 = *(long *)(this + 0x28);
    lVar3 = *(long *)(this + 8);
    lVar7 = *(long *)(this + 0x10);
    uVar4 = *(long *)(this + 0x20) + lVar10;
  }
  ppvVar11 = (void **)(lVar3 + (uVar4 >> 7 & 0x1fffffffffffff8));
  if (lVar7 == lVar3) {
    __s = (void *)0x0;
  }
  else {
    __s = (void *)((long)*ppvVar11 + (uVar4 & 0x3ff) * 4);
  }
  if (param_1 != 0) {
    uVar4 = param_1 + ((long)__s - (long)*ppvVar11 >> 2);
    if ((long)uVar4 < 1) {
      uVar8 = 0x3ff - uVar4;
      uVar4 = (ulong)~(uint)uVar8;
      uVar8 = -(uVar8 >> 7 & 0x1fffffffffffff8);
    }
    else {
      uVar8 = uVar4 >> 7 & 0x1fffffffffffff8;
    }
    ppvVar9 = (void **)((long)ppvVar11 + uVar8);
    pvVar1 = (void *)((long)*ppvVar9 + (uVar4 & 0x3ff) * 4);
    if (__s != pvVar1) {
      do {
        pvVar5 = pvVar1;
        if (ppvVar11 != ppvVar9) {
          pvVar5 = (void *)((long)*ppvVar11 + 0x1000);
        }
        pvVar6 = __s;
        if (__s != pvVar5) {
          memset(__s,0,(long)pvVar5 - (long)__s & 0xfffffffffffffffc);
          pvVar6 = (void *)((long)__s + (((long)pvVar5 - (long)__s) - 4U & 0xfffffffffffffffc) + 4);
        }
        lVar10 = lVar10 + ((long)pvVar6 - (long)__s >> 2);
        if (ppvVar11 == ppvVar9) break;
        ppvVar11 = ppvVar11 + 1;
        __s = *ppvVar11;
      } while (__s != pvVar1);
      *(long *)(this + 0x28) = lVar10;
    }
  }
  return;
}


