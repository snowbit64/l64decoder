// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: asyncCompileDisable
// Entry Point: 00befd64
// Size: 468 bytes
// Signature: undefined asyncCompileDisable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShaderManager::asyncCompileDisable() */

void ShaderManager::asyncCompileDisable(void)

{
  void **ppvVar1;
  bool bVar2;
  long in_x0;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  Thread *this;
  
  if (*(long *)(in_x0 + 0x128) == *(long *)(in_x0 + 0x130)) {
    return;
  }
  uVar8 = 0;
  do {
    Thread::cancel();
    lVar4 = *(long *)(in_x0 + 0x128);
    uVar8 = (ulong)((int)uVar8 + 1);
  } while (uVar8 < (ulong)(*(long *)(in_x0 + 0x130) - lVar4 >> 3));
  if (*(long *)(in_x0 + 0x130) != lVar4) {
    uVar8 = 1;
    do {
      Semaphore::post();
      lVar4 = *(long *)(in_x0 + 0x128);
      bVar2 = uVar8 < (ulong)(*(long *)(in_x0 + 0x130) - lVar4 >> 3);
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (bVar2);
    if (*(long *)(in_x0 + 0x130) != lVar4) {
      uVar8 = 0;
      do {
        Thread::join();
        lVar4 = *(long *)(in_x0 + 0x128);
        this = *(Thread **)(lVar4 + uVar8 * 8);
        if (this != (Thread *)0x0) {
          Thread::~Thread(this);
          operator_delete(this);
          lVar4 = *(long *)(in_x0 + 0x128);
        }
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < (ulong)(*(long *)(in_x0 + 0x130) - lVar4 >> 3));
    }
  }
  *(long *)(in_x0 + 0x130) = lVar4;
  if (*(long *)(in_x0 + 0x168) != 0) {
    uVar8 = 0;
    do {
      uVar7 = *(long *)(in_x0 + 0x160) + uVar8;
      lVar4 = *(long *)(in_x0 + 0x148);
      uVar6 = uVar7 >> 9;
      uVar7 = uVar7 & 0x1ff;
      pvVar3 = *(void **)(*(long *)(*(long *)(lVar4 + uVar6 * 8) + uVar7 * 8) + 0x58);
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
        lVar4 = *(long *)(in_x0 + 0x148);
        uVar7 = *(long *)(in_x0 + 0x160) + uVar8;
        uVar6 = uVar7 >> 9;
        uVar7 = uVar7 & 0x1ff;
      }
      pvVar3 = *(void **)(*(long *)(lVar4 + uVar6 * 8) + uVar7 * 8);
      if (pvVar3 != (void *)0x0) {
        if ((*(byte *)((long)pvVar3 + 0x60) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar3 + 0x70));
        }
        std::__ndk1::
        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
        ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
                   *)((long)pvVar3 + 0x38),*(__tree_node **)((long)pvVar3 + 0x40));
        if ((*(byte *)((long)pvVar3 + 0x20) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar3 + 0x30));
        }
        operator_delete(pvVar3);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < *(ulong *)(in_x0 + 0x168));
  }
  ppvVar1 = *(void ***)(in_x0 + 0x148);
  *(undefined8 *)(in_x0 + 0x168) = 0;
  uVar8 = *(long *)(in_x0 + 0x150) - (long)ppvVar1;
  while (0x10 < uVar8) {
    operator_delete(*ppvVar1);
    ppvVar1 = (void **)(*(long *)(in_x0 + 0x148) + 8);
    *(void ***)(in_x0 + 0x148) = ppvVar1;
    uVar8 = *(long *)(in_x0 + 0x150) - (long)ppvVar1;
  }
  if (uVar8 >> 3 == 1) {
    uVar5 = 0x100;
  }
  else {
    if (uVar8 >> 3 != 2) goto LAB_00beff24;
    uVar5 = 0x200;
  }
  *(undefined8 *)(in_x0 + 0x160) = uVar5;
LAB_00beff24:
  *(undefined4 *)(in_x0 + 0x170) = 0;
  return;
}


