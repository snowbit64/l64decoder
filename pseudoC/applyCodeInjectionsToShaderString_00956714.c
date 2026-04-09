// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyCodeInjectionsToShaderString
// Entry Point: 00956714
// Size: 836 bytes
// Signature: undefined __cdecl applyCodeInjectionsToShaderString(basic_string * param_1, CustomShaderInfo * param_2)


/* MaterialShaderManager::applyCodeInjectionsToShaderString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   MaterialShaderManager::CustomShaderInfo const*) */

void MaterialShaderManager::applyCodeInjectionsToShaderString
               (basic_string *param_1,CustomShaderInfo *param_2)

{
  void *pvVar1;
  void *pvVar2;
  byte *pbVar3;
  void *pvVar4;
  byte bVar5;
  long lVar6;
  size_t sVar7;
  byte *pbVar8;
  bool bVar9;
  int iVar10;
  void *pvVar11;
  ulong uVar12;
  basic_string *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  void *pvVar16;
  ulong local_80;
  size_t local_78;
  byte *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if ((param_2 != (CustomShaderInfo *)0x0) &&
     (pbVar13 = *(basic_string **)(param_2 + 8), pbVar13 != *(basic_string **)(param_2 + 0x10))) {
    pvVar1 = (void *)((long)param_1 + 1);
    pbVar15 = (byte *)((ulong)&local_80 | 1);
    do {
      std::__ndk1::operator+("//customPos_",pbVar13);
      pbVar8 = local_70;
      uVar14 = local_80;
      bVar5 = *(byte *)param_1;
      pvVar4 = pvVar1;
      if ((bVar5 & 1) != 0) {
        pvVar4 = *(void **)(param_1 + 4);
      }
      pbVar3 = pbVar15;
      sVar7 = local_80 >> 1 & 0x7f;
      if ((local_80 & 1) != 0) {
        pbVar3 = local_70;
        sVar7 = local_78;
      }
      if (sVar7 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          uVar12 = *(ulong *)(param_1 + 2);
        }
        pvVar2 = (void *)((long)pvVar4 + uVar12);
        pvVar16 = pvVar2;
        if ((long)sVar7 <= (long)uVar12) {
          bVar5 = *pbVar3;
          pvVar11 = pvVar4;
          do {
            pvVar16 = pvVar2;
            if (((0xfffffffffffffffe < uVar12 - sVar7) ||
                (pvVar11 = memchr(pvVar11,(uint)bVar5,(uVar12 - sVar7) + 1), pvVar11 == (void *)0x0)
                ) || (iVar10 = memcmp(pvVar11,pbVar3,sVar7), pvVar16 = pvVar11, iVar10 == 0)) break;
            pvVar11 = (void *)((long)pvVar11 + 1);
            uVar12 = (long)pvVar2 - (long)pvVar11;
            pvVar16 = pvVar2;
          } while ((long)sVar7 <= (long)uVar12);
        }
        uVar12 = (long)pvVar16 - (long)pvVar4;
        if (pvVar16 == pvVar2) {
          uVar12 = 0xffffffffffffffff;
        }
      }
      if ((uVar14 & 1) != 0) {
        operator_delete(pbVar8);
      }
      if (uVar12 == 0xffffffffffffffff) {
        std::__ndk1::operator+("/*customPos_",pbVar13);
        pbVar8 = local_70;
        uVar14 = local_80;
        bVar5 = *(byte *)param_1;
        pvVar4 = pvVar1;
        if ((bVar5 & 1) != 0) {
          pvVar4 = *(void **)(param_1 + 4);
        }
        pbVar3 = pbVar15;
        sVar7 = local_80 >> 1 & 0x7f;
        if ((local_80 & 1) != 0) {
          pbVar3 = local_70;
          sVar7 = local_78;
        }
        if (sVar7 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            uVar12 = *(ulong *)(param_1 + 2);
          }
          pvVar2 = (void *)((long)pvVar4 + uVar12);
          pvVar16 = pvVar2;
          if ((long)sVar7 <= (long)uVar12) {
            bVar5 = *pbVar3;
            pvVar11 = pvVar4;
            do {
              pvVar16 = pvVar2;
              if (((0xfffffffffffffffe < uVar12 - sVar7) ||
                  (pvVar11 = memchr(pvVar11,(uint)bVar5,(uVar12 - sVar7) + 1),
                  pvVar11 == (void *)0x0)) ||
                 (iVar10 = memcmp(pvVar11,pbVar3,sVar7), pvVar16 = pvVar11, iVar10 == 0)) break;
              pvVar11 = (void *)((long)pvVar11 + 1);
              uVar12 = (long)pvVar2 - (long)pvVar11;
              pvVar16 = pvVar2;
            } while ((long)sVar7 <= (long)uVar12);
          }
          uVar12 = (long)pvVar16 - (long)pvVar4;
          if (pvVar16 == pvVar2) {
            uVar12 = 0xffffffffffffffff;
          }
        }
        if ((uVar14 & 1) != 0) {
          operator_delete(pbVar8);
        }
        if (uVar12 != 0xffffffffffffffff) goto LAB_00956944;
      }
      else {
LAB_00956944:
        pvVar4 = pvVar1;
        uVar14 = (ulong)(*(byte *)param_1 >> 1);
        if ((*(byte *)param_1 & 1) != 0) {
          pvVar4 = *(void **)(param_1 + 4);
          uVar14 = *(ulong *)(param_1 + 2);
        }
        if (uVar12 < uVar14) {
          do {
            if (*(char *)((long)pvVar4 + uVar12) == '\n') goto LAB_00956984;
            uVar12 = uVar12 + 1;
          } while (uVar14 != uVar12);
LAB_0095698c:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)param_1);
          uVar12 = uVar14;
        }
        else {
LAB_00956984:
          bVar9 = uVar12 == uVar14;
          uVar14 = uVar12;
          if (bVar9) goto LAB_0095698c;
        }
        local_80 = 0;
        local_78 = 0;
        local_70 = (byte *)0x0;
                    /* try { // try from 009569a4 to 00956a0b has its CatchHandler @ 00956a58 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_80);
        uVar14 = (long)pbVar13 + 0x19;
        if ((*(byte *)(pbVar13 + 6) & 1) != 0) {
          uVar14 = *(ulong *)(pbVar13 + 10);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_80,uVar14);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_80);
        pbVar8 = pbVar15;
        if ((local_80 & 1) != 0) {
          pbVar8 = local_70;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::insert((ulong)param_1,(char *)(uVar12 + 1),(ulong)pbVar8);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      pbVar13 = pbVar13 + 0xc;
    } while (pbVar13 != *(basic_string **)(param_2 + 0x10));
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


