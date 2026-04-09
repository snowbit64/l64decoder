// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitI3DLoadTask
// Entry Point: 009438c8
// Size: 196 bytes
// Signature: undefined __thiscall waitI3DLoadTask(I3DStreamingManager * this, uint param_1)


/* I3DStreamingManager::waitI3DLoadTask(unsigned int) */

void __thiscall I3DStreamingManager::waitI3DLoadTask(I3DStreamingManager *this,uint param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  do {
    Mutex::enterCriticalSection();
    plVar1 = *(long **)(this + 8);
    do {
      if (plVar1 == *(long **)(this + 0x10)) {
        bVar3 = true;
        goto LAB_00943950;
      }
      lVar2 = *plVar1;
      plVar1 = plVar1 + 1;
    } while (*(uint *)(lVar2 + 0x4c8) != param_1);
    bVar3 = false;
    *(undefined4 *)(lVar2 + 0x4d8) = 0;
LAB_00943950:
    plVar1 = *(long **)(this + 0x20);
    do {
      if (plVar1 == *(long **)(this + 0x28)) {
        Mutex::leaveCriticalSection();
        if (bVar3) {
          return;
        }
        goto LAB_009438f4;
      }
      lVar2 = *plVar1;
      plVar1 = plVar1 + 1;
    } while (*(uint *)(lVar2 + 0x4c8) != param_1);
    *(undefined4 *)(lVar2 + 0x4d8) = 0;
    Mutex::leaveCriticalSection();
LAB_009438f4:
    StreamManager::getInstance();
    StreamManager::update(5.0);
    issueCallbacks(this,0.0,1,param_1);
  } while( true );
}


