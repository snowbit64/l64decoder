// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StreamWriteTextLines
// Entry Point: 00ae5204
// Size: 3224 bytes
// Signature: undefined __cdecl StreamWriteTextLines(basic_ostream * param_1, char * param_2, bool param_3, vector * param_4)


/* StreamWriteTextLines(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&, char
   const*, bool, std::__ndk1::vector<TextLine, std::__ndk1::allocator<TextLine> > const&) */

void StreamWriteTextLines(basic_ostream *param_1,char *param_2,bool param_3,vector *param_4)

{
  TextLine TVar1;
  long lVar2;
  basic_ostream *pbVar3;
  long *plVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  TextLine *pTVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  TextLine *pTVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 local_98;
  ulong local_90;
  char *local_88;
  TextLine *local_80;
  TextLine *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = (TextLine *)0x0;
  local_78 = (TextLine *)0x0;
  local_70 = 0;
                    /* try { // try from 00ae5244 to 00ae524f has its CatchHandler @ 00ae5eac */
  FormatTextLines(param_4,param_2,(vector *)&local_80);
  if (local_80 == local_78) {
    uVar7 = 0;
    uVar9 = 0;
    uVar12 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar21 = 0;
  }
  else {
    uVar6 = 0;
    uVar19 = 0;
    uVar11 = 0;
    uVar22 = 0;
    uVar15 = 0;
    uVar17 = 0;
    pTVar18 = local_80;
    do {
      uVar7 = uVar6;
      uVar9 = uVar19;
      uVar12 = uVar11;
      uVar14 = uVar22;
      uVar16 = uVar15;
      uVar21 = uVar17;
      if (*(int *)(pTVar18 + 0x90) == 0) {
        uVar21 = (ulong)((byte)pTVar18[0xb0] >> 1);
        if (((byte)pTVar18[0xb0] & 1) != 0) {
          uVar21 = *(ulong *)(pTVar18 + 0xb8);
        }
        if (uVar21 <= uVar17) {
          uVar21 = uVar17;
        }
        uVar16 = (ulong)((byte)pTVar18[200] >> 1);
        if (((byte)pTVar18[200] & 1) != 0) {
          uVar16 = *(ulong *)(pTVar18 + 0xd0);
        }
        if (uVar16 <= uVar15) {
          uVar16 = uVar15;
        }
        uVar14 = (ulong)((byte)pTVar18[0xe0] >> 1);
        if (((byte)pTVar18[0xe0] & 1) != 0) {
          uVar14 = *(ulong *)(pTVar18 + 0xe8);
        }
        if (uVar14 <= uVar22) {
          uVar14 = uVar22;
        }
        uVar12 = (ulong)((byte)pTVar18[0xf8] >> 1);
        if (((byte)pTVar18[0xf8] & 1) != 0) {
          uVar12 = *(ulong *)(pTVar18 + 0x100);
        }
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        uVar9 = (ulong)((byte)pTVar18[0x110] >> 1);
        if (((byte)pTVar18[0x110] & 1) != 0) {
          uVar9 = *(ulong *)(pTVar18 + 0x118);
        }
        if (uVar9 <= uVar19) {
          uVar9 = uVar19;
        }
        uVar7 = (ulong)((byte)pTVar18[0x128] >> 1);
        if (((byte)pTVar18[0x128] & 1) != 0) {
          uVar7 = *(ulong *)(pTVar18 + 0x130);
        }
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
      }
      pTVar18 = pTVar18 + 0x158;
      uVar6 = uVar7;
      uVar19 = uVar9;
      uVar11 = uVar12;
      uVar22 = uVar14;
      uVar15 = uVar16;
      uVar17 = uVar21;
    } while (pTVar18 != local_78);
  }
  if ((long)local_78 - (long)local_80 != 0) {
    lVar20 = (long)(int)uVar21;
    uVar21 = 0;
    uVar6 = ((long)local_78 - (long)local_80) / 0x158;
    pcVar10 = (char *)((ulong)&local_98 | 1);
    uVar19 = uVar6 - 1;
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    do {
      pTVar18 = local_80;
      switch(*(undefined4 *)(local_80 + uVar21 * 0x158 + 0x90)) {
      case 1:
        if (uVar21 != 0) {
                    /* try { // try from 00ae541c to 00ae549b has its CatchHandler @ 00ae5ef4 */
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1)
          ;
        }
        TVar1 = pTVar18[uVar21 * 0x158 + 0xb0];
        uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0xb8);
        pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0xc0);
        if (((byte)TVar1 & 1) == 0) {
          pTVar13 = pTVar18 + uVar21 * 0x158 + 0xb1;
          uVar11 = (ulong)((byte)TVar1 >> 1);
        }
        if (uVar11 != 0) {
          uVar22 = 0;
          do {
            if (pTVar13[uVar22] != (TextLine)0x20) {
              if (uVar22 != 0xffffffffffffffff) {
                if (0xffffffffffffffef < uVar22) {
                    /* try { // try from 00ae5e88 to 00ae5e8f has its CatchHandler @ 00ae5ea8 */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uVar22 < 0x17) {
                  local_98 = CONCAT71(local_98._1_7_,(char)((int)uVar22 << 1));
                  pcVar5 = pcVar10;
                  if (uVar22 != 0) goto LAB_00ae59a8;
                }
                else {
                  uVar11 = uVar22 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00ae598c to 00ae5993 has its CatchHandler @ 00ae5ea0 */
                  pcVar5 = (char *)operator_new(uVar11);
                  local_98 = uVar11 | 1;
                  local_90 = uVar22;
                  local_88 = pcVar5;
LAB_00ae59a8:
                  memset(pcVar5,0x20,uVar22);
                }
                pcVar5[uVar22] = '\0';
                uVar11 = local_98 >> 1 & 0x7f;
                pcVar5 = pcVar10;
                if ((local_98 & 1) != 0) {
                  uVar11 = local_90;
                  pcVar5 = local_88;
                }
                    /* try { // try from 00ae59d8 to 00ae5a9b has its CatchHandler @ 00ae5ed0 */
                pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   (param_1,pcVar5,uVar11);
                pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   (pbVar3,"//",2);
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar3," ",1);
                pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   (param_1,"size = ",7);
                pTVar13 = pTVar18 + uVar21 * 0x158 + 0xf9;
                uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0xf8] >> 1);
                if (((byte)pTVar18[uVar21 * 0x158 + 0xf8] & 1) != 0) {
                  pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0x108);
                  uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0x100);
                }
                pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   (pbVar3,(char *)pTVar13,uVar11);
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar3,", ",2);
                pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   (param_1,"padded size = ",0xe);
                pTVar13 = pTVar18 + uVar21 * 0x158 + 0x111;
                uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0x110] >> 1);
                if (((byte)pTVar18[uVar21 * 0x158 + 0x110] & 1) != 0) {
                  pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0x120);
                  uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0x118);
                }
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar3,(char *)pTVar13,uVar11);
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (param_1,"\n",1);
                if ((local_98 & 1) != 0) {
                  operator_delete(local_88);
                }
              }
              break;
            }
            uVar22 = uVar22 + 1;
          } while (uVar11 != uVar22);
        }
        lVar8 = *(long *)param_1;
        *(long *)(param_1 + *(long *)(lVar8 + -0x18) + 0x18) = lVar20;
        lVar8 = *(long *)(lVar8 + -0x18);
        *(uint *)(param_1 + lVar8 + 8) = *(uint *)(param_1 + lVar8 + 8) & 0xffffff4f | 0x20;
        TVar1 = pTVar18[uVar21 * 0x158 + 0xb0];
        uVar11 = (ulong)((byte)TVar1 >> 1);
        pTVar13 = pTVar18 + uVar21 * 0x158 + 0xb1;
        if (((byte)TVar1 & 1) != 0) {
          uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0xb8);
          pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0xc0);
        }
                    /* try { // try from 00ae5afc to 00ae5b03 has its CatchHandler @ 00ae5ec0 */
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,(char *)pTVar13,uVar11);
        break;
      case 2:
        lVar8 = *(long *)param_1;
        *(long *)(param_1 + *(long *)(lVar8 + -0x18) + 0x18) = lVar20;
        lVar8 = *(long *)(lVar8 + -0x18);
        *(uint *)(param_1 + lVar8 + 8) = *(uint *)(param_1 + lVar8 + 8) & 0xffffff4f | 0x20;
        uVar11 = (ulong)((byte)local_80[uVar21 * 0x158 + 0xb0] >> 1);
        pTVar18 = local_80 + uVar21 * 0x158 + 0xb1;
        if (((byte)local_80[uVar21 * 0x158 + 0xb0] & 1) != 0) {
          uVar11 = *(ulong *)(local_80 + uVar21 * 0x158 + 0xb8);
          pTVar18 = *(TextLine **)(local_80 + uVar21 * 0x158 + 0xc0);
        }
                    /* try { // try from 00ae553c to 00ae5543 has its CatchHandler @ 00ae5ec4 */
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,(char *)pTVar18,uVar11);
        if (uVar21 < uVar19) {
                    /* try { // try from 00ae554c to 00ae555f has its CatchHandler @ 00ae5ef4 */
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1)
          ;
        }
        break;
      default:
        lVar8 = *(long *)param_1;
        *(long *)(param_1 + *(long *)(lVar8 + -0x18) + 0x18) = lVar20;
        lVar8 = *(long *)(lVar8 + -0x18);
        *(uint *)(param_1 + lVar8 + 8) = *(uint *)(param_1 + lVar8 + 8) & 0xffffff4f | 0x20;
        uVar11 = (ulong)((byte)local_80[uVar21 * 0x158 + 0xb0] >> 1);
        pTVar13 = local_80 + uVar21 * 0x158 + 0xb1;
        if (((byte)local_80[uVar21 * 0x158 + 0xb0] & 1) != 0) {
          uVar11 = *(ulong *)(local_80 + uVar21 * 0x158 + 0xb8);
          pTVar13 = *(TextLine **)(local_80 + uVar21 * 0x158 + 0xc0);
        }
                    /* try { // try from 00ae562c to 00ae5633 has its CatchHandler @ 00ae5ebc */
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,(char *)pTVar13,uVar11);
                    /* try { // try from 00ae5634 to 00ae567b has its CatchHandler @ 00ae5ef4 */
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1," ",1);
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar3,"//",2);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3," ",1);
        plVar4 = (long *)std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   (param_1,"abs offset = ",0xd);
        lVar8 = *plVar4;
        *(long *)((long)plVar4 + *(long *)(lVar8 + -0x18) + 0x18) = (long)(int)uVar16;
        lVar8 = *(long *)(lVar8 + -0x18);
        *(uint *)((long)plVar4 + lVar8 + 8) =
             *(uint *)((long)plVar4 + lVar8 + 8) & 0xffffffcf | 0x80;
        uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 200] >> 1);
        pTVar13 = pTVar18 + uVar21 * 0x158 + 0xc9;
        if (((byte)pTVar18[uVar21 * 0x158 + 200] & 1) != 0) {
          uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0xd0);
          pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0xd8);
        }
                    /* try { // try from 00ae56d0 to 00ae56e3 has its CatchHandler @ 00ae5ef0 */
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)plVar4,(char *)pTVar13,uVar11);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,", ",2);
        if (!param_3) {
                    /* try { // try from 00ae56ec to 00ae56ff has its CatchHandler @ 00ae5ef4 */
          plVar4 = (long *)std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (param_1,"rel offset = ",0xd);
          lVar8 = *plVar4;
          *(long *)((long)plVar4 + *(long *)(lVar8 + -0x18) + 0x18) = (long)(int)uVar14;
          lVar8 = *(long *)(lVar8 + -0x18);
          *(uint *)((long)plVar4 + lVar8 + 8) =
               *(uint *)((long)plVar4 + lVar8 + 8) & 0xffffffcf | 0x80;
          uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0xe0] >> 1);
          pTVar13 = pTVar18 + uVar21 * 0x158 + 0xe1;
          if (((byte)pTVar18[uVar21 * 0x158 + 0xe0] & 1) != 0) {
            uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0xe8);
            pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0xf0);
          }
                    /* try { // try from 00ae5750 to 00ae5763 has its CatchHandler @ 00ae5ecc */
          pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             ((basic_ostream *)plVar4,(char *)pTVar13,uVar11);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,", ",2);
        }
                    /* try { // try from 00ae5764 to 00ae5777 has its CatchHandler @ 00ae5ef4 */
        plVar4 = (long *)std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   (param_1,"size = ",7);
        lVar8 = *plVar4;
        *(long *)((long)plVar4 + *(long *)(lVar8 + -0x18) + 0x18) = (long)(int)uVar12;
        lVar8 = *(long *)(lVar8 + -0x18);
        *(uint *)((long)plVar4 + lVar8 + 8) =
             *(uint *)((long)plVar4 + lVar8 + 8) & 0xffffffcf | 0x80;
        uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0xf8] >> 1);
        pTVar13 = pTVar18 + uVar21 * 0x158 + 0xf9;
        if (((byte)pTVar18[uVar21 * 0x158 + 0xf8] & 1) != 0) {
          uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0x100);
          pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0x108);
        }
                    /* try { // try from 00ae57c8 to 00ae57db has its CatchHandler @ 00ae5eec */
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)plVar4,(char *)pTVar13,uVar11);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,", ",2);
                    /* try { // try from 00ae57dc to 00ae57ef has its CatchHandler @ 00ae5ef4 */
        plVar4 = (long *)std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   (param_1,"padded size = ",0xe);
        lVar8 = *plVar4;
        *(long *)((long)plVar4 + *(long *)(lVar8 + -0x18) + 0x18) = (long)(int)uVar9;
        lVar8 = *(long *)(lVar8 + -0x18);
        *(uint *)((long)plVar4 + lVar8 + 8) =
             *(uint *)((long)plVar4 + lVar8 + 8) & 0xffffffcf | 0x80;
        uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0x110] >> 1);
        pTVar13 = pTVar18 + uVar21 * 0x158 + 0x111;
        if (((byte)pTVar18[uVar21 * 0x158 + 0x110] & 1) != 0) {
          uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0x118);
          pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0x120);
        }
                    /* try { // try from 00ae5844 to 00ae5847 has its CatchHandler @ 00ae5ec8 */
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)plVar4,(char *)pTVar13,uVar11);
        if (*(int *)(pTVar18 + uVar21 * 0x158 + 0x70) != 0) {
                    /* try { // try from 00ae5854 to 00ae587b has its CatchHandler @ 00ae5ef4 */
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2)
          ;
          plVar4 = (long *)std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (param_1,"array stride = ",0xf);
          *(long *)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 0x18) = (long)(int)uVar7;
          uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0x128] >> 1);
          pTVar13 = pTVar18 + uVar21 * 0x158 + 0x129;
          if (((byte)pTVar18[uVar21 * 0x158 + 0x128] & 1) != 0) {
            uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0x130);
            pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0x138);
          }
                    /* try { // try from 00ae58b8 to 00ae58bb has its CatchHandler @ 00ae5eb8 */
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)plVar4,(char *)pTVar13,uVar11);
        }
        uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0x140] >> 1);
        if (((byte)pTVar18[uVar21 * 0x158 + 0x140] & 1) != 0) {
          uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0x148);
        }
        if (uVar11 != 0) {
                    /* try { // try from 00ae58e0 to 00ae5923 has its CatchHandler @ 00ae5ef4 */
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ",1);
          uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0x140] >> 1);
          pTVar13 = pTVar18 + uVar21 * 0x158 + 0x141;
          if (((byte)pTVar18[uVar21 * 0x158 + 0x140] & 1) != 0) {
            uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0x148);
            pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0x150);
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1,(char *)pTVar13,uVar11);
        }
        break;
      case 4:
        if (!param_3) {
          if (uVar21 != 0) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n",1);
          }
          TVar1 = pTVar18[uVar21 * 0x158 + 0xb0];
          uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0xb8);
          pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0xc0);
          if (((byte)TVar1 & 1) == 0) {
            pTVar13 = pTVar18 + uVar21 * 0x158 + 0xb1;
            uVar11 = (ulong)((byte)TVar1 >> 1);
          }
          if (uVar11 != 0) {
            uVar22 = 0;
            do {
              if (pTVar13[uVar22] != (TextLine)0x20) {
                if (uVar22 != 0xffffffffffffffff) {
                  if (0xffffffffffffffef < uVar22) {
                    /* try { // try from 00ae5e90 to 00ae5e97 has its CatchHandler @ 00ae5ea4 */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uVar22 < 0x17) {
                    local_98 = CONCAT71(local_98._1_7_,(char)((int)uVar22 << 1));
                    pcVar5 = pcVar10;
                    if (uVar22 != 0) goto LAB_00ae5b38;
                  }
                  else {
                    uVar11 = uVar22 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00ae5b1c to 00ae5b23 has its CatchHandler @ 00ae5e9c */
                    pcVar5 = (char *)operator_new(uVar11);
                    local_98 = uVar11 | 1;
                    local_90 = uVar22;
                    local_88 = pcVar5;
LAB_00ae5b38:
                    memset(pcVar5,0x20,uVar22);
                  }
                  pcVar5[uVar22] = '\0';
                  uVar11 = local_98 >> 1 & 0x7f;
                  pcVar5 = pcVar10;
                  if ((local_98 & 1) != 0) {
                    uVar11 = local_90;
                    pcVar5 = local_88;
                  }
                    /* try { // try from 00ae5b68 to 00ae5d8b has its CatchHandler @ 00ae5ed4 */
                  pbVar3 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (param_1,pcVar5,uVar11);
                  pbVar3 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (pbVar3,"//",2);
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar3," ",1);
                  pbVar3 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (param_1,"abs offset = ",0xd);
                  pTVar13 = pTVar18 + uVar21 * 0x158 + 0xc9;
                  uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 200] >> 1);
                  if (((byte)pTVar18[uVar21 * 0x158 + 200] & 1) != 0) {
                    pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0xd8);
                    uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0xd0);
                  }
                  pbVar3 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (pbVar3,(char *)pTVar13,uVar11);
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar3,", ",2);
                  pbVar3 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (param_1,"rel offset = ",0xd);
                  pTVar13 = pTVar18 + uVar21 * 0x158 + 0xe1;
                  uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0xe0] >> 1);
                  if (((byte)pTVar18[uVar21 * 0x158 + 0xe0] & 1) != 0) {
                    pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0xf0);
                    uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0xe8);
                  }
                  pbVar3 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (pbVar3,(char *)pTVar13,uVar11);
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar3,", ",2);
                  pbVar3 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (param_1,"size = ",7);
                  pTVar13 = pTVar18 + uVar21 * 0x158 + 0xf9;
                  uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0xf8] >> 1);
                  if (((byte)pTVar18[uVar21 * 0x158 + 0xf8] & 1) != 0) {
                    pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0x108);
                    uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0x100);
                  }
                  pbVar3 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (pbVar3,(char *)pTVar13,uVar11);
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar3,", ",2);
                  pbVar3 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     (param_1,"padded size = ",0xe);
                  pTVar13 = pTVar18 + uVar21 * 0x158 + 0x111;
                  uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0x110] >> 1);
                  if (((byte)pTVar18[uVar21 * 0x158 + 0x110] & 1) != 0) {
                    pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0x120);
                    uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0x118);
                  }
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar3,(char *)pTVar13,uVar11);
                  if (*(int *)(pTVar18 + uVar21 * 0x158 + 0x70) != 0) {
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_1,", ",2);
                    pbVar3 = std::__ndk1::
                             __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                       (param_1,"array stride = ",0xf);
                    pTVar13 = pTVar18 + uVar21 * 0x158 + 0x129;
                    uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0x128] >> 1);
                    if (((byte)pTVar18[uVar21 * 0x158 + 0x128] & 1) != 0) {
                      pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0x138);
                      uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0x130);
                    }
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar3,(char *)pTVar13,uVar11);
                  }
                  uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0x140] >> 1);
                  if (((byte)pTVar18[uVar21 * 0x158 + 0x140] & 1) != 0) {
                    uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0x148);
                  }
                  if (uVar11 != 0) {
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_1," ",1);
                    pTVar13 = pTVar18 + uVar21 * 0x158 + 0x141;
                    uVar11 = (ulong)((byte)pTVar18[uVar21 * 0x158 + 0x140] >> 1);
                    if (((byte)pTVar18[uVar21 * 0x158 + 0x140] & 1) != 0) {
                      pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0x150);
                      uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0x148);
                    }
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_1,(char *)pTVar13,uVar11);
                  }
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_1,"\n",1);
                  if ((local_98 & 1) != 0) {
                    operator_delete(local_88);
                  }
                }
                break;
              }
              uVar22 = uVar22 + 1;
            } while (uVar11 != uVar22);
          }
          lVar8 = *(long *)param_1;
          *(long *)(param_1 + *(long *)(lVar8 + -0x18) + 0x18) = lVar20;
          lVar8 = *(long *)(lVar8 + -0x18);
          *(uint *)(param_1 + lVar8 + 8) = *(uint *)(param_1 + lVar8 + 8) & 0xffffff4f | 0x20;
          TVar1 = pTVar18[uVar21 * 0x158 + 0xb0];
          pTVar13 = pTVar18 + uVar21 * 0x158 + 0xb1;
          uVar11 = (ulong)((byte)TVar1 >> 1);
          if (((byte)TVar1 & 1) != 0) {
            pTVar13 = *(TextLine **)(pTVar18 + uVar21 * 0x158 + 0xc0);
            uVar11 = *(ulong *)(pTVar18 + uVar21 * 0x158 + 0xb8);
          }
                    /* try { // try from 00ae5df0 to 00ae5df7 has its CatchHandler @ 00ae5eb0 */
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1,(char *)pTVar13,uVar11);
        }
        break;
      case 8:
        if (!param_3) {
          lVar8 = *(long *)param_1;
          *(long *)(param_1 + *(long *)(lVar8 + -0x18) + 0x18) = lVar20;
          lVar8 = *(long *)(lVar8 + -0x18);
          *(uint *)(param_1 + lVar8 + 8) = *(uint *)(param_1 + lVar8 + 8) & 0xffffff4f | 0x20;
          uVar11 = (ulong)((byte)local_80[uVar21 * 0x158 + 0xb0] >> 1);
          pTVar18 = local_80 + uVar21 * 0x158 + 0xb1;
          if (((byte)local_80[uVar21 * 0x158 + 0xb0] & 1) != 0) {
            uVar11 = *(ulong *)(local_80 + uVar21 * 0x158 + 0xb8);
            pTVar18 = *(TextLine **)(local_80 + uVar21 * 0x158 + 0xc0);
          }
                    /* try { // try from 00ae55b8 to 00ae55bf has its CatchHandler @ 00ae5eb4 */
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1,(char *)pTVar18,uVar11);
          if (uVar21 < uVar19) {
                    /* try { // try from 00ae55c8 to 00ae55db has its CatchHandler @ 00ae5ef4 */
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n",1);
          }
        }
      }
      if (uVar21 < uVar19) {
                    /* try { // try from 00ae5e04 to 00ae5e17 has its CatchHandler @ 00ae5ef4 */
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar6);
  }
  pTVar13 = local_80;
  pTVar18 = local_78;
  if (local_80 != (TextLine *)0x0) {
    while (pTVar18 != pTVar13) {
      TextLine::~TextLine(pTVar18 + -0x158);
      pTVar18 = pTVar18 + -0x158;
    }
    local_78 = pTVar13;
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


