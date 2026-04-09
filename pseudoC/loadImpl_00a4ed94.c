// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImpl
// Entry Point: 00a4ed94
// Size: 104 bytes
// Signature: undefined __thiscall loadImpl(AudioSourceSample * this, char * param_1, STREAM_QUEUE param_2)


/* AudioSourceSample::loadImpl(char const*, StreamManager::STREAM_QUEUE) */

uint __thiscall
AudioSourceSample::loadImpl(AudioSourceSample *this,char *param_1,STREAM_QUEUE param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0xb0) == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = 1;
    do {
      uVar2 = loadElementAt(this,uVar3 - 1,param_2);
      if ((uVar2 & 1) == 0) break;
      bVar1 = uVar3 < *(uint *)(this + 0xb0);
      uVar3 = uVar3 + 1;
    } while (bVar1);
  }
  return uVar2 & 1;
}


