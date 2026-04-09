// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~WebResourceManager
// Entry Point: 00b04d4c
// Size: 420 bytes
// Signature: undefined __thiscall ~WebResourceManager(WebResourceManager * this)


/* WebResourceManager::~WebResourceManager() */

void __thiscall WebResourceManager::~WebResourceManager(WebResourceManager *this)

{
  bool bVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  Thread *this_00;
  byte *pbVar6;
  
  if (*(long *)(this + 8) != *(long *)this) {
    uVar5 = 0;
    do {
                    /* try { // try from 00b04d78 to 00b04d7b has its CatchHandler @ 00b04ef8 */
      Thread::cancel();
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(*(long *)(this + 8) - *(long *)this >> 3));
    if (*(long *)(this + 8) != *(long *)this) {
      uVar5 = 1;
      do {
                    /* try { // try from 00b04da0 to 00b04da7 has its CatchHandler @ 00b04ef4 */
        Semaphore::post();
        bVar1 = uVar5 < (ulong)(*(long *)(this + 8) - *(long *)this >> 3);
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (bVar1);
      if (*(long *)(this + 8) != *(long *)this) {
        uVar5 = 0;
        do {
                    /* try { // try from 00b04df4 to 00b04df7 has its CatchHandler @ 00b04ef0 */
          Thread::join();
          pvVar2 = *(void **)(*(long *)this + uVar5 * 8);
          this_00 = *(Thread **)((long)pvVar2 + 8);
          if (this_00 == (Thread *)0x0) {
LAB_00b04dd0:
            operator_delete(pvVar2);
            lVar3 = *(long *)this;
          }
          else {
            Thread::~Thread(this_00);
            operator_delete(this_00);
            lVar3 = *(long *)this;
            pvVar2 = *(void **)(lVar3 + uVar5 * 8);
            if (pvVar2 != (void *)0x0) goto LAB_00b04dd0;
          }
          uVar5 = (ulong)((int)uVar5 + 1);
        } while (uVar5 < (ulong)(*(long *)(this + 8) - lVar3 >> 3));
      }
    }
  }
  lVar3 = *(long *)(this + 0x70);
  lVar4 = *(long *)(this + 0x78);
  if (lVar4 != lVar3) {
    uVar5 = 0;
    do {
      pbVar6 = *(byte **)(lVar3 + uVar5 * 8);
      if (pbVar6 != (byte *)0x0) {
        if ((pbVar6[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + 0x28));
        }
        if ((*pbVar6 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + 0x10));
        }
        operator_delete(pbVar6);
        lVar3 = *(long *)(this + 0x70);
        lVar4 = *(long *)(this + 0x78);
      }
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(lVar4 - lVar3 >> 3));
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,WebResourceManager::Image*>>>
             *)(this + 0x88),*(__tree_node **)(this + 0x90));
  pvVar2 = *(void **)(this + 0x70);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x50);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar2;
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)(this + 0x28));
  Semaphore::~Semaphore((Semaphore *)(this + 0x18));
  pvVar2 = *(void **)this;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  *(void **)(this + 8) = pvVar2;
  operator_delete(pvVar2);
  return;
}


