// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadWithLoader
// Entry Point: 00b09528
// Size: 164 bytes
// Signature: undefined __cdecl loadWithLoader(char * param_1, Loader param_2, AudioBufferDesc * param_3)


/* AudioLoadUtil::loadWithLoader(char const*, IAudioDevice::Loader, AudioBufferDesc&) */

undefined8 AudioLoadUtil::loadWithLoader(char *param_1,Loader param_2,AudioBufferDesc *param_3)

{
  undefined8 uVar1;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(param_3 + 0x28));
  if (param_2 == 4) {
    uVar1 = AudioLoaderCustom::load(param_1,param_3,7);
    return uVar1;
  }
  if (param_2 != 2) {
    if (param_2 == 1) {
      uVar1 = AudioLoaderOGG::load(param_1,param_3,false);
      return uVar1;
    }
    return 0;
  }
  uVar1 = AudioLoaderWAV::load(param_1,param_3);
  return uVar1;
}


