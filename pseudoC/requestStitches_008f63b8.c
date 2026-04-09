// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestStitches
// Entry Point: 008f63b8
// Size: 1968 bytes
// Signature: undefined requestStitches(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::requestStitches() */

void TerrainPatchOccluderManager::requestStitches(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long in_x0;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long local_80;
  undefined4 local_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(int *)(in_x0 + 0xf8) != 1) {
    uVar8 = 0;
    lVar1 = in_x0 + 0x158;
    uVar2 = *(uint *)(*(long *)(in_x0 + 0x68) + 0x268);
    do {
      uVar9 = 0;
      do {
        uVar10 = 0;
        do {
          plVar5 = *(long **)(in_x0 + 0x158);
          plVar7 = *(long **)(in_x0 + 0x160);
          local_80 = *(long *)(in_x0 + 0x68);
          local_78 = 1;
          plVar6 = plVar5;
          if (plVar5 == plVar7) {
LAB_008f64d4:
            if (plVar6 == plVar7) goto LAB_008f64dc;
          }
          else {
            do {
              if ((((*plVar6 == local_80) && (*(int *)(plVar6 + 1) == 1)) &&
                  (*(uint *)((long)plVar6 + 0xc) == uVar9)) &&
                 ((*(uint *)(plVar6 + 2) == uVar8 && (*(uint *)((long)plVar6 + 0x14) == uVar10))))
              goto LAB_008f64d4;
              plVar6 = plVar6 + 3;
            } while (plVar6 != plVar7);
LAB_008f64dc:
            uStack_74 = uVar9;
            local_70 = uVar8;
            uStack_6c = uVar10;
            FUN_008f7060(lVar1,&local_80);
            plVar5 = *(long **)(in_x0 + 0x158);
            plVar7 = *(long **)(in_x0 + 0x160);
            local_80 = *(long *)(in_x0 + 0x68);
          }
          local_78 = 4;
          for (; plVar5 != plVar7; plVar5 = plVar5 + 3) {
            if (((*plVar5 == local_80) && (*(int *)(plVar5 + 1) == 4)) &&
               ((*(uint *)((long)plVar5 + 0xc) == uVar9 &&
                ((*(uint *)(plVar5 + 2) == uVar8 && (*(uint *)((long)plVar5 + 0x14) == uVar10))))))
            {
              uStack_74 = uVar9;
              local_70 = uVar8;
              uStack_6c = uVar10;
              if (plVar5 != plVar7) goto LAB_008f6510;
              break;
            }
          }
          uStack_74 = uVar9;
          local_70 = uVar8;
          uStack_6c = uVar10;
          FUN_008f7060(lVar1,&local_80);
LAB_008f6510:
          if (uVar10 != 0) {
            plVar5 = *(long **)(in_x0 + 0x158);
            plVar7 = *(long **)(in_x0 + 0x160);
            local_80 = *(long *)(in_x0 + 0x68);
            local_78 = 3;
            plVar6 = plVar5;
            if (plVar5 == plVar7) {
LAB_008f65d8:
              if (plVar6 == plVar7) goto LAB_008f65e0;
            }
            else {
              do {
                if ((((*plVar6 == local_80) && (*(int *)(plVar6 + 1) == 3)) &&
                    (*(uint *)((long)plVar6 + 0xc) == uVar9)) &&
                   ((*(uint *)(plVar6 + 2) == uVar8 && (*(uint *)((long)plVar6 + 0x14) == uVar10))))
                goto LAB_008f65d8;
                plVar6 = plVar6 + 3;
              } while (plVar6 != plVar7);
LAB_008f65e0:
              uStack_74 = uVar9;
              local_70 = uVar8;
              uStack_6c = uVar10;
              FUN_008f7060(lVar1,&local_80);
              plVar5 = *(long **)(in_x0 + 0x158);
              plVar7 = *(long **)(in_x0 + 0x160);
              local_80 = *(long *)(in_x0 + 0x68);
            }
            local_78 = 6;
            for (; plVar5 != plVar7; plVar5 = plVar5 + 3) {
              if (((*plVar5 == local_80) && (*(int *)(plVar5 + 1) == 6)) &&
                 ((*(uint *)((long)plVar5 + 0xc) == uVar9 &&
                  ((*(uint *)(plVar5 + 2) == uVar8 && (*(uint *)((long)plVar5 + 0x14) == uVar10)))))
                 ) {
                uStack_74 = uVar9;
                local_70 = uVar8;
                uStack_6c = uVar10;
                if (plVar5 != plVar7) goto LAB_008f6614;
                break;
              }
            }
            uStack_74 = uVar9;
            local_70 = uVar8;
            uStack_6c = uVar10;
            FUN_008f7060(lVar1,&local_80);
          }
LAB_008f6614:
          if (uVar10 < uVar2) {
            plVar5 = *(long **)(in_x0 + 0x158);
            plVar7 = *(long **)(in_x0 + 0x160);
            local_80 = *(long *)(in_x0 + 0x68);
            local_78 = 2;
            plVar6 = plVar5;
            if (plVar5 == plVar7) {
LAB_008f66e4:
              if (plVar6 == plVar7) goto LAB_008f66ec;
            }
            else {
              do {
                if ((((*plVar6 == local_80) && (*(int *)(plVar6 + 1) == 2)) &&
                    (*(uint *)((long)plVar6 + 0xc) == uVar9)) &&
                   ((*(uint *)(plVar6 + 2) == uVar8 && (*(uint *)((long)plVar6 + 0x14) == uVar10))))
                goto LAB_008f66e4;
                plVar6 = plVar6 + 3;
              } while (plVar6 != plVar7);
LAB_008f66ec:
              uStack_74 = uVar9;
              local_70 = uVar8;
              uStack_6c = uVar10;
              FUN_008f7060(lVar1,&local_80);
              plVar5 = *(long **)(in_x0 + 0x158);
              plVar7 = *(long **)(in_x0 + 0x160);
              local_80 = *(long *)(in_x0 + 0x68);
            }
            local_78 = 5;
            for (; plVar5 != plVar7; plVar5 = plVar5 + 3) {
              if (((*plVar5 == local_80) && (*(int *)(plVar5 + 1) == 5)) &&
                 ((*(uint *)((long)plVar5 + 0xc) == uVar9 &&
                  ((*(uint *)(plVar5 + 2) == uVar8 && (*(uint *)((long)plVar5 + 0x14) == uVar10)))))
                 ) {
                uStack_74 = uVar9;
                local_70 = uVar8;
                uStack_6c = uVar10;
                if (plVar5 != plVar7) goto LAB_008f6458;
                break;
              }
            }
            uStack_74 = uVar9;
            local_70 = uVar8;
            uStack_6c = uVar10;
            FUN_008f7060(lVar1,&local_80);
          }
LAB_008f6458:
          uVar10 = uVar10 + 1;
        } while (uVar10 <= uVar2);
        iVar4 = *(int *)(in_x0 + 0xf8);
        uVar9 = uVar9 + 1;
      } while (uVar9 < iVar4 - 1U);
      uVar8 = uVar8 + 1;
    } while (uVar8 < iVar4 - 1U);
    if (iVar4 != 1) {
      uVar8 = 0;
LAB_008f67a4:
      uVar9 = 0;
      do {
        local_70 = iVar4 - 1;
        local_80 = *(long *)(in_x0 + 0x68);
        plVar6 = *(long **)(in_x0 + 0x158);
        plVar5 = *(long **)(in_x0 + 0x160);
        local_78 = 4;
        uStack_74 = uVar8;
        uStack_6c = uVar9;
        if (plVar6 == plVar5) {
LAB_008f67c8:
          if (plVar6 == plVar5) goto LAB_008f67d0;
        }
        else {
          do {
            if ((((*plVar6 == local_80) && (*(int *)(plVar6 + 1) == 4)) &&
                (*(uint *)((long)plVar6 + 0xc) == uVar8)) &&
               ((*(uint *)(plVar6 + 2) == local_70 && (*(uint *)((long)plVar6 + 0x14) == uVar9))))
            goto LAB_008f67c8;
            plVar6 = plVar6 + 3;
          } while (plVar6 != plVar5);
LAB_008f67d0:
          FUN_008f7060(lVar1,&local_80);
        }
        if (uVar9 != 0) {
          local_78 = 6;
          local_80 = *(long *)(in_x0 + 0x68);
          local_70 = *(int *)(in_x0 + 0xf8) - 1;
          plVar6 = *(long **)(in_x0 + 0x158);
          plVar5 = *(long **)(in_x0 + 0x160);
          if (plVar6 == plVar5) {
LAB_008f6804:
            uStack_74 = uVar8;
            uStack_6c = uVar9;
            if (plVar6 != plVar5) goto LAB_008f6818;
          }
          else {
            do {
              if (((*plVar6 == local_80) && (*(int *)(plVar6 + 1) == 6)) &&
                 ((*(uint *)((long)plVar6 + 0xc) == uVar8 &&
                  ((*(uint *)(plVar6 + 2) == local_70 && (*(uint *)((long)plVar6 + 0x14) == uVar9)))
                  ))) goto LAB_008f6804;
              plVar6 = plVar6 + 3;
            } while (plVar6 != plVar5);
          }
          uStack_74 = uVar8;
          uStack_6c = uVar9;
          FUN_008f7060(lVar1,&local_80);
        }
LAB_008f6818:
        if (uVar9 < uVar2) {
          local_78 = 5;
          local_80 = *(long *)(in_x0 + 0x68);
          local_70 = *(int *)(in_x0 + 0xf8) - 1;
          plVar6 = *(long **)(in_x0 + 0x158);
          plVar5 = *(long **)(in_x0 + 0x160);
          if (plVar6 == plVar5) {
LAB_008f6844:
            uStack_74 = uVar8;
            uStack_6c = uVar9;
            if (plVar6 != plVar5) goto LAB_008f6858;
          }
          else {
            do {
              if ((((*plVar6 == local_80) && (*(int *)(plVar6 + 1) == 5)) &&
                  (*(uint *)((long)plVar6 + 0xc) == uVar8)) &&
                 ((*(uint *)(plVar6 + 2) == local_70 && (*(uint *)((long)plVar6 + 0x14) == uVar9))))
              goto LAB_008f6844;
              plVar6 = plVar6 + 3;
            } while (plVar6 != plVar5);
          }
          uStack_74 = uVar8;
          uStack_6c = uVar9;
          FUN_008f7060(lVar1,&local_80);
        }
LAB_008f6858:
        uVar9 = uVar9 + 1;
        if (uVar2 < uVar9) goto LAB_008f6790;
        iVar4 = *(int *)(in_x0 + 0xf8);
      } while( true );
    }
  }
  goto LAB_008f6958;
