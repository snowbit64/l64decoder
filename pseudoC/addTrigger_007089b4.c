// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTrigger
// Entry Point: 007089b4
// Size: 144 bytes
// Signature: undefined __cdecl addTrigger(uint param_1, char * param_2, char * param_3, float param_4)


/* AnimalAnimationSystemSource::addTrigger(unsigned int, char const*, char const*, float) */

void AnimalAnimationSystemSource::addTrigger(uint param_1,char *param_2,char *param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  
  uVar3 = (ulong)param_1;
  iVar2 = strcasecmp(param_3,"sound");
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)(uVar3 + 0x2920 + (ulong)*(uint *)(uVar3 + 0x2918) * 0x28);
    *puVar4 = (int)param_2;
    puVar4[1] = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(puVar4 + 2));
    uVar1 = *(uint *)(uVar3 + 0x2918);
    *(uint *)(uVar3 + 0x2918) = uVar1 + 1;
    *(float *)(uVar3 + 0x2920 + (ulong)uVar1 * 0x28 + 0x24) = param_4;
  }
  return;
}


