// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createFromIndexedTriangleSet
// Entry Point: 0097afa0
// Size: 248 bytes
// Signature: undefined __cdecl createFromIndexedTriangleSet(char * param_1, IndexedTriangleSet * param_2, STREAM_QUEUE param_3)


/* MeshSplitGeometry::createFromIndexedTriangleSet(char const*, IndexedTriangleSet*,
   StreamManager::STREAM_QUEUE) */

MeshSplitGeometry *
MeshSplitGeometry::createFromIndexedTriangleSet
          (char *param_1,IndexedTriangleSet *param_2,STREAM_QUEUE param_3)

{
  long lVar1;
  ulong uVar2;
  MeshSplitGeometry *this;
  IndexedTriangleSet *pIVar3;
  StreamManager *this_00;
  Brep **local_78;
  Brep **local_70;
  undefined8 local_68;
  Brep *local_60;
  Vector3 aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_78 = (Brep **)0x0;
  local_70 = (Brep **)0x0;
  local_68 = 0;
                    /* try { // try from 0097afd8 to 0097afeb has its CatchHandler @ 0097b0a8 */
  uVar2 = MeshSplitUtil::createBreps
                    (param_1,param_2,0,(IndexedTriangleSet **)0x0,&local_60,(vector *)&local_78);
  if ((uVar2 & 1) == 0) {
    this = (MeshSplitGeometry *)0x0;
  }
  else {
                    /* try { // try from 0097aff0 to 0097aff7 has its CatchHandler @ 0097b0ac */
    this = (MeshSplitGeometry *)operator_new(0x1b0);
                    /* try { // try from 0097b004 to 0097b037 has its CatchHandler @ 0097b098 */
    pIVar3 = (IndexedTriangleSet *)(**(code **)(*(long *)param_2 + 0x18))(param_2);
    MeshSplitGeometry(this,param_1,pIVar3,aVStack_58,0.0,local_60,
                      (uint)((ulong)((long)local_70 - (long)local_78) >> 3),local_78,0);
                    /* try { // try from 0097b038 to 0097b047 has its CatchHandler @ 0097b0ac */
    this_00 = (StreamManager *)StreamManager::getInstance();
    StreamManager::addStreamable(this_00,(Streamable *)(this + 0x58),param_3);
  }
  if (local_78 != (Brep **)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