LAB_008f6790:
  iVar4 = *(int *)(in_x0 + 0xf8);
  uVar8 = uVar8 + 1;
  if (iVar4 - 1U <= uVar8) goto LAB_008f6950;
  goto LAB_008f67a4;
LAB_008f69a4:
  iVar4 = *(int *)(in_x0 + 0xf8);
  uVar8 = uVar8 + 1;
  if (iVar4 - 1U <= uVar8) goto LAB_008f6958;
  goto LAB_008f69b8;
LAB_008f6950:
  if (iVar4 != 1) {
    uVar8 = 0;
LAB_008f69b8:
    uVar9 = 0;
    do {
      uStack_74 = iVar4 - 1;
      local_80 = *(long *)(in_x0 + 0x68);
      plVar6 = *(long **)(in_x0 + 0x158);
      plVar5 = *(long **)(in_x0 + 0x160);
      local_78 = 1;
      local_70 = uVar8;
      uStack_6c = uVar9;
      if (plVar6 == plVar5) {
LAB_008f69dc:
        if (plVar6 == plVar5) goto LAB_008f69e4;
      }
      else {
        do {
          if (((*plVar6 == local_80) && (*(int *)(plVar6 + 1) == 1)) &&
             ((*(uint *)((long)plVar6 + 0xc) == uStack_74 &&
              ((*(uint *)(plVar6 + 2) == uVar8 && (*(uint *)((long)plVar6 + 0x14) == uVar9))))))
          goto LAB_008f69dc;
          plVar6 = plVar6 + 3;
        } while (plVar6 != plVar5);
LAB_008f69e4:
        FUN_008f7060(lVar1,&local_80);
      }
      if (uVar9 != 0) {
        local_80 = *(long *)(in_x0 + 0x68);
        uStack_74 = *(int *)(in_x0 + 0xf8) - 1;
        plVar6 = *(long **)(in_x0 + 0x158);
        plVar5 = *(long **)(in_x0 + 0x160);
        local_78 = 3;
        if (plVar6 == plVar5) {
LAB_008f6a18:
          local_70 = uVar8;
          uStack_6c = uVar9;
          if (plVar6 != plVar5) goto LAB_008f6a2c;
        }
        else {
          do {
            if ((((*plVar6 == local_80) && (*(int *)(plVar6 + 1) == 3)) &&
                (*(uint *)((long)plVar6 + 0xc) == uStack_74)) &&
               ((*(uint *)(plVar6 + 2) == uVar8 && (*(uint *)((long)plVar6 + 0x14) == uVar9))))
            goto LAB_008f6a18;
            plVar6 = plVar6 + 3;
          } while (plVar6 != plVar5);
        }
        local_70 = uVar8;
        uStack_6c = uVar9;
        FUN_008f7060(lVar1,&local_80);
      }
LAB_008f6a2c:
      if (uVar9 < uVar2) {
        local_80 = *(long *)(in_x0 + 0x68);
        uStack_74 = *(int *)(in_x0 + 0xf8) - 1;
        plVar6 = *(long **)(in_x0 + 0x158);
        plVar5 = *(long **)(in_x0 + 0x160);
        local_78 = 2;
        if (plVar6 == plVar5) {
LAB_008f6a58:
          local_70 = uVar8;
          uStack_6c = uVar9;
          if (plVar6 != plVar5) goto LAB_008f6a6c;
        }
        else {
          do {
            if (((*plVar6 == local_80) && (*(int *)(plVar6 + 1) == 2)) &&
               ((*(uint *)((long)plVar6 + 0xc) == uStack_74 &&
                ((*(uint *)(plVar6 + 2) == uVar8 && (*(uint *)((long)plVar6 + 0x14) == uVar9))))))
            goto LAB_008f6a58;
            plVar6 = plVar6 + 3;
          } while (plVar6 != plVar5);
        }
        local_70 = uVar8;
        uStack_6c = uVar9;
        FUN_008f7060(lVar1,&local_80);
      }
LAB_008f6a6c:
      uVar9 = uVar9 + 1;
      if (uVar2 < uVar9) goto LAB_008f69a4;
      iVar4 = *(int *)(in_x0 + 0xf8);
    } while( true );
  }
LAB_008f6958:
  *(undefined *)(in_x0 + 0x132) = 1;
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


