// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expandInstances
// Entry Point: 00a21b1c
// Size: 500 bytes
// Signature: undefined __thiscall expandInstances(RenderQueue * this, RenderQueueItemAllocator * param_1, char * param_2, RenderStats * param_3, ICommandBuffer * param_4, uint param_5)


/* RenderQueue::expandInstances(RenderQueueItemAllocator&, char const*, RenderStats&,
   ICommandBuffer*, unsigned int) const */

long * __thiscall
RenderQueue::expandInstances
          (RenderQueue *this,RenderQueueItemAllocator *param_1,char *param_2,RenderStats *param_3,
          ICommandBuffer *param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  RenderController *this_00;
  int *piVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  (**(code **)(*(long *)param_4 + 0xd8))(param_4,param_2);
  uVar4 = *(uint *)(param_1 + 4);
  this_00 = *(RenderController **)this;
  *(uint *)(param_3 + 0x58) = uVar4;
  RenderController::setStructBufferSizeForThreadIx(this_00,param_5,uVar4);
  lVar7 = **(long **)(param_1 + 0x50);
  lVar2 = (*(long **)(param_1 + 0x50))[1];
  if (lVar7 == lVar2) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = *(long **)(*(long *)this + 0x228);
    uVar8 = (lVar2 - lVar7) - 0x10;
    if (uVar8 < 0x80) {
      uVar4 = 0;
      lVar9 = lVar7;
    }
    else {
      uVar8 = (uVar8 >> 4) + 1;
      uVar1 = 8;
      if ((uVar8 & 7) != 0) {
        uVar1 = uVar8 & 7;
      }
      lVar11 = uVar8 - uVar1;
      iVar13 = 0;
      iVar14 = 0;
      iVar15 = 0;
      iVar16 = 0;
      iVar17 = 0;
      iVar18 = 0;
      iVar19 = 0;
      iVar20 = 0;
      lVar9 = lVar7 + lVar11 * 0x10;
      piVar5 = (int *)(lVar7 + 0x48);
      do {
        lVar11 = lVar11 + -8;
        iVar17 = *piVar5 + iVar17;
        iVar18 = piVar5[4] + iVar18;
        iVar19 = piVar5[8] + iVar19;
        iVar20 = piVar5[0xc] + iVar20;
        iVar13 = piVar5[-0x10] + iVar13;
        iVar14 = piVar5[-0xc] + iVar14;
        iVar15 = piVar5[-8] + iVar15;
        iVar16 = piVar5[-4] + iVar16;
        piVar5 = piVar5 + 0x20;
      } while (lVar11 != 0);
      uVar4 = iVar17 + iVar13 + iVar18 + iVar14 + iVar19 + iVar15 + iVar20 + iVar16;
    }
    do {
      piVar5 = (int *)(lVar9 + 8);
      lVar9 = lVar9 + 0x10;
      uVar4 = *piVar5 + uVar4;
    } while (lVar9 != lVar2);
    uVar3 = (**(code **)(*plVar12 + 0x28))(plVar12);
    if (uVar3 < uVar4) {
      uVar4 = (**(code **)(*plVar12 + 0x28))(plVar12);
    }
    piVar5 = (int *)(**(code **)(*plVar12 + 0x10))(plVar12,param_4,0,uVar4,1);
    lVar7 = **(long **)(param_1 + 0x50);
    lVar2 = (*(long **)(param_1 + 0x50))[1];
    if (lVar7 != lVar2) {
      iVar13 = 0;
      do {
        uVar3 = *(uint *)(lVar7 + 8);
        if (uVar3 != 0) {
          uVar10 = 0;
          piVar6 = piVar5;
          do {
            piVar5 = piVar6;
            if (iVar13 + uVar10 < uVar4) {
              piVar5 = piVar6 + 2;
              *piVar6 = uVar10 + *(int *)(lVar7 + 4);
              piVar6[1] = *(int *)(lVar7 + 0xc);
              uVar3 = *(uint *)(lVar7 + 8);
            }
            uVar10 = uVar10 + 1;
            piVar6 = piVar5;
          } while (uVar10 < uVar3);
          iVar13 = iVar13 + uVar10;
        }
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != lVar2);
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,param_4);
  }
  (**(code **)(*(long *)param_4 + 0xe0))(param_4);
  return plVar12;
}


