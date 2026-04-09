// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeIndexedTriangleSetToBuffer
// Entry Point: 00920008
// Size: 340 bytes
// Signature: undefined __cdecl serializeIndexedTriangleSetToBuffer(char * param_1, uint param_2, float * param_3, float param_4, IndexedTriangleSet * param_5, set * param_6, CookingInterface * param_7, vector * param_8, uchar * param_9, uint param_10)


/* SerializationHelper::serializeIndexedTriangleSetToBuffer(char const*, unsigned int, float const*,
   float, IndexedTriangleSet*, std::__ndk1::set<Bt2PhysicsCookedDataSet::CookingId,
   std::__ndk1::less<Bt2PhysicsCookedDataSet::CookingId>,
   std::__ndk1::allocator<Bt2PhysicsCookedDataSet::CookingId> > const*,
   SerializationHelper::CookingInterface*, std::__ndk1::vector<SerializationHelper::CookedMeshItem,
   std::__ndk1::allocator<SerializationHelper::CookedMeshItem> >&, unsigned char*, unsigned int) */

void SerializationHelper::serializeIndexedTriangleSetToBuffer
               (char *param_1,uint param_2,float *param_3,float param_4,IndexedTriangleSet *param_5,
               set *param_6,CookingInterface *param_7,vector *param_8,uchar *param_9,uint param_10)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  float fVar9;
  
  sVar4 = strlen(param_1);
  iVar8 = (int)sVar4;
  *(int *)param_9 = iVar8;
  memcpy(param_9 + 4,param_1,sVar4 & 0xffffffff);
  puVar1 = (uint *)(param_9 + 4 + (ulong)((iVar8 + 3U & 0xfffffffc) - iVar8) + (sVar4 & 0xffffffff))
  ;
  *puVar1 = param_2;
  puVar1[1] = (uint)*param_3;
  puVar1[2] = (uint)param_3[1];
  fVar9 = param_3[2];
  puVar1[4] = (uint)param_4;
  puVar1[3] = (uint)fVar9;
  puVar5 = (undefined4 *)serializeIndexedTriangleSet(param_5,(uchar *)(puVar1 + 5));
  *puVar5 = (int)((ulong)(*(long *)(param_8 + 8) - *(long *)param_8) >> 5);
  puVar2 = *(undefined4 **)(param_8 + 8);
  if (*(undefined4 **)param_8 != puVar2) {
    puVar5 = puVar5 + 1;
    puVar7 = *(undefined4 **)param_8 + 2;
    do {
      puVar6 = puVar5 + 1;
      *puVar5 = puVar7[-2];
      if ((*(byte *)(puVar7 + -2) >> 2 & 1) != 0) {
        puVar6 = puVar5 + 4;
        puVar5[1] = puVar7[-1];
        puVar5[2] = *puVar7;
        puVar5[3] = puVar7[1];
      }
      *puVar6 = puVar7[4];
      memcpy(puVar6 + 1,*(void **)(puVar7 + 2),(ulong)(uint)puVar7[4]);
      uVar3 = puVar7[4];
      if (*(void **)(puVar7 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(puVar7 + 2));
      }
      puVar5 = (undefined4 *)((long)(puVar6 + 1) + (ulong)uVar3);
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar6 = puVar7 + 6;
      puVar7 = puVar7 + 8;
    } while (puVar6 != puVar2);
  }
  return;
}


