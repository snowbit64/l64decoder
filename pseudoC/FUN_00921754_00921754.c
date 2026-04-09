// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00921754
// Entry Point: 00921754
// Size: 1368 bytes
// Signature: undefined FUN_00921754(void)


void FUN_00921754(MaterialDesc *param_1,MaterialDesc *param_2,MaterialDesc *param_3,
                 undefined8 param_4,long param_5,long param_6,MaterialDesc *param_7,long param_8)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  MaterialDesc *pMVar7;
  MaterialDesc *pMVar8;
  MaterialDesc *pMVar9;
  long lVar10;
  long lVar11;
  MaterialDesc *pMVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  MaterialDesc *pMVar17;
  MaterialDesc *local_2c0;
  long local_2b8;
  undefined auStack_2b0 [576];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_2c0 = param_3;
  local_2b8 = param_6;
  if (param_6 != 0) {
    while ((param_8 < param_5 && (param_8 < local_2b8))) {
      if (param_5 == 0) goto LAB_00921c78;
      lVar11 = 0;
      lVar16 = -param_5;
      while( true ) {
        pMVar12 = param_1 + lVar11;
        uVar4 = MaterialDesc::lexicographical_less(param_2,pMVar12);
        if ((uVar4 & 1) != 0) break;
        bVar3 = lVar16 == -1;
        lVar16 = lVar16 + 1;
        lVar11 = lVar11 + 0x250;
        if (bVar3) goto LAB_00921c78;
      }
      param_5 = -lVar16;
      if (param_5 < local_2b8) {
        lVar10 = local_2b8;
        if (local_2b8 < 0) {
          lVar10 = local_2b8 + 1;
        }
        lVar10 = lVar10 >> 1;
        pMVar17 = param_2 + lVar10 * 0x250;
        pMVar7 = pMVar12;
        if (param_2 + (-lVar11 - (long)param_1) != (MaterialDesc *)0x0) {
          uVar4 = ((long)(param_2 + (-lVar11 - (long)param_1)) >> 4) * 0x14c1bacf914c1bad;
          do {
            uVar14 = uVar4 >> 1;
            uVar6 = MaterialDesc::lexicographical_less(pMVar17,pMVar7 + uVar14 * 0x250);
            uVar5 = uVar4 + ~uVar14;
            uVar4 = uVar14;
            if ((uVar6 & 1) == 0) {
              pMVar7 = pMVar7 + uVar14 * 0x250 + 0x250;
              uVar4 = uVar5;
            }
          } while (uVar4 != 0);
        }
        param_5 = ((long)(pMVar7 + (-lVar11 - (long)param_1)) >> 4) * 0x14c1bacf914c1bad;
        pMVar9 = pMVar7;
      }
      else {
        if (lVar16 == -1) {
          memcpy(auStack_2b0,param_1 + lVar11 + 8,0x23c);
          uVar13 = *(undefined8 *)(param_1 + lVar11 + 0x248);
          memcpy(param_1 + lVar11 + 8,param_2 + 8,0x23c);
          *(undefined8 *)(param_1 + lVar11 + 0x248) = *(undefined8 *)(param_2 + 0x248);
          memcpy(param_2 + 8,auStack_2b0,0x23c);
          *(undefined8 *)(param_2 + 0x248) = uVar13;
          goto LAB_00921c78;
        }
        if (0 < lVar16) {
          param_5 = param_5 + 1;
        }
        param_5 = param_5 >> 1;
        pMVar9 = param_1 + lVar11 + param_5 * 0x250;
        pMVar17 = param_2;
        if ((long)local_2c0 - (long)param_2 != 0) {
          uVar4 = ((long)local_2c0 - (long)param_2 >> 4) * 0x14c1bacf914c1bad;
          pMVar7 = param_2;
          do {
            uVar6 = uVar4 >> 1;
            uVar5 = MaterialDesc::lexicographical_less(pMVar7 + uVar6 * 0x250,pMVar9);
            pMVar17 = pMVar7 + uVar6 * 0x250 + 0x250;
            uVar4 = uVar4 + ~uVar6;
            if ((uVar5 & 1) == 0) {
              pMVar17 = pMVar7;
              uVar4 = uVar6;
            }
            pMVar7 = pMVar17;
          } while (uVar4 != 0);
        }
        pMVar7 = param_1 + lVar11 + param_5 * 0x250;
        lVar10 = ((long)pMVar17 - (long)param_2 >> 4) * 0x14c1bacf914c1bad;
      }
      pMVar8 = (MaterialDesc *)FUN_0092213c(pMVar7,param_2,pMVar17);
      if (param_5 + lVar10 < (local_2b8 - (param_5 + lVar10)) - lVar16) {
        FUN_00921754(param_1 + lVar11,pMVar7,pMVar8,param_4,param_5,lVar10,param_7,param_8);
        lVar10 = local_2b8 - lVar10;
        pMVar12 = pMVar8;
        param_5 = -(param_5 + lVar16);
        param_2 = pMVar17;
      }
      else {
        FUN_00921754(pMVar8,pMVar17,local_2c0,param_4,-(param_5 + lVar16),local_2b8 - lVar10,param_7
                     ,param_8);
        param_2 = pMVar9;
        local_2c0 = pMVar8;
      }
      param_1 = pMVar12;
      local_2b8 = lVar10;
      if (lVar10 == 0) goto LAB_00921c78;
    }
    if (param_5 <= local_2b8) {
      if (param_1 != param_2) {
        lVar16 = 0;
        do {
          puVar15 = (undefined8 *)(param_7 + lVar16);
          *puVar15 = &PTR__MaterialDesc_00fd99f8;
          memcpy(puVar15 + 1,param_1 + lVar16 + 8,0x23c);
          lVar11 = lVar16 + 0x248;
          lVar16 = lVar16 + 0x250;
          puVar15[0x49] = *(undefined8 *)(param_1 + lVar11);
        } while (param_1 + lVar16 != param_2);
        if (lVar16 != 0) {
          puVar15 = (undefined8 *)(param_1 + 0x248);
          pMVar12 = param_7;
          while (param_2 != local_2c0) {
            uVar4 = MaterialDesc::lexicographical_less(param_2,pMVar12);
            if ((uVar4 & 1) == 0) {
              memcpy(puVar15 + -0x48,pMVar12 + 8,0x23c);
              pMVar9 = pMVar12 + 0x250;
              pMVar17 = pMVar12;
            }
            else {
              memcpy(puVar15 + -0x48,param_2 + 8,0x23c);
              pMVar17 = param_2;
              param_2 = param_2 + 0x250;
              pMVar9 = pMVar12;
            }
            *puVar15 = *(undefined8 *)(pMVar17 + 0x248);
            puVar15 = puVar15 + 0x4a;
            pMVar12 = pMVar9;
            if (param_7 + lVar16 == pMVar9) goto LAB_00921c78;
          }
          lVar11 = 0;
          do {
            memcpy((undefined8 *)((long)puVar15 + lVar11) + -0x48,pMVar12 + lVar11 + 8,0x23c);
            pMVar9 = pMVar12 + lVar11;
            *(undefined8 *)((long)puVar15 + lVar11) = *(undefined8 *)(pMVar12 + lVar11 + 0x248);
            lVar11 = lVar11 + 0x250;
          } while (param_7 + lVar16 + -0x250 != pMVar9);
        }
      }
      goto LAB_00921c78;
    }
    if (param_2 == local_2c0) goto LAB_00921c78;
    lVar16 = 0;
    do {
      puVar15 = (undefined8 *)(param_7 + lVar16);
      *puVar15 = &PTR__MaterialDesc_00fd99f8;
      memcpy(puVar15 + 1,param_2 + lVar16 + 8,0x23c);
      lVar11 = lVar16 + 0x248;
      lVar16 = lVar16 + 0x250;
      puVar15[0x49] = *(undefined8 *)(param_2 + lVar11);
    } while (param_2 + lVar16 != local_2c0);
    if (lVar16 != 0) {
      pMVar12 = param_7 + lVar16;
      puVar15 = (undefined8 *)(local_2c0 + -8);
      do {
        if (param_2 == param_1) {
          lVar16 = 0;
          do {
            puVar1 = (undefined8 *)((long)puVar15 + lVar16);
            memcpy(puVar1 + -0x48,pMVar12 + lVar16 + -0x248,0x23c);
            lVar11 = lVar16 + -8;
            lVar16 = lVar16 + -0x250;
            *puVar1 = *(undefined8 *)(pMVar12 + lVar11);
          } while (pMVar12 + lVar16 != param_7);
          break;
        }
        uVar4 = MaterialDesc::lexicographical_less(pMVar12 + -0x250,param_2 + -0x250);
        bVar3 = (uVar4 & 1) == 0;
        pMVar9 = param_2;
        if (bVar3) {
          pMVar9 = pMVar12;
        }
        pMVar17 = param_2 + -0x250;
        if (bVar3) {
          pMVar12 = pMVar12 + -0x250;
          pMVar17 = param_2;
        }
        param_2 = pMVar17;
        memcpy(puVar15 + -0x48,pMVar9 + -0x248,0x23c);
        *puVar15 = *(undefined8 *)(pMVar9 + -8);
        puVar15 = puVar15 + -0x4a;
      } while (pMVar12 != param_7);
    }
  }
LAB_00921c78:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


