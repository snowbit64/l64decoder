// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VoiceChatManager
// Entry Point: 00b14a6c
// Size: 476 bytes
// Signature: undefined __thiscall ~VoiceChatManager(VoiceChatManager * this)


/* VoiceChatManager::~VoiceChatManager() */

void __thiscall VoiceChatManager::~VoiceChatManager(VoiceChatManager *this)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  OpusVoiceCodec *this_00;
  void *pvVar5;
  long *plVar6;
  void *pvVar7;
  
                    /* try { // try from 00b14a88 to 00b14aa3 has its CatchHandler @ 00b14c48 */
  Thread::cancel();
  Event::post();
  Thread::join();
  this_00 = *(OpusVoiceCodec **)(this + 0x4d0);
  if (this_00 != (OpusVoiceCodec *)0x0) {
    OpusVoiceCodec::~OpusVoiceCodec(this_00);
    operator_delete(this_00);
    *(undefined8 *)(this + 0x4d0) = 0;
  }
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 8))();
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x60) = 0xffffffff;
  }
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  pvVar1 = *(void **)(this + 0x1518);
  *(undefined8 *)(this + 0x50) = 0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1520) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1500);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1508) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x14e8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x14f0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x14d0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x14d8) = pvVar1;
    operator_delete(pvVar1);
  }
  Mutex::~Mutex((Mutex *)(this + 0x14a8));
  pvVar1 = *(void **)(this + 0x1490);
  if (pvVar1 != (void *)0x0) {
    pvVar7 = pvVar1;
    pvVar5 = *(void **)(this + 0x1498);
    if (*(void **)(this + 0x1498) != pvVar1) {
      do {
        std::__ndk1::
        __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
        ::destroy((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                   *)((long)pvVar5 + -0x40),*(__tree_node **)((long)pvVar5 + -0x38));
        if ((*(byte *)((long)pvVar5 + -0x58) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -0x48));
        }
        pvVar7 = (void *)((long)pvVar5 + -0x70);
        if ((*(byte *)((long)pvVar5 + -0x70) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -0x60));
        }
        pvVar5 = pvVar7;
      } while (pvVar7 != pvVar1);
      pvVar7 = *(void **)(this + 0x1490);
    }
    *(void **)(this + 0x1498) = pvVar1;
    operator_delete(pvVar7);
  }
  if (*(long *)(this + 0x1488) != 0) {
    lVar3 = *(long *)(this + 0x1478);
    *(undefined8 *)(this + 0x1488) = 0;
    plVar2 = *(long **)(this + 0x1480);
    lVar4 = *plVar2;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    while (plVar2 != (long *)(this + 0x1478)) {
      plVar6 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar6;
    }
  }
  Thread::~Thread((Thread *)(this + 0x488));
  Event::~Event((Event *)(this + 0x42c));
  std::__ndk1::
  __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
  destroy((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
           *)(this + 0x38),*(__tree_node **)(this + 0x40));
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


