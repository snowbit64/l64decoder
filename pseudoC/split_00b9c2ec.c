// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: split
// Entry Point: 00b9c2ec
// Size: 1128 bytes
// Signature: undefined __cdecl split(char * param_1, basic_string * param_2, char param_3, bool param_4, vector * param_5)


/* StringUtil::split(char const*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, char, bool,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >&) */

int StringUtil::split(char *param_1,basic_string *param_2,char param_3,bool param_4,vector *param_5)

{
  size_t __n;
  basic_string *pbVar1;
  byte bVar2;
  long lVar3;
  char *__s2;
  bool bVar4;
  int iVar5;
  byte *__dest;
  char cVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  char *pcVar14;
  ulong uVar15;
  undefined8 local_98;
  ulong uStack_90;
  byte *local_88;
  ulong local_80;
  ulong uStack_78;
  byte *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  cVar6 = *param_1;
  if (cVar6 == '\0') goto LAB_00b9c654;
  bVar4 = false;
  pbVar9 = (byte *)((ulong)&local_98 | 1);
  pcVar14 = param_1;
LAB_00b9c360:
  do {
    if (cVar6 == param_3) {
      bVar4 = (bool)(bVar4 ^ 1);
    }
    else if (!bVar4) {
      __n = (ulong)(*(byte *)param_2 >> 1);
      __s2 = (char *)((long)param_2 + 1);
      if ((*(byte *)param_2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 2);
        __s2 = *(char **)(param_2 + 4);
      }
      iVar5 = strncmp(param_1,__s2,__n);
      if (iVar5 == 0) {
        local_80 = 0;
        uStack_78 = 0;
        local_70 = (byte *)0x0;
                    /* try { // try from 00b9c3b4 to 00b9c3bf has its CatchHandler @ 00b9c778 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)&local_80,(ulong)pcVar14);
        if (param_4) {
          pbVar13 = (byte *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            pbVar13 = local_70;
          }
          if ((pbVar13 == (byte *)0x0) || (bVar2 = *pbVar13, bVar2 == 0)) {
LAB_00b9c41c:
            local_98 = (ulong)local_98._1_7_ << 8;
            pbVar13 = pbVar9;
          }
          else {
            uVar7 = 0;
            while (bVar2 < 0x21) {
              if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                if ((ulong)bVar2 == 0) goto LAB_00b9c41c;
                break;
              }
              uVar7 = uVar7 + 1;
              bVar2 = pbVar13[uVar7];
            }
            uVar12 = uVar7;
            iVar5 = -1;
            do {
              iVar11 = iVar5;
              uVar8 = uVar12;
              uVar12 = uVar8 + 1;
              iVar5 = iVar11 + -1;
            } while (pbVar13[uVar8 + 1] != 0);
            while (pbVar13[uVar8] < 0x21 &&
                   (1L << ((ulong)pbVar13[uVar8] & 0x3f) & 0x100002600U) != 0) {
              iVar11 = iVar11 + 1;
              uVar8 = uVar8 - 1;
            }
            uVar10 = (ulong)(uint)-iVar11;
            if ((uint)-iVar11 < 0x17) {
              local_98 = CONCAT71(local_98._1_7_,(char)iVar11 * -2);
              __dest = pbVar9;
              if (iVar11 != 0) goto LAB_00b9c544;
            }
            else {
              uVar15 = uVar10 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00b9c528 to 00b9c52f has its CatchHandler @ 00b9c758 */
              __dest = (byte *)operator_new(uVar15);
              local_98 = uVar15 | 1;
              uStack_90 = uVar10;
              local_88 = __dest;
LAB_00b9c544:
              memcpy(__dest,pbVar13 + uVar7,uVar10);
            }
            pbVar13 = __dest + uVar10;
          }
          *pbVar13 = 0;
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          uStack_78 = uStack_90;
          local_80 = local_98;
          local_70 = local_88;
        }
        pbVar1 = *(basic_string **)(param_5 + 8);
        if (pbVar1 == *(basic_string **)(param_5 + 0x10)) {
                    /* try { // try from 00b9c46c to 00b9c477 has its CatchHandler @ 00b9c778 */
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((basic_string *)param_5);
        }
        else {
                    /* try { // try from 00b9c454 to 00b9c45f has its CatchHandler @ 00b9c76c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(pbVar1);
          *(basic_string **)(param_5 + 8) = pbVar1 + 6;
        }
        uVar10 = (ulong)(*(byte *)param_2 >> 1);
        if ((*(byte *)param_2 & 1) != 0) {
          uVar10 = *(ulong *)(param_2 + 2);
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        param_1 = param_1 + uVar10;
        bVar4 = false;
        cVar6 = *param_1;
        pcVar14 = param_1;
        if (cVar6 == '\0') break;
        goto LAB_00b9c360;
      }
    }
    param_1 = param_1 + 1;
    cVar6 = *param_1;
  } while (cVar6 != '\0');
  if (param_1 <= pcVar14) goto LAB_00b9c654;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (byte *)0x0;
                    /* try { // try from 00b9c56c to 00b9c577 has its CatchHandler @ 00b9c768 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_80,(ulong)pcVar14);
  if (param_4) {
    pbVar9 = (byte *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pbVar9 = local_70;
    }
    if ((pbVar9 == (byte *)0x0) || (bVar2 = *pbVar9, bVar2 == 0)) {
LAB_00b9c5e4:
      local_98 = (ulong)local_98._1_7_ << 8;
      pbVar13 = (byte *)((ulong)&local_98 | 1);
    }
    else {
      uVar10 = 1;
      uVar7 = 1;
      while (bVar2 < 0x21) {
        uVar7 = (uint)uVar10;
        if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
          if ((ulong)bVar2 == 0) goto LAB_00b9c5e4;
          break;
        }
        pbVar13 = pbVar9 + uVar10;
        uVar7 = uVar7 + 1;
        uVar10 = (ulong)uVar7;
        bVar2 = *pbVar13;
      }
      iVar5 = 0;
      do {
        uVar12 = uVar7 + iVar5;
        iVar5 = iVar5 + 1;
      } while (pbVar9[uVar12] != 0);
      iVar11 = -iVar5;
      uVar12 = (uVar7 + iVar5) - 2;
      while (pbVar9[uVar12] < 0x21 && (1L << ((ulong)pbVar9[uVar12] & 0x3f) & 0x100002600U) != 0) {
        iVar11 = iVar11 + 1;
        uVar12 = uVar12 - 1;
      }
      uVar10 = (ulong)(uint)-iVar11;
      if ((uint)-iVar11 < 0x17) {
        pbVar13 = (byte *)((ulong)&local_98 | 1);
        local_98 = CONCAT71(local_98._1_7_,(char)iVar11 * -2);
        if (iVar11 != 0) goto LAB_00b9c738;
      }
      else {
        uVar15 = uVar10 + 0x10 & 0x1fffffff0;
                    /* try { // try from 00b9c720 to 00b9c727 has its CatchHandler @ 00b9c754 */
        pbVar13 = (byte *)operator_new(uVar15);
        local_98 = uVar15 | 1;
        uStack_90 = uVar10;
        local_88 = pbVar13;
LAB_00b9c738:
        memcpy(pbVar13,pbVar9 + (uVar7 - 1),uVar10);
      }
      pbVar13 = pbVar13 + uVar10;
    }
    *pbVar13 = 0;
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
  }
  pbVar1 = *(basic_string **)(param_5 + 8);
  if (pbVar1 == *(basic_string **)(param_5 + 0x10)) {
                    /* try { // try from 00b9c638 to 00b9c643 has its CatchHandler @ 00b9c768 */
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((basic_string *)param_5);
  }
  else {
                    /* try { // try from 00b9c620 to 00b9c62b has its CatchHandler @ 00b9c75c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pbVar1);
    *(basic_string **)(param_5 + 8) = pbVar1 + 6;
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
LAB_00b9c654:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)((ulong)(*(long *)(param_5 + 8) - *(long *)param_5) >> 3) * -0x55555555;
}


