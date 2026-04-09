// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decoderThread
// Entry Point: 00c73218
// Size: 216 bytes
// Signature: undefined __thiscall decoderThread(TheoraVideoDecoder * this, bool * param_1)


/* TheoraVideoDecoder::decoderThread(bool volatile&) */

void __thiscall TheoraVideoDecoder::decoderThread(TheoraVideoDecoder *this,bool *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  while (Semaphore::wait(), *param_1 == false) {
    uVar1 = *(uint *)(this + 0xb8);
    uVar2 = *(uint *)(this + 0x98);
    if ((((uVar1 < 4) && (decodeAudioFrame(), uVar1 != 3)) && (decodeAudioFrame(), uVar1 != 2)) &&
       (decodeAudioFrame(), uVar1 != 1)) {
      decodeAudioFrame();
    }
    if (uVar2 < 2) {
      lVar3 = decodeVideoFrame();
      do {
        lVar5 = *(long *)(this + 0x90);
        *(long *)(lVar3 + 8) = lVar5;
        lVar4 = FUN_00f275d0(lVar5,lVar3);
      } while (lVar5 != lVar4);
      FUN_00f27700(1,this + 0x98);
    }
  }
  return;
}


