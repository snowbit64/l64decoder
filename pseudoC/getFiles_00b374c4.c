// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFiles
// Entry Point: 00b374c4
// Size: 676 bytes
// Signature: undefined __thiscall getFiles(ZIPFileArchive * this, char * param_1, vector * param_2)


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* ZIPFileArchive::getFiles(char const*, std::__ndk1::vector<GsFileInfo,
   std::__ndk1::allocator<GsFileInfo> >&) */

void __thiscall ZIPFileArchive::getFiles(ZIPFileArchive *this,char *param_1,vector *param_2)

{
  ZIPFileArchive *pZVar1;
  char *__s2;
  char *__s1;
  basic_string *pbVar2;
  long lVar3;
  ZIPFileArchive *__s1_00;
  int iVar4;
  size_t sVar5;
  ZIPFileArchive *pZVar6;
  uint uVar7;
  ZIPFileArchive **ppZVar8;
  ulong uVar9;
  ZIPFileArchive **ppZVar10;
  ZIPFileArchive *pZVar11;
  char **ppcVar12;
  ZIPFileArchive **ppZVar13;
  ulong uVar14;
  ulong local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  sVar5 = strlen(param_1);
  iVar4 = (int)sVar5;
  if (iVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = iVar4 - (uint)(param_1[iVar4 - 1] == '/');
  }
  if (*(ZIPFileArchive ***)(this + 0x80b8) != (ZIPFileArchive **)(this + 0x80c0)) {
    uVar9 = (*(long *)(param_2 + 8) - *(long *)param_2 >> 4) * -0x5555555555555555;
    ppZVar13 = *(ZIPFileArchive ***)(this + 0x80b8);
    do {
      pZVar11 = (ZIPFileArchive *)(ulong)(*(byte *)(ppZVar13 + 4) >> 1);
      __s1_00 = (ZIPFileArchive *)((long)ppZVar13 + 0x21);
      if ((*(byte *)(ppZVar13 + 4) & 1) != 0) {
        pZVar11 = ppZVar13[5];
        __s1_00 = ppZVar13[6];
      }
      if ((((ZIPFileArchive *)(ulong)(uVar7 + 1) < pZVar11) &&
          (iVar4 = memcmp(__s1_00,param_1,(ulong)uVar7), iVar4 == 0)) &&
         (pZVar1 = __s1_00 + uVar7, *pZVar1 == (ZIPFileArchive)0x2f)) {
        pZVar6 = (ZIPFileArchive *)strchr((char *)(pZVar1 + 1),0x2f);
        if (pZVar6 == (ZIPFileArchive *)0x0) {
          local_98 = 0;
          uStack_90 = 0;
          local_88 = (char *)0x0;
          local_80 = 1;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)&local_98);
          local_80 = 1;
        }
        else {
          if (pZVar6 != __s1_00 + (long)pZVar11 + -1) goto LAB_00b376ec;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = (char *)0x0;
          local_80 = 2;
                    /* try { // try from 00b37610 to 00b3763b has its CatchHandler @ 00b37778 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)&local_98,(ulong)(pZVar1 + 1));
        }
        __s2 = (char *)((ulong)&local_98 | 1);
        if ((local_98 & 1) != 0) {
          __s2 = local_88;
        }
        if ((int)uVar9 != 0) {
          ppcVar12 = (char **)(*(long *)param_2 + 0x10);
          uVar14 = uVar9 & 0xffffffff;
          do {
            __s1 = (char *)((long)ppcVar12 + -0xf);
            if ((*(byte *)(ppcVar12 + -2) & 1) != 0) {
              __s1 = *ppcVar12;
            }
            iVar4 = strcmp(__s1,__s2);
            if (iVar4 == 0) goto LAB_00b376dc;
            ppcVar12 = ppcVar12 + 6;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        pbVar2 = *(basic_string **)(param_2 + 8);
        if (pbVar2 == *(basic_string **)(param_2 + 0x10)) {
                    /* try { // try from 00b376d0 to 00b376db has its CatchHandler @ 00b37768 */
          std::__ndk1::vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>>::
          __push_back_slow_path<GsFileInfo_const&>
                    ((vector<GsFileInfo,std::__ndk1::allocator<GsFileInfo>> *)param_2,
                     (GsFileInfo *)&local_98);
        }
        else {
                    /* try { // try from 00b376a4 to 00b376af has its CatchHandler @ 00b3776c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(pbVar2);
          *(undefined8 *)(pbVar2 + 10) = local_70;
          *(undefined8 *)(pbVar2 + 8) = uStack_78;
          *(ulong *)(pbVar2 + 6) = CONCAT44(uStack_7c,local_80);
          *(basic_string **)(param_2 + 8) = pbVar2 + 0xc;
        }
LAB_00b376dc:
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
      }
LAB_00b376ec:
      ppZVar8 = (ZIPFileArchive **)ppZVar13[1];
      if ((ZIPFileArchive **)ppZVar13[1] == (ZIPFileArchive **)0x0) {
        ppZVar8 = ppZVar13 + 2;
        ppZVar10 = (ZIPFileArchive **)*ppZVar8;
        if ((ZIPFileArchive **)*ppZVar10 != ppZVar13) {
          do {
            pZVar11 = *ppZVar8;
            ppZVar8 = (ZIPFileArchive **)(pZVar11 + 0x10);
            ppZVar10 = (ZIPFileArchive **)*ppZVar8;
          } while (*ppZVar10 != pZVar11);
        }
      }
      else {
        do {
          ppZVar10 = ppZVar8;
          ppZVar8 = (ZIPFileArchive **)*ppZVar10;
        } while ((ZIPFileArchive **)*ppZVar10 != (ZIPFileArchive **)0x0);
      }
      ppZVar13 = ppZVar10;
    } while (ppZVar10 != (ZIPFileArchive **)(this + 0x80c0));
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


