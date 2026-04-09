// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNavigationMesh
// Entry Point: 00a58be8
// Size: 156 bytes
// Signature: undefined __thiscall setNavigationMesh(NavigationMeshScenegraphNode * this, NavigationMesh * param_1)


/* NavigationMeshScenegraphNode::setNavigationMesh(NavigationMesh*) */

void __thiscall
NavigationMeshScenegraphNode::setNavigationMesh
          (NavigationMeshScenegraphNode *this,NavigationMesh *param_1)

{
  int iVar1;
  DetourNavigationMeshQuery *pDVar2;
  long *plVar3;
  
  pDVar2 = *(DetourNavigationMeshQuery **)(this + 0x160);
  if (pDVar2 != (DetourNavigationMeshQuery *)0x0) {
    DetourNavigationMeshQuery::~DetourNavigationMeshQuery(pDVar2);
    operator_delete(pDVar2);
  }
  plVar3 = *(long **)(this + 0x158);
  *(undefined8 *)(this + 0x160) = 0;
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00f27700(0xffffffff,plVar3 + 1), iVar1 < 2)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  *(NavigationMesh **)(this + 0x158) = param_1;
  if (param_1 != (NavigationMesh *)0x0) {
    FUN_00f276d0(1,param_1 + 8);
    pDVar2 = (DetourNavigationMeshQuery *)operator_new(0x120);
                    /* try { // try from 00a58c6c to 00a58c6f has its CatchHandler @ 00a58c84 */
    DetourNavigationMeshQuery::DetourNavigationMeshQuery(pDVar2,*(NavigationMesh **)(this + 0x158));
    *(DetourNavigationMeshQuery **)(this + 0x160) = pDVar2;
  }
  return;
}


