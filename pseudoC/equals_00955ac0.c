// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: equals
// Entry Point: 00955ac0
// Size: 816 bytes
// Signature: undefined __thiscall equals(CustomShaderInfo * this, vector * param_1, char * param_2, map * param_3, map * param_4)


/* MaterialShaderManager::CustomShaderInfo::equals(std::__ndk1::vector<MaterialShaderManager::CodeInjection,
   std::__ndk1::allocator<MaterialShaderManager::CodeInjection> > const&, char const*,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const&,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const&)
    */

void __thiscall
MaterialShaderManager::CustomShaderInfo::equals
          (CustomShaderInfo *this,vector *param_1,char *param_2,map *param_3,map *param_4)

{
  byte *pbVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  undefined8 uVar9;
  basic_string *pbVar10;
  basic_string *extraout_x1;
  char *__s2;
  byte *pbVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  byte *__s1;
  basic_string *__s2_00;
  long lVar15;
  ulong uVar16;
  byte local_98 [8];
  size_t local_90;
  char *local_88;
  byte local_80 [8];
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar15 = *(long *)(this + 8);
  lVar12 = *(long *)param_1;
  if (*(long *)(this + 0x10) - lVar15 == *(long *)(param_1 + 8) - lVar12) {
    if (*(long *)(this + 0x10) != lVar15) {
      uVar16 = 0;
      while( true ) {
        pbVar11 = (byte *)(lVar15 + uVar16 * 0x30);
        pbVar1 = (byte *)(lVar12 + uVar16 * 0x30);
        bVar3 = *pbVar11;
        bVar4 = *pbVar1;
        uVar14 = (ulong)(bVar3 >> 1);
        sVar2 = uVar14;
        if ((bVar3 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar11 + 8);
        }
        sVar8 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar8 = *(size_t *)(pbVar1 + 8);
        }
        if (sVar2 != sVar8) goto LAB_00955db8;
        __s1 = *(byte **)(pbVar11 + 0x10);
        __s2_00 = *(basic_string **)(pbVar1 + 0x10);
        if ((bVar3 & 1) == 0) {
          __s1 = pbVar11 + 1;
        }
        if ((bVar4 & 1) == 0) {
          __s2_00 = (basic_string *)(pbVar1 + 1);
        }
        if ((bVar3 & 1) == 0) {
          pbVar10 = __s2_00;
          if (sVar2 != 0) {
            do {
              uVar14 = uVar14 - 1;
              pbVar11 = pbVar11 + 1;
              __s2_00 = (basic_string *)((long)pbVar10 + 1);
              bVar3 = *(byte *)pbVar10;
              pbVar10 = __s2_00;
            } while (*pbVar11 == bVar3 && uVar14 != 0);
            if (*pbVar11 != bVar3) goto LAB_00955db8;
          }
        }
        else if ((sVar2 != 0) && (iVar7 = memcmp(__s1,__s2_00,sVar2), iVar7 != 0))
        goto LAB_00955db8;
        removeAbsolutePathsFromCode
                  ((MaterialShaderManager *)(lVar15 + uVar16 * 0x30 + 0x18),__s2_00);
                    /* try { // try from 00955bf8 to 00955bff has its CatchHandler @ 00955df4 */
        removeAbsolutePathsFromCode
                  ((MaterialShaderManager *)(*(long *)param_1 + uVar16 * 0x30 + 0x18),extraout_x1);
        bVar3 = local_80[0];
        bVar4 = local_98[0];
        uVar14 = (ulong)(local_80[0] >> 1);
        sVar2 = uVar14;
        if ((local_80[0] & 1) != 0) {
          sVar2 = local_78;
        }
        sVar8 = (ulong)(local_98[0] >> 1);
        if ((local_98[0] & 1) != 0) {
          sVar8 = local_90;
        }
        if (sVar2 == sVar8) {
          pcVar13 = (char *)((ulong)local_80 | 1);
          if ((local_80[0] & 1) != 0) {
            pcVar13 = local_70;
          }
          __s2 = (char *)((ulong)local_98 | 1);
          if ((local_98[0] & 1) != 0) {
            __s2 = local_88;
          }
          if ((local_80[0] & 1) == 0) {
            pcVar13 = (char *)((ulong)local_80 | 1);
            if (sVar2 == 0) {
              bVar6 = false;
            }
            else {
              do {
                uVar14 = uVar14 - 1;
                bVar6 = *pcVar13 != *__s2;
                __s2 = __s2 + 1;
                pcVar13 = pcVar13 + 1;
              } while (!bVar6 && uVar14 != 0);
            }
          }
          else if (sVar2 == 0) {
            bVar6 = false;
          }
          else {
            iVar7 = memcmp(pcVar13,__s2,sVar2);
            bVar6 = iVar7 != 0;
          }
        }
        else {
          bVar6 = true;
        }
        if ((bVar4 & 1) != 0) {
          operator_delete(local_88);
          bVar3 = local_80[0];
        }
        if ((bVar3 & 1) != 0) {
          operator_delete(local_70);
        }
        if (bVar6) goto LAB_00955db8;
        lVar15 = *(long *)(this + 8);
        uVar16 = (ulong)((int)uVar16 + 1);
        uVar14 = (*(long *)(this + 0x10) - lVar15 >> 4) * -0x5555555555555555;
        if (uVar14 < uVar16 || uVar14 - uVar16 == 0) break;
        lVar12 = *(long *)param_1;
      }
    }
    if (param_2 == (char *)0x0) {
      uVar16 = (ulong)((byte)this[0x50] >> 1);
      if (((byte)this[0x50] & 1) != 0) {
        uVar16 = *(ulong *)(this + 0x58);
      }
      if (uVar16 == 0) goto LAB_00955d64;
    }
    else {
      sVar8 = strlen(param_2);
      sVar2 = (ulong)((byte)this[0x50] >> 1);
      if (((byte)this[0x50] & 1) != 0) {
        sVar2 = *(size_t *)(this + 0x58);
      }
                    /* try { // try from 00955d30 to 00955d3f has its CatchHandler @ 00955df0 */
      if ((sVar8 == sVar2) &&
         (iVar7 = std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  compare((ulong)(this + 0x50),0,(char *)0xffffffffffffffff,(ulong)param_2),
         iVar7 == 0)) {
LAB_00955d64:
        if ((*(long *)(this + 0x30) == *(long *)(param_3 + 0x10)) &&
           (((uVar16 = FUN_0095748c(*(undefined8 *)(this + 0x20),this + 0x28,*(undefined8 *)param_3)
             , (uVar16 & 1) != 0 && (*(long *)(this + 0x48) == *(long *)(param_4 + 0x10))) &&
            (uVar16 = FUN_0095748c(*(undefined8 *)(this + 0x38),this + 0x40,*(undefined8 *)param_4),
            (uVar16 & 1) != 0)))) {
          uVar9 = 1;
          goto LAB_00955dbc;
        }
      }
    }
  }
LAB_00955db8:
  uVar9 = 0;
LAB_00955dbc:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


