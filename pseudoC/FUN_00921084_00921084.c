// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00921084
// Entry Point: 00921084
// Size: 840 bytes
// Signature: undefined FUN_00921084(void)


void FUN_00921084(MaterialDesc *param_1,MaterialDesc *param_2,undefined8 param_3,ulong param_4,
                 MaterialDesc *param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  MaterialDesc *pMVar4;
  undefined8 *puVar5;
  MaterialDesc *pMVar6;
  long lVar7;
  MaterialDesc *pMVar8;
  undefined8 uVar9;
  MaterialDesc *pMVar10;
  MaterialDesc *pMVar11;
  long lVar12;
  undefined **local_2c0;
  undefined auStack_2b8 [576];
  undefined8 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar3 = MaterialDesc::lexicographical_less(param_2 + -0x250,param_1);
      if ((uVar3 & 1) != 0) {
        memcpy(&local_2c0,param_1 + 8,0x23c);
        uVar9 = *(undefined8 *)(param_1 + 0x248);
        memcpy(param_1 + 8,param_2 + -0x248,0x23c);
        *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + -8);
        memcpy(param_2 + -0x248,&local_2c0,0x23c);
        *(undefined8 *)(param_2 + -8) = uVar9;
      }
    }
    else if ((long)param_4 < 1) {
      if ((param_1 != param_2) && (param_1 + 0x250 != param_2)) {
        lVar7 = 0;
        pMVar11 = param_1 + 0x250;
        pMVar8 = param_1;
        do {
          pMVar10 = pMVar11;
          local_2c0 = &PTR__MaterialDesc_00fd99f8;
          memcpy(auStack_2b8,pMVar8 + 600,0x23c);
          local_78 = *(undefined8 *)(pMVar8 + 0x498);
          pMVar11 = param_1;
          lVar12 = lVar7;
          if (pMVar10 != param_1) {
            do {
              pMVar8 = param_1 + lVar12;
              uVar3 = MaterialDesc::lexicographical_less((MaterialDesc *)&local_2c0,pMVar8);
              if ((uVar3 & 1) == 0) {
                pMVar11 = pMVar8 + 0x250;
                break;
              }
              memcpy(pMVar8 + 600,pMVar8 + 8,0x23c);
              lVar12 = lVar12 + -0x250;
              *(undefined8 *)(pMVar8 + 0x498) = *(undefined8 *)(pMVar8 + 0x248);
            } while (lVar12 != -0x250);
          }
          memcpy(pMVar11 + 8,auStack_2b8,0x23c);
          lVar7 = lVar7 + 0x250;
          *(undefined8 *)(pMVar11 + 0x248) = local_78;
          pMVar11 = pMVar10 + 0x250;
          pMVar8 = pMVar10;
        } while (pMVar10 + 0x250 != param_2);
      }
    }
    else {
      uVar3 = param_4 >> 1;
      pMVar11 = param_1 + uVar3 * 0x250;
      if (param_6 < (long)param_4) {
        FUN_00921084();
        FUN_00921084(pMVar11,param_2,param_3,param_4 - uVar3,param_5,param_6);
        FUN_00921754(param_1,pMVar11,param_2,param_3,uVar3,param_4 - uVar3,param_5,param_6);
      }
      else {
        FUN_009213cc(param_1,pMVar11,param_3,uVar3);
        pMVar8 = param_5 + uVar3 * 0x250;
        FUN_009213cc(pMVar11,param_2,param_3,param_4 - uVar3,pMVar8);
        pMVar10 = param_5 + param_4 * 0x250;
        puVar5 = (undefined8 *)(param_1 + 0x248);
        pMVar11 = pMVar8;
        do {
          if (pMVar11 == pMVar10) {
            if (param_5 != pMVar8) {
              lVar7 = 0;
              do {
                puVar1 = (undefined8 *)((long)puVar5 + lVar7);
                memcpy(puVar1 + -0x48,param_5 + lVar7 + 8,0x23c);
                lVar12 = lVar7 + 0x248;
                lVar7 = lVar7 + 0x250;
                *puVar1 = *(undefined8 *)(param_5 + lVar12);
              } while (param_5 + lVar7 != pMVar8);
            }
            goto LAB_009210b8;
          }
          uVar3 = MaterialDesc::lexicographical_less(pMVar11,param_5);
          if ((uVar3 & 1) == 0) {
            memcpy(puVar5 + -0x48,param_5 + 8,0x23c);
            pMVar6 = param_5 + 0x250;
            pMVar4 = param_5;
          }
          else {
            memcpy(puVar5 + -0x48,pMVar11 + 8,0x23c);
            pMVar4 = pMVar11;
            pMVar11 = pMVar11 + 0x250;
            pMVar6 = param_5;
          }
          *puVar5 = *(undefined8 *)(pMVar4 + 0x248);
          puVar5 = puVar5 + 0x4a;
          param_5 = pMVar6;
        } while (pMVar6 != pMVar8);
        if (pMVar11 != pMVar10) {
          lVar7 = 0;
          do {
            puVar1 = (undefined8 *)((long)puVar5 + lVar7);
            memcpy(puVar1 + -0x48,pMVar11 + lVar7 + 8,0x23c);
            lVar12 = lVar7 + 0x248;
            lVar7 = lVar7 + 0x250;
            *puVar1 = *(undefined8 *)(pMVar11 + lVar12);
          } while (pMVar11 + lVar7 != pMVar10);
        }
      }
    }
  }
LAB_009210b8:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


