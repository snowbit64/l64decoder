// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeGls
// Entry Point: 008a3f38
// Size: 604 bytes
// Signature: undefined __thiscall writeGls(GranularSynthesisRuntimeSettings * this, basic_fstream * param_1)


/* GranularSynthesisRuntimeSettings::writeGls(std::__ndk1::basic_fstream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
GranularSynthesisRuntimeSettings::writeGls
          (GranularSynthesisRuntimeSettings *this,basic_fstream *param_1)

{
  undefined8 *puVar1;
  basic_fstream *pbVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined local_58 [4];
  int local_54;
  int local_50;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if ((*(long *)(param_1 + 0x90) == 0) ||
     (*(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) != 0)) goto LAB_008a3f78;
  puVar6 = *(uint **)(this + 0x30);
  if ((puVar6 == *(uint **)(this + 0x38)) || (*(long *)(this + 0x18) == *(long *)(this + 0x20)))
  goto LAB_008a3f78;
  lVar7 = (long)*(uint **)(this + 0x38) - (long)puVar6;
  if (lVar7 == 0) {
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    uVar14 = *puVar6;
    uVar13 = *(uint *)((long)puVar6 + lVar7 + -0xc);
  }
  uVar15 = 0;
  pbVar2 = param_1 + 0x10;
  do {
    puVar6 = puVar6 + uVar15 * 4;
    local_4c = puVar6[2];
    local_50 = *puVar6 - uVar14;
    local_54 = puVar6[1] - uVar14;
    local_58[0] = *(undefined *)(puVar6 + 3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar2,(long)&local_4c);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar2,(long)&local_50);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar2,(long)&local_54);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((char *)pbVar2,(long)local_58);
    puVar6 = *(uint **)(this + 0x30);
    uVar15 = (ulong)((int)uVar15 + 1);
  } while (uVar15 < (ulong)(*(long *)(this + 0x38) - (long)puVar6 >> 4));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
            ((char *)pbVar2,(long)(this + 0x50));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
            ((char *)pbVar2,(long)(this + 0x54));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
            ((char *)pbVar2,(long)(this + 0x48));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
            ((char *)pbVar2,(long)(this + 0x4c));
  uVar3 = 0;
  if (uVar14 <= uVar13 && uVar13 - uVar14 != 0) {
    uVar3 = (uVar13 - uVar14) + 1;
  }
  uVar15 = (ulong)uVar3;
  local_4c = uVar3;
  pvVar5 = operator_new__(uVar15 << 2);
  if (uVar3 != 0) {
    lVar7 = *(long *)(this + 0x18);
    if (uVar3 < 0x10) {
LAB_008a40cc:
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      if ((!CARRY4(uVar14,(uint)(uVar15 - 1))) && (uVar15 - 1 >> 0x20 == 0)) {
        if ((pvVar5 < (void *)(lVar7 + (uVar15 + uVar14) * 2)) &&
           ((void *)(lVar7 + (ulong)uVar14 * 2) < (void *)((long)pvVar5 + uVar15 * 2)))
        goto LAB_008a40cc;
        uVar8 = uVar15 & 0xfffffff0;
        puVar11 = (undefined8 *)((long)pvVar5 + 0x10);
        uVar12 = uVar8;
        uVar13 = uVar14;
        do {
          puVar1 = (undefined8 *)(lVar7 + (ulong)uVar13 * 2);
          uVar12 = uVar12 - 0x10;
          uVar13 = uVar13 + 0x10;
          uVar16 = *puVar1;
          uVar18 = puVar1[3];
          uVar17 = puVar1[2];
          puVar11[-1] = puVar1[1];
          puVar11[-2] = uVar16;
          puVar11[1] = uVar18;
          *puVar11 = uVar17;
          puVar11 = puVar11 + 4;
        } while (uVar12 != 0);
        if (uVar8 == uVar15) goto LAB_008a40f0;
      }
    }
    uVar14 = uVar14 + (int)uVar8;
    lVar9 = uVar15 - uVar8;
    puVar10 = (undefined2 *)((long)pvVar5 + uVar8 * 2);
    do {
      uVar15 = (ulong)uVar14;
      uVar14 = uVar14 + 1;
      lVar9 = lVar9 + -1;
      *puVar10 = *(undefined2 *)(lVar7 + uVar15 * 2);
      puVar10 = puVar10 + 1;
    } while (lVar9 != 0);
  }
LAB_008a40f0:
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
            ((char *)pbVar2,(long)&local_4c);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
            ((char *)pbVar2,(long)pvVar5);
  operator_delete__(pvVar5);
LAB_008a3f78:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


