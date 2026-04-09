// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 008bb43c
// Size: 80 bytes
// Signature: undefined __thiscall read(LoopSynthesisStreamSource * this, uint param_1, char * param_2, bool * param_3)


/* LoopSynthesisStreamSource::read(unsigned int, char*, bool&) */

int __thiscall
LoopSynthesisStreamSource::read
          (LoopSynthesisStreamSource *this,uint param_1,char *param_2,bool *param_3)

{
  uint uVar1;
  int iVar2;
  
  if (*(LoopSynthesisGenerator **)(this + 8) == (LoopSynthesisGenerator *)0x0) {
    *param_3 = true;
    iVar2 = 0;
  }
  else {
    uVar1 = LoopSynthesisGenerator::getNextBuffer
                      (*(LoopSynthesisGenerator **)(this + 8),param_1 >> 2,(float *)param_2);
    if (uVar1 < param_1 >> 2) {
      *param_3 = true;
    }
    iVar2 = uVar1 << 2;
  }
  return iVar2;
}


