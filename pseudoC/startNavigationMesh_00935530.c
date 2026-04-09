// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startNavigationMesh
// Entry Point: 00935530
// Size: 296 bytes
// Signature: undefined __cdecl startNavigationMesh(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startNavigationMesh(void*, char const*, char const**) */

void I3DSceneGraphFactory::startNavigationMesh(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  char *__nptr;
  NavigationMeshScenegraphNode *this;
  long *plVar5;
  long lVar6;
  long lVar7;
  NavigationMesh *pNVar8;
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = param_3;
  pcVar4 = (char *)ExpatUtil::getAttr("name",param_3);
  __nptr = (char *)ExpatUtil::getAttr("shapeId",param_3);
  if ((pcVar4 != (char *)0x0) && (__nptr != (char *)0x0)) {
    uVar3 = atoi(__nptr);
    lVar7 = *(long *)((long)param_1 + 0x150);
    if (lVar7 != 0) {
      lVar6 = (long)param_1 + 0x150;
      do {
        bVar2 = *(uint *)(lVar7 + 0x20) < uVar3;
        if (!bVar2) {
          lVar6 = lVar7;
        }
        lVar7 = *(long *)(lVar7 + (ulong)bVar2 * 8);
      } while (lVar7 != 0);
      if ((lVar6 != (long)param_1 + 0x150) && (*(uint *)(lVar6 + 0x20) <= uVar3)) {
        pNVar8 = *(NavigationMesh **)(lVar6 + 0x28);
        this = (NavigationMeshScenegraphNode *)operator_new(0x168);
                    /* try { // try from 009355dc to 009355e7 has its CatchHandler @ 00935658 */
        NavigationMeshScenegraphNode::NavigationMeshScenegraphNode(this,pcVar4,pNVar8);
        readTransformGroup((I3DReader *)&local_50,(I3DLoad *)param_1,(TransformGroup *)this,false,
                           false,true,false);
        plVar5 = *(long **)(*(long *)((long)param_1 + 0x280) + 0x60);
        (**(code **)(*plVar5 + 0x18))(plVar5,this,0xffffffff);
        *(NavigationMeshScenegraphNode **)(*(long *)((long)param_1 + 0x280) + 0x60) = this;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


