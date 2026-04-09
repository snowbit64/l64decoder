// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__deque_base
// Entry Point: 00743580
// Size: 204 bytes
// Signature: undefined __thiscall ~__deque_base(__deque_base<VehicleNavigationAgent*,std::__ndk1::allocator<VehicleNavigationAgent*>> * this)


/* std::__ndk1::__deque_base<VehicleNavigationAgent*,
   std::__ndk1::allocator<VehicleNavigationAgent*> >::~__deque_base() */

void __thiscall
std::__ndk1::__deque_base<VehicleNavigationAgent*,std::__ndk1::allocator<VehicleNavigationAgent*>>::
~__deque_base(__deque_base<VehicleNavigationAgent*,std::__ndk1::allocator<VehicleNavigationAgent*>>
              *this)

{
  void **ppvVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  void **ppvVar5;
  void **ppvVar6;
  
  ppvVar5 = *(void ***)(this + 8);
  ppvVar1 = *(void ***)(this + 0x10);
  *(undefined8 *)(this + 0x28) = 0;
  uVar3 = (long)ppvVar1 - (long)ppvVar5;
  while (0x10 < uVar3) {
    operator_delete(*ppvVar5);
    ppvVar1 = *(void ***)(this + 0x10);
    ppvVar5 = (void **)(*(long *)(this + 8) + 8);
    *(void ***)(this + 8) = ppvVar5;
    uVar3 = (long)ppvVar1 - (long)ppvVar5;
  }
  if (uVar3 >> 3 == 1) {
    uVar4 = 0x100;
  }
  else {
    if (uVar3 >> 3 != 2) goto LAB_007435ec;
    uVar4 = 0x200;
  }
  *(undefined8 *)(this + 0x20) = uVar4;
LAB_007435ec:
  if (ppvVar5 != ppvVar1) {
    do {
      ppvVar6 = ppvVar5 + 1;
      operator_delete(*ppvVar5);
      ppvVar5 = ppvVar6;
    } while (ppvVar6 != ppvVar1);
    lVar2 = *(long *)(this + 0x10) - *(long *)(this + 8);
    if (lVar2 != 0) {
      *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


