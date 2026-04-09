// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeGls
// Entry Point: 008b0c7c
// Size: 428 bytes
// Signature: undefined __thiscall writeGls(SteadyLoopRuntimeSettings * this, basic_fstream * param_1)


/* SteadyLoopRuntimeSettings::writeGls(std::__ndk1::basic_fstream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
SteadyLoopRuntimeSettings::writeGls(SteadyLoopRuntimeSettings *this,basic_fstream *param_1)

{
  basic_fstream *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (((*(long *)(param_1 + 0x90) != 0) &&
      (*(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) == 0)) &&
     (lVar5 = *(long *)this, (int)((ulong)(*(long *)(this + 8) - lVar5) >> 3) * 0x38e38e39 != 0)) {
    uVar6 = 0;
    pbVar1 = param_1 + 0x10;
    lVar7 = 0x20;
    do {
      local_6c = *(undefined4 *)(lVar5 + lVar7 + 4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                ((char *)pbVar1,(long)&local_6c);
      puVar2 = (undefined4 *)(*(long *)this + lVar7);
      local_70 = puVar2[-2];
      local_74 = puVar2[-1];
      local_78 = *puVar2;
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                ((char *)pbVar1,(long)&local_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                ((char *)pbVar1,(long)&local_74);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                ((char *)pbVar1,(long)&local_78);
      lVar5 = *(long *)this + lVar7;
      iVar3 = *(int *)(lVar5 + 0x18);
      local_80 = *(undefined4 *)(lVar5 + 0x20);
      local_84 = *(undefined4 *)(lVar5 + 0x1c);
      local_7c = iVar3;
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                ((char *)pbVar1,(long)&local_7c);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                ((char *)pbVar1,(long)&local_80);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                ((char *)pbVar1,(long)&local_84);
      lVar5 = 8;
      if (iVar3 != 1) {
        lVar5 = 0x10;
      }
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                ((char *)pbVar1,*(long *)(*(long *)this + lVar7 + lVar5));
      lVar5 = *(long *)this;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x48;
    } while (uVar6 < (uint)((int)((ulong)(*(long *)(this + 8) - lVar5) >> 3) * 0x38e38e39));
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


