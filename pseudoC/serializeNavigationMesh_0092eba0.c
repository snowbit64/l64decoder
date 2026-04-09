// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeNavigationMesh
// Entry Point: 0092eba0
// Size: 1292 bytes
// Signature: undefined __cdecl serializeNavigationMesh(NavigationMesh * param_1, basic_string * param_2, uint param_3, basic_ostream * param_4)


/* I3DSaveUtil::serializeNavigationMesh(NavigationMesh*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int,
   std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */

void I3DSaveUtil::serializeNavigationMesh
               (NavigationMesh *param_1,basic_string *param_2,uint param_3,basic_ostream *param_4)

{
  ulong uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  basic_ostream *pbVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  
  fVar14 = (float)NavigationMesh::getCellSize();
  fVar15 = (float)NavigationMesh::getCellHeight();
  pfVar6 = (float *)NavigationMesh::getGridMinBound();
  pfVar7 = (float *)NavigationMesh::getGridMaxBound();
  uVar3 = NavigationMesh::getNumOfVertices();
  uVar4 = NavigationMesh::getNumOfNodes();
  uVar12 = 0;
  if (uVar4 != 0) {
    uVar11 = 0;
    do {
      NavigationMesh::getNodeAt(param_1,uVar11);
      iVar5 = NavigationMeshNode::getNumOfEdges();
      uVar11 = uVar11 + 1;
      uVar12 = iVar5 + uVar12;
    } while (uVar4 != uVar11);
  }
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_4,"    <NavigationMesh name=\"",0x1a);
  uVar1 = *(ulong *)(param_2 + 2);
  pcVar2 = *(char **)(param_2 + 4);
  if ((*(byte *)param_2 & 1) == 0) {
    pcVar2 = (char *)((long)param_2 + 1);
    uVar1 = (ulong)(*(byte *)param_2 >> 1);
  }
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar8,pcVar2,uVar1);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar8,"\" shapeId=\"",0xb);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,param_3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\"",1);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_4," cellSize=\"",0xb);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,fVar14);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\"",1);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_4," cellHeight=\"",0xd);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,fVar15);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\"",1);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_4," gridMinBound=\"",0xf);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,*pfVar6);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8," ",1);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,pfVar6[1]);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8," ",1);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,pfVar6[2]);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\"",1);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_4," gridMaxBound=\"",0xf);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,*pfVar7);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8," ",1);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,pfVar7[1]);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8," ",1);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,pfVar7[2]);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\"",1);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_4," vertices=\"",0xb);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\"",1);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_4," nodes=\"",8);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,uVar4);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\"",1);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_4," edges=\"",8);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,uVar12);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\"",1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_4,">\n",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_4,"      <Vertices>\n",0x11);
  pfVar6 = (float *)NavigationMesh::getVertices();
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_4,"        <v p=\"",0xe);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,*pfVar6);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8," ",1);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_4,pfVar6[1]);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8," ",1);
    pbVar8 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_4,pfVar6[2]);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\"/>\n",4);
    pfVar6 = pfVar6 + 3;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_4,"      </Vertices>\n",0x12);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_4,"      <Nodes>\n",0xe);
  if (uVar4 != 0) {
    uVar12 = 0;
    do {
      NavigationMesh::getNodeAt(param_1,uVar12);
      uVar3 = NavigationMeshNode::getNumOfEdges();
      puVar9 = (ushort *)NavigationMeshNode::getVertexIndices();
      puVar10 = (ushort *)NavigationMeshNode::getConnectionIndices();
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_4,"        <Node ",0xe);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"vi=\"",4);
      if (uVar3 == 0) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_4,"\" ci=\"",6);
      }
      else {
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_4,*puVar9);
        if (uVar3 == 1) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_4,"\" ci=\"",6);
        }
        else {
          lVar13 = (ulong)uVar3 - 1;
          do {
            puVar9 = puVar9 + 1;
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_4," ",1);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_4,*puVar9);
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_4,"\" ci=\"",6);
          if (uVar3 == 0) goto LAB_0092ef18;
        }
        uVar11 = (uint)*puVar10;
        if (uVar11 == 0xffff) {
          uVar11 = 0xffffffff;
        }
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_4,uVar11);
        if (uVar3 != 1) {
          lVar13 = (ulong)uVar3 - 1;
          do {
            puVar10 = puVar10 + 1;
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_4," ",1);
            uVar3 = (uint)*puVar10;
            if (uVar3 == 0xffff) {
              uVar3 = 0xffffffff;
            }
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_4,uVar3);
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
      }
LAB_0092ef18:
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_4,"\"/>\n",4)
      ;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar4);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_4,"      </Nodes>\n",0xf);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_4,"    </NavigationMesh>\n",0x16);
  return;
}


