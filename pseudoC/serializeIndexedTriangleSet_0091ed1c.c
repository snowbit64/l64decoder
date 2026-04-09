// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeIndexedTriangleSet
// Entry Point: 0091ed1c
// Size: 272 bytes
// Signature: undefined __cdecl serializeIndexedTriangleSet(char * param_1, uint param_2, float * param_3, float param_4, IndexedTriangleSet * param_5, set * param_6, CookingInterface * param_7, uchar * * param_8, uint * param_9)


/* SerializationHelper::serializeIndexedTriangleSet(char const*, unsigned int, float const*, float,
   IndexedTriangleSet*, std::__ndk1::set<Bt2PhysicsCookedDataSet::CookingId,
   std::__ndk1::less<Bt2PhysicsCookedDataSet::CookingId>,
   std::__ndk1::allocator<Bt2PhysicsCookedDataSet::CookingId> > const*,
   SerializationHelper::CookingInterface*, unsigned char*&, unsigned int&) */

undefined8
SerializationHelper::serializeIndexedTriangleSet
          (char *param_1,uint param_2,float *param_3,float param_4,IndexedTriangleSet *param_5,
          set *param_6,CookingInterface *param_7,uchar **param_8,uint *param_9)

{
  long lVar1;
  uint uVar2;
  uchar *__s;
  void *local_90;
  void *local_88;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_90 = (void *)0x0;
  local_88 = (void *)0x0;
  local_80 = 0;
                    /* try { // try from 0091ed78 to 0091ed9f has its CatchHandler @ 0091ee2c */
  uVar2 = getIndexedTriangleSetSerializedSize(param_1,param_5,param_6,param_7,(vector *)&local_90);
  *param_9 = uVar2;
  __s = (uchar *)operator_new__((ulong)uVar2);
  *param_8 = __s;
  memset(__s,0,(ulong)uVar2);
                    /* try { // try from 0091edb4 to 0091eddf has its CatchHandler @ 0091ee2c */
  serializeIndexedTriangleSetToBuffer
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,(vector *)&local_90,__s,uVar2);
  if (local_90 != (void *)0x0) {
    local_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


