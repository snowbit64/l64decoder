// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeGls
// Entry Point: 008a8e28
// Size: 976 bytes
// Signature: undefined __thiscall writeGls(LoadSimulationRuntimeSettings * this, basic_fstream * param_1)


/* LoadSimulationRuntimeSettings::writeGls(std::__ndk1::basic_fstream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
LoadSimulationRuntimeSettings::writeGls(LoadSimulationRuntimeSettings *this,basic_fstream *param_1)

{
  basic_fstream *pbVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  LoadSimulationRuntimeSettings local_84 [4];
  LoadSimulationRuntimeSettings local_80 [4];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  float local_70;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (*(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) == 0)) {
    local_6c = log10f(*(float *)this);
    local_6c = local_6c * 20.0;
    local_70 = log10f(*(float *)(this + 4));
    local_70 = local_70 * 20.0;
    pbVar1 = param_1 + 0x10;
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_6c);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_70);
    uStack_74 = *(undefined4 *)(this + 0xc);
    local_78 = *(undefined4 *)(this + 0x10);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&uStack_74);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_78);
    local_7c = *(undefined4 *)(this + 0x14);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_7c);
    local_7c = *(undefined4 *)(this + 0x1c);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_7c);
    local_7c = *(undefined4 *)(this + 0x24);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_7c);
    local_80[0] = this[8];
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)local_80);
    local_84[0] = this[9];
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)local_84);
    local_88 = (uint)((ulong)(*(long *)(this + 0x50) - *(long *)(this + 0x48)) >> 6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_88);
    if (local_88 != 0) {
      uVar4 = 0;
      do {
        lVar5 = uVar4 * 0x40;
        puVar2 = (undefined4 *)(*(long *)(this + 0x48) + lVar5);
        local_8c = *puVar2;
        local_90 = puVar2[0xd];
        local_94 = puVar2[0xe];
        local_98 = puVar2[0xf];
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                  ((char *)pbVar1,(long)&local_8c);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                  ((char *)pbVar1,(long)&local_90);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                  ((char *)pbVar1,(long)&local_94);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                  ((char *)pbVar1,(long)&local_98);
        plVar6 = (long *)(*(long *)(this + 0x48) + lVar5 + 0x10);
        local_9c = (int)((ulong)(*(long *)(*(long *)(this + 0x48) + lVar5 + 0x18) - *plVar6) >> 2) *
                   -0x55555555;
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                  ((char *)pbVar1,(long)&local_9c);
        if (0 < local_9c) {
          lVar7 = 0;
          lVar8 = 0;
          do {
            puVar2 = (undefined4 *)(*plVar6 + lVar7);
            local_a0 = *puVar2;
            local_a4 = puVar2[1];
            local_a8 = puVar2[2];
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                      ((char *)pbVar1,(long)&local_a0);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                      ((char *)pbVar1,(long)&local_a4);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                      ((char *)pbVar1,(long)&local_a8);
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + 0xc;
          } while (lVar8 < local_9c);
        }
        lVar8 = *(long *)(this + 0x48) + lVar5;
        local_a0 = *(undefined4 *)(lVar8 + 0x28);
        local_a4 = *(undefined4 *)(lVar8 + 0x2c);
        local_a8 = *(undefined4 *)(lVar8 + 0x30);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                  ((char *)pbVar1,(long)&local_a0);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                  ((char *)pbVar1,(long)&local_a4);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                  ((char *)pbVar1,(long)&local_a8);
        local_ac = *(undefined4 *)(*(long *)(this + 0x48) + lVar5 + 4);
        local_b0 = *(undefined4 *)(*(long *)(this + 0x48) + lVar5 + 8);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                  ((char *)pbVar1,(long)&local_ac);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                  ((char *)pbVar1,(long)&local_b0);
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_88);
    }
    local_8c = *(undefined4 *)(this + 0x30);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_8c);
    local_90 = *(undefined4 *)(this + 0x34);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_90);
    local_94 = *(undefined4 *)(this + 0x38);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_94);
    local_98 = *(undefined4 *)(this + 0x3c);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_98);
    local_9c = *(int *)(this + 0x40);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar1,(long)&local_9c);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


