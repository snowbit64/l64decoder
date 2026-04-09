// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeGls
// Entry Point: 008aff5c
// Size: 232 bytes
// Signature: undefined __thiscall writeGls(StaticSoundRuntimeSettings * this, basic_fstream * param_1)


/* StaticSoundRuntimeSettings::writeGls(std::__ndk1::basic_fstream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
StaticSoundRuntimeSettings::writeGls(StaticSoundRuntimeSettings *this,basic_fstream *param_1)

{
  basic_fstream *pbVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  int local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (*(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) == 0)) {
    local_3c = *(int *)(this + 0x28);
    local_44 = *(undefined4 *)(this + 0x2c);
    pbVar1 = param_1 + 0x10;
    uStack_40 = *(undefined4 *)(this + 0x30);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_3c);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&uStack_40);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_44);
    plVar2 = (long *)(this + 0x18);
    if (local_3c != 1) {
      plVar2 = (long *)(this + 0x20);
    }
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write((char *)pbVar1,*plVar2);
    local_48 = *(undefined4 *)(this + 0x38);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_48);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


