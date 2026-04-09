// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endIndexedTriangleSet
// Entry Point: 009016e4
// Size: 684 bytes
// Signature: undefined __cdecl endIndexedTriangleSet(void * param_1, char * param_2)


/* I3DIndexedMeshSetFactory::endIndexedTriangleSet(void*, char const*) */

void I3DIndexedMeshSetFactory::endIndexedTriangleSet(void *param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  MeshSplitAttachmentSharedData *this;
  StreamManager *pSVar5;
  MeshSplitAttachmentGeometry *this_00;
  long *plVar6;
  long **pplVar7;
  long lVar8;
  long **pplVar9;
  long **pplVar10;
  uint local_90 [14];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar8 = *(long *)((long)param_1 + 0x278);
  plVar6 = *(long **)(lVar8 + 8);
  if (plVar6 != (long *)0x0) {
    if (*(int *)(lVar8 + 0x7c) == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    else {
      if (I3DLoad::s_optimizeScene == '\0') {
        uVar3 = TriangleSet::getAttributes();
        if ((uVar3 >> 7 & 1) != 0) {
          local_90[0] = 0;
          IndexedTriangleSetGeometryUtil::getDefaultTangentUvIndex(uVar3,(int *)local_90);
          if (local_90[0] != 0xffffffff) {
            IndexedTriangleSet::buildTangents((IndexedTriangleSet *)plVar6,local_90[0]);
          }
        }
      }
      else {
        IndexedTriangleSetBuilder::IndexedTriangleSetBuilder((IndexedTriangleSetBuilder *)local_90);
                    /* try { // try from 0090173c to 0090177f has its CatchHandler @ 009019b4 */
        uVar3 = TriangleSet::getAttributes();
        IndexedTriangleSetBuilder::setVertexAttributes((IndexedTriangleSetBuilder *)local_90,uVar3);
        IndexedTriangleSetBuilder::addIndexedTriangleSet
                  ((IndexedTriangleSetBuilder *)local_90,(IndexedTriangleSet *)plVar6);
        IndexedTriangleSetBuilder::splitVertices();
        uVar3 = TriangleSet::getAttributes();
        if ((uVar3 >> 7 & 1) != 0) {
          IndexedTriangleSetBuilder::buildTangents();
        }
        IndexedTriangleSetBuilder::cleanup();
        if (*(long **)(lVar8 + 8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + 8) + 8))();
        }
                    /* try { // try from 00901794 to 0090179b has its CatchHandler @ 009019b4 */
        uVar4 = IndexedTriangleSetBuilder::createIndexedTriangleSet();
        *(undefined8 *)(lVar8 + 8) = uVar4;
        IndexedTriangleSetBuilder::~IndexedTriangleSetBuilder((IndexedTriangleSetBuilder *)local_90)
        ;
      }
      *(undefined *)(*(long *)(lVar8 + 8) + 0x88) =
           *(undefined *)(*(long *)((long)param_1 + 0x278) + 0x78);
      if (*(char *)(lVar8 + 0x79) == '\0') {
        this_00 = (MeshSplitAttachmentGeometry *)operator_new(0x168);
        pcVar1 = (char *)(lVar8 + 0x51);
        if ((*(byte *)(lVar8 + 0x50) & 1) != 0) {
          pcVar1 = *(char **)(lVar8 + 0x60);
        }
                    /* try { // try from 00901888 to 0090188b has its CatchHandler @ 00901990 */
        IndexedTriangleSetGeometry::IndexedTriangleSetGeometry
                  ((IndexedTriangleSetGeometry *)this_00,pcVar1,*(IndexedTriangleSet **)(lVar8 + 8),
                   (Vector3 *)(lVar8 + 0x68),*(float *)(lVar8 + 0x74));
      }
      else {
        this = (MeshSplitAttachmentSharedData *)operator_new(0x58);
                    /* try { // try from 00901818 to 0090181b has its CatchHandler @ 009019a0 */
        MeshSplitAttachmentSharedData::MeshSplitAttachmentSharedData
                  (this,*(IndexedTriangleSet **)(lVar8 + 8),(vector *)(lVar8 + 0x28));
        pSVar5 = (StreamManager *)StreamManager::getInstance();
        StreamManager::addStreamable
                  (pSVar5,(Streamable *)this,*(STREAM_QUEUE *)((long)param_1 + 0x254));
        this_00 = (MeshSplitAttachmentGeometry *)operator_new(0xa8);
        pcVar1 = (char *)(lVar8 + 0x51);
        if ((*(byte *)(lVar8 + 0x50) & 1) != 0) {
          pcVar1 = *(char **)(lVar8 + 0x60);
        }
                    /* try { // try from 00901850 to 00901857 has its CatchHandler @ 00901994 */
        MeshSplitAttachmentGeometry::MeshSplitAttachmentGeometry
                  (this_00,pcVar1,(vector *)(lVar8 + 0x10),this);
      }
      pSVar5 = (StreamManager *)StreamManager::getInstance();
      StreamManager::addStreamable
                (pSVar5,(Streamable *)(this_00 + 0x58),*(STREAM_QUEUE *)((long)param_1 + 0x254));
      FUN_00f276d0(1,this_00 + 8);
      uVar3 = *(uint *)(lVar8 + 0x7c);
      pplVar7 = (long **)((long)param_1 + 0xc0);
      pplVar9 = (long **)*pplVar7;
      pplVar10 = pplVar7;
      while (pplVar9 != (long **)0x0) {
        while (pplVar10 = pplVar9, uVar3 < *(uint *)(pplVar10 + 4)) {
          pplVar7 = pplVar10;
          pplVar9 = (long **)*pplVar10;
          if ((long **)*pplVar10 == (long **)0x0) {
            plVar6 = *pplVar10;
            goto joined_r0x009018fc;
          }
        }
        if (uVar3 <= *(uint *)(pplVar10 + 4)) break;
        pplVar7 = pplVar10 + 1;
        pplVar9 = (long **)*pplVar7;
      }
      plVar6 = *pplVar7;
joined_r0x009018fc:
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)operator_new(0x30);
        *(uint *)(plVar6 + 4) = uVar3;
        plVar6[5] = (long)this_00;
        *plVar6 = 0;
        plVar6[1] = 0;
        plVar6[2] = (long)pplVar10;
        *pplVar7 = plVar6;
        if (**(long **)((long)param_1 + 0xb8) != 0) {
          *(long *)((long)param_1 + 0xb8) = **(long **)((long)param_1 + 0xb8);
          plVar6 = *pplVar7;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)((long)param_1 + 0xc0),(__tree_node_base *)plVar6);
        *(long *)((long)param_1 + 200) = *(long *)((long)param_1 + 200) + 1;
      }
    }
  }
  *(undefined8 *)(lVar8 + 8) = 0;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


