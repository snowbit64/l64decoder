// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildRelativePath
// Entry Point: 00c640d8
// Size: 744 bytes
// Signature: undefined __cdecl buildRelativePath(basic_string * param_1, basic_string * param_2, basic_string * param_3, basic_string * param_4)


/* PathUtil::buildRelativePath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void PathUtil::buildRelativePath
               (basic_string *param_1,basic_string *param_2,basic_string *param_3,
               basic_string *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong __n;
  void *pvVar3;
  byte *__s2;
  byte bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  void *pvVar8;
  byte *pbVar9;
  undefined8 uVar10;
  size_t __n_00;
  ulong uVar11;
  long lVar12;
  long lVar13;
  basic_string local_98 [4];
  void *local_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar2 = *(ulong *)(param_2 + 2);
  pvVar3 = *(void **)(param_2 + 4);
  __n = *(ulong *)(param_1 + 2);
  __s2 = *(byte **)(param_1 + 4);
  if ((*(byte *)param_2 & 1) == 0) {
    pvVar3 = (void *)((long)param_2 + 1);
    uVar2 = (ulong)(*(byte *)param_2 >> 1);
  }
  if ((*(byte *)param_1 & 1) == 0) {
    __s2 = (byte *)((long)param_1 + 1);
    __n = (ulong)(*(byte *)param_1 >> 1);
  }
  if (__n == 0) {
LAB_00c642d4:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_80,(ulong)param_3,__n,(allocator *)0xffffffffffffffff);
    if ((*(byte *)param_4 & 1) != 0) {
      operator_delete(*(void **)(param_4 + 4));
    }
    uVar10 = 1;
    *(undefined8 *)(param_4 + 2) = uStack_78;
    *(ulong *)param_4 = local_80;
    *(void **)(param_4 + 4) = local_70;
  }
  else {
    if ((long)__n <= (long)uVar2) {
      bVar4 = *__s2;
      pvVar8 = pvVar3;
      uVar11 = uVar2;
      do {
        if ((0xfffffffffffffffe < uVar11 - __n) ||
           (pvVar8 = memchr(pvVar8,(uint)bVar4,(uVar11 - __n) + 1), pvVar8 == (void *)0x0)) break;
        iVar7 = memcmp(pvVar8,__s2,__n);
        if (iVar7 == 0) {
          if ((pvVar8 != (void *)((long)pvVar3 + uVar2)) && (pvVar8 == pvVar3)) goto LAB_00c642d4;
          break;
        }
        pvVar8 = (void *)((long)pvVar8 + 1);
        uVar11 = (long)(void *)((long)pvVar3 + uVar2) - (long)pvVar8;
      } while ((long)__n <= (long)uVar11);
    }
    if (uVar2 != 0) {
      uVar11 = 0;
      while (*(byte *)((long)pvVar3 + uVar11) == __s2[uVar11]) {
        uVar11 = uVar11 + 1;
        if ((uVar2 <= uVar11) || (__n <= uVar11)) goto LAB_00c641cc;
      }
      if (uVar11 == 0) goto LAB_00c642bc;
LAB_00c641cc:
      uVar1 = uVar2;
      if (uVar11 - 1 <= uVar2) {
        uVar1 = uVar11 - 1;
      }
      if (1 < uVar2 - uVar1) {
        uVar2 = uVar1 + 1;
      }
      if (0 < (long)uVar2) {
        lVar12 = -uVar2;
        lVar13 = -1;
        do {
          if (lVar12 == 0) goto LAB_00c642bc;
          lVar6 = lVar13 + uVar2;
          lVar13 = lVar13 + -1;
          lVar12 = lVar12 + 1;
        } while (*(char *)((long)pvVar3 + lVar6) != '/');
        uVar2 = 0xffffffffffffffff;
        if (lVar13 != -1) {
          uVar2 = -lVar12;
        }
        if (uVar2 - 1 < 0xfffffffffffffffe) {
          if (uVar2 < __n) {
            iVar7 = 0;
            uVar11 = uVar2;
            do {
              pbVar9 = __s2 + uVar11;
              do {
                __n_00 = (long)(__s2 + __n) - (long)(pbVar9 + 1);
                if (((long)__n_00 < 1) ||
                   (pbVar9 = (byte *)memchr(pbVar9 + 1,0x2f,__n_00), pbVar9 == (byte *)0x0))
                goto LAB_00c64290;
              } while (*pbVar9 != 0x2f);
            } while (((pbVar9 != __s2 + __n) &&
                     (uVar11 = (long)pbVar9 - (long)__s2, uVar11 != 0xffffffffffffffff)) &&
                    (iVar7 = iVar7 + 1, uVar11 < __n));
LAB_00c64290:
            local_80 = 0;
            uStack_78 = 0;
            local_70 = (void *)0x0;
            for (; iVar7 != 0; iVar7 = iVar7 + -1) {
                    /* try { // try from 00c642a4 to 00c642af has its CatchHandler @ 00c643f8 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_80);
            }
          }
          else {
            local_80 = 0;
            uStack_78 = 0;
            local_70 = (void *)0x0;
          }
                    /* try { // try from 00c6434c to 00c64363 has its CatchHandler @ 00c643f4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(local_98,(ulong)param_3,uVar2 + 1,(allocator *)0xffffffffffffffff);
          pvVar3 = (void *)((ulong)local_98 | 1);
          if (((byte)local_98[0] & 1) != 0) {
            pvVar3 = local_88;
          }
                    /* try { // try from 00c64380 to 00c64387 has its CatchHandler @ 00c643c4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_80,(ulong)pvVar3);
          if (((byte)local_98[0] & 1) != 0) {
            operator_delete(local_88);
          }
                    /* try { // try from 00c64398 to 00c643a3 has its CatchHandler @ 00c643c0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)param_4,(basic_string *)&local_80);
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          uVar10 = 1;
          goto LAB_00c64310;
        }
      }
    }
LAB_00c642bc:
    uVar10 = 0;
  }
LAB_00c64310:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


