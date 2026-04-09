// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeVertexData
// Entry Point: 0092e3bc
// Size: 1516 bytes
// Signature: undefined __cdecl serializeVertexData(uint param_1, IndexedTriangleSet * param_2, uint param_3, uint param_4, basic_string * param_5, basic_ostream * param_6)


/* WARNING: Type propagation algorithm not settling */
/* I3DSaveUtil::serializeVertexData(unsigned int, IndexedTriangleSet*, unsigned int, unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */

void I3DSaveUtil::serializeVertexData
               (uint param_1,IndexedTriangleSet *param_2,uint param_3,uint param_4,
               basic_string *param_5,basic_ostream *param_6)

{
  ulong uVar1;
  float *pfVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  basic_ostream *pbVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  
  lVar8 = TriangleSet::getPositions();
  lVar9 = TriangleSet::getNormals();
  lVar10 = TriangleSet::getBlendWeights();
  lVar11 = TriangleSet::getBlendIndices();
  lVar12 = TriangleSet::getTexCoords((TriangleSet *)param_2,0);
  lVar13 = TriangleSet::getTexCoords((TriangleSet *)param_2,1);
  lVar14 = TriangleSet::getTexCoords((TriangleSet *)param_2,2);
  lVar15 = TriangleSet::getTexCoords((TriangleSet *)param_2,3);
  lVar16 = TriangleSet::getColors();
  uVar6 = *(uint *)(param_2 + 0xc);
  uVar18 = 4;
  if ((uVar6 & 0x100) != 0) {
    uVar18 = 1;
  }
  if (param_4 != 0) {
    lVar19 = *(long *)(param_2 + 0x60);
    uVar23 = param_3 * 2;
    lVar24 = 0;
    uVar7 = param_3 << 2;
    uVar20 = uVar18 * param_3;
    uVar4 = uVar18;
    if (uVar18 < 3) {
      uVar4 = 2;
    }
    uVar21 = param_3 * 3;
    do {
      pcVar5 = (char *)((long)param_5 + 1);
      uVar1 = (ulong)(*(byte *)param_5 >> 1);
      if ((*(byte *)param_5 & 1) != 0) {
        pcVar5 = *(char **)(param_5 + 4);
        uVar1 = *(ulong *)(param_5 + 2);
      }
      pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (param_6,pcVar5,uVar1);
      pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar17,"<v p=\"",6);
      pbVar17 = (basic_ostream *)
                std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                           *(float *)(lVar8 + (ulong)uVar21 * 4));
      pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar17," ",1);
      pbVar17 = (basic_ostream *)
                std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                           *(float *)(lVar8 + (ulong)(uVar21 + 1) * 4));
      pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar17," ",1);
      pbVar17 = (basic_ostream *)
                std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                           *(float *)(lVar8 + (ulong)(uVar21 + 2) * 4));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar17,"\"",1);
      if ((param_1 & 1) != 0) {
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_6," n=\"",4);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar9 + (ulong)uVar21 * 4));
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar17," ",1);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar9 + (ulong)(uVar21 + 1) * 4));
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar17," ",1);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar9 + (ulong)(uVar21 + 2) * 4));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar17,"\"",1);
      }
      if ((param_1 >> 1 & 1) != 0) {
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_6," t0=\"",5);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar12 + (ulong)uVar23 * 4));
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar17," ",1);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar12 + (ulong)(uVar23 + 1) * 4));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar17,"\"",1);
      }
      if ((param_1 >> 2 & 1) != 0) {
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_6," t1=\"",5);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar13 + (ulong)uVar23 * 4));
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar17," ",1);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar13 + (ulong)(uVar23 + 1) * 4));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar17,"\"",1);
      }
      if ((param_1 >> 3 & 1) != 0) {
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_6," t2=\"",5);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar14 + (ulong)uVar23 * 4));
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar17," ",1);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar14 + (ulong)(uVar23 + 1) * 4));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar17,"\"",1);
      }
      if ((param_1 >> 4 & 1) != 0) {
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_6," t3=\"",5);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar15 + (ulong)uVar23 * 4));
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar17," ",1);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar15 + (ulong)(uVar23 + 1) * 4));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar17,"\"",1);
      }
      if ((param_1 >> 5 & 1) != 0) {
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_6," c=\"",4);
        uVar1 = (ulong)uVar7 + lVar24;
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar16 + (uVar1 & 0xffffffff) * 4));
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar17," ",1);
        iVar22 = (int)uVar1;
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar16 + (ulong)(iVar22 + 1) * 4));
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar17," ",1);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar16 + (ulong)(iVar22 + 2) * 4));
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar17," ",1);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar16 + (ulong)(iVar22 + 3) * 4));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar17,"\"",1);
      }
      if ((param_1 >> 6 & 1) != 0) {
        if ((param_1 >> 8 & 1) == 0) {
          pfVar2 = (float *)(lVar10 + (ulong)uVar20 * 4);
          pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_6," bw=\"",5);
          pbVar17 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,*pfVar2
                              );
          pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar17," ",1);
          pbVar17 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                               pfVar2[1]);
          pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar17," ",1);
          pbVar17 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                               pfVar2[2]);
          pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar17," ",1);
          pbVar17 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                               pfVar2[3]);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar17,"\"",1)
          ;
        }
        pbVar3 = (byte *)(lVar11 + (ulong)uVar20);
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_6," bi=\"",5);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,(uint)*pbVar3);
        if ((uVar6 >> 8 & 1) == 0) {
          pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_6," ",1);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,(uint)pbVar3[1]);
          pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_6," ",1);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,(uint)pbVar3[2]);
          if (uVar4 != 3) {
            pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (param_6," ",1);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,(uint)pbVar3[3]
                      );
            if (uVar4 != 4) {
              pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  (param_6," ",1);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                         (uint)pbVar3[4]);
            }
          }
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_6,"\"",1);
      }
      if ((param_1 >> 9 & 1) != 0) {
        pbVar17 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_6," g=\"",4);
        pbVar17 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar17,
                             *(float *)(lVar19 + (ulong)param_3 * 4));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar17,"\"",1);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_6,"/>\n",3);
      uVar23 = uVar23 + 2;
      lVar24 = lVar24 + 4;
      param_3 = param_3 + 1;
      uVar21 = uVar21 + 3;
      uVar20 = uVar20 + uVar18;
    } while ((ulong)param_4 << 2 != lVar24);
  }
  return;
}


