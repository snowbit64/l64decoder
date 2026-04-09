// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009213cc
// Entry Point: 009213cc
// Size: 904 bytes
// Signature: undefined FUN_009213cc(void)


void FUN_009213cc(MaterialDesc *param_1,MaterialDesc *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5)

{
  MaterialDesc *pMVar1;
  ulong uVar2;
  undefined8 uVar3;
  MaterialDesc *pMVar4;
  undefined8 *puVar5;
  MaterialDesc *pMVar6;
  MaterialDesc *pMVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      uVar2 = MaterialDesc::lexicographical_less(param_2 + -0x250,param_1);
      *param_5 = &PTR__MaterialDesc_00fd99f8;
      if ((uVar2 & 1) == 0) {
        memcpy(param_5 + 1,param_1 + 8,0x23c);
        uVar3 = *(undefined8 *)(param_1 + 0x248);
        param_5[0x4a] = &PTR__MaterialDesc_00fd99f8;
        param_5[0x49] = uVar3;
        memcpy(param_5 + 0x4b,param_2 + -0x248,0x23c);
        param_5 = param_5 + 0x93;
        puVar5 = (undefined8 *)(param_2 + -8);
      }
      else {
        memcpy(param_5 + 1,param_2 + -0x248,0x23c);
        uVar3 = *(undefined8 *)(param_2 + -8);
        param_5[0x4a] = &PTR__MaterialDesc_00fd99f8;
        param_5[0x49] = uVar3;
        memcpy(param_5 + 0x4b,param_1 + 8,0x23c);
        param_5 = param_5 + 0x93;
        puVar5 = (undefined8 *)(param_1 + 0x248);
      }
    }
    else {
      if (param_4 != 1) {
        if (8 < (long)param_4) {
          uVar2 = param_4 >> 1;
          pMVar1 = param_1 + uVar2 * 0x250;
          FUN_00921084(param_1,pMVar1,param_3,uVar2,param_5,uVar2);
          FUN_00921084(pMVar1,param_2,param_3,param_4 - uVar2,param_5 + uVar2 * 0x4a,param_4 - uVar2
                      );
          pMVar7 = pMVar1;
          do {
            if (pMVar7 == param_2) {
              if (param_1 == pMVar1) {
                return;
              }
              lVar8 = 0;
              do {
                puVar5 = (undefined8 *)((long)param_5 + lVar8);
                *puVar5 = &PTR__MaterialDesc_00fd99f8;
                memcpy(puVar5 + 1,param_1 + lVar8 + 8,0x23c);
                lVar10 = lVar8 + 0x248;
                lVar8 = lVar8 + 0x250;
                puVar5[0x49] = *(undefined8 *)(param_1 + lVar10);
              } while (param_1 + lVar8 != pMVar1);
              return;
            }
            uVar2 = MaterialDesc::lexicographical_less(pMVar7,param_1);
            *param_5 = &PTR__MaterialDesc_00fd99f8;
            if ((uVar2 & 1) == 0) {
              memcpy(param_5 + 1,param_1 + 8,0x23c);
              pMVar6 = param_1 + 0x250;
              pMVar4 = param_1;
            }
            else {
              memcpy(param_5 + 1,pMVar7 + 8,0x23c);
              pMVar4 = pMVar7;
              pMVar6 = param_1;
              pMVar7 = pMVar7 + 0x250;
            }
            param_5[0x49] = *(undefined8 *)(pMVar4 + 0x248);
            param_5 = param_5 + 0x4a;
            param_1 = pMVar6;
          } while (pMVar6 != pMVar1);
          if (pMVar7 == param_2) {
            return;
          }
          lVar8 = 0;
          do {
            puVar5 = (undefined8 *)((long)param_5 + lVar8);
            *puVar5 = &PTR__MaterialDesc_00fd99f8;
            memcpy(puVar5 + 1,pMVar7 + lVar8 + 8,0x23c);
            lVar10 = lVar8 + 0x248;
            lVar8 = lVar8 + 0x250;
            puVar5[0x49] = *(undefined8 *)(pMVar7 + lVar10);
          } while (pMVar7 + lVar8 != param_2);
          return;
        }
        if (param_1 == param_2) {
          return;
        }
        *param_5 = &PTR__MaterialDesc_00fd99f8;
        memcpy(param_5 + 1,param_1 + 8,0x23c);
        param_5[0x49] = *(undefined8 *)(param_1 + 0x248);
        if (param_1 + 0x250 == param_2) {
          return;
        }
        lVar8 = 0;
        pMVar1 = param_1 + 0x250;
        puVar5 = param_5;
        do {
          pMVar7 = pMVar1;
          uVar2 = MaterialDesc::lexicographical_less(pMVar7,(MaterialDesc *)puVar5);
          puVar5[0x4a] = &PTR__MaterialDesc_00fd99f8;
          if ((uVar2 & 1) == 0) {
            memcpy(puVar5 + 0x4b,param_1 + 600,0x23c);
            puVar5[0x93] = *(undefined8 *)(param_1 + 0x498);
          }
          else {
            memcpy(puVar5 + 0x4b,puVar5 + 1,0x23c);
            puVar5[0x93] = puVar5[0x49];
            puVar9 = param_5;
            lVar10 = lVar8;
            if (puVar5 != param_5) {
              do {
                puVar9 = (undefined8 *)((long)param_5 + lVar10);
                uVar2 = MaterialDesc::lexicographical_less(pMVar7,(MaterialDesc *)(puVar9 + -0x4a));
                if ((uVar2 & 1) == 0) break;
                memcpy(puVar9 + 1,puVar9 + -0x49,0x23c);
                lVar10 = lVar10 + -0x250;
                puVar9[0x49] = puVar9[-1];
                puVar9 = param_5;
              } while (lVar10 != 0);
            }
            memcpy(puVar9 + 1,param_1 + 600,0x23c);
            puVar9[0x49] = *(undefined8 *)(param_1 + 0x498);
          }
          puVar5 = puVar5 + 0x4a;
          lVar8 = lVar8 + 0x250;
          pMVar1 = pMVar7 + 0x250;
          param_1 = pMVar7;
          if (pMVar7 + 0x250 == param_2) {
            return;
          }
        } while( true );
      }
      *param_5 = &PTR__MaterialDesc_00fd99f8;
      memcpy(param_5 + 1,param_1 + 8,0x23c);
      param_5 = param_5 + 0x49;
      puVar5 = (undefined8 *)(param_1 + 0x248);
    }
    *param_5 = *puVar5;
  }
  return;
}


