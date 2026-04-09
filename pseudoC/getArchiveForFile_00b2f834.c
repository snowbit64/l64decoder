// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArchiveForFile
// Entry Point: 00b2f834
// Size: 896 bytes
// Signature: undefined __thiscall getArchiveForFile(ArchiveFileLoader * this, char * param_1, ACCESS_MODE param_2, bool param_3, File * * param_4, basic_string * param_5, bool param_6)


/* ArchiveFileLoader::getArchiveForFile(char const*, File::ACCESS_MODE, bool, File**,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*,
   bool) */

long * __thiscall
ArchiveFileLoader::getArchiveForFile
          (ArchiveFileLoader *this,char *param_1,ACCESS_MODE param_2,bool param_3,File **param_4,
          basic_string *param_5,bool param_6)

{
  void *pvVar1;
  long *plVar2;
  bool bVar3;
  byte bVar4;
  size_t __n;
  long lVar5;
  File *pFVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  ulong uVar15;
  ulong local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined8 local_98;
  size_t local_90;
  char *local_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  plVar2 = (long *)tpidr_el0;
  local_68 = plVar2[5];
  if (param_2 != 0) {
    param_1 = (char *)0x0;
    goto LAB_00b2fb44;
  }
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  local_70 = 0;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00b2fba8 to 00b2fbaf has its CatchHandler @ 00b2fbbc */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pcVar14 = (char *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00b2f8e0;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b2f8c8 to 00b2f8cf has its CatchHandler @ 00b2fbbc */
    pcVar14 = (char *)operator_new(uVar9);
    local_98 = uVar9 | 1;
    local_90 = __n;
    local_88 = pcVar14;
LAB_00b2f8e0:
    memcpy(pcVar14,param_1,__n);
  }
  pcVar14[__n] = '\0';
                    /* try { // try from 00b2f8f4 to 00b2f91f has its CatchHandler @ 00b2fbd0 */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_98);
  pcVar14 = (char *)((ulong)&local_98 | 1);
  if ((local_98 & 1) != 0) {
    pcVar14 = local_88;
  }
  StringUtil::splitInPlace(pcVar14,'/',(vector *)&local_80);
  uVar9 = (long)local_78 - (long)local_80;
  if (uVar9 < 9) {
LAB_00b2fb88:
    param_1 = (char *)0x0;
  }
  else {
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = (char *)0x0;
    if (!param_3) {
                    /* try { // try from 00b2f958 to 00b2f95f has its CatchHandler @ 00b2fbb4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_b0,(basic_string *)(this + 0x10));
      iVar8 = (int)((ulong)((long)local_78 - (long)local_80) >> 3);
    }
    else {
                    /* try { // try from 00b2f940 to 00b2f947 has its CatchHandler @ 00b2fbb8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_b0);
      iVar8 = (int)((long)uVar9 >> 3);
    }
    uVar7 = (uint)param_3;
    uVar9 = (ulong)(iVar8 - 1U);
    if (uVar7 < iVar8 - 1U) {
      uVar10 = (ulong)uVar7;
      bVar3 = true;
      param_1 = (char *)plVar2;
      uVar15 = uVar10;
      do {
        uVar15 = uVar15 + 1;
        if (uVar10 != 0) {
                    /* try { // try from 00b2f9d4 to 00b2f9ef has its CatchHandler @ 00b2fbe4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_b0);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_b0);
        pcVar14 = (char *)((ulong)&local_b0 | 1);
        if ((local_b0 & 1) != 0) {
          pcVar14 = local_a0;
        }
                    /* try { // try from 00b2fa00 to 00b2fa07 has its CatchHandler @ 00b2fbe0 */
        lVar5 = getArchiveFromCache(this,pcVar14);
        if (lVar5 == 0) {
          pcVar14 = (char *)((ulong)&local_b0 | 1);
          if ((local_b0 & 1) != 0) {
            pcVar14 = local_a0;
          }
                    /* try { // try from 00b2fac0 to 00b2fac7 has its CatchHandler @ 00b2fbcc */
          plVar13 = (long *)addArchiveToCache(this,pcVar14);
        }
        else {
          plVar13 = *(long **)(lVar5 + 8);
        }
        if (plVar13 != (long *)0x0) {
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = (void *)0x0;
          for (uVar12 = uVar15; uVar12 < uVar9; uVar12 = uVar12 + 1) {
                    /* try { // try from 00b2fa30 to 00b2fa47 has its CatchHandler @ 00b2fbf8 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_c8);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_c8);
          }
                    /* try { // try from 00b2fa50 to 00b2fa93 has its CatchHandler @ 00b2fbf4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_c8);
          if (param_5 != (basic_string *)0x0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)param_5,(basic_string *)&local_c8);
          }
          pvVar1 = (void *)((ulong)&local_c8 | 1);
          if ((local_c8 & 1) != 0) {
            pvVar1 = local_b8;
          }
          if (param_4 == (File **)0x0) {
                    /* try { // try from 00b2fae0 to 00b2fae7 has its CatchHandler @ 00b2fbf4 */
            bVar4 = (**(code **)(*plVar13 + 0x20))(plVar13,pvVar1);
            if (((bVar4 | param_6) & 1) == 0) goto LAB_00b2fafc;
            bVar11 = false;
          }
          else {
            pFVar6 = (File *)(**(code **)(*plVar13 + 0x18))(plVar13);
            bVar11 = false;
            *param_4 = pFVar6;
            if ((pFVar6 == (File *)0x0) && (!param_6)) {
LAB_00b2fafc:
              bVar11 = true;
              plVar13 = (long *)param_1;
            }
          }
          if ((local_c8 & 1) != 0) {
            operator_delete(local_b8);
          }
          param_1 = (char *)plVar13;
          if (!bVar11) break;
        }
        uVar10 = uVar10 + 1;
        bVar3 = uVar10 < uVar9;
      } while (uVar10 != uVar9);
    }
    else {
      bVar3 = false;
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (!bVar3) goto LAB_00b2fb88;
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_80 != (void *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
LAB_00b2fb44:
  if (plVar2[5] != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long *)param_1;
}


