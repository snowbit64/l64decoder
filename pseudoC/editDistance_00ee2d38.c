// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: editDistance
// Entry Point: 00ee2d38
// Size: 788 bytes
// Signature: undefined __cdecl editDistance(basic_string_view param_1, basic_string_view param_2)


/* Luau::editDistance(std::__ndk1::basic_string_view<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::basic_string_view<char, std::__ndk1::char_traits<char> >) */

long Luau::editDistance(basic_string_view param_1,basic_string_view param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  bool bVar10;
  ulong uVar11;
  long *__s;
  ulong uVar12;
  long lVar13;
  long in_x2;
  long in_x3;
  ulong *puVar14;
  long *plVar15;
  long *plVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong auStack_870 [256];
  long local_70;
  
  uVar12 = (ulong)param_2;
  uVar11 = (ulong)param_1;
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  if ((uVar12 != 0) && (in_x3 != 0)) {
    lVar21 = 0;
    do {
      if (*(char *)(uVar11 + lVar21) != *(char *)(in_x2 + lVar21)) {
        uVar12 = uVar12 - lVar21;
        uVar11 = uVar11 + lVar21;
        in_x3 = in_x3 - lVar21;
        in_x2 = in_x2 + lVar21;
        goto LAB_00ee2dd4;
      }
      lVar18 = lVar21 + 1;
    } while ((uVar12 - 1 != lVar21) && (bVar10 = in_x3 + -1 != lVar21, lVar21 = lVar18, bVar10));
    uVar12 = uVar12 - lVar18;
    uVar11 = uVar11 + lVar18;
    in_x3 = in_x3 - lVar18;
    in_x2 = in_x2 + lVar18;
  }
  lVar21 = in_x3;
  if (uVar12 != 0) {
LAB_00ee2dd4:
    lVar18 = in_x3 * -0x10 + -0x30;
    lVar22 = 0;
    lVar19 = in_x3 << 3;
    lVar23 = -in_x3;
    do {
      lVar21 = uVar12 - in_x3;
      if (in_x3 + lVar22 == 0) break;
      if (*(char *)(uVar12 + uVar11 + -1 + lVar22) != *(char *)(in_x3 + in_x2 + -1 + lVar22)) {
        uVar4 = uVar12 + lVar22;
        uVar5 = in_x3 + lVar22;
        lVar21 = uVar5 + 2;
        uVar20 = (uVar4 + 2) * lVar21;
        if (uVar20 >> 0x3d != 0) {
                    /* try { // try from 00ee3040 to 00ee3047 has its CatchHandler @ 00ee304c */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar20 = uVar20 * 8;
                    /* try { // try from 00ee2e68 to 00ee2e6f has its CatchHandler @ 00ee304c */
        __s = (long *)operator_new(uVar20);
        lVar1 = lVar19 + 0x10;
        lVar23 = uVar12 - lVar23;
        memset(__s,0,uVar20);
        *__s = lVar23;
        uVar20 = 0;
        plVar15 = __s;
        do {
          uVar2 = uVar20 + 1;
          *(ulong *)((long)plVar15 + lVar19 + 0x18) = uVar20;
          *(long *)((long)plVar15 + lVar1) = lVar23;
          uVar20 = uVar2;
          plVar15 = (long *)((long)plVar15 + lVar1);
        } while (uVar2 <= uVar4);
        uVar20 = 0;
        do {
          uVar2 = uVar20 + 1;
          __s[uVar20 + 1] = lVar23;
          *(ulong *)((long)__s + uVar20 * 8 + lVar19 + 0x18) = uVar20;
          uVar20 = uVar2;
        } while (uVar2 <= uVar5);
        memset(auStack_870,0,0x800);
        if (uVar4 != 0) {
          puVar14 = (ulong *)((long)__s - lVar18);
          plVar15 = (long *)((long)__s + lVar19 + 0x20);
          uVar20 = 1;
          do {
            lVar18 = 0;
            lVar23 = 0;
            uVar2 = uVar20 + 1;
            plVar16 = plVar15;
            puVar17 = puVar14;
            do {
              bVar8 = *(byte *)(in_x2 + lVar18);
              bVar10 = *(byte *)(uVar11 + (uVar20 - 1)) != bVar8;
              uVar7 = plVar16[-1];
              lVar19 = *plVar16;
              uVar3 = puVar17[-1] + 1;
              plVar16 = plVar16 + 1;
              if (bVar10) {
                uVar7 = uVar7 + 1;
              }
              lVar13 = __s[lVar23 + auStack_870[bVar8] * lVar21] - lVar23;
              if (!bVar10) {
                lVar23 = lVar18 + 1;
              }
              uVar6 = uVar20 + lVar18 + (lVar13 - auStack_870[bVar8]);
              if (uVar7 <= uVar6) {
                uVar6 = uVar7;
              }
              if (lVar19 + 1U <= uVar3) {
                uVar3 = lVar19 + 1;
              }
              uVar7 = lVar18 + 2;
              if (uVar3 <= uVar6) {
                uVar6 = uVar3;
              }
              lVar18 = lVar18 + 1;
              *puVar17 = uVar6;
              puVar17 = puVar17 + 1;
            } while (uVar7 <= uVar5);
            puVar14 = (ulong *)((long)puVar14 + lVar1);
            plVar15 = (long *)((long)plVar15 + lVar1);
            auStack_870[*(byte *)(uVar11 + (uVar20 - 1))] = uVar20;
            uVar20 = uVar2;
          } while (uVar2 <= uVar4);
        }
        lVar21 = __s[in_x3 + lVar22 + lVar21 + lVar21 * (uVar12 + lVar22) + 1];
        operator_delete(__s);
        break;
      }
      lVar19 = lVar19 + -8;
      lVar18 = lVar18 + 0x10;
      lVar22 = lVar22 + -1;
      lVar23 = lVar23 + 2;
      lVar21 = in_x3 - uVar12;
    } while (uVar12 + lVar22 != 0);
  }
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar21;
}


