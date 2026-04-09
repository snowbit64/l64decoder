// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6b60
// Entry Point: 007b6b60
// Size: 92 bytes
// Signature: undefined FUN_007b6b60(void)


SoundPlayer * FUN_007b6b60(char **param_1)

{
  SoundPlayer *this;
  
  this = (SoundPlayer *)operator_new(0x1f0);
                    /* try { // try from 007b6ba0 to 007b6ba7 has its CatchHandler @ 007b6bbc */
  SoundPlayer::SoundPlayer
            (this,*param_1,param_1[2],param_1[4],param_1[6],param_1[8],param_1[10],param_1[0xc],
             *(uint *)(param_1 + 0xe));
  return this;
}


