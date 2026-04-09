// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeSplitMesh
// Entry Point: 0091e6ac
// Size: 548 bytes
// Signature: undefined __cdecl serializeSplitMesh(char * param_1, uint param_2, float * param_3, float param_4, IndexedTriangleSet * param_5, set * param_6, CookingInterface * param_7, Brep * param_8, vector * param_9, uchar * * param_10, uint * param_11)


/* SerializationHelper::serializeSplitMesh(char const*, unsigned int, float const*, float,
   IndexedTriangleSet*, std::__ndk1::set<Bt2PhysicsCookedDataSet::CookingId,
   std::__ndk1::less<Bt2PhysicsCookedDataSet::CookingId>,
   std::__ndk1::allocator<Bt2PhysicsCookedDataSet::CookingId> > const*,
   SerializationHelper::CookingInterface*, Brep*, std::__ndk1::vector<Brep*,
   std::__ndk1::allocator<Brep*> > const&, unsigned char*&, unsigned int&) */

undefined8
SerializationHelper::serializeSplitMesh
          (char *param_1,uint param_2,float *param_3,float param_4,IndexedTriangleSet *param_5,
          set *param_6,CookingInterface *param_7,Brep *param_8,vector *param_9,uchar **param_10,
          uint *param_11)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uchar *__s;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 local_98;
  void *local_90;
  void *local_88;
  undefined8 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  local_90 = (void *)0x0;
  local_88 = (void *)0x0;
  local_80 = 0;
                    /* try { // try from 0091e708 to 0091e733 has its CatchHandler @ 0091e8d8 */
  uVar4 = getIndexedTriangleSetSerializedSize(param_1,param_5,param_6,param_7,(vector *)&local_90);
  *param_11 = uVar4 + 8;
  iVar5 = BrepUtil::getBrepFileDataSize(param_8);
  uVar6 = (iVar5 + 7U & 0xfffffffc) + *param_11;
  *param_11 = uVar6;
  lVar7 = *(long *)param_9;
  if (*(long *)(param_9 + 8) != lVar7) {
    uVar9 = 0;
    do {
      *param_11 = uVar6 + 8;
                    /* try { // try from 0091e764 to 0091e767 has its CatchHandler @ 0091e8dc */
      iVar5 = BrepUtil::getBrepFileDataSize(*(Brep **)(lVar7 + uVar9 * 8));
      uVar9 = (ulong)((int)uVar9 + 1);
      uVar6 = *param_11 + (iVar5 + 3U & 0xfffffffc);
      *param_11 = uVar6;
      lVar7 = *(long *)param_9;
    } while (uVar9 < (ulong)(*(long *)(param_9 + 8) - lVar7 >> 3));
  }
                    /* try { // try from 0091e794 to 0091e79b has its CatchHandler @ 0091e8d8 */
  __s = (uchar *)operator_new__((ulong)uVar6);
  *param_10 = __s;
  memset(__s,0,(ulong)uVar6);
                    /* try { // try from 0091e7b4 to 0091e7df has its CatchHandler @ 0091e8d0 */
  serializeIndexedTriangleSetToBuffer
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,(vector *)&local_90,__s,uVar4);
                    /* try { // try from 0091e7e0 to 0091e80b has its CatchHandler @ 0091e8d4 */
  BrepUtil::getBrepFileHeader(param_8,(BrepFileHeader *)&local_98);
  puVar8 = (undefined8 *)(__s + uVar4);
  *puVar8 = local_98;
  BrepUtil::saveBrepToFileBuffer(param_8,(uchar *)(puVar8 + 1));
  iVar5 = BrepUtil::getBrepFileDataSize((BrepFileHeader *)&local_98);
  lVar7 = *(long *)param_9;
  lVar2 = *(long *)(param_9 + 8);
  puVar1 = (undefined4 *)((long)(puVar8 + 1) + ((ulong)(iVar5 + 3) & 0xfffffffc));
  *puVar1 = (int)((ulong)(lVar2 - lVar7) >> 3);
  if (lVar2 - lVar7 != 0) {
    uVar9 = 0;
    puVar8 = (undefined8 *)(puVar1 + 1);
    do {
                    /* try { // try from 0091e838 to 0091e85f has its CatchHandler @ 0091e8e0 */
      BrepUtil::getBrepFileHeader(*(Brep **)(lVar7 + uVar9 * 8),(BrepFileHeader *)&local_98);
      lVar7 = *(long *)param_9;
      *puVar8 = local_98;
      BrepUtil::saveBrepToFileBuffer(*(Brep **)(lVar7 + uVar9 * 8),(uchar *)(puVar8 + 1));
      iVar5 = BrepUtil::getBrepFileDataSize((BrepFileHeader *)&local_98);
      lVar7 = *(long *)param_9;
      uVar9 = (ulong)((int)uVar9 + 1);
      puVar8 = (undefined8 *)((long)(puVar8 + 1) + (ulong)(iVar5 + 3U & 0xfffffffc));
    } while (uVar9 < (ulong)(*(long *)(param_9 + 8) - lVar7 >> 3));
  }
  if (local_90 != (void *)0x0) {
    local_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return 4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


