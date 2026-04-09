// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: streamerThread
// Entry Point: 00c73134
// Size: 228 bytes
// Signature: undefined __thiscall streamerThread(TheoraVideoDecoder * this, bool * param_1)


/* TheoraVideoDecoder::streamerThread(bool volatile&) */

void __thiscall TheoraVideoDecoder::streamerThread(TheoraVideoDecoder *this,bool *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  Semaphore::wait();
  cVar1 = *param_1;
  while (cVar1 == '\0') {
    if (*(uint *)(this + 0xd8) < 0x20) {
      pvVar3 = operator_new(0x10010);
      iVar2 = (**(code **)(**(long **)this + 0x28))(*(long **)this,pvVar3,0x10000);
      if (iVar2 < 0) {
        operator_delete(pvVar3);
      }
      else {
        *(int *)((long)pvVar3 + 0x10000) = iVar2;
        do {
          lVar5 = *(long *)(this + 0xd0);
          *(long *)((long)pvVar3 + 0x10008) = lVar5;
          lVar4 = FUN_00f275d0(lVar5,pvVar3);
        } while (lVar5 != lVar4);
        FUN_00f27700(1,this + 0xd8);
      }
    }
    Semaphore::wait();
    cVar1 = *param_1;
  }
  return;
}


