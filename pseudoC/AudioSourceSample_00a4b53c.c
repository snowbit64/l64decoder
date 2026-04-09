// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AudioSourceSample
// Entry Point: 00a4b53c
// Size: 308 bytes
// Signature: undefined __thiscall AudioSourceSample(AudioSourceSample * this, AudioSource * param_1, char * param_2)


/* WARNING: Removing unreachable block (ram,0x00a4b640) */
/* AudioSourceSample::AudioSourceSample(AudioSource&, char const*) */

void __thiscall
AudioSourceSample::AudioSourceSample(AudioSourceSample *this,AudioSource *param_1,char *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  void **ppvVar4;
  ulong uVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  Sample::Sample((Sample *)this,param_2);
  *(AudioSource **)(this + 0x70) = param_1;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined ***)(this + 0x20) = &PTR__AudioSourceSample_00fe3570;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x8000000000;
  *(undefined ***)this = &PTR__AudioSourceSample_00fe3488;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb4) = 0x3f800000;
                    /* try { // try from 00a4b5dc to 00a4b5df has its CatchHandler @ 00a4b670 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xbc));
  uVar2 = *(uint *)(this + 0xb0);
  *(undefined8 *)(this + 0xdc) = 0;
  *(undefined8 *)(this + 0xd4) = 0;
  *(undefined8 *)(this + 0xe4) = 0;
  if (1 < uVar2) {
    ppvVar4 = (void **)(this + 0x104);
    uVar5 = 1;
    do {
      if (((byte)*(AudioSourceSample *)(ppvVar4 + -2) & 1) != 0) {
        operator_delete(*ppvVar4);
        uVar2 = *(uint *)(this + 0xb0);
      }
      uVar5 = uVar5 + 1;
      ppvVar4 = ppvVar4 + 7;
    } while (uVar5 < uVar2);
  }
  *(uint *)(this + 0xb0) = 1;
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


