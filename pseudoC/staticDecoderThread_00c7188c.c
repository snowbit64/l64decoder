// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: staticDecoderThread
// Entry Point: 00c7188c
// Size: 220 bytes
// Signature: undefined __cdecl staticDecoderThread(void * param_1, bool * param_2)


/* TheoraVideoDecoder::staticDecoderThread(void*, bool volatile&) */

undefined8 TheoraVideoDecoder::staticDecoderThread(void *param_1,bool *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *(undefined8 *)((long)param_1 + 0x120) = 0;
  *(undefined4 *)((long)param_1 + 0x128) = 0;
  while (Semaphore::wait(), *param_2 == false) {
    uVar1 = *(uint *)((long)param_1 + 0xb8);
    uVar2 = *(uint *)((long)param_1 + 0x98);
    if ((((uVar1 < 4) && (decodeAudioFrame(), uVar1 != 3)) && (decodeAudioFrame(), uVar1 != 2)) &&
       (decodeAudioFrame(), uVar1 != 1)) {
      decodeAudioFrame();
    }
    if (uVar2 < 2) {
      lVar3 = decodeVideoFrame();
      do {
        lVar5 = *(long *)((long)param_1 + 0x90);
        *(long *)(lVar3 + 8) = lVar5;
        lVar4 = FUN_00f275d0(lVar5,lVar3);
      } while (lVar5 != lVar4);
      FUN_00f27700(1,(long)param_1 + 0x98);
    }
  }
  return 0;
}


