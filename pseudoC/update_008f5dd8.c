// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 008f5dd8
// Size: 760 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::update() */

void TerrainPatchOccluderManager::update(void)

{
  uint uVar1;
  size_t sVar2;
  long lVar3;
  TerrainPatchOccluderManager *in_x0;
  long *plVar4;
  RequestDesc *pRVar5;
  RequestDesc *pRVar6;
  uint uVar7;
  RequestDesc *pRVar8;
  uint uVar9;
  uint uVar10;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (in_x0[0x130] != (TerrainPatchOccluderManager)0x0) {
    plVar4 = *(long **)(in_x0 + 0x180);
    *(undefined2 *)(in_x0 + 0x130) = 0x100;
    if ((plVar4 == (long *)0x0) || ((plVar4[1] - *plVar4 & 0x7fffffff0U) == 0)) {
      initMultipleWorkers();
    }
    if (*(int *)(in_x0 + 0xf8) != 0) {
      uVar7 = 0;
      uVar1 = *(uint *)(*(long *)(in_x0 + 0x68) + 0x268);
      do {
        uVar9 = 0;
        do {
          uVar10 = 0;
          do {
            local_90 = *(long *)(in_x0 + 0x68);
            local_80 = CONCAT44(uVar10,uVar7);
            lStack_88 = (ulong)uVar9 << 0x20;
            sendRequestToWorker(in_x0,(RequestDesc *)&local_90);
            uVar10 = uVar10 + 1;
          } while (uVar10 <= uVar1);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(in_x0 + 0xf8));
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(in_x0 + 0xf8));
    }
  }
  if ((((*(long *)(in_x0 + 0x138) != *(long *)(in_x0 + 0x140)) || (*(int *)(in_x0 + 0x150) != 0)) ||
      (*(long *)(in_x0 + 0x158) != *(long *)(in_x0 + 0x160))) || (*(int *)(in_x0 + 0x170) != 0)) {
    if (*(int *)(in_x0 + 0xfc) != 0) {
      uVar7 = 0;
      do {
        plVar4 = (long *)ThreadPoolTaskManager::getNextFinishedTask();
        if (plVar4 == (long *)0x0) break;
        lStack_88 = plVar4[10];
        local_90 = plVar4[9];
        lStack_78 = plVar4[0xc];
        local_80 = plVar4[0xb];
        local_70 = plVar4[0xd];
        uStack_5c = *(undefined8 *)((long)plVar4 + 0x7c);
        uStack_68 = (undefined4)plVar4[0xe];
        uStack_64 = (undefined4)*(undefined8 *)((long)plVar4 + 0x74);
        uStack_60 = (undefined4)((ulong)*(undefined8 *)((long)plVar4 + 0x74) >> 0x20);
        (**(code **)(*plVar4 + 8))();
        processResult(in_x0,(Result *)&local_90);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(in_x0 + 0xfc));
    }
    if (*(int *)(in_x0 + 0x170) == 0) {
      pRVar8 = *(RequestDesc **)(in_x0 + 0x138);
      pRVar6 = *(RequestDesc **)(in_x0 + 0x140);
      pRVar5 = pRVar8;
      if (pRVar8 != pRVar6) {
        do {
          while (*(char *)(*(long *)(in_x0 + 0x118) +
                           (ulong)(uint)(*(int *)(pRVar8 + 0xc) +
                                        *(int *)(in_x0 + 0xf8) * *(int *)(pRVar8 + 0x10)) * 0x380 +
                          (ulong)*(uint *)(pRVar8 + 0x14) * 0x20) != '\0') {
            pRVar8 = pRVar8 + 0x18;
            pRVar5 = pRVar6;
            if (pRVar8 == pRVar6) goto LAB_008f5f20;
          }
          sendRequestToWorker(in_x0,pRVar8);
          sVar2 = *(long *)(in_x0 + 0x140) - (long)(pRVar8 + 0x18);
          if (sVar2 != 0) {
            memmove(pRVar8,pRVar8 + 0x18,sVar2);
          }
          pRVar6 = pRVar8 + sVar2;
          *(RequestDesc **)(in_x0 + 0x140) = pRVar6;
          pRVar5 = pRVar6;
        } while (pRVar8 != pRVar6);
      }
    }
    else {
      pRVar5 = *(RequestDesc **)(in_x0 + 0x140);
    }
LAB_008f5f20:
    if ((*(RequestDesc **)(in_x0 + 0x138) == pRVar5) && (*(int *)(in_x0 + 0x150) == 0)) {
      if ((in_x0[0x133] == (TerrainPatchOccluderManager)0x0) &&
         ((in_x0[0x131] != (TerrainPatchOccluderManager)0x0 &&
          (in_x0[0x132] == (TerrainPatchOccluderManager)0x0)))) {
        requestStitches();
      }
      pRVar8 = *(RequestDesc **)(in_x0 + 0x158);
      pRVar6 = *(RequestDesc **)(in_x0 + 0x160);
      if (pRVar8 != pRVar6) {
        do {
          while (*(char *)(*(long *)(in_x0 + 0x118) +
                           (ulong)(uint)(*(int *)(pRVar8 + 0xc) +
                                        *(int *)(in_x0 + 0xf8) * *(int *)(pRVar8 + 0x10)) * 0x380 +
                           (ulong)*(uint *)(pRVar8 + 8) * 0x80 +
                          (ulong)*(uint *)(pRVar8 + 0x14) * 0x20) != '\0') {
            pRVar8 = pRVar8 + 0x18;
            if (pRVar8 == pRVar6) goto LAB_008f5fdc;
          }
          sendRequestToWorker(in_x0,pRVar8);
          sVar2 = *(long *)(in_x0 + 0x160) - (long)(pRVar8 + 0x18);
          if (sVar2 != 0) {
            memmove(pRVar8,pRVar8 + 0x18,sVar2);
          }
          pRVar6 = pRVar8 + sVar2;
          *(RequestDesc **)(in_x0 + 0x160) = pRVar6;
        } while (pRVar8 != pRVar6);
      }
    }
LAB_008f5fdc:
    if ((((in_x0[0x133] == (TerrainPatchOccluderManager)0x0) &&
         (in_x0[0x132] != (TerrainPatchOccluderManager)0x0)) &&
        (*(long *)(in_x0 + 0x158) == *(long *)(in_x0 + 0x160))) && (*(int *)(in_x0 + 0x170) == 0)) {
      in_x0[0x133] = (TerrainPatchOccluderManager)0x1;
      Event::post();
      initSingleWorker();
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


