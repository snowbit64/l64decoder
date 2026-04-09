// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createOccluders
// Entry Point: 008fa640
// Size: 352 bytes
// Signature: undefined __thiscall createOccluders(Decimator * this, vector * param_1, int param_2, uint param_3, float param_4, float param_5, float param_6, float param_7, uint param_8, bool param_9)


/* Decimator::createOccluders(std::__ndk1::vector<IndexedTriangleSet*,
   std::__ndk1::allocator<IndexedTriangleSet*> >&, int, unsigned int, float, float, float, float,
   unsigned int, bool) */

void __thiscall
Decimator::createOccluders
          (Decimator *this,vector *param_1,int param_2,uint param_3,float param_4,float param_5,
          float param_6,float param_7,uint param_8,bool param_9)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = *(int *)(this + 0x18);
  uVar6 = (ulong)(*(int *)(this + 0x14) * *(int *)(this + 0x10) * iVar4);
  uVar7 = *(long *)(param_1 + 8) - *(long *)param_1 >> 3;
  if (uVar7 < uVar6) {
    std::__ndk1::vector<IndexedTriangleSet*,std::__ndk1::allocator<IndexedTriangleSet*>>::__append
              ((vector<IndexedTriangleSet*,std::__ndk1::allocator<IndexedTriangleSet*>> *)param_1,
               uVar6 - uVar7);
    iVar4 = *(int *)(this + 0x18);
  }
  else if (uVar6 < uVar7) {
    *(ulong *)(param_1 + 8) = *(long *)param_1 + uVar6 * 8;
  }
  if (iVar4 != 0) {
    iVar3 = *(int *)(this + 0x14);
    iVar8 = 0;
    iVar5 = iVar3;
    do {
      if (iVar5 != 0) {
        iVar4 = 0;
        iVar5 = *(int *)(this + 0x10);
        do {
          if (iVar5 != 0) {
            iVar9 = 0;
            do {
              uVar2 = createOccluder(this,iVar9,iVar4,iVar8,param_2,param_3,param_4,param_5,param_6,
                                     param_7,param_8,param_9);
              iVar5 = *(int *)(this + 0x10);
              iVar3 = *(int *)(this + 0x14);
              iVar1 = iVar9 + iVar5 * (iVar4 + iVar8 * iVar3);
              iVar9 = iVar9 + 1;
              *(undefined8 *)(*(long *)param_1 + (long)iVar1 * 8) = uVar2;
            } while (iVar9 != iVar5);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != iVar3);
        iVar4 = *(int *)(this + 0x18);
        iVar5 = iVar3;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar4);
  }
  return;
}


