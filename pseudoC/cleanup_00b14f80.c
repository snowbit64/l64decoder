// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cleanup
// Entry Point: 00b14f80
// Size: 712 bytes
// Signature: undefined cleanup(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VoiceChatManager::cleanup() */

void VoiceChatManager::cleanup(void)

{
  char *pcVar1;
  undefined uVar2;
  bool bVar3;
  void *in_x0;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  OpusVoiceCodec *this;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  
  Thread::cancel();
  Event::post();
  Thread::join();
  lVar9 = *(long *)((long)in_x0 + 0x1490);
  lVar8 = *(long *)((long)in_x0 + 0x1498);
  if (lVar9 != lVar8) {
    lVar6 = (long)in_x0 + 0x1478;
    do {
      if (*(long **)(lVar9 + 0x60) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + 0x60) + 0x40))(0,0);
        if (*(long **)(lVar9 + 0x60) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + 0x60) + 8))();
        }
        if (*(long **)(lVar9 + 0x58) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + 0x58) + 8))();
        }
        if (*(long **)(lVar9 + 0x50) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + 0x50) + 8))();
        }
      }
      if (*(char *)(lVar9 + 0x6c) != '\0') {
        lVar5 = *(long *)((long)in_x0 + 0x1480);
        if (lVar5 != lVar6) {
          bVar3 = false;
          do {
            pcVar1 = (char *)(lVar5 + 0x10);
            lVar5 = *(long *)(lVar5 + 8);
            bVar3 = (bool)(*pcVar1 == *(char *)(lVar9 + 0x6c) | bVar3);
          } while (lVar5 != lVar6);
          if (bVar3) goto LAB_00b14ffc;
        }
        plVar4 = (long *)operator_new(0x18);
        uVar2 = *(undefined *)(lVar9 + 0x6c);
        lVar7 = *(long *)((long)in_x0 + 0x1488);
        lVar5 = *(long *)((long)in_x0 + 0x1478);
        *(long **)((long)in_x0 + 0x1478) = plVar4;
        *(undefined *)(plVar4 + 2) = uVar2;
        *plVar4 = lVar5;
        plVar4[1] = lVar6;
        *(long **)(lVar5 + 8) = plVar4;
        *(long *)((long)in_x0 + 0x1488) = lVar7 + 1;
      }
LAB_00b14ffc:
      lVar9 = lVar9 + 0x70;
    } while (lVar9 != lVar8);
    lVar9 = *(long *)((long)in_x0 + 0x1490);
    lVar8 = *(long *)((long)in_x0 + 0x1498);
    while (lVar6 = lVar8, lVar6 != lVar9) {
      std::__ndk1::
      __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
      destroy((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
               *)(lVar6 + -0x40),*(__tree_node **)(lVar6 + -0x38));
      if ((*(byte *)(lVar6 + -0x58) & 1) != 0) {
        operator_delete(*(void **)(lVar6 + -0x48));
      }
      lVar8 = lVar6 + -0x70;
      if ((*(byte *)(lVar6 + -0x70) & 1) != 0) {
        operator_delete(*(void **)(lVar6 + -0x60));
      }
    }
  }
  *(long *)((long)in_x0 + 0x1498) = lVar9;
  Mutex::enterCriticalSection();
  lVar8 = *(long *)((long)in_x0 + 0x14d8);
  lVar6 = *(long *)((long)in_x0 + 0x14d0);
  lVar9 = lVar8;
  if (lVar8 != lVar6) {
    uVar11 = 0;
    do {
      pvVar10 = *(void **)(lVar6 + uVar11 * 8);
      if (pvVar10 != (void *)0x0) {
        if (*(void **)((long)pvVar10 + 8) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar10 + 8));
        }
        operator_delete(pvVar10);
        lVar8 = *(long *)((long)in_x0 + 0x14d8);
        lVar6 = *(long *)((long)in_x0 + 0x14d0);
      }
      uVar11 = (ulong)((int)uVar11 + 1);
      lVar9 = lVar6;
    } while (uVar11 < (ulong)(lVar8 - lVar6 >> 3));
  }
  *(long *)((long)in_x0 + 0x14d8) = lVar9;
  Mutex::leaveCriticalSection();
  lVar9 = *(long *)((long)in_x0 + 0x14f0);
  if (lVar9 != *(long *)((long)in_x0 + 0x14e8)) {
    uVar11 = 0;
    lVar8 = *(long *)((long)in_x0 + 0x14e8);
    lVar6 = lVar9;
    do {
      lVar9 = lVar8;
      pvVar10 = *(void **)(lVar9 + uVar11 * 8);
      if (pvVar10 != (void *)0x0) {
        if (*(void **)((long)pvVar10 + 8) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar10 + 8));
        }
        operator_delete(pvVar10);
        lVar6 = *(long *)((long)in_x0 + 0x14f0);
        lVar9 = *(long *)((long)in_x0 + 0x14e8);
      }
      uVar11 = (ulong)((int)uVar11 + 1);
      lVar8 = lVar9;
    } while (uVar11 < (ulong)(lVar6 - lVar9 >> 3));
  }
  *(long *)((long)in_x0 + 0x14f0) = lVar9;
  if (*(long **)((long)in_x0 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)((long)in_x0 + 0x58) + 8))();
    *(undefined8 *)((long)in_x0 + 0x58) = 0;
    *(undefined4 *)((long)in_x0 + 0x60) = 0xffffffff;
  }
  if (*(long **)((long)in_x0 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)((long)in_x0 + 0x50) + 8))();
  }
  this = *(OpusVoiceCodec **)((long)in_x0 + 0x4d0);
  *(undefined8 *)((long)in_x0 + 0x50) = 0;
  if (this != (OpusVoiceCodec *)0x0) {
    OpusVoiceCodec::~OpusVoiceCodec(this);
    operator_delete(this);
    *(undefined8 *)((long)in_x0 + 0x4d0) = 0;
  }
  *(undefined *)((long)in_x0 + 0x30) = 0;
  Thread::start((Thread *)((long)in_x0 + 0x488),backgroundWorkerThreadFunc,in_x0,0xffffffff,
                "GIANTS Audio Encoding Thread",2,0x100000);
  return;
}


