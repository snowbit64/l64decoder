// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readServerEventSingleRemovedAttachmentFromStream
// Entry Point: 00985724
// Size: 420 bytes
// Signature: undefined __thiscall readServerEventSingleRemovedAttachmentFromStream(MeshSplitManager * this, GsBitStream * param_1)


/* MeshSplitManager::readServerEventSingleRemovedAttachmentFromStream(GsBitStream*) */

void __thiscall
MeshSplitManager::readServerEventSingleRemovedAttachmentFromStream
          (MeshSplitManager *this,GsBitStream *param_1)

{
  long **pplVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  IRenderDevice *pIVar6;
  MeshSplitManager **ppMVar7;
  MeshSplitManager **ppMVar8;
  MeshSplitManager **ppMVar9;
  MeshSplitAttachmentGeometry *this_00;
  long *plVar10;
  int iVar11;
  long lVar12;
  short local_60 [2];
  uint local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar4 = GsBitStream::readBits(param_1,(uchar *)&local_5c,0x20,true);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = GsBitStream::readBits(param_1,(uchar *)local_60,0x10,true), (uVar4 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    ppMVar9 = (MeshSplitManager **)(this + 200);
    ppMVar8 = (MeshSplitManager **)*ppMVar9;
    ppMVar7 = ppMVar9;
    if (ppMVar8 != (MeshSplitManager **)0x0) {
      do {
        if (*(uint *)(ppMVar8 + 4) >= local_5c) {
          ppMVar7 = ppMVar8;
        }
        ppMVar8 = (MeshSplitManager **)ppMVar8[*(uint *)(ppMVar8 + 4) < local_5c];
      } while (ppMVar8 != (MeshSplitManager **)0x0);
      if ((((ppMVar7 != ppMVar9) && (*(uint *)(ppMVar7 + 4) <= local_5c)) &&
          (pplVar1 = *(long ***)(ppMVar7[5] + 0x28),
          (int)((ulong)(*(long *)(ppMVar7[5] + 0x30) - (long)pplVar1) >> 3) != 0)) &&
         ((plVar10 = *pplVar1, (*(byte *)((long)plVar10 + 0x11) >> 3 & 1) != 0 &&
          (this_00 = (MeshSplitAttachmentGeometry *)plVar10[0x2e],
          ((byte)this_00[0x31] >> 1 & 1) != 0)))) {
        lVar2 = *(long *)(this_00 + 0x90);
        uVar4 = *(long *)(this_00 + 0x98) - lVar2;
        iVar11 = (int)(uVar4 >> 2);
        if (iVar11 != 0) {
          lVar12 = 0;
          uVar5 = 1;
          do {
            if (*(short *)(lVar2 + lVar12 + 2) == local_60[0]) {
              uVar4 = (uVar4 - 4) - lVar12;
              if (uVar4 != 0) {
                memmove((void *)(lVar2 + lVar12),(void *)((long)(void *)(lVar2 + lVar12) + 4),uVar4)
                ;
              }
              *(ulong *)(this_00 + 0x98) = lVar2 + (uVar4 & 0xfffffffffffffffc) + lVar12;
              if (iVar11 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10);
              }
              else {
                RenderDeviceManager::getInstance();
                pIVar6 = (IRenderDevice *)RenderDeviceManager::getCurrentRenderDevice();
                MeshSplitAttachmentGeometry::updateGeometry(this_00,pIVar6);
              }
              goto LAB_00985894;
            }
            lVar12 = lVar12 + 4;
          } while ((uVar4 >> 2 & 0xffffffff) * 4 - lVar12 != 0);
          goto LAB_00985898;
        }
      }
    }
LAB_00985894:
    uVar5 = 1;
  }
LAB_00985898:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


