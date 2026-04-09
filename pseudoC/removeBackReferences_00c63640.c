// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeBackReferences
// Entry Point: 00c63640
// Size: 628 bytes
// Signature: undefined __cdecl removeBackReferences(basic_string * param_1, basic_string * param_2)


/* PathUtil::removeBackReferences(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void PathUtil::removeBackReferences(basic_string *param_1,basic_string *param_2)

{
  void *pvVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  void *pvVar8;
  char *pcVar9;
  void *pvVar10;
  long lVar11;
  byte local_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  char *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  StringUtil::substitute('\\','/',param_1);
  pcVar9 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar9 = local_50;
  }
  if (*pcVar9 == '/') {
    pcVar9 = (char *)((ulong)&local_60 | 2);
    if ((local_60 & 1) != 0) {
      pcVar9 = local_50 + 1;
    }
    if (*pcVar9 == '/') {
      *pcVar9 = '\\';
      pcVar9 = (char *)((ulong)&local_60 | 1);
      if ((local_60 & 1) != 0) {
        pcVar9 = local_50;
      }
      *pcVar9 = '\\';
    }
  }
  if ((*(byte *)param_2 & 1) != 0) {
    operator_delete(*(void **)(param_2 + 4));
  }
  *(undefined8 *)(param_2 + 2) = uStack_58;
  *(ulong *)param_2 = CONCAT71(uStack_5f,local_60);
  *(char **)(param_2 + 4) = local_50;
  uVar7 = *(ulong *)(param_2 + 2);
  pvVar10 = *(void **)(param_2 + 4);
  if ((*(byte *)param_2 & 1) == 0) {
    pvVar10 = (void *)((long)param_2 + 1);
    uVar7 = (ulong)(*(byte *)param_2 >> 1);
  }
  if (3 < (long)uVar7) {
    pvVar1 = (void *)((long)param_2 + 1);
    piVar6 = (int *)((long)pvVar10 + uVar7);
    pvVar8 = pvVar10;
    do {
      piVar5 = (int *)memchr(pvVar8,0x2f,uVar7 - 3);
      if (piVar5 == (int *)0x0) break;
      if (*piVar5 == 0x2f2e2e2f) goto LAB_00c63880;
      pvVar8 = (void *)((long)piVar5 + 1);
      uVar7 = (long)piVar6 - (long)pvVar8;
    } while (3 < (long)uVar7);
  }
LAB_00c63888:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00c63880:
  if (piVar5 == piVar6) goto LAB_00c63888;
  lVar11 = (long)piVar5 - (long)pvVar10;
  while( true ) {
    if (lVar11 == -1) goto LAB_00c63888;
    uVar7 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
                      ((char)param_2,0x2f);
    if (uVar7 == 0xffffffffffffffff) break;
    bVar3 = *(byte *)param_2;
    pvVar8 = *(void **)(param_2 + 4);
    pvVar10 = pvVar1;
    if ((bVar3 & 1) != 0) {
      pvVar10 = pvVar8;
    }
    if (*(char *)((long)pvVar10 + uVar7 + 1) == '.') goto LAB_00c63828;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    erase((ulong)param_2,uVar7 + 1);
    uVar2 = (ulong)(*(byte *)param_2 >> 1);
    pvVar10 = pvVar1;
    if ((*(byte *)param_2 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 2);
      pvVar10 = *(void **)(param_2 + 4);
    }
    if (uVar2 < uVar7) goto LAB_00c63888;
    pvVar8 = (void *)((long)pvVar10 + uVar7);
    while( true ) {
      lVar11 = (long)(int *)((long)pvVar10 + uVar2) - (long)pvVar8;
      if ((lVar11 < 4) || (piVar6 = (int *)memchr(pvVar8,0x2f,lVar11 - 3), piVar6 == (int *)0x0))
      goto LAB_00c63888;
      if (*piVar6 == 0x2f2e2e2f) break;
      pvVar8 = (void *)((long)piVar6 + 1);
    }
    if (piVar6 == (int *)((long)pvVar10 + uVar2)) goto LAB_00c63888;
    lVar11 = (long)piVar6 - (long)pvVar10;
  }
  bVar3 = *(byte *)param_2;
  pvVar8 = *(void **)(param_2 + 4);
LAB_00c63828:
  uVar7 = (ulong)(bVar3 >> 1);
  pvVar10 = pvVar1;
  if ((bVar3 & 1) != 0) {
    uVar7 = *(ulong *)(param_2 + 2);
    pvVar10 = pvVar8;
  }
  if (uVar7 < lVar11 + 3U) goto LAB_00c63888;
  pvVar8 = (void *)((long)pvVar10 + lVar11 + 3U);
  piVar6 = (int *)((long)pvVar10 + uVar7);
  while( true ) {
    if (((long)piVar6 - (long)pvVar8 < 4) ||
       (piVar5 = (int *)memchr(pvVar8,0x2f,((long)piVar6 - (long)pvVar8) - 3), piVar5 == (int *)0x0)
       ) goto LAB_00c63888;
    if (*piVar5 == 0x2f2e2e2f) break;
    pvVar8 = (void *)((long)piVar5 + 1);
  }
  goto LAB_00c63880;
}


