// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSpecificName
// Entry Point: 008bb64c
// Size: 124 bytes
// Signature: undefined __cdecl getSpecificName(char * param_1, basic_string * param_2)


/* SampleChunk::getSpecificName(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

uint SampleChunk::getSpecificName(char *param_1,basic_string *param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  FormatSupport *pFVar4;
  FormatSupport *pFStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  AudioDeviceManager::getInstance();
  plVar3 = (long *)AudioDeviceManager::getCurrentAudioDevice();
  pFVar4 = (FormatSupport *)(**(code **)(*plVar3 + 0x18))();
  uVar2 = AudioLoadUtil::getSpecificFilename(param_1,pFVar4,&pFStack_40,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


