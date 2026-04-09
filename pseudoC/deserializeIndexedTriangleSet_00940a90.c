// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserializeIndexedTriangleSet
// Entry Point: 00940a90
// Size: 360 bytes
// Signature: undefined __cdecl deserializeIndexedTriangleSet(basic_string * param_1, uint * param_2, float * param_3, float * param_4, IndexedTriangleSet * param_5, Bt2PhysicsCookedDataSet * * param_6, uint param_7, uchar * param_8)


/* SerializationHelper::deserializeIndexedTriangleSet(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, unsigned int&, float*, float&,
   IndexedTriangleSet*, Bt2PhysicsCookedDataSet*&, unsigned int, unsigned char*) */

uint * SerializationHelper::deserializeIndexedTriangleSet
                 (basic_string *param_1,uint *param_2,float *param_3,float *param_4,
                 IndexedTriangleSet *param_5,Bt2PhysicsCookedDataSet **param_6,uint param_7,
                 uchar *param_8)

{
  void **ppvVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  Bt2PhysicsCookedDataSet *this;
  void *__dest;
  char *pcVar5;
  uint *__src;
  uint *puVar6;
  ulong __n;
  int iVar7;
  
  iVar7 = *(int *)param_8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_1,(ulong)(param_8 + 4));
  puVar6 = (uint *)(param_8 + 4 + ((ulong)(iVar7 + 3) & 0xfffffffc));
  *param_2 = *puVar6;
  *param_3 = (float)puVar6[1];
  param_3[1] = (float)puVar6[2];
  param_3[2] = (float)puVar6[3];
  *param_4 = (float)puVar6[4];
  pcVar5 = *(char **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pcVar5 = (char *)((long)param_1 + 1);
  }
  piVar4 = (int *)deserializeIndexedTriangleSetData((uchar *)(puVar6 + 5),param_5,pcVar5,param_7);
  puVar6 = (uint *)(piVar4 + 1);
  iVar7 = *piVar4;
  if (iVar7 != 0) {
    this = (Bt2PhysicsCookedDataSet *)operator_new(0x28);
                    /* try { // try from 00940b48 to 00940b4b has its CatchHandler @ 00940bf8 */
    Bt2PhysicsCookedDataSet::Bt2PhysicsCookedDataSet(this);
    *param_6 = this;
    while( true ) {
      iVar7 = iVar7 + -1;
      lVar2 = 4;
      if ((*puVar6 & 4) != 0) {
        lVar2 = 0x10;
      }
      __src = (uint *)((long)puVar6 + lVar2) + 1;
      uVar3 = *(uint *)((long)puVar6 + lVar2);
      __n = (ulong)uVar3;
      if (uVar3 != 0) {
        ppvVar1 = (void **)(this + ((ulong)(*puVar6 >> 1 ^ 0xffffffff) & 1) * 0x10);
        if ((*(uint *)(ppvVar1 + 1) == 0) && (*ppvVar1 == (void *)0x0)) {
          *(uint *)(ppvVar1 + 1) = uVar3;
          __dest = operator_new__(__n + 3 & 0x1fffffffc);
          *ppvVar1 = __dest;
          *(undefined4 *)((long)__dest + (ulong)((int)(__n + 3 >> 2) - 1) * 4) = 0;
          memcpy(__dest,__src,__n);
        }
      }
      puVar6 = (uint *)((long)__src + __n);
      if (iVar7 == 0) break;
      this = *param_6;
    }
  }
  return puVar6;
}


