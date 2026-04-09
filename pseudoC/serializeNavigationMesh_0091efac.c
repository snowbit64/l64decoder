// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeNavigationMesh
// Entry Point: 0091efac
// Size: 576 bytes
// Signature: undefined __cdecl serializeNavigationMesh(char * param_1, uint param_2, NavigationMesh * param_3, uchar * * param_4, uint * param_5)


/* SerializationHelper::serializeNavigationMesh(char const*, unsigned int, NavigationMesh*, unsigned
   char*&, unsigned int&) */

undefined8
SerializationHelper::serializeNavigationMesh
          (char *param_1,uint param_2,NavigationMesh *param_3,uchar **param_4,uint *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  int *__s;
  uint *puVar6;
  undefined2 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  
  *param_5 = 0;
  sVar5 = strlen(param_1);
  *param_5 = (int)sVar5 + 0x37U & 0xfffffffc;
  uVar2 = NavigationMesh::getNumOfVertices();
  uVar3 = NavigationMesh::getNumOfNodes();
  uVar12 = 0;
  if (uVar3 != 0) {
    uVar13 = 0;
    do {
      NavigationMesh::getNodeAt(param_3,uVar13);
      iVar4 = NavigationMeshNode::getNumOfEdges();
      uVar13 = uVar13 + 1;
      uVar12 = iVar4 + uVar12;
    } while (uVar3 != uVar13);
  }
  uVar13 = uVar2 * 0xc + (uVar12 + uVar3) * 4 + *param_5;
  *param_5 = uVar13;
  __s = (int *)operator_new__((ulong)uVar13);
  *param_4 = (uchar *)__s;
  memset(__s,0,(ulong)uVar13);
  sVar5 = strlen(param_1);
  iVar4 = (int)sVar5;
  *__s = iVar4;
  memcpy(__s + 1,param_1,sVar5 & 0xffffffff);
  puVar11 = (uint *)((long)(__s + 1) +
                    (ulong)((iVar4 + 3U & 0xfffffffc) - iVar4) + (sVar5 & 0xffffffff));
  *puVar11 = param_2;
  uVar13 = NavigationMesh::getCellSize();
  puVar11[1] = uVar13;
  uVar13 = NavigationMesh::getCellHeight();
  puVar11[2] = uVar13;
  puVar6 = (uint *)NavigationMesh::getGridMinBound();
  puVar11[3] = *puVar6;
  puVar11[4] = puVar6[1];
  puVar11[5] = puVar6[2];
  puVar6 = (uint *)NavigationMesh::getGridMaxBound();
  puVar11[6] = *puVar6;
  puVar11[7] = puVar6[1];
  uVar13 = puVar6[2];
  puVar11[9] = uVar2;
  puVar11[10] = uVar3;
  puVar11[0xb] = uVar12;
  puVar11[8] = uVar13;
  puVar6 = (uint *)NavigationMesh::getVertices();
  puVar11 = puVar11 + 0xc;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar11 = *puVar6;
    puVar11[1] = puVar6[1];
    puVar1 = puVar6 + 2;
    puVar6 = puVar6 + 3;
    puVar11[2] = *puVar1;
    puVar11 = puVar11 + 3;
  }
  if (uVar3 != 0) {
    uVar12 = 0;
    do {
      NavigationMesh::getNodeAt(param_3,uVar12);
      uVar2 = NavigationMeshNode::getNumOfEdges();
      puVar7 = (undefined2 *)NavigationMeshNode::getVertexIndices();
      lVar8 = NavigationMeshNode::getConnectionIndices();
      puVar6 = puVar11 + 1;
      *puVar11 = uVar2;
      uVar9 = (ulong)uVar2;
      puVar11 = puVar6;
      if (uVar2 != 0) {
        do {
          uVar9 = uVar9 - 1;
          puVar6 = (uint *)((long)puVar11 + 2);
          *(undefined2 *)puVar11 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar11 = puVar6;
        } while (uVar9 != 0);
        if (uVar2 != 0) {
          lVar10 = 0;
          do {
            *(undefined2 *)((long)puVar6 + lVar10) = *(undefined2 *)(lVar8 + lVar10);
            lVar10 = lVar10 + 2;
          } while ((ulong)uVar2 * 2 - lVar10 != 0);
          puVar6 = (uint *)((long)puVar6 + lVar10);
        }
      }
      uVar12 = uVar12 + 1;
      puVar11 = puVar6;
    } while (uVar12 != uVar3);
  }
  return 3;
}


